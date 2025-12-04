// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERSPDOMAINSERVERHOLDSTATUSFORGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVERSPDOMAINSERVERHOLDSTATUSFORGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail.hpp>
#include <alibabacloud/models/RemoveRspDomainServerHoldStatusForGatewayResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class RemoveRspDomainServerHoldStatusForGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRspDomainServerHoldStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRspDomainServerHoldStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RemoveRspDomainServerHoldStatusForGatewayResponseBody() = default ;
    RemoveRspDomainServerHoldStatusForGatewayResponseBody(const RemoveRspDomainServerHoldStatusForGatewayResponseBody &) = default ;
    RemoveRspDomainServerHoldStatusForGatewayResponseBody(RemoveRspDomainServerHoldStatusForGatewayResponseBody &&) = default ;
    RemoveRspDomainServerHoldStatusForGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRspDomainServerHoldStatusForGatewayResponseBody() = default ;
    RemoveRspDomainServerHoldStatusForGatewayResponseBody& operator=(const RemoveRspDomainServerHoldStatusForGatewayResponseBody &) = default ;
    RemoveRspDomainServerHoldStatusForGatewayResponseBody& operator=(RemoveRspDomainServerHoldStatusForGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->data_ == nullptr && return this->recoverableError_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setAccessDeniedDetail(const RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setAccessDeniedDetail(RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveRspDomainServerHoldStatusForGatewayResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RemoveRspDomainServerHoldStatusForGatewayResponseBodyData) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBodyData data() { DARABONBA_PTR_GET(data_, RemoveRspDomainServerHoldStatusForGatewayResponseBodyData) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setData(const RemoveRspDomainServerHoldStatusForGatewayResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setData(RemoveRspDomainServerHoldStatusForGatewayResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recoverableError Field Functions 
    bool hasRecoverableError() const { return this->recoverableError_ != nullptr;};
    void deleteRecoverableError() { this->recoverableError_ = nullptr;};
    inline bool recoverableError() const { DARABONBA_PTR_GET_DEFAULT(recoverableError_, false) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setRecoverableError(bool recoverableError) { DARABONBA_PTR_SET_VALUE(recoverableError_, recoverableError) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RemoveRspDomainServerHoldStatusForGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<RemoveRspDomainServerHoldStatusForGatewayResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<RemoveRspDomainServerHoldStatusForGatewayResponseBodyData> data_ = nullptr;
    std::shared_ptr<bool> recoverableError_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
