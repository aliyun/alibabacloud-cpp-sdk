// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ContainerdConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerdConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ignoreImageDefinedVolume, ignoreImageDefinedVolume_);
      DARABONBA_PTR_TO_JSON(insecureRegistries, insecureRegistries_);
      DARABONBA_PTR_TO_JSON(limitCore, limitCore_);
      DARABONBA_PTR_TO_JSON(limitMemLock, limitMemLock_);
      DARABONBA_PTR_TO_JSON(limitNoFile, limitNoFile_);
      DARABONBA_PTR_TO_JSON(maxConcurrentDownloads, maxConcurrentDownloads_);
      DARABONBA_PTR_TO_JSON(registryMirrors, registryMirrors_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerdConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ignoreImageDefinedVolume, ignoreImageDefinedVolume_);
      DARABONBA_PTR_FROM_JSON(insecureRegistries, insecureRegistries_);
      DARABONBA_PTR_FROM_JSON(limitCore, limitCore_);
      DARABONBA_PTR_FROM_JSON(limitMemLock, limitMemLock_);
      DARABONBA_PTR_FROM_JSON(limitNoFile, limitNoFile_);
      DARABONBA_PTR_FROM_JSON(maxConcurrentDownloads, maxConcurrentDownloads_);
      DARABONBA_PTR_FROM_JSON(registryMirrors, registryMirrors_);
    };
    ContainerdConfig() = default ;
    ContainerdConfig(const ContainerdConfig &) = default ;
    ContainerdConfig(ContainerdConfig &&) = default ;
    ContainerdConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerdConfig() = default ;
    ContainerdConfig& operator=(const ContainerdConfig &) = default ;
    ContainerdConfig& operator=(ContainerdConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreImageDefinedVolume_ == nullptr
        && this->insecureRegistries_ == nullptr && this->limitCore_ == nullptr && this->limitMemLock_ == nullptr && this->limitNoFile_ == nullptr && this->maxConcurrentDownloads_ == nullptr
        && this->registryMirrors_ == nullptr; };
    // ignoreImageDefinedVolume Field Functions 
    bool hasIgnoreImageDefinedVolume() const { return this->ignoreImageDefinedVolume_ != nullptr;};
    void deleteIgnoreImageDefinedVolume() { this->ignoreImageDefinedVolume_ = nullptr;};
    inline bool getIgnoreImageDefinedVolume() const { DARABONBA_PTR_GET_DEFAULT(ignoreImageDefinedVolume_, false) };
    inline ContainerdConfig& setIgnoreImageDefinedVolume(bool ignoreImageDefinedVolume) { DARABONBA_PTR_SET_VALUE(ignoreImageDefinedVolume_, ignoreImageDefinedVolume) };


    // insecureRegistries Field Functions 
    bool hasInsecureRegistries() const { return this->insecureRegistries_ != nullptr;};
    void deleteInsecureRegistries() { this->insecureRegistries_ = nullptr;};
    inline const vector<string> & getInsecureRegistries() const { DARABONBA_PTR_GET_CONST(insecureRegistries_, vector<string>) };
    inline vector<string> getInsecureRegistries() { DARABONBA_PTR_GET(insecureRegistries_, vector<string>) };
    inline ContainerdConfig& setInsecureRegistries(const vector<string> & insecureRegistries) { DARABONBA_PTR_SET_VALUE(insecureRegistries_, insecureRegistries) };
    inline ContainerdConfig& setInsecureRegistries(vector<string> && insecureRegistries) { DARABONBA_PTR_SET_RVALUE(insecureRegistries_, insecureRegistries) };


    // limitCore Field Functions 
    bool hasLimitCore() const { return this->limitCore_ != nullptr;};
    void deleteLimitCore() { this->limitCore_ = nullptr;};
    inline int64_t getLimitCore() const { DARABONBA_PTR_GET_DEFAULT(limitCore_, 0L) };
    inline ContainerdConfig& setLimitCore(int64_t limitCore) { DARABONBA_PTR_SET_VALUE(limitCore_, limitCore) };


    // limitMemLock Field Functions 
    bool hasLimitMemLock() const { return this->limitMemLock_ != nullptr;};
    void deleteLimitMemLock() { this->limitMemLock_ = nullptr;};
    inline int64_t getLimitMemLock() const { DARABONBA_PTR_GET_DEFAULT(limitMemLock_, 0L) };
    inline ContainerdConfig& setLimitMemLock(int64_t limitMemLock) { DARABONBA_PTR_SET_VALUE(limitMemLock_, limitMemLock) };


    // limitNoFile Field Functions 
    bool hasLimitNoFile() const { return this->limitNoFile_ != nullptr;};
    void deleteLimitNoFile() { this->limitNoFile_ = nullptr;};
    inline int64_t getLimitNoFile() const { DARABONBA_PTR_GET_DEFAULT(limitNoFile_, 0L) };
    inline ContainerdConfig& setLimitNoFile(int64_t limitNoFile) { DARABONBA_PTR_SET_VALUE(limitNoFile_, limitNoFile) };


    // maxConcurrentDownloads Field Functions 
    bool hasMaxConcurrentDownloads() const { return this->maxConcurrentDownloads_ != nullptr;};
    void deleteMaxConcurrentDownloads() { this->maxConcurrentDownloads_ = nullptr;};
    inline int64_t getMaxConcurrentDownloads() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentDownloads_, 0L) };
    inline ContainerdConfig& setMaxConcurrentDownloads(int64_t maxConcurrentDownloads) { DARABONBA_PTR_SET_VALUE(maxConcurrentDownloads_, maxConcurrentDownloads) };


    // registryMirrors Field Functions 
    bool hasRegistryMirrors() const { return this->registryMirrors_ != nullptr;};
    void deleteRegistryMirrors() { this->registryMirrors_ = nullptr;};
    inline const vector<string> & getRegistryMirrors() const { DARABONBA_PTR_GET_CONST(registryMirrors_, vector<string>) };
    inline vector<string> getRegistryMirrors() { DARABONBA_PTR_GET(registryMirrors_, vector<string>) };
    inline ContainerdConfig& setRegistryMirrors(const vector<string> & registryMirrors) { DARABONBA_PTR_SET_VALUE(registryMirrors_, registryMirrors) };
    inline ContainerdConfig& setRegistryMirrors(vector<string> && registryMirrors) { DARABONBA_PTR_SET_RVALUE(registryMirrors_, registryMirrors) };


  protected:
    shared_ptr<bool> ignoreImageDefinedVolume_ {};
    shared_ptr<vector<string>> insecureRegistries_ {};
    shared_ptr<int64_t> limitCore_ {};
    shared_ptr<int64_t> limitMemLock_ {};
    shared_ptr<int64_t> limitNoFile_ {};
    shared_ptr<int64_t> maxConcurrentDownloads_ {};
    shared_ptr<vector<string>> registryMirrors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
