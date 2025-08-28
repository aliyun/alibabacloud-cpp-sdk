// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODYFULLNATENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTFULLNATENTRIESRESPONSEBODYFULLNATENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListFullNatEntriesResponseBodyFullNatEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFullNatEntriesResponseBodyFullNatEntries& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_TO_JSON(AccessPort, accessPort_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FullNatEntryDescription, fullNatEntryDescription_);
      DARABONBA_PTR_TO_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_TO_JSON(FullNatEntryName, fullNatEntryName_);
      DARABONBA_PTR_TO_JSON(FullNatEntryStatus, fullNatEntryStatus_);
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceType, networkInterfaceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListFullNatEntriesResponseBodyFullNatEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_FROM_JSON(AccessPort, accessPort_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryDescription, fullNatEntryDescription_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryName, fullNatEntryName_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryStatus, fullNatEntryStatus_);
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceType, networkInterfaceType_);
    };
    ListFullNatEntriesResponseBodyFullNatEntries() = default ;
    ListFullNatEntriesResponseBodyFullNatEntries(const ListFullNatEntriesResponseBodyFullNatEntries &) = default ;
    ListFullNatEntriesResponseBodyFullNatEntries(ListFullNatEntriesResponseBodyFullNatEntries &&) = default ;
    ListFullNatEntriesResponseBodyFullNatEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFullNatEntriesResponseBodyFullNatEntries() = default ;
    ListFullNatEntriesResponseBodyFullNatEntries& operator=(const ListFullNatEntriesResponseBodyFullNatEntries &) = default ;
    ListFullNatEntriesResponseBodyFullNatEntries& operator=(ListFullNatEntriesResponseBodyFullNatEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessIp_ != nullptr
        && this->accessPort_ != nullptr && this->creationTime_ != nullptr && this->fullNatEntryDescription_ != nullptr && this->fullNatEntryId_ != nullptr && this->fullNatEntryName_ != nullptr
        && this->fullNatEntryStatus_ != nullptr && this->fullNatTableId_ != nullptr && this->ipProtocol_ != nullptr && this->natIp_ != nullptr && this->natIpPort_ != nullptr
        && this->networkInterfaceId_ != nullptr && this->networkInterfaceType_ != nullptr; };
    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string accessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // accessPort Field Functions 
    bool hasAccessPort() const { return this->accessPort_ != nullptr;};
    void deleteAccessPort() { this->accessPort_ = nullptr;};
    inline string accessPort() const { DARABONBA_PTR_GET_DEFAULT(accessPort_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setAccessPort(string accessPort) { DARABONBA_PTR_SET_VALUE(accessPort_, accessPort) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // fullNatEntryDescription Field Functions 
    bool hasFullNatEntryDescription() const { return this->fullNatEntryDescription_ != nullptr;};
    void deleteFullNatEntryDescription() { this->fullNatEntryDescription_ = nullptr;};
    inline string fullNatEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryDescription_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setFullNatEntryDescription(string fullNatEntryDescription) { DARABONBA_PTR_SET_VALUE(fullNatEntryDescription_, fullNatEntryDescription) };


    // fullNatEntryId Field Functions 
    bool hasFullNatEntryId() const { return this->fullNatEntryId_ != nullptr;};
    void deleteFullNatEntryId() { this->fullNatEntryId_ = nullptr;};
    inline string fullNatEntryId() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryId_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setFullNatEntryId(string fullNatEntryId) { DARABONBA_PTR_SET_VALUE(fullNatEntryId_, fullNatEntryId) };


    // fullNatEntryName Field Functions 
    bool hasFullNatEntryName() const { return this->fullNatEntryName_ != nullptr;};
    void deleteFullNatEntryName() { this->fullNatEntryName_ = nullptr;};
    inline string fullNatEntryName() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryName_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setFullNatEntryName(string fullNatEntryName) { DARABONBA_PTR_SET_VALUE(fullNatEntryName_, fullNatEntryName) };


    // fullNatEntryStatus Field Functions 
    bool hasFullNatEntryStatus() const { return this->fullNatEntryStatus_ != nullptr;};
    void deleteFullNatEntryStatus() { this->fullNatEntryStatus_ = nullptr;};
    inline string fullNatEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryStatus_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setFullNatEntryStatus(string fullNatEntryStatus) { DARABONBA_PTR_SET_VALUE(fullNatEntryStatus_, fullNatEntryStatus) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string fullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpPort Field Functions 
    bool hasNatIpPort() const { return this->natIpPort_ != nullptr;};
    void deleteNatIpPort() { this->natIpPort_ = nullptr;};
    inline string natIpPort() const { DARABONBA_PTR_GET_DEFAULT(natIpPort_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setNatIpPort(string natIpPort) { DARABONBA_PTR_SET_VALUE(natIpPort_, natIpPort) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceType Field Functions 
    bool hasNetworkInterfaceType() const { return this->networkInterfaceType_ != nullptr;};
    void deleteNetworkInterfaceType() { this->networkInterfaceType_ = nullptr;};
    inline string networkInterfaceType() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceType_, "") };
    inline ListFullNatEntriesResponseBodyFullNatEntries& setNetworkInterfaceType(string networkInterfaceType) { DARABONBA_PTR_SET_VALUE(networkInterfaceType_, networkInterfaceType) };


  protected:
    // The backend IP address that is used for FULLNAT address translation in FULLNAT entries.
    std::shared_ptr<string> accessIp_ = nullptr;
    // The backend port that is used for port mapping in FULLNAT entries. Valid values: **1** to **65535**.
    std::shared_ptr<string> accessPort_ = nullptr;
    // The time when the FULLNAT entry was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the FULLNAT entry.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> fullNatEntryDescription_ = nullptr;
    // The ID of the FULLNAT entry.
    std::shared_ptr<string> fullNatEntryId_ = nullptr;
    // The name of the FULLNAT entry.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> fullNatEntryName_ = nullptr;
    // The status of the FULLNAT entry. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> fullNatEntryStatus_ = nullptr;
    // The ID of the FULLNAT table to which the FULLNAT entry belongs.
    std::shared_ptr<string> fullNatTableId_ = nullptr;
    // The protocol of the packets that are forwarded. Valid values:
    // 
    // *   **TCP**
    // *   **UDP**
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The NAT IP address that is used for address translation in FULLNAT entries.
    std::shared_ptr<string> natIp_ = nullptr;
    // The frontend port that is used for port mapping in FULLNAT entries. Valid values: **1** to **65535**.
    std::shared_ptr<string> natIpPort_ = nullptr;
    // The ID of the elastic network interface (ENI).
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The type of the ENI. The value is set to **Endpoint**, which indicates a reverse endpoint.
    std::shared_ptr<string> networkInterfaceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
