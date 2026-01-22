// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormEngineConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLindormEngineConfigResponseBody() = default ;
    GetLindormEngineConfigResponseBody(const GetLindormEngineConfigResponseBody &) = default ;
    GetLindormEngineConfigResponseBody(GetLindormEngineConfigResponseBody &&) = default ;
    GetLindormEngineConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormEngineConfigResponseBody() = default ;
    GetLindormEngineConfigResponseBody& operator=(const GetLindormEngineConfigResponseBody &) = default ;
    GetLindormEngineConfigResponseBody& operator=(GetLindormEngineConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EngineConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigFiles, configFiles_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
      };
      friend void from_json(const Darabonba::Json& j, EngineConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigFiles, configFiles_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
      };
      EngineConfigs() = default ;
      EngineConfigs(const EngineConfigs &) = default ;
      EngineConfigs(EngineConfigs &&) = default ;
      EngineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineConfigs() = default ;
      EngineConfigs& operator=(const EngineConfigs &) = default ;
      EngineConfigs& operator=(EngineConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigFiles& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigItems, configItems_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigItems, configItems_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        };
        ConfigFiles() = default ;
        ConfigFiles(const ConfigFiles &) = default ;
        ConfigFiles(ConfigFiles &&) = default ;
        ConfigFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigFiles() = default ;
        ConfigFiles& operator=(const ConfigFiles &) = default ;
        ConfigFiles& operator=(ConfigFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConfigItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigItems& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
            DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigItems& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
            DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
          };
          ConfigItems() = default ;
          ConfigItems(const ConfigItems &) = default ;
          ConfigItems(ConfigItems &&) = default ;
          ConfigItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigItems() = default ;
          ConfigItems& operator=(const ConfigItems &) = default ;
          ConfigItems& operator=(ConfigItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configItemKey_ == nullptr
        && this->configItemValue_ == nullptr; };
          // configItemKey Field Functions 
          bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
          void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
          inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
          inline ConfigItems& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


          // configItemValue Field Functions 
          bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
          void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
          inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
          inline ConfigItems& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


        protected:
          shared_ptr<string> configItemKey_ {};
          shared_ptr<string> configItemValue_ {};
        };

        virtual bool empty() const override { return this->configItems_ == nullptr
        && this->fileName_ == nullptr; };
        // configItems Field Functions 
        bool hasConfigItems() const { return this->configItems_ != nullptr;};
        void deleteConfigItems() { this->configItems_ = nullptr;};
        inline const vector<ConfigFiles::ConfigItems> & getConfigItems() const { DARABONBA_PTR_GET_CONST(configItems_, vector<ConfigFiles::ConfigItems>) };
        inline vector<ConfigFiles::ConfigItems> getConfigItems() { DARABONBA_PTR_GET(configItems_, vector<ConfigFiles::ConfigItems>) };
        inline ConfigFiles& setConfigItems(const vector<ConfigFiles::ConfigItems> & configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };
        inline ConfigFiles& setConfigItems(vector<ConfigFiles::ConfigItems> && configItems) { DARABONBA_PTR_SET_RVALUE(configItems_, configItems) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline ConfigFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      protected:
        shared_ptr<vector<ConfigFiles::ConfigItems>> configItems_ {};
        shared_ptr<string> fileName_ {};
      };

      virtual bool empty() const override { return this->configFiles_ == nullptr
        && this->engine_ == nullptr; };
      // configFiles Field Functions 
      bool hasConfigFiles() const { return this->configFiles_ != nullptr;};
      void deleteConfigFiles() { this->configFiles_ = nullptr;};
      inline const vector<EngineConfigs::ConfigFiles> & getConfigFiles() const { DARABONBA_PTR_GET_CONST(configFiles_, vector<EngineConfigs::ConfigFiles>) };
      inline vector<EngineConfigs::ConfigFiles> getConfigFiles() { DARABONBA_PTR_GET(configFiles_, vector<EngineConfigs::ConfigFiles>) };
      inline EngineConfigs& setConfigFiles(const vector<EngineConfigs::ConfigFiles> & configFiles) { DARABONBA_PTR_SET_VALUE(configFiles_, configFiles) };
      inline EngineConfigs& setConfigFiles(vector<EngineConfigs::ConfigFiles> && configFiles) { DARABONBA_PTR_SET_RVALUE(configFiles_, configFiles) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline EngineConfigs& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    protected:
      shared_ptr<vector<EngineConfigs::ConfigFiles>> configFiles_ {};
      shared_ptr<string> engine_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->engineConfigs_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormEngineConfigResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // engineConfigs Field Functions 
    bool hasEngineConfigs() const { return this->engineConfigs_ != nullptr;};
    void deleteEngineConfigs() { this->engineConfigs_ = nullptr;};
    inline const vector<GetLindormEngineConfigResponseBody::EngineConfigs> & getEngineConfigs() const { DARABONBA_PTR_GET_CONST(engineConfigs_, vector<GetLindormEngineConfigResponseBody::EngineConfigs>) };
    inline vector<GetLindormEngineConfigResponseBody::EngineConfigs> getEngineConfigs() { DARABONBA_PTR_GET(engineConfigs_, vector<GetLindormEngineConfigResponseBody::EngineConfigs>) };
    inline GetLindormEngineConfigResponseBody& setEngineConfigs(const vector<GetLindormEngineConfigResponseBody::EngineConfigs> & engineConfigs) { DARABONBA_PTR_SET_VALUE(engineConfigs_, engineConfigs) };
    inline GetLindormEngineConfigResponseBody& setEngineConfigs(vector<GetLindormEngineConfigResponseBody::EngineConfigs> && engineConfigs) { DARABONBA_PTR_SET_RVALUE(engineConfigs_, engineConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormEngineConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<GetLindormEngineConfigResponseBody::EngineConfigs>> engineConfigs_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
