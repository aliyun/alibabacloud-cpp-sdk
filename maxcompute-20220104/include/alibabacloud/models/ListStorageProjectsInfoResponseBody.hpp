// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageProjectsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageProjectsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageProjectsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListStorageProjectsInfoResponseBody() = default ;
    ListStorageProjectsInfoResponseBody(const ListStorageProjectsInfoResponseBody &) = default ;
    ListStorageProjectsInfoResponseBody(ListStorageProjectsInfoResponseBody &&) = default ;
    ListStorageProjectsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageProjectsInfoResponseBody() = default ;
    ListStorageProjectsInfoResponseBody& operator=(const ListStorageProjectsInfoResponseBody &) = default ;
    ListStorageProjectsInfoResponseBody& operator=(ListStorageProjectsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(storageProjectInfoList, storageProjectInfoList_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(storageProjectInfoList, storageProjectInfoList_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageProjectInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageProjectInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(date, date_);
          DARABONBA_PTR_TO_JSON(longTermStorage, longTermStorage_);
          DARABONBA_PTR_TO_JSON(longTermStorageUnit, longTermStorageUnit_);
          DARABONBA_PTR_TO_JSON(lowFreqStorage, lowFreqStorage_);
          DARABONBA_PTR_TO_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
          DARABONBA_PTR_TO_JSON(rate, rate_);
          DARABONBA_PTR_TO_JSON(recycleBinStorage, recycleBinStorage_);
          DARABONBA_PTR_TO_JSON(recycleBinStorageUnit, recycleBinStorageUnit_);
          DARABONBA_PTR_TO_JSON(standardStorage, standardStorage_);
          DARABONBA_PTR_TO_JSON(standardStorageUnit, standardStorageUnit_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(totalStorage, totalStorage_);
          DARABONBA_PTR_TO_JSON(totalStorageUnit, totalStorageUnit_);
        };
        friend void from_json(const Darabonba::Json& j, StorageProjectInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(date, date_);
          DARABONBA_PTR_FROM_JSON(longTermStorage, longTermStorage_);
          DARABONBA_PTR_FROM_JSON(longTermStorageUnit, longTermStorageUnit_);
          DARABONBA_PTR_FROM_JSON(lowFreqStorage, lowFreqStorage_);
          DARABONBA_PTR_FROM_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
          DARABONBA_PTR_FROM_JSON(rate, rate_);
          DARABONBA_PTR_FROM_JSON(recycleBinStorage, recycleBinStorage_);
          DARABONBA_PTR_FROM_JSON(recycleBinStorageUnit, recycleBinStorageUnit_);
          DARABONBA_PTR_FROM_JSON(standardStorage, standardStorage_);
          DARABONBA_PTR_FROM_JSON(standardStorageUnit, standardStorageUnit_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(totalStorage, totalStorage_);
          DARABONBA_PTR_FROM_JSON(totalStorageUnit, totalStorageUnit_);
        };
        StorageProjectInfoList() = default ;
        StorageProjectInfoList(const StorageProjectInfoList &) = default ;
        StorageProjectInfoList(StorageProjectInfoList &&) = default ;
        StorageProjectInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageProjectInfoList() = default ;
        StorageProjectInfoList& operator=(const StorageProjectInfoList &) = default ;
        StorageProjectInfoList& operator=(StorageProjectInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->longTermStorage_ == nullptr && this->longTermStorageUnit_ == nullptr && this->lowFreqStorage_ == nullptr && this->lowFreqStorageUnit_ == nullptr && this->projectName_ == nullptr
        && this->rate_ == nullptr && this->recycleBinStorage_ == nullptr && this->recycleBinStorageUnit_ == nullptr && this->standardStorage_ == nullptr && this->standardStorageUnit_ == nullptr
        && this->timestamp_ == nullptr && this->totalStorage_ == nullptr && this->totalStorageUnit_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline StorageProjectInfoList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // longTermStorage Field Functions 
        bool hasLongTermStorage() const { return this->longTermStorage_ != nullptr;};
        void deleteLongTermStorage() { this->longTermStorage_ = nullptr;};
        inline double getLongTermStorage() const { DARABONBA_PTR_GET_DEFAULT(longTermStorage_, 0.0) };
        inline StorageProjectInfoList& setLongTermStorage(double longTermStorage) { DARABONBA_PTR_SET_VALUE(longTermStorage_, longTermStorage) };


        // longTermStorageUnit Field Functions 
        bool hasLongTermStorageUnit() const { return this->longTermStorageUnit_ != nullptr;};
        void deleteLongTermStorageUnit() { this->longTermStorageUnit_ = nullptr;};
        inline string getLongTermStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageUnit_, "") };
        inline StorageProjectInfoList& setLongTermStorageUnit(string longTermStorageUnit) { DARABONBA_PTR_SET_VALUE(longTermStorageUnit_, longTermStorageUnit) };


        // lowFreqStorage Field Functions 
        bool hasLowFreqStorage() const { return this->lowFreqStorage_ != nullptr;};
        void deleteLowFreqStorage() { this->lowFreqStorage_ = nullptr;};
        inline double getLowFreqStorage() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorage_, 0.0) };
        inline StorageProjectInfoList& setLowFreqStorage(double lowFreqStorage) { DARABONBA_PTR_SET_VALUE(lowFreqStorage_, lowFreqStorage) };


        // lowFreqStorageUnit Field Functions 
        bool hasLowFreqStorageUnit() const { return this->lowFreqStorageUnit_ != nullptr;};
        void deleteLowFreqStorageUnit() { this->lowFreqStorageUnit_ = nullptr;};
        inline string getLowFreqStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageUnit_, "") };
        inline StorageProjectInfoList& setLowFreqStorageUnit(string lowFreqStorageUnit) { DARABONBA_PTR_SET_VALUE(lowFreqStorageUnit_, lowFreqStorageUnit) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline StorageProjectInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline StorageProjectInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // recycleBinStorage Field Functions 
        bool hasRecycleBinStorage() const { return this->recycleBinStorage_ != nullptr;};
        void deleteRecycleBinStorage() { this->recycleBinStorage_ = nullptr;};
        inline double getRecycleBinStorage() const { DARABONBA_PTR_GET_DEFAULT(recycleBinStorage_, 0.0) };
        inline StorageProjectInfoList& setRecycleBinStorage(double recycleBinStorage) { DARABONBA_PTR_SET_VALUE(recycleBinStorage_, recycleBinStorage) };


        // recycleBinStorageUnit Field Functions 
        bool hasRecycleBinStorageUnit() const { return this->recycleBinStorageUnit_ != nullptr;};
        void deleteRecycleBinStorageUnit() { this->recycleBinStorageUnit_ = nullptr;};
        inline string getRecycleBinStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(recycleBinStorageUnit_, "") };
        inline StorageProjectInfoList& setRecycleBinStorageUnit(string recycleBinStorageUnit) { DARABONBA_PTR_SET_VALUE(recycleBinStorageUnit_, recycleBinStorageUnit) };


        // standardStorage Field Functions 
        bool hasStandardStorage() const { return this->standardStorage_ != nullptr;};
        void deleteStandardStorage() { this->standardStorage_ = nullptr;};
        inline double getStandardStorage() const { DARABONBA_PTR_GET_DEFAULT(standardStorage_, 0.0) };
        inline StorageProjectInfoList& setStandardStorage(double standardStorage) { DARABONBA_PTR_SET_VALUE(standardStorage_, standardStorage) };


        // standardStorageUnit Field Functions 
        bool hasStandardStorageUnit() const { return this->standardStorageUnit_ != nullptr;};
        void deleteStandardStorageUnit() { this->standardStorageUnit_ = nullptr;};
        inline string getStandardStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(standardStorageUnit_, "") };
        inline StorageProjectInfoList& setStandardStorageUnit(string standardStorageUnit) { DARABONBA_PTR_SET_VALUE(standardStorageUnit_, standardStorageUnit) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline StorageProjectInfoList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // totalStorage Field Functions 
        bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
        void deleteTotalStorage() { this->totalStorage_ = nullptr;};
        inline double getTotalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, 0.0) };
        inline StorageProjectInfoList& setTotalStorage(double totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


        // totalStorageUnit Field Functions 
        bool hasTotalStorageUnit() const { return this->totalStorageUnit_ != nullptr;};
        void deleteTotalStorageUnit() { this->totalStorageUnit_ = nullptr;};
        inline string getTotalStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(totalStorageUnit_, "") };
        inline StorageProjectInfoList& setTotalStorageUnit(string totalStorageUnit) { DARABONBA_PTR_SET_VALUE(totalStorageUnit_, totalStorageUnit) };


      protected:
        // The statistics collection date. The date is accurate to the day. The date must be in the `YYYYMMdd` format.
        shared_ptr<string> date_ {};
        // The Long Term storage usage.
        shared_ptr<double> longTermStorage_ {};
        // The unit of the Long Term storage usage.
        shared_ptr<string> longTermStorageUnit_ {};
        // The IA storage class usage.
        shared_ptr<double> lowFreqStorage_ {};
        // The unit of the IA storage class usage.
        shared_ptr<string> lowFreqStorageUnit_ {};
        // The name of the MaxCompute project.
        shared_ptr<string> projectName_ {};
        // The year-over-year change rate of the total storage usage in the last {$recentDays} days.
        shared_ptr<double> rate_ {};
        // The recycle bin storage usage.
        shared_ptr<double> recycleBinStorage_ {};
        // The unit of the recycle bin storage usage.
        shared_ptr<string> recycleBinStorageUnit_ {};
        // The Standard storage usage.
        shared_ptr<double> standardStorage_ {};
        // The unit of the Standard storage usage.
        shared_ptr<string> standardStorageUnit_ {};
        // The timestamp of the last data update.
        shared_ptr<int64_t> timestamp_ {};
        // The total storage usage.
        shared_ptr<double> totalStorage_ {};
        // The unit of the total storage usage.
        shared_ptr<string> totalStorageUnit_ {};
      };

      virtual bool empty() const override { return this->date_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->storageProjectInfoList_ == nullptr && this->totalCount_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // storageProjectInfoList Field Functions 
      bool hasStorageProjectInfoList() const { return this->storageProjectInfoList_ != nullptr;};
      void deleteStorageProjectInfoList() { this->storageProjectInfoList_ = nullptr;};
      inline const vector<Data::StorageProjectInfoList> & getStorageProjectInfoList() const { DARABONBA_PTR_GET_CONST(storageProjectInfoList_, vector<Data::StorageProjectInfoList>) };
      inline vector<Data::StorageProjectInfoList> getStorageProjectInfoList() { DARABONBA_PTR_GET(storageProjectInfoList_, vector<Data::StorageProjectInfoList>) };
      inline Data& setStorageProjectInfoList(const vector<Data::StorageProjectInfoList> & storageProjectInfoList) { DARABONBA_PTR_SET_VALUE(storageProjectInfoList_, storageProjectInfoList) };
      inline Data& setStorageProjectInfoList(vector<Data::StorageProjectInfoList> && storageProjectInfoList) { DARABONBA_PTR_SET_RVALUE(storageProjectInfoList_, storageProjectInfoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The statistics collection date.
      shared_ptr<string> date_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries on each page.
      shared_ptr<int64_t> pageSize_ {};
      // The list of project-level storage information.
      shared_ptr<vector<Data::StorageProjectInfoList>> storageProjectInfoList_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListStorageProjectsInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListStorageProjectsInfoResponseBody::Data) };
    inline ListStorageProjectsInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListStorageProjectsInfoResponseBody::Data) };
    inline ListStorageProjectsInfoResponseBody& setData(const ListStorageProjectsInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStorageProjectsInfoResponseBody& setData(ListStorageProjectsInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStorageProjectsInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListStorageProjectsInfoResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListStorageProjectsInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStorageProjectsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data.
    shared_ptr<ListStorageProjectsInfoResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // - 1xx: an informational response. The request has been received and is being processed.
    // 
    // - 2xx: a success response. The request has been successfully received, understood, and accepted by the server.
    // 
    // - 3xx: a redirection response. The request is redirected. You must take further action to complete the request.
    // 
    // - 4xx: a client error. The request contains invalid request parameters or syntax, or cannot be fulfilled.
    // 
    // - 5xx: a server error. The server fails to fulfill the request for other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
