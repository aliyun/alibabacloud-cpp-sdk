// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowInfo, dataFlowInfo_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowInfo, dataFlowInfo_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataFlowsResponseBody() = default ;
    DescribeDataFlowsResponseBody(const DescribeDataFlowsResponseBody &) = default ;
    DescribeDataFlowsResponseBody(DescribeDataFlowsResponseBody &&) = default ;
    DescribeDataFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsResponseBody() = default ;
    DescribeDataFlowsResponseBody& operator=(const DescribeDataFlowsResponseBody &) = default ;
    DescribeDataFlowsResponseBody& operator=(DescribeDataFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataFlowInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataFlowInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataFlow, dataFlow_);
      };
      friend void from_json(const Darabonba::Json& j, DataFlowInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataFlow, dataFlow_);
      };
      DataFlowInfo() = default ;
      DataFlowInfo(const DataFlowInfo &) = default ;
      DataFlowInfo(DataFlowInfo &&) = default ;
      DataFlowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataFlowInfo() = default ;
      DataFlowInfo& operator=(const DataFlowInfo &) = default ;
      DataFlowInfo& operator=(DataFlowInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataFlow& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRefresh, autoRefresh_);
          DARABONBA_PTR_TO_JSON(AutoRefreshInterval, autoRefreshInterval_);
          DARABONBA_PTR_TO_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
          DARABONBA_PTR_TO_JSON(FsetDescription, fsetDescription_);
          DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
          DARABONBA_PTR_TO_JSON(SourceSecurityType, sourceSecurityType_);
          DARABONBA_PTR_TO_JSON(SourceStorage, sourceStorage_);
          DARABONBA_PTR_TO_JSON(SourceStoragePath, sourceStoragePath_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Throughput, throughput_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, DataFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRefresh, autoRefresh_);
          DARABONBA_PTR_FROM_JSON(AutoRefreshInterval, autoRefreshInterval_);
          DARABONBA_PTR_FROM_JSON(AutoRefreshPolicy, autoRefreshPolicy_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
          DARABONBA_PTR_FROM_JSON(FsetDescription, fsetDescription_);
          DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
          DARABONBA_PTR_FROM_JSON(SourceSecurityType, sourceSecurityType_);
          DARABONBA_PTR_FROM_JSON(SourceStorage, sourceStorage_);
          DARABONBA_PTR_FROM_JSON(SourceStoragePath, sourceStoragePath_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        DataFlow() = default ;
        DataFlow(const DataFlow &) = default ;
        DataFlow(DataFlow &&) = default ;
        DataFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataFlow() = default ;
        DataFlow& operator=(const DataFlow &) = default ;
        DataFlow& operator=(DataFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AutoRefresh : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AutoRefresh& obj) { 
            DARABONBA_PTR_TO_JSON(AutoRefresh, autoRefresh_);
          };
          friend void from_json(const Darabonba::Json& j, AutoRefresh& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoRefresh, autoRefresh_);
          };
          AutoRefresh() = default ;
          AutoRefresh(const AutoRefresh &) = default ;
          AutoRefresh(AutoRefresh &&) = default ;
          AutoRefresh(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AutoRefresh() = default ;
          AutoRefresh& operator=(const AutoRefresh &) = default ;
          AutoRefresh& operator=(AutoRefresh &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AutoRefreshItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AutoRefreshItem& obj) { 
              DARABONBA_PTR_TO_JSON(RefreshPath, refreshPath_);
            };
            friend void from_json(const Darabonba::Json& j, AutoRefreshItem& obj) { 
              DARABONBA_PTR_FROM_JSON(RefreshPath, refreshPath_);
            };
            AutoRefreshItem() = default ;
            AutoRefreshItem(const AutoRefreshItem &) = default ;
            AutoRefreshItem(AutoRefreshItem &&) = default ;
            AutoRefreshItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AutoRefreshItem() = default ;
            AutoRefreshItem& operator=(const AutoRefreshItem &) = default ;
            AutoRefreshItem& operator=(AutoRefreshItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->refreshPath_ == nullptr; };
            // refreshPath Field Functions 
            bool hasRefreshPath() const { return this->refreshPath_ != nullptr;};
            void deleteRefreshPath() { this->refreshPath_ = nullptr;};
            inline string getRefreshPath() const { DARABONBA_PTR_GET_DEFAULT(refreshPath_, "") };
            inline AutoRefreshItem& setRefreshPath(string refreshPath) { DARABONBA_PTR_SET_VALUE(refreshPath_, refreshPath) };


          protected:
            // The automatic update directory. CPFS automatically checks whether the source data only in the directory is updated and imports the updated data.
            // 
            // Limits:
            // 
            // *   The directory must be 2 to 1,024 characters in length.
            // *   The directory must be encoded in UTF-8.
            // *   The directory must start and end with a forward slash (/).
            // 
            // >  The directory must be an existing directory in the CPFS file system and must be in a fileset where the dataflow is enabled.
            shared_ptr<string> refreshPath_ {};
          };

          virtual bool empty() const override { return this->autoRefresh_ == nullptr; };
          // autoRefresh Field Functions 
          bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
          void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
          inline const vector<AutoRefresh::AutoRefreshItem> & getAutoRefresh() const { DARABONBA_PTR_GET_CONST(autoRefresh_, vector<AutoRefresh::AutoRefreshItem>) };
          inline vector<AutoRefresh::AutoRefreshItem> getAutoRefresh() { DARABONBA_PTR_GET(autoRefresh_, vector<AutoRefresh::AutoRefreshItem>) };
          inline AutoRefresh& setAutoRefresh(const vector<AutoRefresh::AutoRefreshItem> & autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };
          inline AutoRefresh& setAutoRefresh(vector<AutoRefresh::AutoRefreshItem> && autoRefresh) { DARABONBA_PTR_SET_RVALUE(autoRefresh_, autoRefresh) };


        protected:
          shared_ptr<vector<AutoRefresh::AutoRefreshItem>> autoRefresh_ {};
        };

        virtual bool empty() const override { return this->autoRefresh_ == nullptr
        && this->autoRefreshInterval_ == nullptr && this->autoRefreshPolicy_ == nullptr && this->createTime_ == nullptr && this->dataFlowId_ == nullptr && this->description_ == nullptr
        && this->errorMessage_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr && this->fsetDescription_ == nullptr && this->fsetId_ == nullptr
        && this->sourceSecurityType_ == nullptr && this->sourceStorage_ == nullptr && this->sourceStoragePath_ == nullptr && this->status_ == nullptr && this->throughput_ == nullptr
        && this->updateTime_ == nullptr; };
        // autoRefresh Field Functions 
        bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
        void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
        inline const DataFlow::AutoRefresh & getAutoRefresh() const { DARABONBA_PTR_GET_CONST(autoRefresh_, DataFlow::AutoRefresh) };
        inline DataFlow::AutoRefresh getAutoRefresh() { DARABONBA_PTR_GET(autoRefresh_, DataFlow::AutoRefresh) };
        inline DataFlow& setAutoRefresh(const DataFlow::AutoRefresh & autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };
        inline DataFlow& setAutoRefresh(DataFlow::AutoRefresh && autoRefresh) { DARABONBA_PTR_SET_RVALUE(autoRefresh_, autoRefresh) };


        // autoRefreshInterval Field Functions 
        bool hasAutoRefreshInterval() const { return this->autoRefreshInterval_ != nullptr;};
        void deleteAutoRefreshInterval() { this->autoRefreshInterval_ = nullptr;};
        inline int64_t getAutoRefreshInterval() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshInterval_, 0L) };
        inline DataFlow& setAutoRefreshInterval(int64_t autoRefreshInterval) { DARABONBA_PTR_SET_VALUE(autoRefreshInterval_, autoRefreshInterval) };


        // autoRefreshPolicy Field Functions 
        bool hasAutoRefreshPolicy() const { return this->autoRefreshPolicy_ != nullptr;};
        void deleteAutoRefreshPolicy() { this->autoRefreshPolicy_ = nullptr;};
        inline string getAutoRefreshPolicy() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshPolicy_, "") };
        inline DataFlow& setAutoRefreshPolicy(string autoRefreshPolicy) { DARABONBA_PTR_SET_VALUE(autoRefreshPolicy_, autoRefreshPolicy) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataFlow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataFlowId Field Functions 
        bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
        void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
        inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
        inline DataFlow& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataFlow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataFlow& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline DataFlow& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // fileSystemPath Field Functions 
        bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
        void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
        inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
        inline DataFlow& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


        // fsetDescription Field Functions 
        bool hasFsetDescription() const { return this->fsetDescription_ != nullptr;};
        void deleteFsetDescription() { this->fsetDescription_ = nullptr;};
        inline string getFsetDescription() const { DARABONBA_PTR_GET_DEFAULT(fsetDescription_, "") };
        inline DataFlow& setFsetDescription(string fsetDescription) { DARABONBA_PTR_SET_VALUE(fsetDescription_, fsetDescription) };


        // fsetId Field Functions 
        bool hasFsetId() const { return this->fsetId_ != nullptr;};
        void deleteFsetId() { this->fsetId_ = nullptr;};
        inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
        inline DataFlow& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


        // sourceSecurityType Field Functions 
        bool hasSourceSecurityType() const { return this->sourceSecurityType_ != nullptr;};
        void deleteSourceSecurityType() { this->sourceSecurityType_ = nullptr;};
        inline string getSourceSecurityType() const { DARABONBA_PTR_GET_DEFAULT(sourceSecurityType_, "") };
        inline DataFlow& setSourceSecurityType(string sourceSecurityType) { DARABONBA_PTR_SET_VALUE(sourceSecurityType_, sourceSecurityType) };


        // sourceStorage Field Functions 
        bool hasSourceStorage() const { return this->sourceStorage_ != nullptr;};
        void deleteSourceStorage() { this->sourceStorage_ = nullptr;};
        inline string getSourceStorage() const { DARABONBA_PTR_GET_DEFAULT(sourceStorage_, "") };
        inline DataFlow& setSourceStorage(string sourceStorage) { DARABONBA_PTR_SET_VALUE(sourceStorage_, sourceStorage) };


        // sourceStoragePath Field Functions 
        bool hasSourceStoragePath() const { return this->sourceStoragePath_ != nullptr;};
        void deleteSourceStoragePath() { this->sourceStoragePath_ = nullptr;};
        inline string getSourceStoragePath() const { DARABONBA_PTR_GET_DEFAULT(sourceStoragePath_, "") };
        inline DataFlow& setSourceStoragePath(string sourceStoragePath) { DARABONBA_PTR_SET_VALUE(sourceStoragePath_, sourceStoragePath) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataFlow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // throughput Field Functions 
        bool hasThroughput() const { return this->throughput_ != nullptr;};
        void deleteThroughput() { this->throughput_ = nullptr;};
        inline int64_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
        inline DataFlow& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline DataFlow& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The details about automatic update policies.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<DataFlow::AutoRefresh> autoRefresh_ {};
        // The automatic update interval. CPFS checks whether data is updated in the directory at the interval specified by this parameter. If data is updated, CPFS starts an automatic update task. Unit: minutes.
        // 
        // Valid values: 5 to 526600. Default value: 10.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<int64_t> autoRefreshInterval_ {};
        // The automatic update policy. The updated data in the source storage is imported into the CPFS file system based on the policy. The following information is displayed:
        // 
        // *   None: Updated data in the source storage is not automatically imported into the CPFS file system. You can run a dataflow task to import the updated data from the source storage.
        // *   ImportChanged: Updated data in the source storage is automatically imported into the CPFS file system.
        // 
        // >  Only CPFS is supported.
        shared_ptr<string> autoRefreshPolicy_ {};
        // The time when the fileset was created.
        // 
        // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<string> createTime_ {};
        // The ID of the dataflow.
        shared_ptr<string> dataFlowId_ {};
        // The description of the dataflow.
        // 
        // Limits:
        // 
        // *   The name must be 2 to 128 characters in length and
        // *   start with a letter but cannot start with `http://` or `https://`.
        // *   The name can contain digits, letters, colons (:), underscores (_), and hyphens (-).
        shared_ptr<string> description_ {};
        // The error message. Valid values:
        // 
        // *   None (default): The dataflow status is normal.
        // *   SourceStorageUnreachable: The access path of the source storage is not found.
        // *   ThroughputTooLow: The dataflow throughput is low.
        shared_ptr<string> errorMessage_ {};
        // The ID of the file system.
        shared_ptr<string> fileSystemId_ {};
        // The directory of the fileset in the CPFS file system.
        // 
        // Limits:
        // 
        // *   The directory must be 2 to 1024 characters in length.
        // *   The directory must be encoded in UTF-8.
        // *   The directory must start and end with a forward slash (/).
        // *   The directory must be a fileset directory in the CPFS file system.
        // 
        // >  Only CPFS is supported.
        shared_ptr<string> fileSystemPath_ {};
        // The description of the automatic update.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<string> fsetDescription_ {};
        // The fileset ID.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<string> fsetId_ {};
        // The type of security mechanism for the source storage. This parameter must be specified if the source storage is accessed with a security mechanism. Valid value:
        // 
        // *   Null (default): The OSS bucket can be accessed without a security mechanism.
        // *   SSL: The source storage must be accessed with an SSL certificate.
        shared_ptr<string> sourceSecurityType_ {};
        // The access path of the source storage. Format: `<storage type>://[<account id>:]<path>`.
        // 
        // Among them:
        // 
        // *   storage type: Only OSS is supported.
        // 
        // *   account id: The UID of the account of the source storage.
        // 
        // *   path: The name of the OSS bucket.
        // 
        //     *   The name can contain only lowercase letters, digits, and hyphens (-). The name must start and end with a lowercase letter or digit.
        //     *   The name must be 8 to 128 characters in length.
        //     *   Must be encoded in UTF-8.
        //     *   The name cannot start with http:// or https://.
        // 
        // > 
        // 
        // *   The OSS bucket must be an existing bucket in the region.
        // 
        // *   Only CPFS for Lingjun V2.6.0 and later support the account id parameter.
        shared_ptr<string> sourceStorage_ {};
        // The access path in the bucket of the source storage.
        // 
        // >  Only CPFS for Lingjun supports this parameter.
        shared_ptr<string> sourceStoragePath_ {};
        // The dataflow status. The following information is displayed:
        // 
        // *   Starting: The dataflow is being created or enabled.
        // *   Running: The dataflow has been created and is running properly.
        // *   Updating: The dataflow is being modified. For example, the dataflow throughput is increased and the automatic update interval is modified.
        // *   Deleting: The dataflow is being deleted.
        // *   Stopping: The dataflow is being disabled.
        // *   Stopped: The dataflow has been disabled.
        // *   Misconfigured: The dataflow configuration is abnormal. For example, the source storage is inaccessible, and the automatic update cannot be completed due to low dataflow throughput.
        shared_ptr<string> status_ {};
        // The maximum dataflow throughput. Unit: MB/s. Valid value:
        // 
        // *   600
        // *   1200
        // *   1500
        // 
        // > 
        // 
        // *   The dataflow throughput must be less than the I/O throughput of the file system.
        // 
        // *   Only CPFS supports this parameter.
        shared_ptr<int64_t> throughput_ {};
        // The time when the fileset was last updated.
        // 
        // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
        // 
        // >  Only CPFS supports this parameter.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->dataFlow_ == nullptr; };
      // dataFlow Field Functions 
      bool hasDataFlow() const { return this->dataFlow_ != nullptr;};
      void deleteDataFlow() { this->dataFlow_ = nullptr;};
      inline const vector<DataFlowInfo::DataFlow> & getDataFlow() const { DARABONBA_PTR_GET_CONST(dataFlow_, vector<DataFlowInfo::DataFlow>) };
      inline vector<DataFlowInfo::DataFlow> getDataFlow() { DARABONBA_PTR_GET(dataFlow_, vector<DataFlowInfo::DataFlow>) };
      inline DataFlowInfo& setDataFlow(const vector<DataFlowInfo::DataFlow> & dataFlow) { DARABONBA_PTR_SET_VALUE(dataFlow_, dataFlow) };
      inline DataFlowInfo& setDataFlow(vector<DataFlowInfo::DataFlow> && dataFlow) { DARABONBA_PTR_SET_RVALUE(dataFlow_, dataFlow) };


    protected:
      shared_ptr<vector<DataFlowInfo::DataFlow>> dataFlow_ {};
    };

    virtual bool empty() const override { return this->dataFlowInfo_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // dataFlowInfo Field Functions 
    bool hasDataFlowInfo() const { return this->dataFlowInfo_ != nullptr;};
    void deleteDataFlowInfo() { this->dataFlowInfo_ = nullptr;};
    inline const DescribeDataFlowsResponseBody::DataFlowInfo & getDataFlowInfo() const { DARABONBA_PTR_GET_CONST(dataFlowInfo_, DescribeDataFlowsResponseBody::DataFlowInfo) };
    inline DescribeDataFlowsResponseBody::DataFlowInfo getDataFlowInfo() { DARABONBA_PTR_GET(dataFlowInfo_, DescribeDataFlowsResponseBody::DataFlowInfo) };
    inline DescribeDataFlowsResponseBody& setDataFlowInfo(const DescribeDataFlowsResponseBody::DataFlowInfo & dataFlowInfo) { DARABONBA_PTR_SET_VALUE(dataFlowInfo_, dataFlowInfo) };
    inline DescribeDataFlowsResponseBody& setDataFlowInfo(DescribeDataFlowsResponseBody::DataFlowInfo && dataFlowInfo) { DARABONBA_PTR_SET_RVALUE(dataFlowInfo_, dataFlowInfo) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dataflow details.
    shared_ptr<DescribeDataFlowsResponseBody::DataFlowInfo> dataFlowInfo_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
