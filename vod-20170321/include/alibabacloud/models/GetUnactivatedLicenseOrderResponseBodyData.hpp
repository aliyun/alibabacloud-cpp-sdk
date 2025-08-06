// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUnactivatedLicenseOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnactivatedLicenseOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnactivatedLicenseOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    GetUnactivatedLicenseOrderResponseBodyData() = default ;
    GetUnactivatedLicenseOrderResponseBodyData(const GetUnactivatedLicenseOrderResponseBodyData &) = default ;
    GetUnactivatedLicenseOrderResponseBodyData(GetUnactivatedLicenseOrderResponseBodyData &&) = default ;
    GetUnactivatedLicenseOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnactivatedLicenseOrderResponseBodyData() = default ;
    GetUnactivatedLicenseOrderResponseBodyData& operator=(const GetUnactivatedLicenseOrderResponseBodyData &) = default ;
    GetUnactivatedLicenseOrderResponseBodyData& operator=(GetUnactivatedLicenseOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginOn_ != nullptr
        && this->contractNo_ != nullptr && this->expiredOn_ != nullptr && this->instanceId_ != nullptr && this->licenseConfigs_ != nullptr && this->orderType_ != nullptr; };
    // beginOn Field Functions 
    bool hasBeginOn() const { return this->beginOn_ != nullptr;};
    void deleteBeginOn() { this->beginOn_ = nullptr;};
    inline string beginOn() const { DARABONBA_PTR_GET_DEFAULT(beginOn_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyData& setBeginOn(string beginOn) { DARABONBA_PTR_SET_VALUE(beginOn_, beginOn) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyData& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string expiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyData& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseConfigs Field Functions 
    bool hasLicenseConfigs() const { return this->licenseConfigs_ != nullptr;};
    void deleteLicenseConfigs() { this->licenseConfigs_ = nullptr;};
    inline const vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs> & licenseConfigs() const { DARABONBA_PTR_GET_CONST(licenseConfigs_, vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs>) };
    inline vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs> licenseConfigs() { DARABONBA_PTR_GET(licenseConfigs_, vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs>) };
    inline GetUnactivatedLicenseOrderResponseBodyData& setLicenseConfigs(const vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs> & licenseConfigs) { DARABONBA_PTR_SET_VALUE(licenseConfigs_, licenseConfigs) };
    inline GetUnactivatedLicenseOrderResponseBodyData& setLicenseConfigs(vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs> && licenseConfigs) { DARABONBA_PTR_SET_RVALUE(licenseConfigs_, licenseConfigs) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyData& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    std::shared_ptr<string> beginOn_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<string> expiredOn_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs>> licenseConfigs_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
