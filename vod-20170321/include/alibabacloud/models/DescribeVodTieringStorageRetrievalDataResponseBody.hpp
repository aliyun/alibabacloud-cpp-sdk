// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTieringStorageRetrievalDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTieringStorageRetrievalDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetrievalData, retrievalData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTieringStorageRetrievalDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetrievalData, retrievalData_);
    };
    DescribeVodTieringStorageRetrievalDataResponseBody() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(const DescribeVodTieringStorageRetrievalDataResponseBody &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(DescribeVodTieringStorageRetrievalDataResponseBody &&) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTieringStorageRetrievalDataResponseBody() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody& operator=(const DescribeVodTieringStorageRetrievalDataResponseBody &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody& operator=(DescribeVodTieringStorageRetrievalDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetrievalData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetrievalData& obj) { 
        DARABONBA_PTR_TO_JSON(CABulkRetrievalData, CABulkRetrievalData_);
        DARABONBA_PTR_TO_JSON(CAHighPriorRetrievalData, CAHighPriorRetrievalData_);
        DARABONBA_PTR_TO_JSON(CAStdRetrievalData, CAStdRetrievalData_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RetrievalData, retrievalData_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, RetrievalData& obj) { 
        DARABONBA_PTR_FROM_JSON(CABulkRetrievalData, CABulkRetrievalData_);
        DARABONBA_PTR_FROM_JSON(CAHighPriorRetrievalData, CAHighPriorRetrievalData_);
        DARABONBA_PTR_FROM_JSON(CAStdRetrievalData, CAStdRetrievalData_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RetrievalData, retrievalData_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      RetrievalData() = default ;
      RetrievalData(const RetrievalData &) = default ;
      RetrievalData(RetrievalData &&) = default ;
      RetrievalData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetrievalData() = default ;
      RetrievalData& operator=(const RetrievalData &) = default ;
      RetrievalData& operator=(RetrievalData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CABulkRetrievalData_ == nullptr
        && this->CAHighPriorRetrievalData_ == nullptr && this->CAStdRetrievalData_ == nullptr && this->region_ == nullptr && this->retrievalData_ == nullptr && this->storageClass_ == nullptr
        && this->timeStamp_ == nullptr; };
      // CABulkRetrievalData Field Functions 
      bool hasCABulkRetrievalData() const { return this->CABulkRetrievalData_ != nullptr;};
      void deleteCABulkRetrievalData() { this->CABulkRetrievalData_ = nullptr;};
      inline int64_t getCABulkRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CABulkRetrievalData_, 0L) };
      inline RetrievalData& setCABulkRetrievalData(int64_t CABulkRetrievalData) { DARABONBA_PTR_SET_VALUE(CABulkRetrievalData_, CABulkRetrievalData) };


      // CAHighPriorRetrievalData Field Functions 
      bool hasCAHighPriorRetrievalData() const { return this->CAHighPriorRetrievalData_ != nullptr;};
      void deleteCAHighPriorRetrievalData() { this->CAHighPriorRetrievalData_ = nullptr;};
      inline int64_t getCAHighPriorRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CAHighPriorRetrievalData_, 0L) };
      inline RetrievalData& setCAHighPriorRetrievalData(int64_t CAHighPriorRetrievalData) { DARABONBA_PTR_SET_VALUE(CAHighPriorRetrievalData_, CAHighPriorRetrievalData) };


      // CAStdRetrievalData Field Functions 
      bool hasCAStdRetrievalData() const { return this->CAStdRetrievalData_ != nullptr;};
      void deleteCAStdRetrievalData() { this->CAStdRetrievalData_ = nullptr;};
      inline int64_t getCAStdRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CAStdRetrievalData_, 0L) };
      inline RetrievalData& setCAStdRetrievalData(int64_t CAStdRetrievalData) { DARABONBA_PTR_SET_VALUE(CAStdRetrievalData_, CAStdRetrievalData) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline RetrievalData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // retrievalData Field Functions 
      bool hasRetrievalData() const { return this->retrievalData_ != nullptr;};
      void deleteRetrievalData() { this->retrievalData_ = nullptr;};
      inline int64_t getRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(retrievalData_, 0L) };
      inline RetrievalData& setRetrievalData(int64_t retrievalData) { DARABONBA_PTR_SET_VALUE(retrievalData_, retrievalData) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline RetrievalData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline RetrievalData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The retrieved Cold Archive data in the bulk mode.
      shared_ptr<int64_t> CABulkRetrievalData_ {};
      // The retrieved Cold Archive data in the expedited mode.
      shared_ptr<int64_t> CAHighPriorRetrievalData_ {};
      // The retrieved Cold Archive data in the standard mode.
      shared_ptr<int64_t> CAStdRetrievalData_ {};
      // The storage region.
      shared_ptr<string> region_ {};
      // The data retrieval information.
      shared_ptr<int64_t> retrievalData_ {};
      // The storage type.
      shared_ptr<string> storageClass_ {};
      // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->retrievalData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retrievalData Field Functions 
    bool hasRetrievalData() const { return this->retrievalData_ != nullptr;};
    void deleteRetrievalData() { this->retrievalData_ = nullptr;};
    inline const vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData> & getRetrievalData() const { DARABONBA_PTR_GET_CONST(retrievalData_, vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData>) };
    inline vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData> getRetrievalData() { DARABONBA_PTR_GET(retrievalData_, vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData>) };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRetrievalData(const vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData> & retrievalData) { DARABONBA_PTR_SET_VALUE(retrievalData_, retrievalData) };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRetrievalData(vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData> && retrievalData) { DARABONBA_PTR_SET_RVALUE(retrievalData_, retrievalData) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The data retrieval information.
    shared_ptr<vector<DescribeVodTieringStorageRetrievalDataResponseBody::RetrievalData>> retrievalData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
