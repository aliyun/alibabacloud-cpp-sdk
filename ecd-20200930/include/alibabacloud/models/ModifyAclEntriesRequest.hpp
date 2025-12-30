// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACLENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACLENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyAclEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAclEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAclEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ModifyAclEntriesRequest() = default ;
    ModifyAclEntriesRequest(const ModifyAclEntriesRequest &) = default ;
    ModifyAclEntriesRequest(ModifyAclEntriesRequest &&) = default ;
    ModifyAclEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAclEntriesRequest() = default ;
    ModifyAclEntriesRequest& operator=(const ModifyAclEntriesRequest &) = default ;
    ModifyAclEntriesRequest& operator=(ModifyAclEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && this->regionId_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifyAclEntriesRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAclEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline const vector<string> & getSourceId() const { DARABONBA_PTR_GET_CONST(sourceId_, vector<string>) };
    inline vector<string> getSourceId() { DARABONBA_PTR_GET(sourceId_, vector<string>) };
    inline ModifyAclEntriesRequest& setSourceId(const vector<string> & sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };
    inline ModifyAclEntriesRequest& setSourceId(vector<string> && sourceId) { DARABONBA_PTR_SET_RVALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyAclEntriesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The Internet access control policy.
    // 
    // Valid values:
    // 
    // *   allow: allows access to the Internet.
    // 
    // *   disable: forbids access to the Internet.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance IDs (office network IDs or cloud computer IDs) to which the Internet access control policy is applicable.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> sourceId_ {};
    // The granularity to which the Internet access control policy is applicable.
    // 
    // Valid values:
    // 
    // *   desktop: cloud computer granularity.
    // 
    // *   vpc: office network granularity.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
