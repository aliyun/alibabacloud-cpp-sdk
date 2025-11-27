// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRCINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRCINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class StartRCInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRCInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRCInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartRCInstancesRequest() = default ;
    StartRCInstancesRequest(const StartRCInstancesRequest &) = default ;
    StartRCInstancesRequest(StartRCInstancesRequest &&) = default ;
    StartRCInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRCInstancesRequest() = default ;
    StartRCInstancesRequest& operator=(const StartRCInstancesRequest &) = default ;
    StartRCInstancesRequest& operator=(StartRCInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchOptimization_ == nullptr
        && return this->instanceIds_ == nullptr && return this->regionId_ == nullptr; };
    // batchOptimization Field Functions 
    bool hasBatchOptimization() const { return this->batchOptimization_ != nullptr;};
    void deleteBatchOptimization() { this->batchOptimization_ = nullptr;};
    inline string batchOptimization() const { DARABONBA_PTR_GET_DEFAULT(batchOptimization_, "") };
    inline StartRCInstancesRequest& setBatchOptimization(string batchOptimization) { DARABONBA_PTR_SET_VALUE(batchOptimization_, batchOptimization) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline StartRCInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline StartRCInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartRCInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The batch operation mode. Set the value to **AllTogether**. In this mode, a success message is returned if all specified instances are started. If an instance fails the verification, none of the specified instances can be started and an error message is returned.
    std::shared_ptr<string> batchOptimization_ = nullptr;
    // The node IDs.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
