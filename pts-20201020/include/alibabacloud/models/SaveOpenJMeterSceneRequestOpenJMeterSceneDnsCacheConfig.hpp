// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEDNSCACHECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEDNSCACHECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ClearCacheEachIteration, clearCacheEachIteration_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(HostTable, hostTable_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ClearCacheEachIteration, clearCacheEachIteration_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(HostTable, hostTable_);
    };
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig(const SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig(SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig &&) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& operator=(const SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& operator=(SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig &&) = default ;
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
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& setClearCacheEachIteration(bool clearCacheEachIteration) { DARABONBA_PTR_SET_VALUE(clearCacheEachIteration_, clearCacheEachIteration) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> dnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // hostTable Field Functions 
    bool hasHostTable() const { return this->hostTable_ != nullptr;};
    void deleteHostTable() { this->hostTable_ = nullptr;};
    inline const map<string, string> & hostTable() const { DARABONBA_PTR_GET_CONST(hostTable_, map<string, string>) };
    inline map<string, string> hostTable() { DARABONBA_PTR_GET(hostTable_, map<string, string>) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& setHostTable(const map<string, string> & hostTable) { DARABONBA_PTR_SET_VALUE(hostTable_, hostTable) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig& setHostTable(map<string, string> && hostTable) { DARABONBA_PTR_SET_RVALUE(hostTable_, hostTable) };


  protected:
    // Specifies whether to clear the cache in each iteration.
    std::shared_ptr<bool> clearCacheEachIteration_ = nullptr;
    // The DNS servers.
    std::shared_ptr<vector<string>> dnsServers_ = nullptr;
    // The table that contains bound domain names.
    std::shared_ptr<map<string, string>> hostTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
