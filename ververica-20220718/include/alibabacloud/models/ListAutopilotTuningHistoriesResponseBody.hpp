// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOPILOTTUNINGHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOPILOTTUNINGHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TuningHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListAutopilotTuningHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutopilotTuningHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutopilotTuningHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListAutopilotTuningHistoriesResponseBody() = default ;
    ListAutopilotTuningHistoriesResponseBody(const ListAutopilotTuningHistoriesResponseBody &) = default ;
    ListAutopilotTuningHistoriesResponseBody(ListAutopilotTuningHistoriesResponseBody &&) = default ;
    ListAutopilotTuningHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutopilotTuningHistoriesResponseBody() = default ;
    ListAutopilotTuningHistoriesResponseBody& operator=(const ListAutopilotTuningHistoriesResponseBody &) = default ;
    ListAutopilotTuningHistoriesResponseBody& operator=(ListAutopilotTuningHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(tuningHistories, tuningHistories_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(tuningHistories, tuningHistories_);
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
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->tuningHistories_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // tuningHistories Field Functions 
      bool hasTuningHistories() const { return this->tuningHistories_ != nullptr;};
      void deleteTuningHistories() { this->tuningHistories_ = nullptr;};
      inline const vector<TuningHistory> & getTuningHistories() const { DARABONBA_PTR_GET_CONST(tuningHistories_, vector<TuningHistory>) };
      inline vector<TuningHistory> getTuningHistories() { DARABONBA_PTR_GET(tuningHistories_, vector<TuningHistory>) };
      inline Data& setTuningHistories(const vector<TuningHistory> & tuningHistories) { DARABONBA_PTR_SET_VALUE(tuningHistories_, tuningHistories) };
      inline Data& setTuningHistories(vector<TuningHistory> && tuningHistories) { DARABONBA_PTR_SET_RVALUE(tuningHistories_, tuningHistories) };


    protected:
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
      // The list of tuning history records.
      shared_ptr<vector<TuningHistory>> tuningHistories_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAutopilotTuningHistoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAutopilotTuningHistoriesResponseBody::Data) };
    inline ListAutopilotTuningHistoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAutopilotTuningHistoriesResponseBody::Data) };
    inline ListAutopilotTuningHistoriesResponseBody& setData(const ListAutopilotTuningHistoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAutopilotTuningHistoriesResponseBody& setData(ListAutopilotTuningHistoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAutopilotTuningHistoriesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAutopilotTuningHistoriesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListAutopilotTuningHistoriesResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutopilotTuningHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAutopilotTuningHistoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The tuning history list result.
    shared_ptr<ListAutopilotTuningHistoriesResponseBody::Data> data_ {};
    // When success is false, this value is not empty and indicates the business error code. When success is true, this value is empty.
    shared_ptr<string> errorCode_ {};
    // When success is false, this value is not empty and indicates the business error message. When success is true, this value is empty.
    shared_ptr<string> errorMessage_ {};
    // The business status code, which is always 200. Use success to determine whether the business request was successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
