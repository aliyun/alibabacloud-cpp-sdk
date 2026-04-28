// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDOUTBOUNDOBCLIDREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDOUTBOUNDOBCLIDREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudOutboundObClidReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudOutboundObClidReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudOutboundObClidReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudOutboundObClidReportResponseBody() = default ;
    CloudOutboundObClidReportResponseBody(const CloudOutboundObClidReportResponseBody &) = default ;
    CloudOutboundObClidReportResponseBody(CloudOutboundObClidReportResponseBody &&) = default ;
    CloudOutboundObClidReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudOutboundObClidReportResponseBody() = default ;
    CloudOutboundObClidReportResponseBody& operator=(const CloudOutboundObClidReportResponseBody &) = default ;
    CloudOutboundObClidReportResponseBody& operator=(CloudOutboundObClidReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AnsweredCount, answeredCount_);
          DARABONBA_PTR_TO_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_TO_JSON(AvgPreviewObWaitTime, avgPreviewObWaitTime_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Clid, clid_);
          DARABONBA_PTR_TO_JSON(ClidRate, clidRate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CustomerBillMinute, customerBillMinute_);
          DARABONBA_PTR_TO_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_TO_JSON(Day, day_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Hour, hour_);
          DARABONBA_PTR_TO_JSON(MaxBridgeTime, maxBridgeTime_);
          DARABONBA_PTR_TO_JSON(MinBridgeTime, minBridgeTime_);
          DARABONBA_PTR_TO_JSON(PreviewObCustomerRingingCount, previewObCustomerRingingCount_);
          DARABONBA_PTR_TO_JSON(PreviewObCustomerRingingRate, previewObCustomerRingingRate_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(RowName, rowName_);
          DARABONBA_PTR_TO_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_TO_JSON(ValidAvgBridgeTime, validAvgBridgeTime_);
          DARABONBA_PTR_TO_JSON(ValidCalls, validCalls_);
          DARABONBA_PTR_TO_JSON(ValidTotalBridgeTime, validTotalBridgeTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AnsweredCount, answeredCount_);
          DARABONBA_PTR_FROM_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(AvgPreviewObWaitTime, avgPreviewObWaitTime_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Clid, clid_);
          DARABONBA_PTR_FROM_JSON(ClidRate, clidRate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CustomerBillMinute, customerBillMinute_);
          DARABONBA_PTR_FROM_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_FROM_JSON(Day, day_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Hour, hour_);
          DARABONBA_PTR_FROM_JSON(MaxBridgeTime, maxBridgeTime_);
          DARABONBA_PTR_FROM_JSON(MinBridgeTime, minBridgeTime_);
          DARABONBA_PTR_FROM_JSON(PreviewObCustomerRingingCount, previewObCustomerRingingCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObCustomerRingingRate, previewObCustomerRingingRate_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(RowName, rowName_);
          DARABONBA_PTR_FROM_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_FROM_JSON(ValidAvgBridgeTime, validAvgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ValidCalls, validCalls_);
          DARABONBA_PTR_FROM_JSON(ValidTotalBridgeTime, validTotalBridgeTime_);
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
        virtual bool empty() const override { return this->answeredCount_ == nullptr
        && this->avgBridgeTime_ == nullptr && this->avgPreviewObWaitTime_ == nullptr && this->callType_ == nullptr && this->city_ == nullptr && this->clid_ == nullptr
        && this->clidRate_ == nullptr && this->createTime_ == nullptr && this->customerBillMinute_ == nullptr && this->dateTimeRange_ == nullptr && this->day_ == nullptr
        && this->enterpriseId_ == nullptr && this->hour_ == nullptr && this->maxBridgeTime_ == nullptr && this->minBridgeTime_ == nullptr && this->previewObCustomerRingingCount_ == nullptr
        && this->previewObCustomerRingingRate_ == nullptr && this->province_ == nullptr && this->rowName_ == nullptr && this->totalBridgeTime_ == nullptr && this->totalCount_ == nullptr
        && this->trunkGroupKey_ == nullptr && this->validAvgBridgeTime_ == nullptr && this->validCalls_ == nullptr && this->validTotalBridgeTime_ == nullptr; };
        // answeredCount Field Functions 
        bool hasAnsweredCount() const { return this->answeredCount_ != nullptr;};
        void deleteAnsweredCount() { this->answeredCount_ = nullptr;};
        inline string getAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(answeredCount_, "") };
        inline List& setAnsweredCount(string answeredCount) { DARABONBA_PTR_SET_VALUE(answeredCount_, answeredCount) };


        // avgBridgeTime Field Functions 
        bool hasAvgBridgeTime() const { return this->avgBridgeTime_ != nullptr;};
        void deleteAvgBridgeTime() { this->avgBridgeTime_ = nullptr;};
        inline string getAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(avgBridgeTime_, "") };
        inline List& setAvgBridgeTime(string avgBridgeTime) { DARABONBA_PTR_SET_VALUE(avgBridgeTime_, avgBridgeTime) };


        // avgPreviewObWaitTime Field Functions 
        bool hasAvgPreviewObWaitTime() const { return this->avgPreviewObWaitTime_ != nullptr;};
        void deleteAvgPreviewObWaitTime() { this->avgPreviewObWaitTime_ = nullptr;};
        inline int64_t getAvgPreviewObWaitTime() const { DARABONBA_PTR_GET_DEFAULT(avgPreviewObWaitTime_, 0L) };
        inline List& setAvgPreviewObWaitTime(int64_t avgPreviewObWaitTime) { DARABONBA_PTR_SET_VALUE(avgPreviewObWaitTime_, avgPreviewObWaitTime) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline List& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline List& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // clid Field Functions 
        bool hasClid() const { return this->clid_ != nullptr;};
        void deleteClid() { this->clid_ = nullptr;};
        inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
        inline List& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


        // clidRate Field Functions 
        bool hasClidRate() const { return this->clidRate_ != nullptr;};
        void deleteClidRate() { this->clidRate_ = nullptr;};
        inline string getClidRate() const { DARABONBA_PTR_GET_DEFAULT(clidRate_, "") };
        inline List& setClidRate(string clidRate) { DARABONBA_PTR_SET_VALUE(clidRate_, clidRate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // customerBillMinute Field Functions 
        bool hasCustomerBillMinute() const { return this->customerBillMinute_ != nullptr;};
        void deleteCustomerBillMinute() { this->customerBillMinute_ = nullptr;};
        inline int64_t getCustomerBillMinute() const { DARABONBA_PTR_GET_DEFAULT(customerBillMinute_, 0L) };
        inline List& setCustomerBillMinute(int64_t customerBillMinute) { DARABONBA_PTR_SET_VALUE(customerBillMinute_, customerBillMinute) };


        // dateTimeRange Field Functions 
        bool hasDateTimeRange() const { return this->dateTimeRange_ != nullptr;};
        void deleteDateTimeRange() { this->dateTimeRange_ = nullptr;};
        inline string getDateTimeRange() const { DARABONBA_PTR_GET_DEFAULT(dateTimeRange_, "") };
        inline List& setDateTimeRange(string dateTimeRange) { DARABONBA_PTR_SET_VALUE(dateTimeRange_, dateTimeRange) };


        // day Field Functions 
        bool hasDay() const { return this->day_ != nullptr;};
        void deleteDay() { this->day_ = nullptr;};
        inline string getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, "") };
        inline List& setDay(string day) { DARABONBA_PTR_SET_VALUE(day_, day) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline List& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // hour Field Functions 
        bool hasHour() const { return this->hour_ != nullptr;};
        void deleteHour() { this->hour_ = nullptr;};
        inline string getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, "") };
        inline List& setHour(string hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


        // maxBridgeTime Field Functions 
        bool hasMaxBridgeTime() const { return this->maxBridgeTime_ != nullptr;};
        void deleteMaxBridgeTime() { this->maxBridgeTime_ = nullptr;};
        inline string getMaxBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(maxBridgeTime_, "") };
        inline List& setMaxBridgeTime(string maxBridgeTime) { DARABONBA_PTR_SET_VALUE(maxBridgeTime_, maxBridgeTime) };


        // minBridgeTime Field Functions 
        bool hasMinBridgeTime() const { return this->minBridgeTime_ != nullptr;};
        void deleteMinBridgeTime() { this->minBridgeTime_ = nullptr;};
        inline string getMinBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(minBridgeTime_, "") };
        inline List& setMinBridgeTime(string minBridgeTime) { DARABONBA_PTR_SET_VALUE(minBridgeTime_, minBridgeTime) };


        // previewObCustomerRingingCount Field Functions 
        bool hasPreviewObCustomerRingingCount() const { return this->previewObCustomerRingingCount_ != nullptr;};
        void deletePreviewObCustomerRingingCount() { this->previewObCustomerRingingCount_ = nullptr;};
        inline int64_t getPreviewObCustomerRingingCount() const { DARABONBA_PTR_GET_DEFAULT(previewObCustomerRingingCount_, 0L) };
        inline List& setPreviewObCustomerRingingCount(int64_t previewObCustomerRingingCount) { DARABONBA_PTR_SET_VALUE(previewObCustomerRingingCount_, previewObCustomerRingingCount) };


        // previewObCustomerRingingRate Field Functions 
        bool hasPreviewObCustomerRingingRate() const { return this->previewObCustomerRingingRate_ != nullptr;};
        void deletePreviewObCustomerRingingRate() { this->previewObCustomerRingingRate_ = nullptr;};
        inline string getPreviewObCustomerRingingRate() const { DARABONBA_PTR_GET_DEFAULT(previewObCustomerRingingRate_, "") };
        inline List& setPreviewObCustomerRingingRate(string previewObCustomerRingingRate) { DARABONBA_PTR_SET_VALUE(previewObCustomerRingingRate_, previewObCustomerRingingRate) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline List& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // rowName Field Functions 
        bool hasRowName() const { return this->rowName_ != nullptr;};
        void deleteRowName() { this->rowName_ = nullptr;};
        inline string getRowName() const { DARABONBA_PTR_GET_DEFAULT(rowName_, "") };
        inline List& setRowName(string rowName) { DARABONBA_PTR_SET_VALUE(rowName_, rowName) };


        // totalBridgeTime Field Functions 
        bool hasTotalBridgeTime() const { return this->totalBridgeTime_ != nullptr;};
        void deleteTotalBridgeTime() { this->totalBridgeTime_ = nullptr;};
        inline string getTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(totalBridgeTime_, "") };
        inline List& setTotalBridgeTime(string totalBridgeTime) { DARABONBA_PTR_SET_VALUE(totalBridgeTime_, totalBridgeTime) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
        inline List& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // trunkGroupKey Field Functions 
        bool hasTrunkGroupKey() const { return this->trunkGroupKey_ != nullptr;};
        void deleteTrunkGroupKey() { this->trunkGroupKey_ = nullptr;};
        inline string getTrunkGroupKey() const { DARABONBA_PTR_GET_DEFAULT(trunkGroupKey_, "") };
        inline List& setTrunkGroupKey(string trunkGroupKey) { DARABONBA_PTR_SET_VALUE(trunkGroupKey_, trunkGroupKey) };


        // validAvgBridgeTime Field Functions 
        bool hasValidAvgBridgeTime() const { return this->validAvgBridgeTime_ != nullptr;};
        void deleteValidAvgBridgeTime() { this->validAvgBridgeTime_ = nullptr;};
        inline string getValidAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(validAvgBridgeTime_, "") };
        inline List& setValidAvgBridgeTime(string validAvgBridgeTime) { DARABONBA_PTR_SET_VALUE(validAvgBridgeTime_, validAvgBridgeTime) };


        // validCalls Field Functions 
        bool hasValidCalls() const { return this->validCalls_ != nullptr;};
        void deleteValidCalls() { this->validCalls_ = nullptr;};
        inline string getValidCalls() const { DARABONBA_PTR_GET_DEFAULT(validCalls_, "") };
        inline List& setValidCalls(string validCalls) { DARABONBA_PTR_SET_VALUE(validCalls_, validCalls) };


        // validTotalBridgeTime Field Functions 
        bool hasValidTotalBridgeTime() const { return this->validTotalBridgeTime_ != nullptr;};
        void deleteValidTotalBridgeTime() { this->validTotalBridgeTime_ = nullptr;};
        inline string getValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(validTotalBridgeTime_, "") };
        inline List& setValidTotalBridgeTime(string validTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(validTotalBridgeTime_, validTotalBridgeTime) };


      protected:
        // 客户接听数
        shared_ptr<string> answeredCount_ {};
        // 平均通话时长
        shared_ptr<string> avgBridgeTime_ {};
        // 平均等待时长
        shared_ptr<int64_t> avgPreviewObWaitTime_ {};
        shared_ptr<string> callType_ {};
        // 城市
        shared_ptr<string> city_ {};
        // 外显号码
        shared_ptr<string> clid_ {};
        // 号码接听率
        shared_ptr<string> clidRate_ {};
        // 创建日期
        shared_ptr<string> createTime_ {};
        // 客户侧计费分钟数
        shared_ptr<int64_t> customerBillMinute_ {};
        // 时间范围
        shared_ptr<string> dateTimeRange_ {};
        // 报表日期
        shared_ptr<string> day_ {};
        // 企业Id
        shared_ptr<int64_t> enterpriseId_ {};
        // 小时
        shared_ptr<string> hour_ {};
        // 最长通话时长
        shared_ptr<string> maxBridgeTime_ {};
        // 最短通话时长
        shared_ptr<string> minBridgeTime_ {};
        // 响铃数
        shared_ptr<int64_t> previewObCustomerRingingCount_ {};
        // 响铃率
        shared_ptr<string> previewObCustomerRingingRate_ {};
        // 省份
        shared_ptr<string> province_ {};
        // 格式化日期
        shared_ptr<string> rowName_ {};
        // 总通话时长
        shared_ptr<string> totalBridgeTime_ {};
        // 外呼总数
        shared_ptr<string> totalCount_ {};
        // 中继群组代号
        shared_ptr<string> trunkGroupKey_ {};
        // 有效通话平均时长
        shared_ptr<string> validAvgBridgeTime_ {};
        // 有效通话次数
        shared_ptr<string> validCalls_ {};
        // 有效通话总时长
        shared_ptr<string> validTotalBridgeTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // 返回数据
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudOutboundObClidReportResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudOutboundObClidReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudOutboundObClidReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudOutboundObClidReportResponseBody::Data) };
    inline CloudOutboundObClidReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudOutboundObClidReportResponseBody::Data) };
    inline CloudOutboundObClidReportResponseBody& setData(const CloudOutboundObClidReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudOutboundObClidReportResponseBody& setData(CloudOutboundObClidReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudOutboundObClidReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudOutboundObClidReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudOutboundObClidReportResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
