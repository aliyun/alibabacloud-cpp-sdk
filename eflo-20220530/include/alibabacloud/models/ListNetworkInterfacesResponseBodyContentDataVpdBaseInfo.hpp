// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATAVPDBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATAVPDBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
    };
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo() = default ;
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo(const ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo &) = default ;
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo(ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo &&) = default ;
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo() = default ;
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& operator=(const ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo &) = default ;
    ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& operator=(ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->createTime_ == nullptr && return this->vpdId_ == nullptr && return this->vpdName_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string vpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


  protected:
    // The network segment of Lingjun network segment (VPD).
    // 
    // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
    // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD. This parameter is left empty by default.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the activation code was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the VPD instance.
    std::shared_ptr<string> vpdId_ = nullptr;
    // The name of the VPD instance.
    std::shared_ptr<string> vpdName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
