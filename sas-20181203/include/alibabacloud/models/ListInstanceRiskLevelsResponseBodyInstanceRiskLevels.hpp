// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKLEVELS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKLEVELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskLevelsResponseBodyInstanceRiskLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels() = default ;
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels(const ListInstanceRiskLevelsResponseBodyInstanceRiskLevels &) = default ;
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels(ListInstanceRiskLevelsResponseBodyInstanceRiskLevels &&) = default ;
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskLevelsResponseBodyInstanceRiskLevels() = default ;
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& operator=(const ListInstanceRiskLevelsResponseBodyInstanceRiskLevels &) = default ;
    ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& operator=(ListInstanceRiskLevelsResponseBodyInstanceRiskLevels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->level_ != nullptr && this->uuid_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListInstanceRiskLevelsResponseBodyInstanceRiskLevels& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    // *   **none**
    std::shared_ptr<string> level_ = nullptr;
    // The UUID of the server for which you want to modify the defense rule. You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
