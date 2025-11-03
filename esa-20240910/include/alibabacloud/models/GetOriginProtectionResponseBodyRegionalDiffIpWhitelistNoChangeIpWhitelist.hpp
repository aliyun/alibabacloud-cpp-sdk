// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELISTNOCHANGEIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELISTNOCHANGEIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
    };
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist(GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist &&) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& operator=(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& operator=(GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && return this->regionalIPv6_ == nullptr; };
    // regionalIPv4 Field Functions 
    bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
    void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4> & regionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4> regionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4>) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& setRegionalIPv4(const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& setRegionalIPv4(vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


    // regionalIPv6 Field Functions 
    bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
    void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6> & regionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6> regionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6>) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& setRegionalIPv6(const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelist& setRegionalIPv6(vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


  protected:
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv4>> regionalIPv4_ = nullptr;
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistNoChangeIpWhitelistRegionalIPv6>> regionalIPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
