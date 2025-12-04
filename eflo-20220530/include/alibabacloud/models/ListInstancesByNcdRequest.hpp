// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListInstancesByNcdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesByNcdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxNcd, maxNcd_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesByNcdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxNcd, maxNcd_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListInstancesByNcdRequest() = default ;
    ListInstancesByNcdRequest(const ListInstancesByNcdRequest &) = default ;
    ListInstancesByNcdRequest(ListInstancesByNcdRequest &&) = default ;
    ListInstancesByNcdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesByNcdRequest() = default ;
    ListInstancesByNcdRequest& operator=(const ListInstancesByNcdRequest &) = default ;
    ListInstancesByNcdRequest& operator=(ListInstancesByNcdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceType_ == nullptr && return this->maxNcd_ == nullptr && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesByNcdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstancesByNcdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxNcd Field Functions 
    bool hasMaxNcd() const { return this->maxNcd_ != nullptr;};
    void deleteMaxNcd() { this->maxNcd_ = nullptr;};
    inline int32_t maxNcd() const { DARABONBA_PTR_GET_DEFAULT(maxNcd_, 0) };
    inline ListInstancesByNcdRequest& setMaxNcd(int32_t maxNcd) { DARABONBA_PTR_SET_VALUE(maxNcd_, maxNcd) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesByNcdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The parameter that specifies the instance type.
    // 
    // Valid value:
    // 
    // *   node: Lingjun node.
    // *   lni: lingjun network interface controller.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Maximum network communication distance
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxNcd_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
