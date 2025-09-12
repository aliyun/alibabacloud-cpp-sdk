// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyDiskNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyDiskNumberResponseBody() = default ;
    ModifyDiskNumberResponseBody(const ModifyDiskNumberResponseBody &) = default ;
    ModifyDiskNumberResponseBody(ModifyDiskNumberResponseBody &&) = default ;
    ModifyDiskNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskNumberResponseBody() = default ;
    ModifyDiskNumberResponseBody& operator=(const ModifyDiskNumberResponseBody &) = default ;
    ModifyDiskNumberResponseBody& operator=(ModifyDiskNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->data_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ModifyDiskNumberResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t data() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline ModifyDiskNumberResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModifyDiskNumberResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModifyDiskNumberResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyDiskNumberResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDiskNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyDiskNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The detailed information about the failed permission verification.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The order ID.
    std::shared_ptr<int64_t> data_ = nullptr;
    // The error code.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
