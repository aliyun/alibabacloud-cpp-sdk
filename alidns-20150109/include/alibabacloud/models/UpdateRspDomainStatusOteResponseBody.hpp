// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail.hpp>
#include <alibabacloud/models/UpdateRspDomainStatusOteResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainStatusOteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainStatusOteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainStatusOteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateRspDomainStatusOteResponseBody() = default ;
    UpdateRspDomainStatusOteResponseBody(const UpdateRspDomainStatusOteResponseBody &) = default ;
    UpdateRspDomainStatusOteResponseBody(UpdateRspDomainStatusOteResponseBody &&) = default ;
    UpdateRspDomainStatusOteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainStatusOteResponseBody() = default ;
    UpdateRspDomainStatusOteResponseBody& operator=(const UpdateRspDomainStatusOteResponseBody &) = default ;
    UpdateRspDomainStatusOteResponseBody& operator=(UpdateRspDomainStatusOteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->data_ == nullptr && return this->recoverableError_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainStatusOteResponseBody& setAccessDeniedDetail(const UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline UpdateRspDomainStatusOteResponseBody& setAccessDeniedDetail(UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRspDomainStatusOteResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateRspDomainStatusOteResponseBodyData) };
    inline UpdateRspDomainStatusOteResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateRspDomainStatusOteResponseBodyData) };
    inline UpdateRspDomainStatusOteResponseBody& setData(const UpdateRspDomainStatusOteResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRspDomainStatusOteResponseBody& setData(UpdateRspDomainStatusOteResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recoverableError Field Functions 
    bool hasRecoverableError() const { return this->recoverableError_ != nullptr;};
    void deleteRecoverableError() { this->recoverableError_ = nullptr;};
    inline bool recoverableError() const { DARABONBA_PTR_GET_DEFAULT(recoverableError_, false) };
    inline UpdateRspDomainStatusOteResponseBody& setRecoverableError(bool recoverableError) { DARABONBA_PTR_SET_VALUE(recoverableError_, recoverableError) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRspDomainStatusOteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateRspDomainStatusOteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<UpdateRspDomainStatusOteResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<UpdateRspDomainStatusOteResponseBodyData> data_ = nullptr;
    std::shared_ptr<bool> recoverableError_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
