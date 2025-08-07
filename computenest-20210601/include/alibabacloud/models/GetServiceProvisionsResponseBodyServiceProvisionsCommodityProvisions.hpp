// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSCOMMODITYPROVISIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSCOMMODITYPROVISIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(EnableURL, enableURL_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(EnableURL, enableURL_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions(const GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions(GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions &&) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& operator=(const GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& operator=(GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->enableURL_ != nullptr && this->status_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // enableURL Field Functions 
    bool hasEnableURL() const { return this->enableURL_ != nullptr;};
    void deleteEnableURL() { this->enableURL_ = nullptr;};
    inline string enableURL() const { DARABONBA_PTR_GET_DEFAULT(enableURL_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& setEnableURL(string enableURL) { DARABONBA_PTR_SET_VALUE(enableURL_, enableURL) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Commodity Code
    std::shared_ptr<string> commodityCode_ = nullptr;
    // Product activation link.
    std::shared_ptr<string> enableURL_ = nullptr;
    // Cloud service activation status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
