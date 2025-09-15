// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCommonLogFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonLogFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(LogKeyList, logKeyList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonLogFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(LogKeyList, logKeyList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeCommonLogFieldsRequest() = default ;
    DescribeCommonLogFieldsRequest(const DescribeCommonLogFieldsRequest &) = default ;
    DescribeCommonLogFieldsRequest(DescribeCommonLogFieldsRequest &&) = default ;
    DescribeCommonLogFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonLogFieldsRequest() = default ;
    DescribeCommonLogFieldsRequest& operator=(const DescribeCommonLogFieldsRequest &) = default ;
    DescribeCommonLogFieldsRequest& operator=(DescribeCommonLogFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->isDefault_ != nullptr && this->isRequired_ != nullptr && this->logKeyList_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCommonLogFieldsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeCommonLogFieldsRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline DescribeCommonLogFieldsRequest& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // logKeyList Field Functions 
    bool hasLogKeyList() const { return this->logKeyList_ != nullptr;};
    void deleteLogKeyList() { this->logKeyList_ = nullptr;};
    inline const vector<string> & logKeyList() const { DARABONBA_PTR_GET_CONST(logKeyList_, vector<string>) };
    inline vector<string> logKeyList() { DARABONBA_PTR_GET(logKeyList_, vector<string>) };
    inline DescribeCommonLogFieldsRequest& setLogKeyList(const vector<string> & logKeyList) { DARABONBA_PTR_SET_VALUE(logKeyList_, logKeyList) };
    inline DescribeCommonLogFieldsRequest& setLogKeyList(vector<string> && logKeyList) { DARABONBA_PTR_SET_RVALUE(logKeyList_, logKeyList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommonLogFieldsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeCommonLogFieldsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<vector<string>> logKeyList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
