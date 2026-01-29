// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SLSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(collectConfigs, collectConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, SLSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(collectConfigs, collectConfigs_);
    };
    SLSConfig() = default ;
    SLSConfig(const SLSConfig &) = default ;
    SLSConfig(SLSConfig &&) = default ;
    SLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSConfig() = default ;
    SLSConfig& operator=(const SLSConfig &) = default ;
    SLSConfig& operator=(SLSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CollectConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CollectConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(logPath, logPath_);
        DARABONBA_PTR_TO_JSON(logType, logType_);
        DARABONBA_PTR_TO_JSON(logstoreName, logstoreName_);
        DARABONBA_PTR_TO_JSON(logtailName, logtailName_);
        DARABONBA_PTR_TO_JSON(projectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, CollectConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(logPath, logPath_);
        DARABONBA_PTR_FROM_JSON(logType, logType_);
        DARABONBA_PTR_FROM_JSON(logstoreName, logstoreName_);
        DARABONBA_PTR_FROM_JSON(logtailName, logtailName_);
        DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      };
      CollectConfigs() = default ;
      CollectConfigs(const CollectConfigs &) = default ;
      CollectConfigs(CollectConfigs &&) = default ;
      CollectConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CollectConfigs() = default ;
      CollectConfigs& operator=(const CollectConfigs &) = default ;
      CollectConfigs& operator=(CollectConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logPath_ == nullptr
        && this->logType_ == nullptr && this->logstoreName_ == nullptr && this->logtailName_ == nullptr && this->projectName_ == nullptr; };
      // logPath Field Functions 
      bool hasLogPath() const { return this->logPath_ != nullptr;};
      void deleteLogPath() { this->logPath_ = nullptr;};
      inline string getLogPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
      inline CollectConfigs& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
      inline CollectConfigs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // logstoreName Field Functions 
      bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
      void deleteLogstoreName() { this->logstoreName_ = nullptr;};
      inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
      inline CollectConfigs& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


      // logtailName Field Functions 
      bool hasLogtailName() const { return this->logtailName_ != nullptr;};
      void deleteLogtailName() { this->logtailName_ = nullptr;};
      inline string getLogtailName() const { DARABONBA_PTR_GET_DEFAULT(logtailName_, "") };
      inline CollectConfigs& setLogtailName(string logtailName) { DARABONBA_PTR_SET_VALUE(logtailName_, logtailName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline CollectConfigs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      shared_ptr<string> logPath_ {};
      shared_ptr<string> logType_ {};
      shared_ptr<string> logstoreName_ {};
      shared_ptr<string> logtailName_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->collectConfigs_ == nullptr; };
    // collectConfigs Field Functions 
    bool hasCollectConfigs() const { return this->collectConfigs_ != nullptr;};
    void deleteCollectConfigs() { this->collectConfigs_ = nullptr;};
    inline const vector<SLSConfig::CollectConfigs> & getCollectConfigs() const { DARABONBA_PTR_GET_CONST(collectConfigs_, vector<SLSConfig::CollectConfigs>) };
    inline vector<SLSConfig::CollectConfigs> getCollectConfigs() { DARABONBA_PTR_GET(collectConfigs_, vector<SLSConfig::CollectConfigs>) };
    inline SLSConfig& setCollectConfigs(const vector<SLSConfig::CollectConfigs> & collectConfigs) { DARABONBA_PTR_SET_VALUE(collectConfigs_, collectConfigs) };
    inline SLSConfig& setCollectConfigs(vector<SLSConfig::CollectConfigs> && collectConfigs) { DARABONBA_PTR_SET_RVALUE(collectConfigs_, collectConfigs) };


  protected:
    shared_ptr<vector<SLSConfig::CollectConfigs>> collectConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
