// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPSERVICEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPSERVICEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class OperateAppServiceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAppServiceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(OperateEvent, operateEvent_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAppServiceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(OperateEvent, operateEvent_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    OperateAppServiceForPartnerRequest() = default ;
    OperateAppServiceForPartnerRequest(const OperateAppServiceForPartnerRequest &) = default ;
    OperateAppServiceForPartnerRequest(OperateAppServiceForPartnerRequest &&) = default ;
    OperateAppServiceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAppServiceForPartnerRequest() = default ;
    OperateAppServiceForPartnerRequest& operator=(const OperateAppServiceForPartnerRequest &) = default ;
    OperateAppServiceForPartnerRequest& operator=(OperateAppServiceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->extend_ != nullptr && this->operateEvent_ != nullptr && this->serviceType_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline OperateAppServiceForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline OperateAppServiceForPartnerRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // operateEvent Field Functions 
    bool hasOperateEvent() const { return this->operateEvent_ != nullptr;};
    void deleteOperateEvent() { this->operateEvent_ = nullptr;};
    inline string operateEvent() const { DARABONBA_PTR_GET_DEFAULT(operateEvent_, "") };
    inline OperateAppServiceForPartnerRequest& setOperateEvent(string operateEvent) { DARABONBA_PTR_SET_VALUE(operateEvent_, operateEvent) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline OperateAppServiceForPartnerRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> operateEvent_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
