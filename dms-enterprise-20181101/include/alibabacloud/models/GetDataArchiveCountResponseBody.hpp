// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataArchiveCountResponseBody() = default ;
    GetDataArchiveCountResponseBody(const GetDataArchiveCountResponseBody &) = default ;
    GetDataArchiveCountResponseBody(GetDataArchiveCountResponseBody &&) = default ;
    GetDataArchiveCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveCountResponseBody() = default ;
    GetDataArchiveCountResponseBody& operator=(const GetDataArchiveCountResponseBody &) = default ;
    GetDataArchiveCountResponseBody& operator=(GetDataArchiveCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(ProcessingCount, processingCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(ProcessingCount, processingCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->processingCount_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int64_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
      inline Data& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // processingCount Field Functions 
      bool hasProcessingCount() const { return this->processingCount_ != nullptr;};
      void deleteProcessingCount() { this->processingCount_ = nullptr;};
      inline int64_t getProcessingCount() const { DARABONBA_PTR_GET_DEFAULT(processingCount_, 0L) };
      inline Data& setProcessingCount(int64_t processingCount) { DARABONBA_PTR_SET_VALUE(processingCount_, processingCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
      inline Data& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of tickets that data archiving failed.
      shared_ptr<int64_t> failCount_ {};
      // The number of tickets that data archiving is in progress.
      shared_ptr<int64_t> processingCount_ {};
      // The number of tickets that data archiving is successful.
      shared_ptr<int64_t> successCount_ {};
      // The total number of data archiving tickets.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataArchiveCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataArchiveCountResponseBody::Data) };
    inline GetDataArchiveCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataArchiveCountResponseBody::Data) };
    inline GetDataArchiveCountResponseBody& setData(const GetDataArchiveCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataArchiveCountResponseBody& setData(GetDataArchiveCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataArchiveCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataArchiveCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<GetDataArchiveCountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
