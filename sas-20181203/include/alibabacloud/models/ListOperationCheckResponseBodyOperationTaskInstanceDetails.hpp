// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckResponseBodyOperationTaskInstanceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckResponseBodyOperationTaskInstanceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Repair, repair_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckResponseBodyOperationTaskInstanceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Repair, repair_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListOperationCheckResponseBodyOperationTaskInstanceDetails() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetails(const ListOperationCheckResponseBodyOperationTaskInstanceDetails &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetails(ListOperationCheckResponseBodyOperationTaskInstanceDetails &&) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckResponseBodyOperationTaskInstanceDetails() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetails& operator=(const ListOperationCheckResponseBodyOperationTaskInstanceDetails &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetails& operator=(ListOperationCheckResponseBodyOperationTaskInstanceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->repair_ == nullptr && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repair Field Functions 
    bool hasRepair() const { return this->repair_ != nullptr;};
    void deleteRepair() { this->repair_ = nullptr;};
    inline const vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair> & repair() const { DARABONBA_PTR_GET_CONST(repair_, vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair>) };
    inline vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair> repair() { DARABONBA_PTR_GET(repair_, vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair>) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setRepair(const vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair> & repair) { DARABONBA_PTR_SET_VALUE(repair_, repair) };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setRepair(vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair> && repair) { DARABONBA_PTR_SET_RVALUE(repair_, repair) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Information about the repair task.
    std::shared_ptr<vector<Models::ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepair>> repair_ = nullptr;
    // The operation type of the corresponding task:
    //  - **REPAIR**: Repair task 
    // - **ROLLBACK**: Rollback task
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
