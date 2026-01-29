// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILRESPONSEBODY_HPP_
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
  class QueryDPUtilizationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDPUtilizationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDPUtilizationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDPUtilizationDetailResponseBody() = default ;
    QueryDPUtilizationDetailResponseBody(const QueryDPUtilizationDetailResponseBody &) = default ;
    QueryDPUtilizationDetailResponseBody(QueryDPUtilizationDetailResponseBody &&) = default ;
    QueryDPUtilizationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDPUtilizationDetailResponseBody() = default ;
    QueryDPUtilizationDetailResponseBody& operator=(const QueryDPUtilizationDetailResponseBody &) = default ;
    QueryDPUtilizationDetailResponseBody& operator=(QueryDPUtilizationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetailList, detailList_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
            DARABONBA_PTR_TO_JSON(DeductMeasure, deductMeasure_);
            DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
            DARABONBA_PTR_TO_JSON(DeductedCommodityCode, deductedCommodityCode_);
            DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
            DARABONBA_PTR_TO_JSON(DeductedProductDetail, deductedProductDetail_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(ResCode, resCode_);
            DARABONBA_PTR_TO_JSON(ShareUid, shareUid_);
            DARABONBA_PTR_TO_JSON(Uid, uid_);
          };
          friend void from_json(const Darabonba::Json& j, DetailListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(DeductDate, deductDate_);
            DARABONBA_PTR_FROM_JSON(DeductFactorTotal, deductFactorTotal_);
            DARABONBA_PTR_FROM_JSON(DeductHours, deductHours_);
            DARABONBA_PTR_FROM_JSON(DeductMeasure, deductMeasure_);
            DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
            DARABONBA_PTR_FROM_JSON(DeductedCommodityCode, deductedCommodityCode_);
            DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
            DARABONBA_PTR_FROM_JSON(DeductedProductDetail, deductedProductDetail_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(ResCode, resCode_);
            DARABONBA_PTR_FROM_JSON(ShareUid, shareUid_);
            DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
        && this->deductFactorTotal_ == nullptr && this->deductHours_ == nullptr && this->deductMeasure_ == nullptr && this->deductQuantity_ == nullptr && this->deductedCommodityCode_ == nullptr
        && this->deductedInstanceId_ == nullptr && this->deductedProductDetail_ == nullptr && this->instanceId_ == nullptr && this->instanceSpec_ == nullptr && this->region_ == nullptr
        && this->resCode_ == nullptr && this->shareUid_ == nullptr && this->uid_ == nullptr; };
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
          inline float getDeductHours() const { DARABONBA_PTR_GET_DEFAULT(deductHours_, 0.0) };
          inline DetailListItem& setDeductHours(float deductHours) { DARABONBA_PTR_SET_VALUE(deductHours_, deductHours) };


          // deductMeasure Field Functions 
          bool hasDeductMeasure() const { return this->deductMeasure_ != nullptr;};
          void deleteDeductMeasure() { this->deductMeasure_ = nullptr;};
          inline float getDeductMeasure() const { DARABONBA_PTR_GET_DEFAULT(deductMeasure_, 0.0) };
          inline DetailListItem& setDeductMeasure(float deductMeasure) { DARABONBA_PTR_SET_VALUE(deductMeasure_, deductMeasure) };


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


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline DetailListItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceSpec Field Functions 
          bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
          void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
          inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
          inline DetailListItem& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline DetailListItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // resCode Field Functions 
          bool hasResCode() const { return this->resCode_ != nullptr;};
          void deleteResCode() { this->resCode_ = nullptr;};
          inline string getResCode() const { DARABONBA_PTR_GET_DEFAULT(resCode_, "") };
          inline DetailListItem& setResCode(string resCode) { DARABONBA_PTR_SET_VALUE(resCode_, resCode) };


          // shareUid Field Functions 
          bool hasShareUid() const { return this->shareUid_ != nullptr;};
          void deleteShareUid() { this->shareUid_ = nullptr;};
          inline int64_t getShareUid() const { DARABONBA_PTR_GET_DEFAULT(shareUid_, 0L) };
          inline DetailListItem& setShareUid(int64_t shareUid) { DARABONBA_PTR_SET_VALUE(shareUid_, shareUid) };


          // uid Field Functions 
          bool hasUid() const { return this->uid_ != nullptr;};
          void deleteUid() { this->uid_ = nullptr;};
          inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
          inline DetailListItem& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        protected:
          // The deduction date.
          shared_ptr<string> deductDate_ {};
          // The total computing capacity or storage capacity of the RI or SCU during the deduction.
          shared_ptr<float> deductFactorTotal_ {};
          // The deduct factor. This parameter is returned only if the CommodityCode parameter is set to ecsRi.
          shared_ptr<float> deductHours_ {};
          // The original measured amount.
          shared_ptr<float> deductMeasure_ {};
          // The computing capacity or storage capacity that is deducted in a pay-as-you-go instance.
          shared_ptr<float> deductQuantity_ {};
          // The code of the deducted service.
          shared_ptr<string> deductedCommodityCode_ {};
          // The ID of the deducted instance.
          shared_ptr<string> deductedInstanceId_ {};
          // The name of the deducted service.
          shared_ptr<string> deductedProductDetail_ {};
          // The ID of the RI.
          shared_ptr<string> instanceId_ {};
          // The instance type of the deducted instance.
          shared_ptr<string> instanceSpec_ {};
          // The region in which the instance resides. This parameter can be left empty.
          shared_ptr<string> region_ {};
          // The billable item.
          shared_ptr<string> resCode_ {};
          // The UID of the deducted instance.
          // 
          // *   If the deduction is shared, the value of this parameter indicates the UID of the deducted instance.
          // *   If the deduction is not shared, the value of this parameter is the same as that of the uid parameter.
          shared_ptr<int64_t> shareUid_ {};
          // The UID of the deducted instance.
          shared_ptr<int64_t> uid_ {};
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
        && this->nextToken_ == nullptr; };
      // detailList Field Functions 
      bool hasDetailList() const { return this->detailList_ != nullptr;};
      void deleteDetailList() { this->detailList_ = nullptr;};
      inline const Data::DetailList & getDetailList() const { DARABONBA_PTR_GET_CONST(detailList_, Data::DetailList) };
      inline Data::DetailList getDetailList() { DARABONBA_PTR_GET(detailList_, Data::DetailList) };
      inline Data& setDetailList(const Data::DetailList & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
      inline Data& setDetailList(Data::DetailList && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The detailed resource plan usage.
      shared_ptr<Data::DetailList> detailList_ {};
      // The token that is used to retrieve the next page of results. You can set the LastToken parameter to this value in the next request. If null is returned, all results are queried.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDPUtilizationDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDPUtilizationDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDPUtilizationDetailResponseBody::Data) };
    inline QueryDPUtilizationDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDPUtilizationDetailResponseBody::Data) };
    inline QueryDPUtilizationDetailResponseBody& setData(const QueryDPUtilizationDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDPUtilizationDetailResponseBody& setData(QueryDPUtilizationDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDPUtilizationDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDPUtilizationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDPUtilizationDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryDPUtilizationDetailResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
