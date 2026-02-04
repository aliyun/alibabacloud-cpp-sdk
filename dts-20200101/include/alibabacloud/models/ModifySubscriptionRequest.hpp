// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifySubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataTypeDDL, subscriptionDataTypeDDL_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataTypeDML, subscriptionDataTypeDML_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataTypeDDL, subscriptionDataTypeDDL_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataTypeDML, subscriptionDataTypeDML_);
    };
    ModifySubscriptionRequest() = default ;
    ModifySubscriptionRequest(const ModifySubscriptionRequest &) = default ;
    ModifySubscriptionRequest(ModifySubscriptionRequest &&) = default ;
    ModifySubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySubscriptionRequest() = default ;
    ModifySubscriptionRequest& operator=(const ModifySubscriptionRequest &) = default ;
    ModifySubscriptionRequest& operator=(ModifySubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbList_ == nullptr
        && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr && this->modifyType_ == nullptr && this->regionId_ == nullptr && this->reserved_ == nullptr
        && this->resourceGroupId_ == nullptr && this->subscriptionDataTypeDDL_ == nullptr && this->subscriptionDataTypeDML_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline ModifySubscriptionRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifySubscriptionRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifySubscriptionRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifySubscriptionRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySubscriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline ModifySubscriptionRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifySubscriptionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionDataTypeDDL Field Functions 
    bool hasSubscriptionDataTypeDDL() const { return this->subscriptionDataTypeDDL_ != nullptr;};
    void deleteSubscriptionDataTypeDDL() { this->subscriptionDataTypeDDL_ = nullptr;};
    inline bool getSubscriptionDataTypeDDL() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDataTypeDDL_, false) };
    inline ModifySubscriptionRequest& setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL) { DARABONBA_PTR_SET_VALUE(subscriptionDataTypeDDL_, subscriptionDataTypeDDL) };


    // subscriptionDataTypeDML Field Functions 
    bool hasSubscriptionDataTypeDML() const { return this->subscriptionDataTypeDML_ != nullptr;};
    void deleteSubscriptionDataTypeDML() { this->subscriptionDataTypeDML_ = nullptr;};
    inline bool getSubscriptionDataTypeDML() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDataTypeDML_, false) };
    inline ModifySubscriptionRequest& setSubscriptionDataTypeDML(bool subscriptionDataTypeDML) { DARABONBA_PTR_SET_VALUE(subscriptionDataTypeDML_, subscriptionDataTypeDML) };


  protected:
    // The objects of the change tracking task. The value is a JSON string. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // 
    // >  You can call the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation to query the original objects of the task.
    shared_ptr<string> dbList_ {};
    // The ID of the change tracking instance. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the change tracking task. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    shared_ptr<string> dtsJobId_ {};
    shared_ptr<string> modifyType_ {};
    // The ID of the region where the change tracking instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    shared_ptr<string> reserved_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to retrieve data definition language (DDL) statements. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> subscriptionDataTypeDDL_ {};
    // Specifies whether to retrieve data manipulation language (DML) statements. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> subscriptionDataTypeDML_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
