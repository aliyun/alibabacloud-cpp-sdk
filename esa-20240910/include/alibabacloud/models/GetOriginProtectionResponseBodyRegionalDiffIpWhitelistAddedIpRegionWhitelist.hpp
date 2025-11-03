// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELISTADDEDIPREGIONWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALDIFFIPWHITELISTADDEDIPREGIONWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
    };
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist(GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist &&) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& operator=(const GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& operator=(GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && return this->regionalIPv6_ == nullptr; };
    // regionalIPv4 Field Functions 
    bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
    void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4> & regionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4> regionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4>) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& setRegionalIPv4(const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& setRegionalIPv4(vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


    // regionalIPv6 Field Functions 
    bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
    void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6> & regionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6> regionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6>) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& setRegionalIPv6(const vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
    inline GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelist& setRegionalIPv6(vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


  protected:
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv4>> regionalIPv4_ = nullptr;
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalDiffIPWhitelistAddedIPRegionWhitelistRegionalIPv6>> regionalIPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
