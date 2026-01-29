// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRIUtilizationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRIUtilizationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRIUtilizationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRIUtilizationDetailResponseBody() = default ;
    QueryRIUtilizationDetailResponseBody(const QueryRIUtilizationDetailResponseBody &) = default ;
    QueryRIUtilizationDetailResponseBody(QueryRIUtilizationDetailResponseBody &&) = default ;
    QueryRIUtilizationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRIUtilizationDetailResponseBody() = default ;
    QueryRIUtilizationDetailResponseBody& operator=(const QueryRIUtilizationDetailResponseBody &) = default ;
    QueryRIUtilizationDetailResponseBody& operator=(QueryRIUtilizationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetailList, detailList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class DetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailList& obj) { 
          DARABONBA_PTR_TO_JSON(DetailList, detailList_);
        };
        friend void from_json(const Darabonba::Json& j, DetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
        };
        DetailList() = default ;
        DetailList(const DetailList &) = default ;
        DetailList(DetailList &&) = default ;
        DetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailList() = default ;
        DetailList& operator=(const DetailList &) = default ;
        DetailList& operator=(DetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetailListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailListItem& obj) { 
            DARABONBA_PTR_TO_JSON(DeductDate, deductDate_);
            DARABONBA_PTR_TO_JSON(DeductFactorTotal, deductFactorTotal_);
            DARABONBA_PTR_TO_JSON(DeductHours, deductHours_);
            DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
            DARABONBA_PTR_TO_JSON(DeductedCommodityCode, deductedCommodityCode_);
            DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
            DARABONBA_PTR_TO_JSON(DeductedProductDetail, deductedProductDetail_);
            DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
            DARABONBA_PTR_TO_JSON(RIInstanceId, RIInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, DetailListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(DeductDate, deductDate_);
            DARABONBA_PTR_FROM_JSON(DeductFactorTotal, deductFactorTotal_);
            DARABONBA_PTR_FROM_JSON(DeductHours, deductHours_);
            DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
            DARABONBA_PTR_FROM_JSON(DeductedCommodityCode, deductedCommodityCode_);
            DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
            DARABONBA_PTR_FROM_JSON(DeductedProductDetail, deductedProductDetail_);
            DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
            DARABONBA_PTR_FROM_JSON(RIInstanceId, RIInstanceId_);
          };
          DetailListItem() = default ;
          DetailListItem(const DetailListItem &) = default ;
          DetailListItem(DetailListItem &&) = default ;
          DetailListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetailListItem() = default ;
          DetailListItem& operator=(const DetailListItem &) = default ;
          DetailListItem& operator=(DetailListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deductDate_ == nullptr
        && this->deductFactorTotal_ == nullptr && this->deductHours_ == nullptr && this->deductQuantity_ == nullptr && this->deductedCommodityCode_ == nullptr && this->deductedInstanceId_ == nullptr
        && this->deductedProductDetail_ == nullptr && this->instanceSpec_ == nullptr && this->RIInstanceId_ == nullptr; };
          // deductDate Field Functions 
          bool hasDeductDate() const { return this->deductDate_ != nullptr;};
          void deleteDeductDate() { this->deductDate_ = nullptr;};
          inline string getDeductDate() const { DARABONBA_PTR_GET_DEFAULT(deductDate_, "") };
          inline DetailListItem& setDeductDate(string deductDate) { DARABONBA_PTR_SET_VALUE(deductDate_, deductDate) };


          // deductFactorTotal Field Functions 
          bool hasDeductFactorTotal() const { return this->deductFactorTotal_ != nullptr;};
          void deleteDeductFactorTotal() { this->deductFactorTotal_ = nullptr;};
          inline float getDeductFactorTotal() const { DARABONBA_PTR_GET_DEFAULT(deductFactorTotal_, 0.0) };
          inline DetailListItem& setDeductFactorTotal(float deductFactorTotal) { DARABONBA_PTR_SET_VALUE(deductFactorTotal_, deductFactorTotal) };


          // deductHours Field Functions 
          bool hasDeductHours() const { return this->deductHours_ != nullptr;};
          void deleteDeductHours() { this->deductHours_ = nullptr;};
          inline string getDeductHours() const { DARABONBA_PTR_GET_DEFAULT(deductHours_, "") };
          inline DetailListItem& setDeductHours(string deductHours) { DARABONBA_PTR_SET_VALUE(deductHours_, deductHours) };


          // deductQuantity Field Functions 
          bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
          void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
          inline float getDeductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
          inline DetailListItem& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


          // deductedCommodityCode Field Functions 
          bool hasDeductedCommodityCode() const { return this->deductedCommodityCode_ != nullptr;};
          void deleteDeductedCommodityCode() { this->deductedCommodityCode_ = nullptr;};
          inline string getDeductedCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(deductedCommodityCode_, "") };
          inline DetailListItem& setDeductedCommodityCode(string deductedCommodityCode) { DARABONBA_PTR_SET_VALUE(deductedCommodityCode_, deductedCommodityCode) };


          // deductedInstanceId Field Functions 
          bool hasDeductedInstanceId() const { return this->deductedInstanceId_ != nullptr;};
          void deleteDeductedInstanceId() { this->deductedInstanceId_ = nullptr;};
          inline string getDeductedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductedInstanceId_, "") };
          inline DetailListItem& setDeductedInstanceId(string deductedInstanceId) { DARABONBA_PTR_SET_VALUE(deductedInstanceId_, deductedInstanceId) };


          // deductedProductDetail Field Functions 
          bool hasDeductedProductDetail() const { return this->deductedProductDetail_ != nullptr;};
          void deleteDeductedProductDetail() { this->deductedProductDetail_ = nullptr;};
          inline string getDeductedProductDetail() const { DARABONBA_PTR_GET_DEFAULT(deductedProductDetail_, "") };
          inline DetailListItem& setDeductedProductDetail(string deductedProductDetail) { DARABONBA_PTR_SET_VALUE(deductedProductDetail_, deductedProductDetail) };


          // instanceSpec Field Functions 
          bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
          void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
          inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
          inline DetailListItem& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


          // RIInstanceId Field Functions 
          bool hasRIInstanceId() const { return this->RIInstanceId_ != nullptr;};
          void deleteRIInstanceId() { this->RIInstanceId_ = nullptr;};
          inline string getRIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(RIInstanceId_, "") };
          inline DetailListItem& setRIInstanceId(string RIInstanceId) { DARABONBA_PTR_SET_VALUE(RIInstanceId_, RIInstanceId) };


        protected:
          // The time when the fees are deducted by using the RI.
          shared_ptr<string> deductDate_ {};
          // The total amount of computing power of the RI or capacity of SCU in the time period.
          shared_ptr<float> deductFactorTotal_ {};
          // The deduct factor. This parameter is returned only if the RICommodityCode parameter is set to ecsRi.
          shared_ptr<string> deductHours_ {};
          // The computing power or capacity of the pay-as-you-go instance whose fees are deducted by using the RI.
          shared_ptr<float> deductQuantity_ {};
          // The code of the service whose fees are deducted by using the RI.
          shared_ptr<string> deductedCommodityCode_ {};
          // The ID of the instance whose fees are deducted by using the RI.
          shared_ptr<string> deductedInstanceId_ {};
          // The name of the service whose fees are deducted by using the RI.
          shared_ptr<string> deductedProductDetail_ {};
          // The instance type of the instance whose fees are deducted by using the RI.
          shared_ptr<string> instanceSpec_ {};
          // The ID of the RI.
          shared_ptr<string> RIInstanceId_ {};
        };

        virtual bool empty() const override { return this->detailList_ == nullptr; };
        // detailList Field Functions 
        bool hasDetailList() const { return this->detailList_ != nullptr;};
        void deleteDetailList() { this->detailList_ = nullptr;};
        inline const vector<DetailList::DetailListItem> & getDetailList() const { DARABONBA_PTR_GET_CONST(detailList_, vector<DetailList::DetailListItem>) };
        inline vector<DetailList::DetailListItem> getDetailList() { DARABONBA_PTR_GET(detailList_, vector<DetailList::DetailListItem>) };
        inline DetailList& setDetailList(const vector<DetailList::DetailListItem> & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
        inline DetailList& setDetailList(vector<DetailList::DetailListItem> && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


      protected:
        shared_ptr<vector<DetailList::DetailListItem>> detailList_ {};
      };

      virtual bool empty() const override { return this->detailList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // detailList Field Functions 
      bool hasDetailList() const { return this->detailList_ != nullptr;};
      void deleteDetailList() { this->detailList_ = nullptr;};
      inline const Data::DetailList & getDetailList() const { DARABONBA_PTR_GET_CONST(detailList_, Data::DetailList) };
      inline Data::DetailList getDetailList() { DARABONBA_PTR_GET(detailList_, Data::DetailList) };
      inline Data& setDetailList(const Data::DetailList & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
      inline Data& setDetailList(Data::DetailList && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
      inline Data& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The usage details of the RI.
      shared_ptr<Data::DetailList> detailList_ {};
      // The number of the returned page.
      shared_ptr<int64_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRIUtilizationDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRIUtilizationDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRIUtilizationDetailResponseBody::Data) };
    inline QueryRIUtilizationDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRIUtilizationDetailResponseBody::Data) };
    inline QueryRIUtilizationDetailResponseBody& setData(const QueryRIUtilizationDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRIUtilizationDetailResponseBody& setData(QueryRIUtilizationDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRIUtilizationDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRIUtilizationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRIUtilizationDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryRIUtilizationDetailResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
