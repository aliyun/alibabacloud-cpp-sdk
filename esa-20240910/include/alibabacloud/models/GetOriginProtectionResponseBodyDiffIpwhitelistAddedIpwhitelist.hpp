// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYDIFFIPWHITELISTADDEDIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYDIFFIPWHITELISTADDEDIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
      DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
      DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
    };
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist() = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist(const GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist(GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist &&) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist() = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& operator=(const GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& operator=(GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPv4_ != nullptr
        && this->IPv6_ != nullptr; };
    // IPv4 Field Functions 
    bool hasIPv4() const { return this->IPv4_ != nullptr;};
    void deleteIPv4() { this->IPv4_ = nullptr;};
    inline const vector<string> & IPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
    inline vector<string> IPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


    // IPv6 Field Functions 
    bool hasIPv6() const { return this->IPv6_ != nullptr;};
    void deleteIPv6() { this->IPv6_ = nullptr;};
    inline const vector<string> & IPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
    inline vector<string> IPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
    inline GetOriginProtectionResponseBodyDiffIPWhitelistAddedIPWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


  protected:
    // The IP whitelist for origin protection, specified as IPv4 addresses or CIDR blocks.
    std::shared_ptr<vector<string>> IPv4_ = nullptr;
    // The IP whitelist for origin protection, specified as IPv6 addresses or CIDR blocks.
    std::shared_ptr<vector<string>> IPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
