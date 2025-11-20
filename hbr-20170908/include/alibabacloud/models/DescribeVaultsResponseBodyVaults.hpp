// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVault.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaults& obj) { 
      DARABONBA_PTR_TO_JSON(Vault, vault_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaults& obj) { 
      DARABONBA_PTR_FROM_JSON(Vault, vault_);
    };
    DescribeVaultsResponseBodyVaults() = default ;
    DescribeVaultsResponseBodyVaults(const DescribeVaultsResponseBodyVaults &) = default ;
    DescribeVaultsResponseBodyVaults(DescribeVaultsResponseBodyVaults &&) = default ;
    DescribeVaultsResponseBodyVaults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaults() = default ;
    DescribeVaultsResponseBodyVaults& operator=(const DescribeVaultsResponseBodyVaults &) = default ;
    DescribeVaultsResponseBodyVaults& operator=(DescribeVaultsResponseBodyVaults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vault_ == nullptr; };
    // vault Field Functions 
    bool hasVault() const { return this->vault_ != nullptr;};
    void deleteVault() { this->vault_ = nullptr;};
    inline const vector<Models::DescribeVaultsResponseBodyVaultsVault> & vault() const { DARABONBA_PTR_GET_CONST(vault_, vector<Models::DescribeVaultsResponseBodyVaultsVault>) };
    inline vector<Models::DescribeVaultsResponseBodyVaultsVault> vault() { DARABONBA_PTR_GET(vault_, vector<Models::DescribeVaultsResponseBodyVaultsVault>) };
    inline DescribeVaultsResponseBodyVaults& setVault(const vector<Models::DescribeVaultsResponseBodyVaultsVault> & vault) { DARABONBA_PTR_SET_VALUE(vault_, vault) };
    inline DescribeVaultsResponseBodyVaults& setVault(vector<Models::DescribeVaultsResponseBodyVaultsVault> && vault) { DARABONBA_PTR_SET_RVALUE(vault_, vault) };


  protected:
    std::shared_ptr<vector<Models::DescribeVaultsResponseBodyVaultsVault>> vault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
