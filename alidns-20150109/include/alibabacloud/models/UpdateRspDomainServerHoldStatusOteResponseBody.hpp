// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail.hpp>
#include <alibabacloud/models/UpdateRspDomainServerHoldStatusOteResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerHoldStatusOteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerHoldStatusOteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerHoldStatusOteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateRspDomainServerHoldStatusOteResponseBody() = default ;
    UpdateRspDomainServerHoldStatusOteResponseBody(const UpdateRspDomainServerHoldStatusOteResponseBody &) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBody(UpdateRspDomainServerHoldStatusOteResponseBody &&) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerHoldStatusOteResponseBody() = default ;
    UpdateRspDomainServerHoldStatusOteResponseBody& operator=(const UpdateRspDomainServerHoldStatusOteResponseBody &) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBody& operator=(UpdateRspDomainServerHoldStatusOteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->data_ == nullptr && return this->recoverableError_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setAccessDeniedDetail(const UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setAccessDeniedDetail(UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRspDomainServerHoldStatusOteResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateRspDomainServerHoldStatusOteResponseBodyData) };
    inline UpdateRspDomainServerHoldStatusOteResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateRspDomainServerHoldStatusOteResponseBodyData) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setData(const UpdateRspDomainServerHoldStatusOteResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setData(UpdateRspDomainServerHoldStatusOteResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recoverableError Field Functions 
    bool hasRecoverableError() const { return this->recoverableError_ != nullptr;};
    void deleteRecoverableError() { this->recoverableError_ = nullptr;};
    inline bool recoverableError() const { DARABONBA_PTR_GET_DEFAULT(recoverableError_, false) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setRecoverableError(bool recoverableError) { DARABONBA_PTR_SET_VALUE(recoverableError_, recoverableError) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateRspDomainServerHoldStatusOteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<UpdateRspDomainServerHoldStatusOteResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<UpdateRspDomainServerHoldStatusOteResponseBodyData> data_ = nullptr;
    std::shared_ptr<bool> recoverableError_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
