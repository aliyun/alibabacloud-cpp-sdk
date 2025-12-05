// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEDNSCACHECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEDNSCACHECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetOpenJMeterSceneResponseBodySceneDnsCacheConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ClearCacheEachIteration, clearCacheEachIteration_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_ANY_TO_JSON(HostTable, hostTable_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ClearCacheEachIteration, clearCacheEachIteration_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_ANY_FROM_JSON(HostTable, hostTable_);
    };
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig() = default ;
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig(const GetOpenJMeterSceneResponseBodySceneDnsCacheConfig &) = default ;
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig(GetOpenJMeterSceneResponseBodySceneDnsCacheConfig &&) = default ;
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenJMeterSceneResponseBodySceneDnsCacheConfig() = default ;
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& operator=(const GetOpenJMeterSceneResponseBodySceneDnsCacheConfig &) = default ;
    GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& operator=(GetOpenJMeterSceneResponseBodySceneDnsCacheConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearCacheEachIteration_ == nullptr
        && return this->dnsServers_ == nullptr && return this->hostTable_ == nullptr; };
    // clearCacheEachIteration Field Functions 
    bool hasClearCacheEachIteration() const { return this->clearCacheEachIteration_ != nullptr;};
    void deleteClearCacheEachIteration() { this->clearCacheEachIteration_ = nullptr;};
    inline bool clearCacheEachIteration() const { DARABONBA_PTR_GET_DEFAULT(clearCacheEachIteration_, false) };
    inline GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& setClearCacheEachIteration(bool clearCacheEachIteration) { DARABONBA_PTR_SET_VALUE(clearCacheEachIteration_, clearCacheEachIteration) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> dnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // hostTable Field Functions 
    bool hasHostTable() const { return this->hostTable_ != nullptr;};
    void deleteHostTable() { this->hostTable_ = nullptr;};
    inline     const Darabonba::Json & hostTable() const { DARABONBA_GET(hostTable_) };
    Darabonba::Json & hostTable() { DARABONBA_GET(hostTable_) };
    inline GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& setHostTable(const Darabonba::Json & hostTable) { DARABONBA_SET_VALUE(hostTable_, hostTable) };
    inline GetOpenJMeterSceneResponseBodySceneDnsCacheConfig& setHostTable(Darabonba::Json & hostTable) { DARABONBA_SET_RVALUE(hostTable_, hostTable) };


  protected:
    // Indicates whether the cache is cleared.
    std::shared_ptr<bool> clearCacheEachIteration_ = nullptr;
    // The DNS servers
    std::shared_ptr<vector<string>> dnsServers_ = nullptr;
    // The domain name and its bounded IP address.
    Darabonba::Json hostTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
