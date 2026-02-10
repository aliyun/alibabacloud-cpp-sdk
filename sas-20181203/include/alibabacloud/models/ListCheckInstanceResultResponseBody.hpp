// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicData, basicData_);
      DARABONBA_PTR_TO_JSON(Checks, checks_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicData, basicData_);
      DARABONBA_PTR_FROM_JSON(Checks, checks_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckInstanceResultResponseBody() = default ;
    ListCheckInstanceResultResponseBody(const ListCheckInstanceResultResponseBody &) = default ;
    ListCheckInstanceResultResponseBody(ListCheckInstanceResultResponseBody &&) = default ;
    ListCheckInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBody() = default ;
    ListCheckInstanceResultResponseBody& operator=(const ListCheckInstanceResultResponseBody &) = default ;
    ListCheckInstanceResultResponseBody& operator=(ListCheckInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline PageInfo& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<string> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Grids, grids_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Search, search_);
        DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Grids, grids_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Search, search_);
        DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Grids : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grids& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Grids& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Grids() = default ;
        Grids(const Grids &) = default ;
        Grids(Grids &&) = default ;
        Grids(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grids() = default ;
        Grids& operator=(const Grids &) = default ;
        Grids& operator=(Grids &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->showName_ == nullptr && this->type_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Grids& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline Grids& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Grids& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The search condition.
        shared_ptr<string> key_ {};
        // The display name of the search condition.
        shared_ptr<string> showName_ {};
        // The format of the check result for the instance. Valid values:
        // 
        // *   **text**
        // *   **link**
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->grids_ == nullptr
        && this->key_ == nullptr && this->search_ == nullptr && this->searchKey_ == nullptr && this->showName_ == nullptr && this->type_ == nullptr; };
      // grids Field Functions 
      bool hasGrids() const { return this->grids_ != nullptr;};
      void deleteGrids() { this->grids_ = nullptr;};
      inline const vector<Columns::Grids> & getGrids() const { DARABONBA_PTR_GET_CONST(grids_, vector<Columns::Grids>) };
      inline vector<Columns::Grids> getGrids() { DARABONBA_PTR_GET(grids_, vector<Columns::Grids>) };
      inline Columns& setGrids(const vector<Columns::Grids> & grids) { DARABONBA_PTR_SET_VALUE(grids_, grids) };
      inline Columns& setGrids(vector<Columns::Grids> && grids) { DARABONBA_PTR_SET_RVALUE(grids_, grids) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Columns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // search Field Functions 
      bool hasSearch() const { return this->search_ != nullptr;};
      void deleteSearch() { this->search_ = nullptr;};
      inline bool getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, false) };
      inline Columns& setSearch(bool search) { DARABONBA_PTR_SET_VALUE(search_, search) };


      // searchKey Field Functions 
      bool hasSearchKey() const { return this->searchKey_ != nullptr;};
      void deleteSearchKey() { this->searchKey_ = nullptr;};
      inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
      inline Columns& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Columns& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The metadata information about the details of the instance.
      shared_ptr<vector<Columns::Grids>> grids_ {};
      // The search condition.
      shared_ptr<string> key_ {};
      // Indicates whether the search condition is used. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> search_ {};
      // The search key.
      shared_ptr<string> searchKey_ {};
      // The display name of the search condition.
      shared_ptr<string> showName_ {};
      // The type of the check result for the instance. Valid values:
      // 
      // *   **text**
      // *   **link**
      shared_ptr<string> type_ {};
    };

    class BasicData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BasicData& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(VendorUserName, vendorUserName_);
      };
      friend void from_json(const Darabonba::Json& j, BasicData& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(VendorUserName, vendorUserName_);
      };
      BasicData() = default ;
      BasicData(const BasicData &) = default ;
      BasicData(BasicData &&) = default ;
      BasicData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BasicData() = default ;
      BasicData& operator=(const BasicData &) = default ;
      BasicData& operator=(BasicData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(FirstUpdateTime, firstUpdateTime_);
          DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(FirstUpdateTime, firstUpdateTime_);
          DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
        };
        InstanceInfo() = default ;
        InstanceInfo(const InstanceInfo &) = default ;
        InstanceInfo(InstanceInfo &&) = default ;
        InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceInfo() = default ;
        InstanceInfo& operator=(const InstanceInfo &) = default ;
        InstanceInfo& operator=(InstanceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ShowName, showName_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ShowName, showName_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->showName_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Config& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // showName Field Functions 
          bool hasShowName() const { return this->showName_ != nullptr;};
          void deleteShowName() { this->showName_ = nullptr;};
          inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
          inline Config& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Config& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the configuration item, which is unique.
          shared_ptr<string> name_ {};
          // The display name of the configuration item for internationalization.
          shared_ptr<string> showName_ {};
          // The value of the configuration item specified for the instance.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->firstUpdateTime_ == nullptr && this->lastUpdateTime_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const vector<InstanceInfo::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<InstanceInfo::Config>) };
        inline vector<InstanceInfo::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<InstanceInfo::Config>) };
        inline InstanceInfo& setConfig(const vector<InstanceInfo::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline InstanceInfo& setConfig(vector<InstanceInfo::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // firstUpdateTime Field Functions 
        bool hasFirstUpdateTime() const { return this->firstUpdateTime_ != nullptr;};
        void deleteFirstUpdateTime() { this->firstUpdateTime_ = nullptr;};
        inline int64_t getFirstUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(firstUpdateTime_, 0L) };
        inline InstanceInfo& setFirstUpdateTime(int64_t firstUpdateTime) { DARABONBA_PTR_SET_VALUE(firstUpdateTime_, firstUpdateTime) };


        // lastUpdateTime Field Functions 
        bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
        void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
        inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
        inline InstanceInfo& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      protected:
        // The information about the configuration item whose risks are fixed for the instance.
        shared_ptr<vector<InstanceInfo::Config>> config_ {};
        // The time of the first check.
        shared_ptr<int64_t> firstUpdateTime_ {};
        // The time of the last check.
        shared_ptr<int64_t> lastUpdateTime_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->instanceId_ == nullptr && this->instanceInfo_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->statusMessage_ == nullptr && this->vendorUserName_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BasicData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BasicData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceInfo Field Functions 
      bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
      void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
      inline const BasicData::InstanceInfo & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, BasicData::InstanceInfo) };
      inline BasicData::InstanceInfo getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, BasicData::InstanceInfo) };
      inline BasicData& setInstanceInfo(const BasicData::InstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
      inline BasicData& setInstanceInfo(BasicData::InstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline BasicData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BasicData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BasicData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline BasicData& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // vendorUserName Field Functions 
      bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
      void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
      inline string getVendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
      inline BasicData& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


    protected:
      // The ID of the check result for the instance.
      shared_ptr<int64_t> id_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The information about the instance on which the check item is used.
      shared_ptr<BasicData::InstanceInfo> instanceInfo_ {};
      // The instance name of the server.
      shared_ptr<string> instanceName_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The states of check items. Multiple states are separated with commas (,). Valid values:
      // 
      // *   **PASS**: passed
      // *   **NOT_PASS**: failed
      // *   **CHECKING**: being checked
      // *   **NOT_CHECK**: not checked
      // *   **WHITELIST**: added to the whitelist
      shared_ptr<string> status_ {};
      // The exception message of the check item.
      shared_ptr<string> statusMessage_ {};
      // The multi-cloud provider account name.
      shared_ptr<string> vendorUserName_ {};
    };

    virtual bool empty() const override { return this->basicData_ == nullptr
        && this->checks_ == nullptr && this->columns_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // basicData Field Functions 
    bool hasBasicData() const { return this->basicData_ != nullptr;};
    void deleteBasicData() { this->basicData_ = nullptr;};
    inline const vector<ListCheckInstanceResultResponseBody::BasicData> & getBasicData() const { DARABONBA_PTR_GET_CONST(basicData_, vector<ListCheckInstanceResultResponseBody::BasicData>) };
    inline vector<ListCheckInstanceResultResponseBody::BasicData> getBasicData() { DARABONBA_PTR_GET(basicData_, vector<ListCheckInstanceResultResponseBody::BasicData>) };
    inline ListCheckInstanceResultResponseBody& setBasicData(const vector<ListCheckInstanceResultResponseBody::BasicData> & basicData) { DARABONBA_PTR_SET_VALUE(basicData_, basicData) };
    inline ListCheckInstanceResultResponseBody& setBasicData(vector<ListCheckInstanceResultResponseBody::BasicData> && basicData) { DARABONBA_PTR_SET_RVALUE(basicData_, basicData) };


    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<Darabonba::Json> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getChecks() { DARABONBA_PTR_GET(checks_, vector<Darabonba::Json>) };
    inline ListCheckInstanceResultResponseBody& setChecks(const vector<Darabonba::Json> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListCheckInstanceResultResponseBody& setChecks(vector<Darabonba::Json> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ListCheckInstanceResultResponseBody::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ListCheckInstanceResultResponseBody::Columns>) };
    inline vector<ListCheckInstanceResultResponseBody::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<ListCheckInstanceResultResponseBody::Columns>) };
    inline ListCheckInstanceResultResponseBody& setColumns(const vector<ListCheckInstanceResultResponseBody::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ListCheckInstanceResultResponseBody& setColumns(vector<ListCheckInstanceResultResponseBody::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckInstanceResultResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckInstanceResultResponseBody::PageInfo) };
    inline ListCheckInstanceResultResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckInstanceResultResponseBody::PageInfo) };
    inline ListCheckInstanceResultResponseBody& setPageInfo(const ListCheckInstanceResultResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckInstanceResultResponseBody& setPageInfo(ListCheckInstanceResultResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about the affected instances.
    shared_ptr<vector<ListCheckInstanceResultResponseBody::BasicData>> basicData_ {};
    // The extended information about the instances.
    shared_ptr<vector<Darabonba::Json>> checks_ {};
    // The metadata information about the search conditions that can be used to filter instances.
    shared_ptr<vector<ListCheckInstanceResultResponseBody::Columns>> columns_ {};
    // The pagination information.
    shared_ptr<ListCheckInstanceResultResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
