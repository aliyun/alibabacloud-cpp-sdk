// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODYCROSSACCOUNTAUTHORIZATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODYCROSSACCOUNTAUTHORIZATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(BindInstance, bindInstance_);
      DARABONBA_PTR_TO_JSON(BindProduct, bindProduct_);
      DARABONBA_PTR_TO_JSON(BindUid, bindUid_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(BindInstance, bindInstance_);
      DARABONBA_PTR_FROM_JSON(BindProduct, bindProduct_);
      DARABONBA_PTR_FROM_JSON(BindUid, bindUid_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations() = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations(const DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations &) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations(DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations &&) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations() = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& operator=(const DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations &) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& operator=(DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->bindInstance_ != nullptr && this->bindProduct_ != nullptr && this->bindUid_ != nullptr && this->creationTime_ != nullptr && this->vpnConnectionId_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bindInstance Field Functions 
    bool hasBindInstance() const { return this->bindInstance_ != nullptr;};
    void deleteBindInstance() { this->bindInstance_ = nullptr;};
    inline string bindInstance() const { DARABONBA_PTR_GET_DEFAULT(bindInstance_, "") };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setBindInstance(string bindInstance) { DARABONBA_PTR_SET_VALUE(bindInstance_, bindInstance) };


    // bindProduct Field Functions 
    bool hasBindProduct() const { return this->bindProduct_ != nullptr;};
    void deleteBindProduct() { this->bindProduct_ = nullptr;};
    inline string bindProduct() const { DARABONBA_PTR_GET_DEFAULT(bindProduct_, "") };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setBindProduct(string bindProduct) { DARABONBA_PTR_SET_VALUE(bindProduct_, bindProduct) };


    // bindUid Field Functions 
    bool hasBindUid() const { return this->bindUid_ != nullptr;};
    void deleteBindUid() { this->bindUid_ = nullptr;};
    inline int64_t bindUid() const { DARABONBA_PTR_GET_DEFAULT(bindUid_, 0L) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setBindUid(int64_t bindUid) { DARABONBA_PTR_SET_VALUE(bindUid_, bindUid) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // The ID of the Alibaba Cloud account to which the IPsec-VPN connection belongs.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> bindInstance_ = nullptr;
    // The type of resource that can be associated with the IPsec-VPN connection.
    // 
    // Only **CEN** can be returned, which indicates that the IPsec-VPN connection is authorized to be associated with the transit router of a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
    std::shared_ptr<string> bindProduct_ = nullptr;
    // The ID of the Alibaba Cloud account whose resources the IPsec-VPN connection is authorized to be associated with.
    std::shared_ptr<int64_t> bindUid_ = nullptr;
    // The time when the authorization for the IPsec-VPN connection was created.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
