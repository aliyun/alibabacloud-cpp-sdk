// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERCLUSTERHEALTHCHECKRISKNOTICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ORDERCLUSTERHEALTHCHECKRISKNOTICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class OrderClusterHealthCheckRiskNoticeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderClusterHealthCheckRiskNoticeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mute, mute_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
    };
    friend void from_json(const Darabonba::Json& j, OrderClusterHealthCheckRiskNoticeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mute, mute_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
    };
    OrderClusterHealthCheckRiskNoticeRequest() = default ;
    OrderClusterHealthCheckRiskNoticeRequest(const OrderClusterHealthCheckRiskNoticeRequest &) = default ;
    OrderClusterHealthCheckRiskNoticeRequest(OrderClusterHealthCheckRiskNoticeRequest &&) = default ;
    OrderClusterHealthCheckRiskNoticeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderClusterHealthCheckRiskNoticeRequest() = default ;
    OrderClusterHealthCheckRiskNoticeRequest& operator=(const OrderClusterHealthCheckRiskNoticeRequest &) = default ;
    OrderClusterHealthCheckRiskNoticeRequest& operator=(OrderClusterHealthCheckRiskNoticeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->instanceId_ == nullptr && return this->mute_ == nullptr && return this->noticeType_ == nullptr && return this->regionId_ == nullptr && return this->requestPars_ == nullptr
        && return this->riskCode_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mute Field Functions 
    bool hasMute() const { return this->mute_ != nullptr;};
    void deleteMute() { this->mute_ = nullptr;};
    inline bool mute() const { DARABONBA_PTR_GET_DEFAULT(mute_, false) };
    inline OrderClusterHealthCheckRiskNoticeRequest& setMute(bool mute) { DARABONBA_PTR_SET_VALUE(mute_, mute) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string riskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline OrderClusterHealthCheckRiskNoticeRequest& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to disable the notification feature if the risk item occurs.
    // 
    // *   true: disabled
    // *   false: enabled
    std::shared_ptr<bool> mute_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> noticeType_ = nullptr;
    // The region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The ID of the risk item.
    std::shared_ptr<string> riskCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
