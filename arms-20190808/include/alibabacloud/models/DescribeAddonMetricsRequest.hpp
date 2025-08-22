// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAddonMetricsRequest() = default ;
    DescribeAddonMetricsRequest(const DescribeAddonMetricsRequest &) = default ;
    DescribeAddonMetricsRequest(DescribeAddonMetricsRequest &&) = default ;
    DescribeAddonMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonMetricsRequest() = default ;
    DescribeAddonMetricsRequest& operator=(const DescribeAddonMetricsRequest &) = default ;
    DescribeAddonMetricsRequest& operator=(DescribeAddonMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonVersion_ != nullptr
        && this->aliyunLang_ != nullptr && this->environmentType_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr; };
    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline DescribeAddonMetricsRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline DescribeAddonMetricsRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline DescribeAddonMetricsRequest& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAddonMetricsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAddonMetricsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The version of the component.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The environment.
    std::shared_ptr<string> environmentType_ = nullptr;
    // The name of the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
