// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEANTIBRUTEFORCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEANTIBRUTEFORCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyInstanceAntiBruteForceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewRuleId, newRuleId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewRuleId, newRuleId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyInstanceAntiBruteForceRuleRequest() = default ;
    ModifyInstanceAntiBruteForceRuleRequest(const ModifyInstanceAntiBruteForceRuleRequest &) = default ;
    ModifyInstanceAntiBruteForceRuleRequest(ModifyInstanceAntiBruteForceRuleRequest &&) = default ;
    ModifyInstanceAntiBruteForceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAntiBruteForceRuleRequest() = default ;
    ModifyInstanceAntiBruteForceRuleRequest& operator=(const ModifyInstanceAntiBruteForceRuleRequest &) = default ;
    ModifyInstanceAntiBruteForceRuleRequest& operator=(ModifyInstanceAntiBruteForceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newRuleId_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr && return this->uuid_ == nullptr; };
    // newRuleId Field Functions 
    bool hasNewRuleId() const { return this->newRuleId_ != nullptr;};
    void deleteNewRuleId() { this->newRuleId_ = nullptr;};
    inline int64_t newRuleId() const { DARABONBA_PTR_GET_DEFAULT(newRuleId_, 0L) };
    inline ModifyInstanceAntiBruteForceRuleRequest& setNewRuleId(int64_t newRuleId) { DARABONBA_PTR_SET_VALUE(newRuleId_, newRuleId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceAntiBruteForceRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyInstanceAntiBruteForceRuleRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyInstanceAntiBruteForceRuleRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the defense rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> newRuleId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The UUID of the server for which you want to modify the defense rule. You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
