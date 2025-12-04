// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail.hpp>
#include <alibabacloud/models/UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerProhibitStatusForGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerProhibitStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerProhibitStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody(const UpdateRspDomainServerProhibitStatusForGatewayResponseBody &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody(UpdateRspDomainServerProhibitStatusForGatewayResponseBody &&) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerProhibitStatusForGatewayResponseBody() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody& operator=(const UpdateRspDomainServerProhibitStatusForGatewayResponseBody &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBody& operator=(UpdateRspDomainServerProhibitStatusForGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->data_ == nullptr && return this->recoverableError_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setAccessDeniedDetail(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setAccessDeniedDetail(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setData(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setData(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recoverableError Field Functions 
    bool hasRecoverableError() const { return this->recoverableError_ != nullptr;};
    void deleteRecoverableError() { this->recoverableError_ = nullptr;};
    inline bool recoverableError() const { DARABONBA_PTR_GET_DEFAULT(recoverableError_, false) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setRecoverableError(bool recoverableError) { DARABONBA_PTR_SET_VALUE(recoverableError_, recoverableError) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<UpdateRspDomainServerProhibitStatusForGatewayResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData> data_ = nullptr;
    std::shared_ptr<bool> recoverableError_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
