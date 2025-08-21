// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOSRESOURCEPACKAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOSRESOURCEPACKAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(const DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &&) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& operator=(const DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& operator=(DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->currCapacity_ != nullptr && this->displayName_ != nullptr && this->initCapacity_ != nullptr && this->instanceId_ != nullptr && this->status_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // currCapacity Field Functions 
    bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
    void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
    inline string currCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCurrCapacity(string currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // initCapacity Field Functions 
    bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
    void deleteInitCapacity() { this->initCapacity_ = nullptr;};
    inline string initCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInitCapacity(string initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> currCapacity_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> initCapacity_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
