// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESERVICECONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESERVICECONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ListInstanceServiceConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceServiceConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigureList, configureList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceServiceConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigureList, configureList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListInstanceServiceConfigurationsResponseBody() = default ;
    ListInstanceServiceConfigurationsResponseBody(const ListInstanceServiceConfigurationsResponseBody &) = default ;
    ListInstanceServiceConfigurationsResponseBody(ListInstanceServiceConfigurationsResponseBody &&) = default ;
    ListInstanceServiceConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceServiceConfigurationsResponseBody() = default ;
    ListInstanceServiceConfigurationsResponseBody& operator=(const ListInstanceServiceConfigurationsResponseBody &) = default ;
    ListInstanceServiceConfigurationsResponseBody& operator=(ListInstanceServiceConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigureList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigureList& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigureList& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
      };
      ConfigureList() = default ;
      ConfigureList(const ConfigureList &) = default ;
      ConfigureList(ConfigureList &&) = default ;
      ConfigureList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigureList() = default ;
      ConfigureList& operator=(const ConfigureList &) = default ;
      ConfigureList& operator=(ConfigureList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigureName, configureName_);
          DARABONBA_PTR_TO_JSON(ConfigureUnit, configureUnit_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
          DARABONBA_PTR_TO_JSON(RunningValue, runningValue_);
          DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigureName, configureName_);
          DARABONBA_PTR_FROM_JSON(ConfigureUnit, configureUnit_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
          DARABONBA_PTR_FROM_JSON(RunningValue, runningValue_);
          DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configureName_ == nullptr
        && this->configureUnit_ == nullptr && this->defaultValue_ == nullptr && this->description_ == nullptr && this->needRestart_ == nullptr && this->runningValue_ == nullptr
        && this->valueRange_ == nullptr; };
        // configureName Field Functions 
        bool hasConfigureName() const { return this->configureName_ != nullptr;};
        void deleteConfigureName() { this->configureName_ = nullptr;};
        inline string getConfigureName() const { DARABONBA_PTR_GET_DEFAULT(configureName_, "") };
        inline Config& setConfigureName(string configureName) { DARABONBA_PTR_SET_VALUE(configureName_, configureName) };


        // configureUnit Field Functions 
        bool hasConfigureUnit() const { return this->configureUnit_ != nullptr;};
        void deleteConfigureUnit() { this->configureUnit_ = nullptr;};
        inline string getConfigureUnit() const { DARABONBA_PTR_GET_DEFAULT(configureUnit_, "") };
        inline Config& setConfigureUnit(string configureUnit) { DARABONBA_PTR_SET_VALUE(configureUnit_, configureUnit) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline Config& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Config& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // needRestart Field Functions 
        bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
        void deleteNeedRestart() { this->needRestart_ = nullptr;};
        inline string getNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, "") };
        inline Config& setNeedRestart(string needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


        // runningValue Field Functions 
        bool hasRunningValue() const { return this->runningValue_ != nullptr;};
        void deleteRunningValue() { this->runningValue_ = nullptr;};
        inline string getRunningValue() const { DARABONBA_PTR_GET_DEFAULT(runningValue_, "") };
        inline Config& setRunningValue(string runningValue) { DARABONBA_PTR_SET_VALUE(runningValue_, runningValue) };


        // valueRange Field Functions 
        bool hasValueRange() const { return this->valueRange_ != nullptr;};
        void deleteValueRange() { this->valueRange_ = nullptr;};
        inline string getValueRange() const { DARABONBA_PTR_GET_DEFAULT(valueRange_, "") };
        inline Config& setValueRange(string valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };


      protected:
        shared_ptr<string> configureName_ {};
        shared_ptr<string> configureUnit_ {};
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> needRestart_ {};
        shared_ptr<string> runningValue_ {};
        shared_ptr<string> valueRange_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const vector<ConfigureList::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<ConfigureList::Config>) };
      inline vector<ConfigureList::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<ConfigureList::Config>) };
      inline ConfigureList& setConfig(const vector<ConfigureList::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline ConfigureList& setConfig(vector<ConfigureList::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    protected:
      shared_ptr<vector<ConfigureList::Config>> config_ {};
    };

    virtual bool empty() const override { return this->configureList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // configureList Field Functions 
    bool hasConfigureList() const { return this->configureList_ != nullptr;};
    void deleteConfigureList() { this->configureList_ = nullptr;};
    inline const ListInstanceServiceConfigurationsResponseBody::ConfigureList & getConfigureList() const { DARABONBA_PTR_GET_CONST(configureList_, ListInstanceServiceConfigurationsResponseBody::ConfigureList) };
    inline ListInstanceServiceConfigurationsResponseBody::ConfigureList getConfigureList() { DARABONBA_PTR_GET(configureList_, ListInstanceServiceConfigurationsResponseBody::ConfigureList) };
    inline ListInstanceServiceConfigurationsResponseBody& setConfigureList(const ListInstanceServiceConfigurationsResponseBody::ConfigureList & configureList) { DARABONBA_PTR_SET_VALUE(configureList_, configureList) };
    inline ListInstanceServiceConfigurationsResponseBody& setConfigureList(ListInstanceServiceConfigurationsResponseBody::ConfigureList && configureList) { DARABONBA_PTR_SET_RVALUE(configureList_, configureList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstanceServiceConfigurationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListInstanceServiceConfigurationsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceServiceConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline ListInstanceServiceConfigurationsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<ListInstanceServiceConfigurationsResponseBody::ConfigureList> configureList_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
