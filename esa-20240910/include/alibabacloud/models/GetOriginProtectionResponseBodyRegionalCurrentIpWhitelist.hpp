// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALCURRENTIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALCURRENTIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
    };
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist(const GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist(GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist &&) = default ;
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& operator=(const GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& operator=(GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && return this->regionalIPv6_ == nullptr; };
    // regionalIPv4 Field Functions 
    bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
    void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4> & regionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4> regionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4>) };
    inline GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& setRegionalIPv4(const vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
    inline GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& setRegionalIPv4(vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


    // regionalIPv6 Field Functions 
    bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
    void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6> & regionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6> regionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6>) };
    inline GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& setRegionalIPv6(const vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
    inline GetOriginProtectionResponseBodyRegionalCurrentIPWhitelist& setRegionalIPv6(vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


  protected:
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv4>> regionalIPv4_ = nullptr;
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalCurrentIPWhitelistRegionalIPv6>> regionalIPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
