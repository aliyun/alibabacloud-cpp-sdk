// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCENCDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCENCDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class QueryInstanceNcdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceNcdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId1, instanceId1_);
      DARABONBA_PTR_TO_JSON(InstanceId2, instanceId2_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceNcdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId1, instanceId1_);
      DARABONBA_PTR_FROM_JSON(InstanceId2, instanceId2_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryInstanceNcdRequest() = default ;
    QueryInstanceNcdRequest(const QueryInstanceNcdRequest &) = default ;
    QueryInstanceNcdRequest(QueryInstanceNcdRequest &&) = default ;
    QueryInstanceNcdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceNcdRequest() = default ;
    QueryInstanceNcdRequest& operator=(const QueryInstanceNcdRequest &) = default ;
    QueryInstanceNcdRequest& operator=(QueryInstanceNcdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId1_ == nullptr
        && return this->instanceId2_ == nullptr && return this->instanceType_ == nullptr && return this->regionId_ == nullptr; };
    // instanceId1 Field Functions 
    bool hasInstanceId1() const { return this->instanceId1_ != nullptr;};
    void deleteInstanceId1() { this->instanceId1_ = nullptr;};
    inline string instanceId1() const { DARABONBA_PTR_GET_DEFAULT(instanceId1_, "") };
    inline QueryInstanceNcdRequest& setInstanceId1(string instanceId1) { DARABONBA_PTR_SET_VALUE(instanceId1_, instanceId1) };


    // instanceId2 Field Functions 
    bool hasInstanceId2() const { return this->instanceId2_ != nullptr;};
    void deleteInstanceId2() { this->instanceId2_ = nullptr;};
    inline string instanceId2() const { DARABONBA_PTR_GET_DEFAULT(instanceId2_, "") };
    inline QueryInstanceNcdRequest& setInstanceId2(string instanceId2) { DARABONBA_PTR_SET_VALUE(instanceId2_, instanceId2) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline QueryInstanceNcdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryInstanceNcdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance 1ID
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId1_ = nullptr;
    // Instance 2ID
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId2_ = nullptr;
    // The parameter that specifies the instance type.
    // 
    // Valid value:
    // 
    // *   node: Lingjun node.
    // *   lni: lingjun network interface controller.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
