// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEMBEDDEDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEMBEDDEDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateEmbeddedStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEmbeddedStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEmbeddedStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateEmbeddedStatusResponseBody() = default ;
    UpdateEmbeddedStatusResponseBody(const UpdateEmbeddedStatusResponseBody &) = default ;
    UpdateEmbeddedStatusResponseBody(UpdateEmbeddedStatusResponseBody &&) = default ;
    UpdateEmbeddedStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEmbeddedStatusResponseBody() = default ;
    UpdateEmbeddedStatusResponseBody& operator=(const UpdateEmbeddedStatusResponseBody &) = default ;
    UpdateEmbeddedStatusResponseBody& operator=(UpdateEmbeddedStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateEmbeddedStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline UpdateEmbeddedStatusResponseBody& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateEmbeddedStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of works that are opened or closed.
    shared_ptr<int32_t> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
