// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODY_HPP_
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
  class GetCheckRiskStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    GetCheckRiskStatisticsResponseBody() = default ;
    GetCheckRiskStatisticsResponseBody(const GetCheckRiskStatisticsResponseBody &) = default ;
    GetCheckRiskStatisticsResponseBody(GetCheckRiskStatisticsResponseBody &&) = default ;
    GetCheckRiskStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRiskStatisticsResponseBody() = default ;
    GetCheckRiskStatisticsResponseBody& operator=(const GetCheckRiskStatisticsResponseBody &) = default ;
    GetCheckRiskStatisticsResponseBody& operator=(GetCheckRiskStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(HandledCheckToday, handledCheckToday_);
        DARABONBA_PTR_TO_JSON(HandledCheckTotal, handledCheckTotal_);
        DARABONBA_PTR_TO_JSON(HandledDays, handledDays_);
        DARABONBA_PTR_TO_JSON(RiskCheckCnt, riskCheckCnt_);
        DARABONBA_PTR_TO_JSON(RiskDays, riskDays_);
        DARABONBA_PTR_TO_JSON(RiskWarningCnt, riskWarningCnt_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(HandledCheckToday, handledCheckToday_);
        DARABONBA_PTR_FROM_JSON(HandledCheckTotal, handledCheckTotal_);
        DARABONBA_PTR_FROM_JSON(HandledDays, handledDays_);
        DARABONBA_PTR_FROM_JSON(RiskCheckCnt, riskCheckCnt_);
        DARABONBA_PTR_FROM_JSON(RiskDays, riskDays_);
        DARABONBA_PTR_FROM_JSON(RiskWarningCnt, riskWarningCnt_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->handledCheckToday_ == nullptr
        && this->handledCheckTotal_ == nullptr && this->handledDays_ == nullptr && this->riskCheckCnt_ == nullptr && this->riskDays_ == nullptr && this->riskWarningCnt_ == nullptr; };
      // handledCheckToday Field Functions 
      bool hasHandledCheckToday() const { return this->handledCheckToday_ != nullptr;};
      void deleteHandledCheckToday() { this->handledCheckToday_ = nullptr;};
      inline int32_t getHandledCheckToday() const { DARABONBA_PTR_GET_DEFAULT(handledCheckToday_, 0) };
      inline Summary& setHandledCheckToday(int32_t handledCheckToday) { DARABONBA_PTR_SET_VALUE(handledCheckToday_, handledCheckToday) };


      // handledCheckTotal Field Functions 
      bool hasHandledCheckTotal() const { return this->handledCheckTotal_ != nullptr;};
      void deleteHandledCheckTotal() { this->handledCheckTotal_ = nullptr;};
      inline int32_t getHandledCheckTotal() const { DARABONBA_PTR_GET_DEFAULT(handledCheckTotal_, 0) };
      inline Summary& setHandledCheckTotal(int32_t handledCheckTotal) { DARABONBA_PTR_SET_VALUE(handledCheckTotal_, handledCheckTotal) };


      // handledDays Field Functions 
      bool hasHandledDays() const { return this->handledDays_ != nullptr;};
      void deleteHandledDays() { this->handledDays_ = nullptr;};
      inline int32_t getHandledDays() const { DARABONBA_PTR_GET_DEFAULT(handledDays_, 0) };
      inline Summary& setHandledDays(int32_t handledDays) { DARABONBA_PTR_SET_VALUE(handledDays_, handledDays) };


      // riskCheckCnt Field Functions 
      bool hasRiskCheckCnt() const { return this->riskCheckCnt_ != nullptr;};
      void deleteRiskCheckCnt() { this->riskCheckCnt_ = nullptr;};
      inline int32_t getRiskCheckCnt() const { DARABONBA_PTR_GET_DEFAULT(riskCheckCnt_, 0) };
      inline Summary& setRiskCheckCnt(int32_t riskCheckCnt) { DARABONBA_PTR_SET_VALUE(riskCheckCnt_, riskCheckCnt) };


      // riskDays Field Functions 
      bool hasRiskDays() const { return this->riskDays_ != nullptr;};
      void deleteRiskDays() { this->riskDays_ = nullptr;};
      inline int32_t getRiskDays() const { DARABONBA_PTR_GET_DEFAULT(riskDays_, 0) };
      inline Summary& setRiskDays(int32_t riskDays) { DARABONBA_PTR_SET_VALUE(riskDays_, riskDays) };


      // riskWarningCnt Field Functions 
      bool hasRiskWarningCnt() const { return this->riskWarningCnt_ != nullptr;};
      void deleteRiskWarningCnt() { this->riskWarningCnt_ = nullptr;};
      inline int32_t getRiskWarningCnt() const { DARABONBA_PTR_GET_DEFAULT(riskWarningCnt_, 0) };
      inline Summary& setRiskWarningCnt(int32_t riskWarningCnt) { DARABONBA_PTR_SET_VALUE(riskWarningCnt_, riskWarningCnt) };


    protected:
      // Check items handled today.
      shared_ptr<int32_t> handledCheckToday_ {};
      // A risk item exists.
      shared_ptr<int32_t> handledCheckTotal_ {};
      // Total days since check items were handled.
      shared_ptr<int32_t> handledDays_ {};
      // Check items that failed to pass the check.
      shared_ptr<int32_t> riskCheckCnt_ {};
      // Days since check items failed.
      shared_ptr<int32_t> riskDays_ {};
      // Risks to be handled.
      shared_ptr<int32_t> riskWarningCnt_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_TO_JSON(PassCount, passCount_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(SubStatistics, subStatistics_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(SubStatistics, subStatistics_);
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
      class SubStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
          DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
          DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
          DARABONBA_PTR_TO_JSON(PassCount, passCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        };
        friend void from_json(const Darabonba::Json& j, SubStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
          DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
          DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
          DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        };
        SubStatistics() = default ;
        SubStatistics(const SubStatistics &) = default ;
        SubStatistics(SubStatistics &&) = default ;
        SubStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubStatistics() = default ;
        SubStatistics& operator=(const SubStatistics &) = default ;
        SubStatistics& operator=(SubStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->highWarningCount_ == nullptr && this->lowWarningCount_ == nullptr && this->mediumWarningCount_ == nullptr && this->passCount_ == nullptr && this->totalCount_ == nullptr
        && this->typeName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline SubStatistics& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // highWarningCount Field Functions 
        bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
        void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
        inline int32_t getHighWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
        inline SubStatistics& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


        // lowWarningCount Field Functions 
        bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
        void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
        inline int32_t getLowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
        inline SubStatistics& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


        // mediumWarningCount Field Functions 
        bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
        void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
        inline int32_t getMediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
        inline SubStatistics& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


        // passCount Field Functions 
        bool hasPassCount() const { return this->passCount_ != nullptr;};
        void deletePassCount() { this->passCount_ = nullptr;};
        inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
        inline SubStatistics& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline SubStatistics& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // typeName Field Functions 
        bool hasTypeName() const { return this->typeName_ != nullptr;};
        void deleteTypeName() { this->typeName_ = nullptr;};
        inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
        inline SubStatistics& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      protected:
        // The name of the baseline type.
        shared_ptr<string> alias_ {};
        // The number of high-risk items.
        shared_ptr<int32_t> highWarningCount_ {};
        // The number of low-risk items.
        shared_ptr<int32_t> lowWarningCount_ {};
        // The number of medium-risk items.
        shared_ptr<int32_t> mediumWarningCount_ {};
        // The number of passed check items.
        shared_ptr<int32_t> passCount_ {};
        // The total number of check items.
        shared_ptr<int32_t> totalCount_ {};
        // The baseline type.
        shared_ptr<string> typeName_ {};
      };

      virtual bool empty() const override { return this->highWarningCount_ == nullptr
        && this->lowWarningCount_ == nullptr && this->mediumWarningCount_ == nullptr && this->passCount_ == nullptr && this->sceneName_ == nullptr && this->subStatistics_ == nullptr
        && this->totalCount_ == nullptr; };
      // highWarningCount Field Functions 
      bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
      void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
      inline int32_t getHighWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
      inline Data& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


      // lowWarningCount Field Functions 
      bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
      void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
      inline int32_t getLowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
      inline Data& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


      // mediumWarningCount Field Functions 
      bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
      void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
      inline int32_t getMediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
      inline Data& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


      // passCount Field Functions 
      bool hasPassCount() const { return this->passCount_ != nullptr;};
      void deletePassCount() { this->passCount_ = nullptr;};
      inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
      inline Data& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Data& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // subStatistics Field Functions 
      bool hasSubStatistics() const { return this->subStatistics_ != nullptr;};
      void deleteSubStatistics() { this->subStatistics_ = nullptr;};
      inline const vector<Data::SubStatistics> & getSubStatistics() const { DARABONBA_PTR_GET_CONST(subStatistics_, vector<Data::SubStatistics>) };
      inline vector<Data::SubStatistics> getSubStatistics() { DARABONBA_PTR_GET(subStatistics_, vector<Data::SubStatistics>) };
      inline Data& setSubStatistics(const vector<Data::SubStatistics> & subStatistics) { DARABONBA_PTR_SET_VALUE(subStatistics_, subStatistics) };
      inline Data& setSubStatistics(vector<Data::SubStatistics> && subStatistics) { DARABONBA_PTR_SET_RVALUE(subStatistics_, subStatistics) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of high-risk items.
      shared_ptr<int32_t> highWarningCount_ {};
      // The number of low-risk items.
      shared_ptr<int32_t> lowWarningCount_ {};
      // The number of medium-risk items.
      shared_ptr<int32_t> mediumWarningCount_ {};
      // The number of passed check items.
      shared_ptr<int32_t> passCount_ {};
      // The name of the risk scenario.
      shared_ptr<string> sceneName_ {};
      // The statistics on check items that are used in the risk scenario by baseline type.
      shared_ptr<vector<Data::SubStatistics>> subStatistics_ {};
      // The total number of check items.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->summary_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetCheckRiskStatisticsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCheckRiskStatisticsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCheckRiskStatisticsResponseBody::Data>) };
    inline vector<GetCheckRiskStatisticsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCheckRiskStatisticsResponseBody::Data>) };
    inline GetCheckRiskStatisticsResponseBody& setData(const vector<GetCheckRiskStatisticsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCheckRiskStatisticsResponseBody& setData(vector<GetCheckRiskStatisticsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckRiskStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetCheckRiskStatisticsResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, GetCheckRiskStatisticsResponseBody::Summary) };
    inline GetCheckRiskStatisticsResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, GetCheckRiskStatisticsResponseBody::Summary) };
    inline GetCheckRiskStatisticsResponseBody& setSummary(const GetCheckRiskStatisticsResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetCheckRiskStatisticsResponseBody& setSummary(GetCheckRiskStatisticsResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The number of risk scenarios.
    shared_ptr<int32_t> count_ {};
    // An array consisting of the statistics on check items that are used in risk scenarios.
    shared_ptr<vector<GetCheckRiskStatisticsResponseBody::Data>> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Historical check item statistics.
    shared_ptr<GetCheckRiskStatisticsResponseBody::Summary> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
