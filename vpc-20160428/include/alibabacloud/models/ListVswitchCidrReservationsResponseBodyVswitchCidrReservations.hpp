// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODYVSWITCHCIDRRESERVATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODYVSWITCHCIDRRESERVATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedCidrCount, assignedCidrCount_);
      DARABONBA_PTR_TO_JSON(AvailableCidrCount, availableCidrCount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedCidrCount, assignedCidrCount_);
      DARABONBA_PTR_FROM_JSON(AvailableCidrCount, availableCidrCount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations() = default ;
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations(const ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations &) = default ;
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations(ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations &&) = default ;
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations() = default ;
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& operator=(const ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations &) = default ;
    ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& operator=(ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignedCidrCount_ != nullptr
        && this->availableCidrCount_ != nullptr && this->creationTime_ != nullptr && this->ipVersion_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->type_ != nullptr && this->vSwitchCidrReservationCidr_ != nullptr && this->vSwitchCidrReservationDescription_ != nullptr && this->vSwitchCidrReservationId_ != nullptr && this->vSwitchCidrReservationName_ != nullptr
        && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // assignedCidrCount Field Functions 
    bool hasAssignedCidrCount() const { return this->assignedCidrCount_ != nullptr;};
    void deleteAssignedCidrCount() { this->assignedCidrCount_ = nullptr;};
    inline int32_t assignedCidrCount() const { DARABONBA_PTR_GET_DEFAULT(assignedCidrCount_, 0) };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setAssignedCidrCount(int32_t assignedCidrCount) { DARABONBA_PTR_SET_VALUE(assignedCidrCount_, assignedCidrCount) };


    // availableCidrCount Field Functions 
    bool hasAvailableCidrCount() const { return this->availableCidrCount_ != nullptr;};
    void deleteAvailableCidrCount() { this->availableCidrCount_ = nullptr;};
    inline int32_t availableCidrCount() const { DARABONBA_PTR_GET_DEFAULT(availableCidrCount_, 0) };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setAvailableCidrCount(int32_t availableCidrCount) { DARABONBA_PTR_SET_VALUE(availableCidrCount_, availableCidrCount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags>) };
    inline vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags>) };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setTags(const vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setTags(vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchCidrReservationCidr Field Functions 
    bool hasVSwitchCidrReservationCidr() const { return this->vSwitchCidrReservationCidr_ != nullptr;};
    void deleteVSwitchCidrReservationCidr() { this->vSwitchCidrReservationCidr_ = nullptr;};
    inline string vSwitchCidrReservationCidr() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationCidr_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVSwitchCidrReservationCidr(string vSwitchCidrReservationCidr) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationCidr_, vSwitchCidrReservationCidr) };


    // vSwitchCidrReservationDescription Field Functions 
    bool hasVSwitchCidrReservationDescription() const { return this->vSwitchCidrReservationDescription_ != nullptr;};
    void deleteVSwitchCidrReservationDescription() { this->vSwitchCidrReservationDescription_ = nullptr;};
    inline string vSwitchCidrReservationDescription() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationDescription_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVSwitchCidrReservationDescription(string vSwitchCidrReservationDescription) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationDescription_, vSwitchCidrReservationDescription) };


    // vSwitchCidrReservationId Field Functions 
    bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
    void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
    inline string vSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


    // vSwitchCidrReservationName Field Functions 
    bool hasVSwitchCidrReservationName() const { return this->vSwitchCidrReservationName_ != nullptr;};
    void deleteVSwitchCidrReservationName() { this->vSwitchCidrReservationName_ = nullptr;};
    inline string vSwitchCidrReservationName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationName_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVSwitchCidrReservationName(string vSwitchCidrReservationName) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationName_, vSwitchCidrReservationName) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of used prefixes in the reserved CIDR block.
    std::shared_ptr<int32_t> assignedCidrCount_ = nullptr;
    // The number of available prefixes in the reserved CIDR block.
    std::shared_ptr<int32_t> availableCidrCount_ = nullptr;
    // The time when the reserved CIDR block was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The IP version of the reserved CIDR block. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **IPv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The status of the reserved CIDR block. Valid values:
    // 
    // *   **Assigning**
    // *   **Assigned**
    // *   **Releasing**
    // *   **Released**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservationsTags>> tags_ = nullptr;
    // The type of the reserved CIDR block. Valid value: **prefix**. CIDR blocks are allocated from the reserved CIDR block.
    std::shared_ptr<string> type_ = nullptr;
    // The reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationCidr_ = nullptr;
    // The description of the reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationDescription_ = nullptr;
    // The ID of the reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationId_ = nullptr;
    // The name of the reserved CIDR block.
    std::shared_ptr<string> vSwitchCidrReservationName_ = nullptr;
    // The ID of the vSwitch to which the reserved CIDR block belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) to which the reserved CIDR block belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
