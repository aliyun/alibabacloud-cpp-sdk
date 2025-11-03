// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALLATESTIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALLATESTIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4.hpp>
#include <alibabacloud/models/GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalLatestIPWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
      DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
    };
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist(const GetOriginProtectionResponseBodyRegionalLatestIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist(GetOriginProtectionResponseBodyRegionalLatestIPWhitelist &&) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalLatestIPWhitelist() = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& operator=(const GetOriginProtectionResponseBodyRegionalLatestIPWhitelist &) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& operator=(GetOriginProtectionResponseBodyRegionalLatestIPWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && return this->regionalIPv6_ == nullptr; };
    // regionalIPv4 Field Functions 
    bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
    void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4> & regionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4> regionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4>) };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& setRegionalIPv4(const vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& setRegionalIPv4(vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


    // regionalIPv6 Field Functions 
    bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
    void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
    inline const vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6> & regionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6>) };
    inline vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6> regionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6>) };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& setRegionalIPv6(const vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelist& setRegionalIPv6(vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


  protected:
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4>> regionalIPv4_ = nullptr;
    std::shared_ptr<vector<Models::GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv6>> regionalIPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
