// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODY_HPP_
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
  class DescribeImageBuildRiskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBuildRiskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBuildRiskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageBuildRiskListResponseBody() = default ;
    DescribeImageBuildRiskListResponseBody(const DescribeImageBuildRiskListResponseBody &) = default ;
    DescribeImageBuildRiskListResponseBody(DescribeImageBuildRiskListResponseBody &&) = default ;
    DescribeImageBuildRiskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBuildRiskListResponseBody() = default ;
    DescribeImageBuildRiskListResponseBody& operator=(const DescribeImageBuildRiskListResponseBody &) = default ;
    DescribeImageBuildRiskListResponseBody& operator=(DescribeImageBuildRiskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
        // The page number. Default value: **1**.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
        // 
        // >  We recommend that you do not leave this parameter empty.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int32_t> totalCount_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
          DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
          DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
          DARABONBA_PTR_TO_JSON(RiskClassName, riskClassName_);
          DARABONBA_PTR_TO_JSON(RiskKey, riskKey_);
          DARABONBA_PTR_TO_JSON(RiskKeyName, riskKeyName_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(UnprocessedNum, unprocessedNum_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
          DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
          DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
          DARABONBA_PTR_FROM_JSON(RiskClassName, riskClassName_);
          DARABONBA_PTR_FROM_JSON(RiskKey, riskKey_);
          DARABONBA_PTR_FROM_JSON(RiskKeyName, riskKeyName_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(UnprocessedNum, unprocessedNum_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->firstScanTime_ == nullptr && this->lastScanTime_ == nullptr && this->riskClass_ == nullptr && this->riskClassName_ == nullptr && this->riskKey_ == nullptr
        && this->riskKeyName_ == nullptr && this->riskLevel_ == nullptr && this->unprocessedNum_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline List& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // firstScanTime Field Functions 
        bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
        void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
        inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
        inline List& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


        // lastScanTime Field Functions 
        bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
        void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
        inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
        inline List& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


        // riskClass Field Functions 
        bool hasRiskClass() const { return this->riskClass_ != nullptr;};
        void deleteRiskClass() { this->riskClass_ = nullptr;};
        inline string getRiskClass() const { DARABONBA_PTR_GET_DEFAULT(riskClass_, "") };
        inline List& setRiskClass(string riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };


        // riskClassName Field Functions 
        bool hasRiskClassName() const { return this->riskClassName_ != nullptr;};
        void deleteRiskClassName() { this->riskClassName_ = nullptr;};
        inline string getRiskClassName() const { DARABONBA_PTR_GET_DEFAULT(riskClassName_, "") };
        inline List& setRiskClassName(string riskClassName) { DARABONBA_PTR_SET_VALUE(riskClassName_, riskClassName) };


        // riskKey Field Functions 
        bool hasRiskKey() const { return this->riskKey_ != nullptr;};
        void deleteRiskKey() { this->riskKey_ = nullptr;};
        inline string getRiskKey() const { DARABONBA_PTR_GET_DEFAULT(riskKey_, "") };
        inline List& setRiskKey(string riskKey) { DARABONBA_PTR_SET_VALUE(riskKey_, riskKey) };


        // riskKeyName Field Functions 
        bool hasRiskKeyName() const { return this->riskKeyName_ != nullptr;};
        void deleteRiskKeyName() { this->riskKeyName_ = nullptr;};
        inline string getRiskKeyName() const { DARABONBA_PTR_GET_DEFAULT(riskKeyName_, "") };
        inline List& setRiskKeyName(string riskKeyName) { DARABONBA_PTR_SET_VALUE(riskKeyName_, riskKeyName) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline List& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // unprocessedNum Field Functions 
        bool hasUnprocessedNum() const { return this->unprocessedNum_ != nullptr;};
        void deleteUnprocessedNum() { this->unprocessedNum_ = nullptr;};
        inline int32_t getUnprocessedNum() const { DARABONBA_PTR_GET_DEFAULT(unprocessedNum_, 0) };
        inline List& setUnprocessedNum(int32_t unprocessedNum) { DARABONBA_PTR_SET_VALUE(unprocessedNum_, unprocessedNum) };


      protected:
        // The number of affected images.
        shared_ptr<int32_t> count_ {};
        // The timestamp generated when the first scan was performed. Unit: milliseconds.
        shared_ptr<int64_t> firstScanTime_ {};
        // The timestamp generated when the last scan was performed. Unit: milliseconds.
        shared_ptr<int64_t> lastScanTime_ {};
        // The type key of the risk.
        shared_ptr<string> riskClass_ {};
        // The type name of the risk.
        shared_ptr<string> riskClassName_ {};
        // The key of the risk. You can call the [DescribeImageBuildRiskList](~~~~) operation to obtain the value of **RiskKey**.
        shared_ptr<string> riskKey_ {};
        // The rule name of the risk.
        shared_ptr<string> riskKeyName_ {};
        // The risk level. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> riskLevel_ {};
        // The number of unprocessed images.
        shared_ptr<int32_t> unprocessedNum_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    protected:
      // The risks.
      shared_ptr<vector<Data::List>> list_ {};
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageBuildRiskListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageBuildRiskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageBuildRiskListResponseBody::Data) };
    inline DescribeImageBuildRiskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageBuildRiskListResponseBody::Data) };
    inline DescribeImageBuildRiskListResponseBody& setData(const DescribeImageBuildRiskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageBuildRiskListResponseBody& setData(DescribeImageBuildRiskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageBuildRiskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBuildRiskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageBuildRiskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeImageBuildRiskListResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
