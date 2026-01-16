// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsByTagNameAndBatchIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsByTagNameAndBatchIDResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsByTagNameAndBatchIDResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SenderStatisticsByTagNameAndBatchIDResponseBody() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(const SenderStatisticsByTagNameAndBatchIDResponseBody &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(SenderStatisticsByTagNameAndBatchIDResponseBody &&) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsByTagNameAndBatchIDResponseBody() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody& operator=(const SenderStatisticsByTagNameAndBatchIDResponseBody &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBody& operator=(SenderStatisticsByTagNameAndBatchIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(stat, stat_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(stat, stat_);
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
      class Stat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stat& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(faildCount, faildCount_);
          DARABONBA_PTR_TO_JSON(requestCount, requestCount_);
          DARABONBA_PTR_TO_JSON(succeededPercent, succeededPercent_);
          DARABONBA_PTR_TO_JSON(successCount, successCount_);
          DARABONBA_PTR_TO_JSON(unavailableCount, unavailableCount_);
          DARABONBA_PTR_TO_JSON(unavailablePercent, unavailablePercent_);
        };
        friend void from_json(const Darabonba::Json& j, Stat& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(faildCount, faildCount_);
          DARABONBA_PTR_FROM_JSON(requestCount, requestCount_);
          DARABONBA_PTR_FROM_JSON(succeededPercent, succeededPercent_);
          DARABONBA_PTR_FROM_JSON(successCount, successCount_);
          DARABONBA_PTR_FROM_JSON(unavailableCount, unavailableCount_);
          DARABONBA_PTR_FROM_JSON(unavailablePercent, unavailablePercent_);
        };
        Stat() = default ;
        Stat(const Stat &) = default ;
        Stat(Stat &&) = default ;
        Stat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stat() = default ;
        Stat& operator=(const Stat &) = default ;
        Stat& operator=(Stat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->faildCount_ == nullptr && this->requestCount_ == nullptr && this->succeededPercent_ == nullptr && this->successCount_ == nullptr && this->unavailableCount_ == nullptr
        && this->unavailablePercent_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Stat& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // faildCount Field Functions 
        bool hasFaildCount() const { return this->faildCount_ != nullptr;};
        void deleteFaildCount() { this->faildCount_ = nullptr;};
        inline string getFaildCount() const { DARABONBA_PTR_GET_DEFAULT(faildCount_, "") };
        inline Stat& setFaildCount(string faildCount) { DARABONBA_PTR_SET_VALUE(faildCount_, faildCount) };


        // requestCount Field Functions 
        bool hasRequestCount() const { return this->requestCount_ != nullptr;};
        void deleteRequestCount() { this->requestCount_ = nullptr;};
        inline string getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, "") };
        inline Stat& setRequestCount(string requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


        // succeededPercent Field Functions 
        bool hasSucceededPercent() const { return this->succeededPercent_ != nullptr;};
        void deleteSucceededPercent() { this->succeededPercent_ = nullptr;};
        inline string getSucceededPercent() const { DARABONBA_PTR_GET_DEFAULT(succeededPercent_, "") };
        inline Stat& setSucceededPercent(string succeededPercent) { DARABONBA_PTR_SET_VALUE(succeededPercent_, succeededPercent) };


        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline string getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, "") };
        inline Stat& setSuccessCount(string successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


        // unavailableCount Field Functions 
        bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
        void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
        inline string getUnavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, "") };
        inline Stat& setUnavailableCount(string unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


        // unavailablePercent Field Functions 
        bool hasUnavailablePercent() const { return this->unavailablePercent_ != nullptr;};
        void deleteUnavailablePercent() { this->unavailablePercent_ = nullptr;};
        inline string getUnavailablePercent() const { DARABONBA_PTR_GET_DEFAULT(unavailablePercent_, "") };
        inline Stat& setUnavailablePercent(string unavailablePercent) { DARABONBA_PTR_SET_VALUE(unavailablePercent_, unavailablePercent) };


      protected:
        // Creation time
        shared_ptr<string> createTime_ {};
        // Failure count
        shared_ptr<string> faildCount_ {};
        // Request count
        shared_ptr<string> requestCount_ {};
        // Success rate
        shared_ptr<string> succeededPercent_ {};
        // Success count
        shared_ptr<string> successCount_ {};
        // Invalid count
        shared_ptr<string> unavailableCount_ {};
        // Unavailability rate
        shared_ptr<string> unavailablePercent_ {};
      };

      virtual bool empty() const override { return this->stat_ == nullptr; };
      // stat Field Functions 
      bool hasStat() const { return this->stat_ != nullptr;};
      void deleteStat() { this->stat_ = nullptr;};
      inline const vector<Data::Stat> & getStat() const { DARABONBA_PTR_GET_CONST(stat_, vector<Data::Stat>) };
      inline vector<Data::Stat> getStat() { DARABONBA_PTR_GET(stat_, vector<Data::Stat>) };
      inline Data& setStat(const vector<Data::Stat> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
      inline Data& setStat(vector<Data::Stat> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


    protected:
      shared_ptr<vector<Data::Stat>> stat_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SenderStatisticsByTagNameAndBatchIDResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SenderStatisticsByTagNameAndBatchIDResponseBody::Data) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SenderStatisticsByTagNameAndBatchIDResponseBody::Data) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setData(const SenderStatisticsByTagNameAndBatchIDResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SenderStatisticsByTagNameAndBatchIDResponseBody& setData(SenderStatisticsByTagNameAndBatchIDResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // Data records
    shared_ptr<SenderStatisticsByTagNameAndBatchIDResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
