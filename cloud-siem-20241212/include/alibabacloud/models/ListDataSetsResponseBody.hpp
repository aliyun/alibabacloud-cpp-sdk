// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSets, dataSets_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSets, dataSets_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataSetsResponseBody() = default ;
    ListDataSetsResponseBody(const ListDataSetsResponseBody &) = default ;
    ListDataSetsResponseBody(ListDataSetsResponseBody &&) = default ;
    ListDataSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetsResponseBody() = default ;
    ListDataSetsResponseBody& operator=(const ListDataSetsResponseBody &) = default ;
    ListDataSetsResponseBody& operator=(ListDataSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSets& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSetDescription, dataSetDescription_);
        DARABONBA_PTR_TO_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
        DARABONBA_PTR_TO_JSON(DataSetFieldNames, dataSetFieldNames_);
        DARABONBA_PTR_TO_JSON(DataSetFileName, dataSetFileName_);
        DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_TO_JSON(DataSetReferences, dataSetReferences_);
        DARABONBA_PTR_TO_JSON(DataSetStatus, dataSetStatus_);
        DARABONBA_PTR_TO_JSON(DataSetType, dataSetType_);
        DARABONBA_PTR_TO_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataSets& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSetDescription, dataSetDescription_);
        DARABONBA_PTR_FROM_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
        DARABONBA_PTR_FROM_JSON(DataSetFieldNames, dataSetFieldNames_);
        DARABONBA_PTR_FROM_JSON(DataSetFileName, dataSetFileName_);
        DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_FROM_JSON(DataSetReferences, dataSetReferences_);
        DARABONBA_PTR_FROM_JSON(DataSetStatus, dataSetStatus_);
        DARABONBA_PTR_FROM_JSON(DataSetType, dataSetType_);
        DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DataSets() = default ;
      DataSets(const DataSets &) = default ;
      DataSets(DataSets &&) = default ;
      DataSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSets() = default ;
      DataSets& operator=(const DataSets &) = default ;
      DataSets& operator=(DataSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpWhitelistRecognizers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpWhitelistRecognizers& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
          DARABONBA_PTR_TO_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
          DARABONBA_PTR_TO_JSON(RecognizeScope, recognizeScope_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, IpWhitelistRecognizers& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
          DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
          DARABONBA_PTR_FROM_JSON(RecognizeScope, recognizeScope_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        IpWhitelistRecognizers() = default ;
        IpWhitelistRecognizers(const IpWhitelistRecognizers &) = default ;
        IpWhitelistRecognizers(IpWhitelistRecognizers &&) = default ;
        IpWhitelistRecognizers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpWhitelistRecognizers() = default ;
        IpWhitelistRecognizers& operator=(const IpWhitelistRecognizers &) = default ;
        IpWhitelistRecognizers& operator=(IpWhitelistRecognizers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRecognizeStatus_ == nullptr
        && this->ipWhitelistRecognizerType_ == nullptr && this->recognizeScope_ == nullptr && this->updateTime_ == nullptr; };
        // autoRecognizeStatus Field Functions 
        bool hasAutoRecognizeStatus() const { return this->autoRecognizeStatus_ != nullptr;};
        void deleteAutoRecognizeStatus() { this->autoRecognizeStatus_ = nullptr;};
        inline string getAutoRecognizeStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRecognizeStatus_, "") };
        inline IpWhitelistRecognizers& setAutoRecognizeStatus(string autoRecognizeStatus) { DARABONBA_PTR_SET_VALUE(autoRecognizeStatus_, autoRecognizeStatus) };


        // ipWhitelistRecognizerType Field Functions 
        bool hasIpWhitelistRecognizerType() const { return this->ipWhitelistRecognizerType_ != nullptr;};
        void deleteIpWhitelistRecognizerType() { this->ipWhitelistRecognizerType_ = nullptr;};
        inline string getIpWhitelistRecognizerType() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelistRecognizerType_, "") };
        inline IpWhitelistRecognizers& setIpWhitelistRecognizerType(string ipWhitelistRecognizerType) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizerType_, ipWhitelistRecognizerType) };


        // recognizeScope Field Functions 
        bool hasRecognizeScope() const { return this->recognizeScope_ != nullptr;};
        void deleteRecognizeScope() { this->recognizeScope_ = nullptr;};
        inline string getRecognizeScope() const { DARABONBA_PTR_GET_DEFAULT(recognizeScope_, "") };
        inline IpWhitelistRecognizers& setRecognizeScope(string recognizeScope) { DARABONBA_PTR_SET_VALUE(recognizeScope_, recognizeScope) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline IpWhitelistRecognizers& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> autoRecognizeStatus_ {};
        shared_ptr<string> ipWhitelistRecognizerType_ {};
        shared_ptr<string> recognizeScope_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      class DataSetReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSetReferences& obj) { 
          DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
          DARABONBA_PTR_TO_JSON(DataSetReferenceId, dataSetReferenceId_);
          DARABONBA_PTR_TO_JSON(DataSetReferenceName, dataSetReferenceName_);
          DARABONBA_PTR_TO_JSON(DataSetReferenceType, dataSetReferenceType_);
        };
        friend void from_json(const Darabonba::Json& j, DataSetReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
          DARABONBA_PTR_FROM_JSON(DataSetReferenceId, dataSetReferenceId_);
          DARABONBA_PTR_FROM_JSON(DataSetReferenceName, dataSetReferenceName_);
          DARABONBA_PTR_FROM_JSON(DataSetReferenceType, dataSetReferenceType_);
        };
        DataSetReferences() = default ;
        DataSetReferences(const DataSetReferences &) = default ;
        DataSetReferences(DataSetReferences &&) = default ;
        DataSetReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSetReferences() = default ;
        DataSetReferences& operator=(const DataSetReferences &) = default ;
        DataSetReferences& operator=(DataSetReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSetId_ == nullptr
        && this->dataSetReferenceId_ == nullptr && this->dataSetReferenceName_ == nullptr && this->dataSetReferenceType_ == nullptr; };
        // dataSetId Field Functions 
        bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
        void deleteDataSetId() { this->dataSetId_ = nullptr;};
        inline string getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
        inline DataSetReferences& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


        // dataSetReferenceId Field Functions 
        bool hasDataSetReferenceId() const { return this->dataSetReferenceId_ != nullptr;};
        void deleteDataSetReferenceId() { this->dataSetReferenceId_ = nullptr;};
        inline string getDataSetReferenceId() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceId_, "") };
        inline DataSetReferences& setDataSetReferenceId(string dataSetReferenceId) { DARABONBA_PTR_SET_VALUE(dataSetReferenceId_, dataSetReferenceId) };


        // dataSetReferenceName Field Functions 
        bool hasDataSetReferenceName() const { return this->dataSetReferenceName_ != nullptr;};
        void deleteDataSetReferenceName() { this->dataSetReferenceName_ = nullptr;};
        inline string getDataSetReferenceName() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceName_, "") };
        inline DataSetReferences& setDataSetReferenceName(string dataSetReferenceName) { DARABONBA_PTR_SET_VALUE(dataSetReferenceName_, dataSetReferenceName) };


        // dataSetReferenceType Field Functions 
        bool hasDataSetReferenceType() const { return this->dataSetReferenceType_ != nullptr;};
        void deleteDataSetReferenceType() { this->dataSetReferenceType_ = nullptr;};
        inline string getDataSetReferenceType() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceType_, "") };
        inline DataSetReferences& setDataSetReferenceType(string dataSetReferenceType) { DARABONBA_PTR_SET_VALUE(dataSetReferenceType_, dataSetReferenceType) };


      protected:
        shared_ptr<string> dataSetId_ {};
        shared_ptr<string> dataSetReferenceId_ {};
        shared_ptr<string> dataSetReferenceName_ {};
        shared_ptr<string> dataSetReferenceType_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSetDescription_ == nullptr && this->dataSetFieldKeyName_ == nullptr && this->dataSetFieldNames_ == nullptr && this->dataSetFileName_ == nullptr && this->dataSetId_ == nullptr
        && this->dataSetName_ == nullptr && this->dataSetReferences_ == nullptr && this->dataSetStatus_ == nullptr && this->dataSetType_ == nullptr && this->ipWhitelistRecognizers_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSetDescription Field Functions 
      bool hasDataSetDescription() const { return this->dataSetDescription_ != nullptr;};
      void deleteDataSetDescription() { this->dataSetDescription_ = nullptr;};
      inline string getDataSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSetDescription_, "") };
      inline DataSets& setDataSetDescription(string dataSetDescription) { DARABONBA_PTR_SET_VALUE(dataSetDescription_, dataSetDescription) };


      // dataSetFieldKeyName Field Functions 
      bool hasDataSetFieldKeyName() const { return this->dataSetFieldKeyName_ != nullptr;};
      void deleteDataSetFieldKeyName() { this->dataSetFieldKeyName_ = nullptr;};
      inline string getDataSetFieldKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldKeyName_, "") };
      inline DataSets& setDataSetFieldKeyName(string dataSetFieldKeyName) { DARABONBA_PTR_SET_VALUE(dataSetFieldKeyName_, dataSetFieldKeyName) };


      // dataSetFieldNames Field Functions 
      bool hasDataSetFieldNames() const { return this->dataSetFieldNames_ != nullptr;};
      void deleteDataSetFieldNames() { this->dataSetFieldNames_ = nullptr;};
      inline string getDataSetFieldNames() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldNames_, "") };
      inline DataSets& setDataSetFieldNames(string dataSetFieldNames) { DARABONBA_PTR_SET_VALUE(dataSetFieldNames_, dataSetFieldNames) };


      // dataSetFileName Field Functions 
      bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
      void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
      inline string getDataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
      inline DataSets& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


      // dataSetId Field Functions 
      bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
      void deleteDataSetId() { this->dataSetId_ = nullptr;};
      inline string getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
      inline DataSets& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


      // dataSetName Field Functions 
      bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
      void deleteDataSetName() { this->dataSetName_ = nullptr;};
      inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
      inline DataSets& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


      // dataSetReferences Field Functions 
      bool hasDataSetReferences() const { return this->dataSetReferences_ != nullptr;};
      void deleteDataSetReferences() { this->dataSetReferences_ = nullptr;};
      inline const vector<DataSets::DataSetReferences> & getDataSetReferences() const { DARABONBA_PTR_GET_CONST(dataSetReferences_, vector<DataSets::DataSetReferences>) };
      inline vector<DataSets::DataSetReferences> getDataSetReferences() { DARABONBA_PTR_GET(dataSetReferences_, vector<DataSets::DataSetReferences>) };
      inline DataSets& setDataSetReferences(const vector<DataSets::DataSetReferences> & dataSetReferences) { DARABONBA_PTR_SET_VALUE(dataSetReferences_, dataSetReferences) };
      inline DataSets& setDataSetReferences(vector<DataSets::DataSetReferences> && dataSetReferences) { DARABONBA_PTR_SET_RVALUE(dataSetReferences_, dataSetReferences) };


      // dataSetStatus Field Functions 
      bool hasDataSetStatus() const { return this->dataSetStatus_ != nullptr;};
      void deleteDataSetStatus() { this->dataSetStatus_ = nullptr;};
      inline int32_t getDataSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSetStatus_, 0) };
      inline DataSets& setDataSetStatus(int32_t dataSetStatus) { DARABONBA_PTR_SET_VALUE(dataSetStatus_, dataSetStatus) };


      // dataSetType Field Functions 
      bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
      void deleteDataSetType() { this->dataSetType_ = nullptr;};
      inline string getDataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, "") };
      inline DataSets& setDataSetType(string dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


      // ipWhitelistRecognizers Field Functions 
      bool hasIpWhitelistRecognizers() const { return this->ipWhitelistRecognizers_ != nullptr;};
      void deleteIpWhitelistRecognizers() { this->ipWhitelistRecognizers_ = nullptr;};
      inline const vector<DataSets::IpWhitelistRecognizers> & getIpWhitelistRecognizers() const { DARABONBA_PTR_GET_CONST(ipWhitelistRecognizers_, vector<DataSets::IpWhitelistRecognizers>) };
      inline vector<DataSets::IpWhitelistRecognizers> getIpWhitelistRecognizers() { DARABONBA_PTR_GET(ipWhitelistRecognizers_, vector<DataSets::IpWhitelistRecognizers>) };
      inline DataSets& setIpWhitelistRecognizers(const vector<DataSets::IpWhitelistRecognizers> & ipWhitelistRecognizers) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };
      inline DataSets& setIpWhitelistRecognizers(vector<DataSets::IpWhitelistRecognizers> && ipWhitelistRecognizers) { DARABONBA_PTR_SET_RVALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataSets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataSetDescription_ {};
      shared_ptr<string> dataSetFieldKeyName_ {};
      shared_ptr<string> dataSetFieldNames_ {};
      shared_ptr<string> dataSetFileName_ {};
      shared_ptr<string> dataSetId_ {};
      shared_ptr<string> dataSetName_ {};
      shared_ptr<vector<DataSets::DataSetReferences>> dataSetReferences_ {};
      shared_ptr<int32_t> dataSetStatus_ {};
      shared_ptr<string> dataSetType_ {};
      shared_ptr<vector<DataSets::IpWhitelistRecognizers>> ipWhitelistRecognizers_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataSets_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // dataSets Field Functions 
    bool hasDataSets() const { return this->dataSets_ != nullptr;};
    void deleteDataSets() { this->dataSets_ = nullptr;};
    inline const vector<ListDataSetsResponseBody::DataSets> & getDataSets() const { DARABONBA_PTR_GET_CONST(dataSets_, vector<ListDataSetsResponseBody::DataSets>) };
    inline vector<ListDataSetsResponseBody::DataSets> getDataSets() { DARABONBA_PTR_GET(dataSets_, vector<ListDataSetsResponseBody::DataSets>) };
    inline ListDataSetsResponseBody& setDataSets(const vector<ListDataSetsResponseBody::DataSets> & dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };
    inline ListDataSetsResponseBody& setDataSets(vector<ListDataSetsResponseBody::DataSets> && dataSets) { DARABONBA_PTR_SET_RVALUE(dataSets_, dataSets) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataSetsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataSetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataSetsResponseBody::DataSets>> dataSets_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
