// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFCTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFCTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DeleteFCTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFCTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteFCTriggerResponseBody() = default ;
    DeleteFCTriggerResponseBody(const DeleteFCTriggerResponseBody &) = default ;
    DeleteFCTriggerResponseBody(DeleteFCTriggerResponseBody &&) = default ;
    DeleteFCTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFCTriggerResponseBody() = default ;
    DeleteFCTriggerResponseBody& operator=(const DeleteFCTriggerResponseBody &) = default ;
    DeleteFCTriggerResponseBody& operator=(DeleteFCTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFCTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
