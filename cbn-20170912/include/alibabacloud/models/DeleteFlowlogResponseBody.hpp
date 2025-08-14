// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFLOWLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFLOWLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteFlowlogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFlowlogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFlowlogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteFlowlogResponseBody() = default ;
    DeleteFlowlogResponseBody(const DeleteFlowlogResponseBody &) = default ;
    DeleteFlowlogResponseBody(DeleteFlowlogResponseBody &&) = default ;
    DeleteFlowlogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFlowlogResponseBody() = default ;
    DeleteFlowlogResponseBody& operator=(const DeleteFlowlogResponseBody &) = default ;
    DeleteFlowlogResponseBody& operator=(DeleteFlowlogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFlowlogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DeleteFlowlogResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful.
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
