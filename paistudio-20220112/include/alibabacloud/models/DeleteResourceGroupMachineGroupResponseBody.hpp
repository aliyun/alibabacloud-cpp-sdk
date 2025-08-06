// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEGROUPMACHINEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEGROUPMACHINEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class DeleteResourceGroupMachineGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceGroupMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceGroupMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteResourceGroupMachineGroupResponseBody() = default ;
    DeleteResourceGroupMachineGroupResponseBody(const DeleteResourceGroupMachineGroupResponseBody &) = default ;
    DeleteResourceGroupMachineGroupResponseBody(DeleteResourceGroupMachineGroupResponseBody &&) = default ;
    DeleteResourceGroupMachineGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceGroupMachineGroupResponseBody() = default ;
    DeleteResourceGroupMachineGroupResponseBody& operator=(const DeleteResourceGroupMachineGroupResponseBody &) = default ;
    DeleteResourceGroupMachineGroupResponseBody& operator=(DeleteResourceGroupMachineGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->machineGroupID_ != nullptr
        && this->requestId_ != nullptr; };
    // machineGroupID Field Functions 
    bool hasMachineGroupID() const { return this->machineGroupID_ != nullptr;};
    void deleteMachineGroupID() { this->machineGroupID_ = nullptr;};
    inline string machineGroupID() const { DARABONBA_PTR_GET_DEFAULT(machineGroupID_, "") };
    inline DeleteResourceGroupMachineGroupResponseBody& setMachineGroupID(string machineGroupID) { DARABONBA_PTR_SET_VALUE(machineGroupID_, machineGroupID) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteResourceGroupMachineGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> machineGroupID_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
