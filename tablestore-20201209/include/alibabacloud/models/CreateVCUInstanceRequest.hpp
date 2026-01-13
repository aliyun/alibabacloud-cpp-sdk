// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCUINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCUINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class CreateVCUInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVCUInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriodInMonth, autoRenewPeriodInMonth_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableAutoRenew, enableAutoRenew_);
      DARABONBA_PTR_TO_JSON(EnableElasticVCU, enableElasticVCU_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(PeriodInMonth, periodInMonth_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VCU, VCU_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVCUInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriodInMonth, autoRenewPeriodInMonth_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableAutoRenew, enableAutoRenew_);
      DARABONBA_PTR_FROM_JSON(EnableElasticVCU, enableElasticVCU_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(PeriodInMonth, periodInMonth_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VCU, VCU_);
    };
    CreateVCUInstanceRequest() = default ;
    CreateVCUInstanceRequest(const CreateVCUInstanceRequest &) = default ;
    CreateVCUInstanceRequest(CreateVCUInstanceRequest &&) = default ;
    CreateVCUInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVCUInstanceRequest() = default ;
    CreateVCUInstanceRequest& operator=(const CreateVCUInstanceRequest &) = default ;
    CreateVCUInstanceRequest& operator=(CreateVCUInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // This parameter is required.
      shared_ptr<string> key_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->autoRenewPeriodInMonth_ == nullptr && this->clusterType_ == nullptr && this->dryRun_ == nullptr && this->enableAutoRenew_ == nullptr && this->enableElasticVCU_ == nullptr
        && this->instanceDescription_ == nullptr && this->periodInMonth_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->VCU_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline CreateVCUInstanceRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // autoRenewPeriodInMonth Field Functions 
    bool hasAutoRenewPeriodInMonth() const { return this->autoRenewPeriodInMonth_ != nullptr;};
    void deleteAutoRenewPeriodInMonth() { this->autoRenewPeriodInMonth_ = nullptr;};
    inline int64_t getAutoRenewPeriodInMonth() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodInMonth_, 0L) };
    inline CreateVCUInstanceRequest& setAutoRenewPeriodInMonth(int64_t autoRenewPeriodInMonth) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodInMonth_, autoRenewPeriodInMonth) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateVCUInstanceRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVCUInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableAutoRenew Field Functions 
    bool hasEnableAutoRenew() const { return this->enableAutoRenew_ != nullptr;};
    void deleteEnableAutoRenew() { this->enableAutoRenew_ = nullptr;};
    inline bool getEnableAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(enableAutoRenew_, false) };
    inline CreateVCUInstanceRequest& setEnableAutoRenew(bool enableAutoRenew) { DARABONBA_PTR_SET_VALUE(enableAutoRenew_, enableAutoRenew) };


    // enableElasticVCU Field Functions 
    bool hasEnableElasticVCU() const { return this->enableElasticVCU_ != nullptr;};
    void deleteEnableElasticVCU() { this->enableElasticVCU_ = nullptr;};
    inline bool getEnableElasticVCU() const { DARABONBA_PTR_GET_DEFAULT(enableElasticVCU_, false) };
    inline CreateVCUInstanceRequest& setEnableElasticVCU(bool enableElasticVCU) { DARABONBA_PTR_SET_VALUE(enableElasticVCU_, enableElasticVCU) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateVCUInstanceRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // periodInMonth Field Functions 
    bool hasPeriodInMonth() const { return this->periodInMonth_ != nullptr;};
    void deletePeriodInMonth() { this->periodInMonth_ = nullptr;};
    inline int64_t getPeriodInMonth() const { DARABONBA_PTR_GET_DEFAULT(periodInMonth_, 0L) };
    inline CreateVCUInstanceRequest& setPeriodInMonth(int64_t periodInMonth) { DARABONBA_PTR_SET_VALUE(periodInMonth_, periodInMonth) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVCUInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateVCUInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateVCUInstanceRequest::Tags>) };
    inline vector<CreateVCUInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateVCUInstanceRequest::Tags>) };
    inline CreateVCUInstanceRequest& setTags(const vector<CreateVCUInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateVCUInstanceRequest& setTags(vector<CreateVCUInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VCU Field Functions 
    bool hasVCU() const { return this->VCU_ != nullptr;};
    void deleteVCU() { this->VCU_ = nullptr;};
    inline int64_t getVCU() const { DARABONBA_PTR_GET_DEFAULT(VCU_, 0L) };
    inline CreateVCUInstanceRequest& setVCU(int64_t VCU) { DARABONBA_PTR_SET_VALUE(VCU_, VCU) };


  protected:
    shared_ptr<string> aliasName_ {};
    shared_ptr<int64_t> autoRenewPeriodInMonth_ {};
    // cluster type
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<bool> enableAutoRenew_ {};
    shared_ptr<bool> enableElasticVCU_ {};
    shared_ptr<string> instanceDescription_ {};
    // This parameter is required.
    shared_ptr<int64_t> periodInMonth_ {};
    // resource group id
    shared_ptr<string> resourceGroupId_ {};
    // tag
    shared_ptr<vector<CreateVCUInstanceRequest::Tags>> tags_ {};
    // This parameter is required.
    shared_ptr<int64_t> VCU_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
