// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMACHINEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMACHINEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListResourceGroupMachineGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMachineGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineGroups, machineGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMachineGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineGroups, machineGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceGroupMachineGroupsResponseBody() = default ;
    ListResourceGroupMachineGroupsResponseBody(const ListResourceGroupMachineGroupsResponseBody &) = default ;
    ListResourceGroupMachineGroupsResponseBody(ListResourceGroupMachineGroupsResponseBody &&) = default ;
    ListResourceGroupMachineGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMachineGroupsResponseBody() = default ;
    ListResourceGroupMachineGroupsResponseBody& operator=(const ListResourceGroupMachineGroupsResponseBody &) = default ;
    ListResourceGroupMachineGroupsResponseBody& operator=(ListResourceGroupMachineGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->machineGroups_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // machineGroups Field Functions 
    bool hasMachineGroups() const { return this->machineGroups_ != nullptr;};
    void deleteMachineGroups() { this->machineGroups_ = nullptr;};
    inline const vector<MachineGroup> & machineGroups() const { DARABONBA_PTR_GET_CONST(machineGroups_, vector<MachineGroup>) };
    inline vector<MachineGroup> machineGroups() { DARABONBA_PTR_GET(machineGroups_, vector<MachineGroup>) };
    inline ListResourceGroupMachineGroupsResponseBody& setMachineGroups(const vector<MachineGroup> & machineGroups) { DARABONBA_PTR_SET_VALUE(machineGroups_, machineGroups) };
    inline ListResourceGroupMachineGroupsResponseBody& setMachineGroups(vector<MachineGroup> && machineGroups) { DARABONBA_PTR_SET_RVALUE(machineGroups_, machineGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupMachineGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListResourceGroupMachineGroupsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<MachineGroup>> machineGroups_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
