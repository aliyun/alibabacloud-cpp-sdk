// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultReplicationRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultReplicationRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultReplicationRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeVaultReplicationRegionsRequest() = default ;
    DescribeVaultReplicationRegionsRequest(const DescribeVaultReplicationRegionsRequest &) = default ;
    DescribeVaultReplicationRegionsRequest(DescribeVaultReplicationRegionsRequest &&) = default ;
    DescribeVaultReplicationRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultReplicationRegionsRequest() = default ;
    DescribeVaultReplicationRegionsRequest& operator=(const DescribeVaultReplicationRegionsRequest &) = default ;
    DescribeVaultReplicationRegionsRequest& operator=(DescribeVaultReplicationRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->token_ == nullptr
        && return this->vaultId_ == nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeVaultReplicationRegionsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeVaultReplicationRegionsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
