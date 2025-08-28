// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODYTUNNELIPSECCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODYTUNNELIPSECCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyTunnelAttributeResponseBodyTunnelIpsecConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IpsecAuthAlg, ipsecAuthAlg_);
      DARABONBA_PTR_TO_JSON(IpsecEncAlg, ipsecEncAlg_);
      DARABONBA_PTR_TO_JSON(IpsecLifetime, ipsecLifetime_);
      DARABONBA_PTR_TO_JSON(IpsecPfs, ipsecPfs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsecAuthAlg, ipsecAuthAlg_);
      DARABONBA_PTR_FROM_JSON(IpsecEncAlg, ipsecEncAlg_);
      DARABONBA_PTR_FROM_JSON(IpsecLifetime, ipsecLifetime_);
      DARABONBA_PTR_FROM_JSON(IpsecPfs, ipsecPfs_);
    };
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig() = default ;
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig(const ModifyTunnelAttributeResponseBodyTunnelIpsecConfig &) = default ;
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig(ModifyTunnelAttributeResponseBodyTunnelIpsecConfig &&) = default ;
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTunnelAttributeResponseBodyTunnelIpsecConfig() = default ;
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& operator=(const ModifyTunnelAttributeResponseBodyTunnelIpsecConfig &) = default ;
    ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& operator=(ModifyTunnelAttributeResponseBodyTunnelIpsecConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipsecAuthAlg_ != nullptr
        && this->ipsecEncAlg_ != nullptr && this->ipsecLifetime_ != nullptr && this->ipsecPfs_ != nullptr; };
    // ipsecAuthAlg Field Functions 
    bool hasIpsecAuthAlg() const { return this->ipsecAuthAlg_ != nullptr;};
    void deleteIpsecAuthAlg() { this->ipsecAuthAlg_ = nullptr;};
    inline string ipsecAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecAuthAlg_, "") };
    inline ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& setIpsecAuthAlg(string ipsecAuthAlg) { DARABONBA_PTR_SET_VALUE(ipsecAuthAlg_, ipsecAuthAlg) };


    // ipsecEncAlg Field Functions 
    bool hasIpsecEncAlg() const { return this->ipsecEncAlg_ != nullptr;};
    void deleteIpsecEncAlg() { this->ipsecEncAlg_ = nullptr;};
    inline string ipsecEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecEncAlg_, "") };
    inline ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& setIpsecEncAlg(string ipsecEncAlg) { DARABONBA_PTR_SET_VALUE(ipsecEncAlg_, ipsecEncAlg) };


    // ipsecLifetime Field Functions 
    bool hasIpsecLifetime() const { return this->ipsecLifetime_ != nullptr;};
    void deleteIpsecLifetime() { this->ipsecLifetime_ = nullptr;};
    inline int64_t ipsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0L) };
    inline ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& setIpsecLifetime(int64_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


    // ipsecPfs Field Functions 
    bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
    void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
    inline string ipsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
    inline ModifyTunnelAttributeResponseBodyTunnelIpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


  protected:
    // The IPsec authentication algorithm.
    std::shared_ptr<string> ipsecAuthAlg_ = nullptr;
    // The IPsec encryption algorithm.
    std::shared_ptr<string> ipsecEncAlg_ = nullptr;
    // The IPsec lifetime. Unit: seconds.
    std::shared_ptr<int64_t> ipsecLifetime_ = nullptr;
    // The DH group.
    std::shared_ptr<string> ipsecPfs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
