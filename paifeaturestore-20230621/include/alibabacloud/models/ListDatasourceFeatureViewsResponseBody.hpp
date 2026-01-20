// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalUsageStatistics, totalUsageStatistics_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalUsageStatistics, totalUsageStatistics_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListDatasourceFeatureViewsResponseBody() = default ;
    ListDatasourceFeatureViewsResponseBody(const ListDatasourceFeatureViewsResponseBody &) = default ;
    ListDatasourceFeatureViewsResponseBody(ListDatasourceFeatureViewsResponseBody &&) = default ;
    ListDatasourceFeatureViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBody() = default ;
    ListDatasourceFeatureViewsResponseBody& operator=(const ListDatasourceFeatureViewsResponseBody &) = default ;
    ListDatasourceFeatureViewsResponseBody& operator=(ListDatasourceFeatureViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TotalUsageStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TotalUsageStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(TotalDiskUsage, totalDiskUsage_);
        DARABONBA_PTR_TO_JSON(TotalMemoryUsage, totalMemoryUsage_);
        DARABONBA_PTR_TO_JSON(TotalReadWriteCount, totalReadWriteCount_);
      };
      friend void from_json(const Darabonba::Json& j, TotalUsageStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalDiskUsage, totalDiskUsage_);
        DARABONBA_PTR_FROM_JSON(TotalMemoryUsage, totalMemoryUsage_);
        DARABONBA_PTR_FROM_JSON(TotalReadWriteCount, totalReadWriteCount_);
      };
      TotalUsageStatistics() = default ;
      TotalUsageStatistics(const TotalUsageStatistics &) = default ;
      TotalUsageStatistics(TotalUsageStatistics &&) = default ;
      TotalUsageStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TotalUsageStatistics() = default ;
      TotalUsageStatistics& operator=(const TotalUsageStatistics &) = default ;
      TotalUsageStatistics& operator=(TotalUsageStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TotalReadWriteCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalReadWriteCount& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(TotalReadCount, totalReadCount_);
          DARABONBA_PTR_TO_JSON(TotalWriteCount, totalWriteCount_);
        };
        friend void from_json(const Darabonba::Json& j, TotalReadWriteCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(TotalReadCount, totalReadCount_);
          DARABONBA_PTR_FROM_JSON(TotalWriteCount, totalWriteCount_);
        };
        TotalReadWriteCount() = default ;
        TotalReadWriteCount(const TotalReadWriteCount &) = default ;
        TotalReadWriteCount(TotalReadWriteCount &&) = default ;
        TotalReadWriteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalReadWriteCount() = default ;
        TotalReadWriteCount& operator=(const TotalReadWriteCount &) = default ;
        TotalReadWriteCount& operator=(TotalReadWriteCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->totalReadCount_ == nullptr && this->totalWriteCount_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline TotalReadWriteCount& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // totalReadCount Field Functions 
        bool hasTotalReadCount() const { return this->totalReadCount_ != nullptr;};
        void deleteTotalReadCount() { this->totalReadCount_ = nullptr;};
        inline int64_t getTotalReadCount() const { DARABONBA_PTR_GET_DEFAULT(totalReadCount_, 0L) };
        inline TotalReadWriteCount& setTotalReadCount(int64_t totalReadCount) { DARABONBA_PTR_SET_VALUE(totalReadCount_, totalReadCount) };


        // totalWriteCount Field Functions 
        bool hasTotalWriteCount() const { return this->totalWriteCount_ != nullptr;};
        void deleteTotalWriteCount() { this->totalWriteCount_ = nullptr;};
        inline int64_t getTotalWriteCount() const { DARABONBA_PTR_GET_DEFAULT(totalWriteCount_, 0L) };
        inline TotalReadWriteCount& setTotalWriteCount(int64_t totalWriteCount) { DARABONBA_PTR_SET_VALUE(totalWriteCount_, totalWriteCount) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<int64_t> totalReadCount_ {};
        shared_ptr<int64_t> totalWriteCount_ {};
      };

      virtual bool empty() const override { return this->totalDiskUsage_ == nullptr
        && this->totalMemoryUsage_ == nullptr && this->totalReadWriteCount_ == nullptr; };
      // totalDiskUsage Field Functions 
      bool hasTotalDiskUsage() const { return this->totalDiskUsage_ != nullptr;};
      void deleteTotalDiskUsage() { this->totalDiskUsage_ = nullptr;};
      inline double getTotalDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(totalDiskUsage_, 0.0) };
      inline TotalUsageStatistics& setTotalDiskUsage(double totalDiskUsage) { DARABONBA_PTR_SET_VALUE(totalDiskUsage_, totalDiskUsage) };


      // totalMemoryUsage Field Functions 
      bool hasTotalMemoryUsage() const { return this->totalMemoryUsage_ != nullptr;};
      void deleteTotalMemoryUsage() { this->totalMemoryUsage_ = nullptr;};
      inline double getTotalMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(totalMemoryUsage_, 0.0) };
      inline TotalUsageStatistics& setTotalMemoryUsage(double totalMemoryUsage) { DARABONBA_PTR_SET_VALUE(totalMemoryUsage_, totalMemoryUsage) };


      // totalReadWriteCount Field Functions 
      bool hasTotalReadWriteCount() const { return this->totalReadWriteCount_ != nullptr;};
      void deleteTotalReadWriteCount() { this->totalReadWriteCount_ = nullptr;};
      inline const vector<TotalUsageStatistics::TotalReadWriteCount> & getTotalReadWriteCount() const { DARABONBA_PTR_GET_CONST(totalReadWriteCount_, vector<TotalUsageStatistics::TotalReadWriteCount>) };
      inline vector<TotalUsageStatistics::TotalReadWriteCount> getTotalReadWriteCount() { DARABONBA_PTR_GET(totalReadWriteCount_, vector<TotalUsageStatistics::TotalReadWriteCount>) };
      inline TotalUsageStatistics& setTotalReadWriteCount(const vector<TotalUsageStatistics::TotalReadWriteCount> & totalReadWriteCount) { DARABONBA_PTR_SET_VALUE(totalReadWriteCount_, totalReadWriteCount) };
      inline TotalUsageStatistics& setTotalReadWriteCount(vector<TotalUsageStatistics::TotalReadWriteCount> && totalReadWriteCount) { DARABONBA_PTR_SET_RVALUE(totalReadWriteCount_, totalReadWriteCount) };


    protected:
      shared_ptr<double> totalDiskUsage_ {};
      shared_ptr<double> totalMemoryUsage_ {};
      shared_ptr<vector<TotalUsageStatistics::TotalReadWriteCount>> totalReadWriteCount_ {};
    };

    class FeatureViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeatureViews& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(FeatureEntityName, featureEntityName_);
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(TTL, TTL_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UsageStatistics, usageStatistics_);
      };
      friend void from_json(const Darabonba::Json& j, FeatureViews& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(FeatureEntityName, featureEntityName_);
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(TTL, TTL_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UsageStatistics, usageStatistics_);
      };
      FeatureViews() = default ;
      FeatureViews(const FeatureViews &) = default ;
      FeatureViews(FeatureViews &&) = default ;
      FeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeatureViews() = default ;
      FeatureViews& operator=(const FeatureViews &) = default ;
      FeatureViews& operator=(FeatureViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
          DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
          DARABONBA_PTR_TO_JSON(ReadWriteCount, readWriteCount_);
          DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        };
        friend void from_json(const Darabonba::Json& j, UsageStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
          DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
          DARABONBA_PTR_FROM_JSON(ReadWriteCount, readWriteCount_);
          DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        };
        UsageStatistics() = default ;
        UsageStatistics(const UsageStatistics &) = default ;
        UsageStatistics(UsageStatistics &&) = default ;
        UsageStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageStatistics() = default ;
        UsageStatistics& operator=(const UsageStatistics &) = default ;
        UsageStatistics& operator=(UsageStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReadWriteCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadWriteCount& obj) { 
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
            DARABONBA_PTR_TO_JSON(WriteCount, writeCount_);
          };
          friend void from_json(const Darabonba::Json& j, ReadWriteCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
            DARABONBA_PTR_FROM_JSON(WriteCount, writeCount_);
          };
          ReadWriteCount() = default ;
          ReadWriteCount(const ReadWriteCount &) = default ;
          ReadWriteCount(ReadWriteCount &&) = default ;
          ReadWriteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadWriteCount() = default ;
          ReadWriteCount& operator=(const ReadWriteCount &) = default ;
          ReadWriteCount& operator=(ReadWriteCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->date_ == nullptr
        && this->readCount_ == nullptr && this->writeCount_ == nullptr; };
          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline ReadWriteCount& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // readCount Field Functions 
          bool hasReadCount() const { return this->readCount_ != nullptr;};
          void deleteReadCount() { this->readCount_ = nullptr;};
          inline int64_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
          inline ReadWriteCount& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


          // writeCount Field Functions 
          bool hasWriteCount() const { return this->writeCount_ != nullptr;};
          void deleteWriteCount() { this->writeCount_ = nullptr;};
          inline int64_t getWriteCount() const { DARABONBA_PTR_GET_DEFAULT(writeCount_, 0L) };
          inline ReadWriteCount& setWriteCount(int64_t writeCount) { DARABONBA_PTR_SET_VALUE(writeCount_, writeCount) };


        protected:
          shared_ptr<string> date_ {};
          shared_ptr<int64_t> readCount_ {};
          shared_ptr<int64_t> writeCount_ {};
        };

        virtual bool empty() const override { return this->diskUsage_ == nullptr
        && this->memoryUsage_ == nullptr && this->readWriteCount_ == nullptr && this->rowCount_ == nullptr; };
        // diskUsage Field Functions 
        bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
        void deleteDiskUsage() { this->diskUsage_ = nullptr;};
        inline double getDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, 0.0) };
        inline UsageStatistics& setDiskUsage(double diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


        // memoryUsage Field Functions 
        bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
        void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
        inline double getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0.0) };
        inline UsageStatistics& setMemoryUsage(double memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


        // readWriteCount Field Functions 
        bool hasReadWriteCount() const { return this->readWriteCount_ != nullptr;};
        void deleteReadWriteCount() { this->readWriteCount_ = nullptr;};
        inline const vector<UsageStatistics::ReadWriteCount> & getReadWriteCount() const { DARABONBA_PTR_GET_CONST(readWriteCount_, vector<UsageStatistics::ReadWriteCount>) };
        inline vector<UsageStatistics::ReadWriteCount> getReadWriteCount() { DARABONBA_PTR_GET(readWriteCount_, vector<UsageStatistics::ReadWriteCount>) };
        inline UsageStatistics& setReadWriteCount(const vector<UsageStatistics::ReadWriteCount> & readWriteCount) { DARABONBA_PTR_SET_VALUE(readWriteCount_, readWriteCount) };
        inline UsageStatistics& setReadWriteCount(vector<UsageStatistics::ReadWriteCount> && readWriteCount) { DARABONBA_PTR_SET_RVALUE(readWriteCount_, readWriteCount) };


        // rowCount Field Functions 
        bool hasRowCount() const { return this->rowCount_ != nullptr;};
        void deleteRowCount() { this->rowCount_ = nullptr;};
        inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
        inline UsageStatistics& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      protected:
        shared_ptr<double> diskUsage_ {};
        shared_ptr<double> memoryUsage_ {};
        shared_ptr<vector<UsageStatistics::ReadWriteCount>> readWriteCount_ {};
        shared_ptr<int64_t> rowCount_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->featureEntityName_ == nullptr && this->featureViewId_ == nullptr && this->name_ == nullptr && this->projectName_ == nullptr && this->TTL_ == nullptr
        && this->type_ == nullptr && this->usageStatistics_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline FeatureViews& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // featureEntityName Field Functions 
      bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
      void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
      inline string getFeatureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
      inline FeatureViews& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline FeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline FeatureViews& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // TTL Field Functions 
      bool hasTTL() const { return this->TTL_ != nullptr;};
      void deleteTTL() { this->TTL_ = nullptr;};
      inline int32_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
      inline FeatureViews& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // usageStatistics Field Functions 
      bool hasUsageStatistics() const { return this->usageStatistics_ != nullptr;};
      void deleteUsageStatistics() { this->usageStatistics_ = nullptr;};
      inline const FeatureViews::UsageStatistics & getUsageStatistics() const { DARABONBA_PTR_GET_CONST(usageStatistics_, FeatureViews::UsageStatistics) };
      inline FeatureViews::UsageStatistics getUsageStatistics() { DARABONBA_PTR_GET(usageStatistics_, FeatureViews::UsageStatistics) };
      inline FeatureViews& setUsageStatistics(const FeatureViews::UsageStatistics & usageStatistics) { DARABONBA_PTR_SET_VALUE(usageStatistics_, usageStatistics) };
      inline FeatureViews& setUsageStatistics(FeatureViews::UsageStatistics && usageStatistics) { DARABONBA_PTR_SET_RVALUE(usageStatistics_, usageStatistics) };


    protected:
      shared_ptr<string> config_ {};
      shared_ptr<string> featureEntityName_ {};
      shared_ptr<string> featureViewId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int32_t> TTL_ {};
      shared_ptr<string> type_ {};
      shared_ptr<FeatureViews::UsageStatistics> usageStatistics_ {};
    };

    virtual bool empty() const override { return this->featureViews_ == nullptr
        && this->totalCount_ == nullptr && this->totalUsageStatistics_ == nullptr && this->requestId_ == nullptr; };
    // featureViews Field Functions 
    bool hasFeatureViews() const { return this->featureViews_ != nullptr;};
    void deleteFeatureViews() { this->featureViews_ = nullptr;};
    inline const vector<ListDatasourceFeatureViewsResponseBody::FeatureViews> & getFeatureViews() const { DARABONBA_PTR_GET_CONST(featureViews_, vector<ListDatasourceFeatureViewsResponseBody::FeatureViews>) };
    inline vector<ListDatasourceFeatureViewsResponseBody::FeatureViews> getFeatureViews() { DARABONBA_PTR_GET(featureViews_, vector<ListDatasourceFeatureViewsResponseBody::FeatureViews>) };
    inline ListDatasourceFeatureViewsResponseBody& setFeatureViews(const vector<ListDatasourceFeatureViewsResponseBody::FeatureViews> & featureViews) { DARABONBA_PTR_SET_VALUE(featureViews_, featureViews) };
    inline ListDatasourceFeatureViewsResponseBody& setFeatureViews(vector<ListDatasourceFeatureViewsResponseBody::FeatureViews> && featureViews) { DARABONBA_PTR_SET_RVALUE(featureViews_, featureViews) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalUsageStatistics Field Functions 
    bool hasTotalUsageStatistics() const { return this->totalUsageStatistics_ != nullptr;};
    void deleteTotalUsageStatistics() { this->totalUsageStatistics_ = nullptr;};
    inline const ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics & getTotalUsageStatistics() const { DARABONBA_PTR_GET_CONST(totalUsageStatistics_, ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics getTotalUsageStatistics() { DARABONBA_PTR_GET(totalUsageStatistics_, ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalUsageStatistics(const ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics & totalUsageStatistics) { DARABONBA_PTR_SET_VALUE(totalUsageStatistics_, totalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalUsageStatistics(ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics && totalUsageStatistics) { DARABONBA_PTR_SET_RVALUE(totalUsageStatistics_, totalUsageStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasourceFeatureViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDatasourceFeatureViewsResponseBody::FeatureViews>> featureViews_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<ListDatasourceFeatureViewsResponseBody::TotalUsageStatistics> totalUsageStatistics_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
