// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUESTAPLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUESTAPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionRequestApList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionRequestApList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PortNum, portNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionRequestApList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PortNum, portNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateHighReliablePhysicalConnectionRequestApList() = default ;
    CreateHighReliablePhysicalConnectionRequestApList(const CreateHighReliablePhysicalConnectionRequestApList &) = default ;
    CreateHighReliablePhysicalConnectionRequestApList(CreateHighReliablePhysicalConnectionRequestApList &&) = default ;
    CreateHighReliablePhysicalConnectionRequestApList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionRequestApList() = default ;
    CreateHighReliablePhysicalConnectionRequestApList& operator=(const CreateHighReliablePhysicalConnectionRequestApList &) = default ;
    CreateHighReliablePhysicalConnectionRequestApList& operator=(CreateHighReliablePhysicalConnectionRequestApList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->bandwidth_ == nullptr && return this->circuitCode_ == nullptr && return this->description_ == nullptr && return this->lineOperator_ == nullptr && return this->name_ == nullptr
        && return this->opticalModuleModel_ == nullptr && return this->peerLocation_ == nullptr && return this->portNum_ == nullptr && return this->regionId_ == nullptr && return this->type_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateHighReliablePhysicalConnectionRequestApList& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opticalModuleModel Field Functions 
    bool hasOpticalModuleModel() const { return this->opticalModuleModel_ != nullptr;};
    void deleteOpticalModuleModel() { this->opticalModuleModel_ = nullptr;};
    inline string opticalModuleModel() const { DARABONBA_PTR_GET_DEFAULT(opticalModuleModel_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setOpticalModuleModel(string opticalModuleModel) { DARABONBA_PTR_SET_VALUE(opticalModuleModel_, opticalModuleModel) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string peerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // portNum Field Functions 
    bool hasPortNum() const { return this->portNum_ != nullptr;};
    void deletePortNum() { this->portNum_ = nullptr;};
    inline int32_t portNum() const { DARABONBA_PTR_GET_DEFAULT(portNum_, 0) };
    inline CreateHighReliablePhysicalConnectionRequestApList& setPortNum(int32_t portNum) { DARABONBA_PTR_SET_VALUE(portNum_, portNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHighReliablePhysicalConnectionRequestApList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the access point that is associated with the Express Connect circuit.
    // 
    // > Two access points must be specified when **HighReliableType** is set to **MultiApMultiDevice** or **MultiApSingleDevice**. One access point must be specified when **HighReliableType** is set to **SingleApMultiDevice** or **SingleApMultiConnection**.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The maximum bandwidth of the hosted connection. Unit: Mbit/s.
    // 
    // Valid values: 50, 100, 200, 300, 400, 500, 1000, 2000, 4000, 5000, 8000, and 10000.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The circuit code of the Express Connect circuit, which is provided by the connectivity provider.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // The description of the Express Connect circuit.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CT**: China Telecom.
    // *   **CU**: China Unicom.
    // *   **CM**: China Mobile.
    // *   **CO**: other connectivity providers in the Chinese mainland.
    // *   **Equinix**: Equinix.
    // *   **Other**: other connectivity providers outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> lineOperator_ = nullptr;
    // The name of the Express Connect circuit.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter but cannot start with `http://` or` https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> opticalModuleModel_ = nullptr;
    // The geographical location of the data center.
    std::shared_ptr<string> peerLocation_ = nullptr;
    // The number of ports. Valid values: 2 to 16. This parameter is required only when **HighReliableType** is set to **SingleApMultiConnection**.
    std::shared_ptr<int32_t> portNum_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the Express Connect circuit. Default value: **VPC**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
