// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATASHAREINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATASHAREINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class SetDataShareInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataShareInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataShareInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetDataShareInstanceRequest() = default ;
    SetDataShareInstanceRequest(const SetDataShareInstanceRequest &) = default ;
    SetDataShareInstanceRequest(SetDataShareInstanceRequest &&) = default ;
    SetDataShareInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataShareInstanceRequest() = default ;
    SetDataShareInstanceRequest& operator=(const SetDataShareInstanceRequest &) = default ;
    SetDataShareInstanceRequest& operator=(SetDataShareInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->operationType_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline SetDataShareInstanceRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline SetDataShareInstanceRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetDataShareInstanceRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDataShareInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDataShareInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for PostgreSQL instance in Serverless mode.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceList_ {};
    // Specifies whether to enable or disable data sharing. Valid values:
    // 
    // *   **add**: enables data sharing.
    // *   **remove**: disables data sharing.
    // 
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
