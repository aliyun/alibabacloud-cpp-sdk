// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstanceConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowModify, allowModify_);
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedTotal, needTotal_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowModify, allowModify_);
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedTotal, needTotal_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeInstanceConfigsRequest() = default ;
    DescribeInstanceConfigsRequest(const DescribeInstanceConfigsRequest &) = default ;
    DescribeInstanceConfigsRequest(DescribeInstanceConfigsRequest &&) = default ;
    DescribeInstanceConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceConfigsRequest() = default ;
    DescribeInstanceConfigsRequest& operator=(const DescribeInstanceConfigsRequest &) = default ;
    DescribeInstanceConfigsRequest& operator=(DescribeInstanceConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowModify_ == nullptr
        && this->configKey_ == nullptr && this->configType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->needTotal_ == nullptr
        && this->nodeGroupId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // allowModify Field Functions 
    bool hasAllowModify() const { return this->allowModify_ != nullptr;};
    void deleteAllowModify() { this->allowModify_ = nullptr;};
    inline bool getAllowModify() const { DARABONBA_PTR_GET_DEFAULT(allowModify_, false) };
    inline DescribeInstanceConfigsRequest& setAllowModify(bool allowModify) { DARABONBA_PTR_SET_VALUE(allowModify_, allowModify) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline DescribeInstanceConfigsRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline DescribeInstanceConfigsRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceConfigsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceConfigsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needTotal Field Functions 
    bool hasNeedTotal() const { return this->needTotal_ != nullptr;};
    void deleteNeedTotal() { this->needTotal_ = nullptr;};
    inline bool getNeedTotal() const { DARABONBA_PTR_GET_DEFAULT(needTotal_, false) };
    inline DescribeInstanceConfigsRequest& setNeedTotal(bool needTotal) { DARABONBA_PTR_SET_VALUE(needTotal_, needTotal) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeInstanceConfigsRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceConfigsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceConfigsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<bool> allowModify_ {};
    shared_ptr<string> configKey_ {};
    shared_ptr<string> configType_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> needTotal_ {};
    shared_ptr<string> nodeGroupId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
