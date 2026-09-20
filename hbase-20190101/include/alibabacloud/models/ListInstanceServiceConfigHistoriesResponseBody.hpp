// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESERVICECONFIGHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESERVICECONFIGHISTORIESRESPONSEBODY_HPP_
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
  class ListInstanceServiceConfigHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceServiceConfigHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigureHistoryList, configureHistoryList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceServiceConfigHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigureHistoryList, configureHistoryList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListInstanceServiceConfigHistoriesResponseBody() = default ;
    ListInstanceServiceConfigHistoriesResponseBody(const ListInstanceServiceConfigHistoriesResponseBody &) = default ;
    ListInstanceServiceConfigHistoriesResponseBody(ListInstanceServiceConfigHistoriesResponseBody &&) = default ;
    ListInstanceServiceConfigHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceServiceConfigHistoriesResponseBody() = default ;
    ListInstanceServiceConfigHistoriesResponseBody& operator=(const ListInstanceServiceConfigHistoriesResponseBody &) = default ;
    ListInstanceServiceConfigHistoriesResponseBody& operator=(ListInstanceServiceConfigHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigureHistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigureHistoryList& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigureHistoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
      };
      ConfigureHistoryList() = default ;
      ConfigureHistoryList(const ConfigureHistoryList &) = default ;
      ConfigureHistoryList(ConfigureHistoryList &&) = default ;
      ConfigureHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigureHistoryList() = default ;
      ConfigureHistoryList& operator=(const ConfigureHistoryList &) = default ;
      ConfigureHistoryList& operator=(ConfigureHistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigureName, configureName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Effective, effective_);
          DARABONBA_PTR_TO_JSON(NewValue, newValue_);
          DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigureName, configureName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Effective, effective_);
          DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
          DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
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
        && this->createTime_ == nullptr && this->effective_ == nullptr && this->newValue_ == nullptr && this->oldValue_ == nullptr; };
        // configureName Field Functions 
        bool hasConfigureName() const { return this->configureName_ != nullptr;};
        void deleteConfigureName() { this->configureName_ = nullptr;};
        inline string getConfigureName() const { DARABONBA_PTR_GET_DEFAULT(configureName_, "") };
        inline Config& setConfigureName(string configureName) { DARABONBA_PTR_SET_VALUE(configureName_, configureName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Config& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // effective Field Functions 
        bool hasEffective() const { return this->effective_ != nullptr;};
        void deleteEffective() { this->effective_ = nullptr;};
        inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
        inline Config& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline Config& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // oldValue Field Functions 
        bool hasOldValue() const { return this->oldValue_ != nullptr;};
        void deleteOldValue() { this->oldValue_ = nullptr;};
        inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
        inline Config& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      protected:
        shared_ptr<string> configureName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> effective_ {};
        shared_ptr<string> newValue_ {};
        shared_ptr<string> oldValue_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const vector<ConfigureHistoryList::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<ConfigureHistoryList::Config>) };
      inline vector<ConfigureHistoryList::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<ConfigureHistoryList::Config>) };
      inline ConfigureHistoryList& setConfig(const vector<ConfigureHistoryList::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline ConfigureHistoryList& setConfig(vector<ConfigureHistoryList::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    protected:
      shared_ptr<vector<ConfigureHistoryList::Config>> config_ {};
    };

    virtual bool empty() const override { return this->configureHistoryList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // configureHistoryList Field Functions 
    bool hasConfigureHistoryList() const { return this->configureHistoryList_ != nullptr;};
    void deleteConfigureHistoryList() { this->configureHistoryList_ = nullptr;};
    inline const ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList & getConfigureHistoryList() const { DARABONBA_PTR_GET_CONST(configureHistoryList_, ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList) };
    inline ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList getConfigureHistoryList() { DARABONBA_PTR_GET(configureHistoryList_, ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList) };
    inline ListInstanceServiceConfigHistoriesResponseBody& setConfigureHistoryList(const ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList & configureHistoryList) { DARABONBA_PTR_SET_VALUE(configureHistoryList_, configureHistoryList) };
    inline ListInstanceServiceConfigHistoriesResponseBody& setConfigureHistoryList(ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList && configureHistoryList) { DARABONBA_PTR_SET_RVALUE(configureHistoryList_, configureHistoryList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstanceServiceConfigHistoriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListInstanceServiceConfigHistoriesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceServiceConfigHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline ListInstanceServiceConfigHistoriesResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<ListInstanceServiceConfigHistoriesResponseBody::ConfigureHistoryList> configureHistoryList_ {};
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
