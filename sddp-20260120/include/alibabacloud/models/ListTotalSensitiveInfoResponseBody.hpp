// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOTALSENSITIVEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTOTALSENSITIVEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListTotalSensitiveInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTotalSensitiveInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCountDOList, dataCountDOList_);
      DARABONBA_PTR_TO_JSON(DbCount, dbCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_TO_JSON(S0Count, s0Count_);
      DARABONBA_PTR_TO_JSON(S10Count, s10Count_);
      DARABONBA_PTR_TO_JSON(S1Count, s1Count_);
      DARABONBA_PTR_TO_JSON(S2Count, s2Count_);
      DARABONBA_PTR_TO_JSON(S3Count, s3Count_);
      DARABONBA_PTR_TO_JSON(S4Count, s4Count_);
      DARABONBA_PTR_TO_JSON(S5Count, s5Count_);
      DARABONBA_PTR_TO_JSON(S6Count, s6Count_);
      DARABONBA_PTR_TO_JSON(S7Count, s7Count_);
      DARABONBA_PTR_TO_JSON(S8Count, s8Count_);
      DARABONBA_PTR_TO_JSON(S9Count, s9Count_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_TO_JSON(SensitiveDbCount, sensitiveDbCount_);
      DARABONBA_PTR_TO_JSON(SensitiveInstanceCount, sensitiveInstanceCount_);
      DARABONBA_PTR_TO_JSON(SensitiveUnStructSize, sensitiveUnStructSize_);
      DARABONBA_PTR_TO_JSON(SubSensitiveCount, subSensitiveCount_);
      DARABONBA_PTR_TO_JSON(SubTotalCount, subTotalCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnStructSize, unStructSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTotalSensitiveInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCountDOList, dataCountDOList_);
      DARABONBA_PTR_FROM_JSON(DbCount, dbCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_FROM_JSON(S0Count, s0Count_);
      DARABONBA_PTR_FROM_JSON(S10Count, s10Count_);
      DARABONBA_PTR_FROM_JSON(S1Count, s1Count_);
      DARABONBA_PTR_FROM_JSON(S2Count, s2Count_);
      DARABONBA_PTR_FROM_JSON(S3Count, s3Count_);
      DARABONBA_PTR_FROM_JSON(S4Count, s4Count_);
      DARABONBA_PTR_FROM_JSON(S5Count, s5Count_);
      DARABONBA_PTR_FROM_JSON(S6Count, s6Count_);
      DARABONBA_PTR_FROM_JSON(S7Count, s7Count_);
      DARABONBA_PTR_FROM_JSON(S8Count, s8Count_);
      DARABONBA_PTR_FROM_JSON(S9Count, s9Count_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveDbCount, sensitiveDbCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveInstanceCount, sensitiveInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveUnStructSize, sensitiveUnStructSize_);
      DARABONBA_PTR_FROM_JSON(SubSensitiveCount, subSensitiveCount_);
      DARABONBA_PTR_FROM_JSON(SubTotalCount, subTotalCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnStructSize, unStructSize_);
    };
    ListTotalSensitiveInfoResponseBody() = default ;
    ListTotalSensitiveInfoResponseBody(const ListTotalSensitiveInfoResponseBody &) = default ;
    ListTotalSensitiveInfoResponseBody(ListTotalSensitiveInfoResponseBody &&) = default ;
    ListTotalSensitiveInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTotalSensitiveInfoResponseBody() = default ;
    ListTotalSensitiveInfoResponseBody& operator=(const ListTotalSensitiveInfoResponseBody &) = default ;
    ListTotalSensitiveInfoResponseBody& operator=(ListTotalSensitiveInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, RuleInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      RuleInfoList() = default ;
      RuleInfoList(const RuleInfoList &) = default ;
      RuleInfoList(RuleInfoList &&) = default ;
      RuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleInfoList() = default ;
      RuleInfoList& operator=(const RuleInfoList &) = default ;
      RuleInfoList& operator=(RuleInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleCount_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int64_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
      inline RuleInfoList& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
      inline RuleInfoList& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleInfoList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      shared_ptr<int64_t> ruleCount_ {};
      shared_ptr<int32_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
    };

    class DataCountDOList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCountDOList& obj) { 
        DARABONBA_PTR_TO_JSON(DataCountDOList, dataCountDOList_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
        DARABONBA_PTR_TO_JSON(S0Count, s0Count_);
        DARABONBA_PTR_TO_JSON(S10Count, s10Count_);
        DARABONBA_PTR_TO_JSON(S1Count, s1Count_);
        DARABONBA_PTR_TO_JSON(S2Count, s2Count_);
        DARABONBA_PTR_TO_JSON(S3Count, s3Count_);
        DARABONBA_PTR_TO_JSON(S4Count, s4Count_);
        DARABONBA_PTR_TO_JSON(S5Count, s5Count_);
        DARABONBA_PTR_TO_JSON(S6Count, s6Count_);
        DARABONBA_PTR_TO_JSON(S7Count, s7Count_);
        DARABONBA_PTR_TO_JSON(S8Count, s8Count_);
        DARABONBA_PTR_TO_JSON(S9Count, s9Count_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(StructFlag, structFlag_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DataCountDOList& obj) { 
        DARABONBA_PTR_FROM_JSON(DataCountDOList, dataCountDOList_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
        DARABONBA_PTR_FROM_JSON(S0Count, s0Count_);
        DARABONBA_PTR_FROM_JSON(S10Count, s10Count_);
        DARABONBA_PTR_FROM_JSON(S1Count, s1Count_);
        DARABONBA_PTR_FROM_JSON(S2Count, s2Count_);
        DARABONBA_PTR_FROM_JSON(S3Count, s3Count_);
        DARABONBA_PTR_FROM_JSON(S4Count, s4Count_);
        DARABONBA_PTR_FROM_JSON(S5Count, s5Count_);
        DARABONBA_PTR_FROM_JSON(S6Count, s6Count_);
        DARABONBA_PTR_FROM_JSON(S7Count, s7Count_);
        DARABONBA_PTR_FROM_JSON(S8Count, s8Count_);
        DARABONBA_PTR_FROM_JSON(S9Count, s9Count_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(StructFlag, structFlag_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DataCountDOList() = default ;
      DataCountDOList(const DataCountDOList &) = default ;
      DataCountDOList(DataCountDOList &&) = default ;
      DataCountDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCountDOList() = default ;
      DataCountDOList& operator=(const DataCountDOList &) = default ;
      DataCountDOList& operator=(DataCountDOList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, RuleInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        RuleInfoList() = default ;
        RuleInfoList(const RuleInfoList &) = default ;
        RuleInfoList(RuleInfoList &&) = default ;
        RuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleInfoList() = default ;
        RuleInfoList& operator=(const RuleInfoList &) = default ;
        RuleInfoList& operator=(RuleInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleCount_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int64_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
        inline RuleInfoList& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline RuleInfoList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleInfoList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<int64_t> ruleCount_ {};
        shared_ptr<int64_t> ruleId_ {};
        shared_ptr<string> ruleName_ {};
      };

      class DataCountDOListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataCountDOListItem& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, DataCountDOListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        DataCountDOListItem() = default ;
        DataCountDOListItem(const DataCountDOListItem &) = default ;
        DataCountDOListItem(DataCountDOListItem &&) = default ;
        DataCountDOListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataCountDOListItem() = default ;
        DataCountDOListItem& operator=(const DataCountDOListItem &) = default ;
        DataCountDOListItem& operator=(DataCountDOListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->sensitiveCount_ == nullptr && this->totalCount_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline int64_t getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
        inline DataCountDOListItem& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // sensitiveCount Field Functions 
        bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
        void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
        inline int64_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
        inline DataCountDOListItem& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline DataCountDOListItem& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<int64_t> date_ {};
        shared_ptr<int64_t> sensitiveCount_ {};
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->dataCountDOList_ == nullptr
        && this->date_ == nullptr && this->regionId_ == nullptr && this->ruleInfoList_ == nullptr && this->s0Count_ == nullptr && this->s10Count_ == nullptr
        && this->s1Count_ == nullptr && this->s2Count_ == nullptr && this->s3Count_ == nullptr && this->s4Count_ == nullptr && this->s5Count_ == nullptr
        && this->s6Count_ == nullptr && this->s7Count_ == nullptr && this->s8Count_ == nullptr && this->s9Count_ == nullptr && this->sensitiveCount_ == nullptr
        && this->structFlag_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->totalCount_ == nullptr; };
      // dataCountDOList Field Functions 
      bool hasDataCountDOList() const { return this->dataCountDOList_ != nullptr;};
      void deleteDataCountDOList() { this->dataCountDOList_ = nullptr;};
      inline const vector<DataCountDOList::DataCountDOListItem> & getDataCountDOList() const { DARABONBA_PTR_GET_CONST(dataCountDOList_, vector<DataCountDOList::DataCountDOListItem>) };
      inline vector<DataCountDOList::DataCountDOListItem> getDataCountDOList() { DARABONBA_PTR_GET(dataCountDOList_, vector<DataCountDOList::DataCountDOListItem>) };
      inline DataCountDOList& setDataCountDOList(const vector<DataCountDOList::DataCountDOListItem> & dataCountDOList) { DARABONBA_PTR_SET_VALUE(dataCountDOList_, dataCountDOList) };
      inline DataCountDOList& setDataCountDOList(vector<DataCountDOList::DataCountDOListItem> && dataCountDOList) { DARABONBA_PTR_SET_RVALUE(dataCountDOList_, dataCountDOList) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline int64_t getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
      inline DataCountDOList& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataCountDOList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // ruleInfoList Field Functions 
      bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
      void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
      inline const vector<DataCountDOList::RuleInfoList> & getRuleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, vector<DataCountDOList::RuleInfoList>) };
      inline vector<DataCountDOList::RuleInfoList> getRuleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, vector<DataCountDOList::RuleInfoList>) };
      inline DataCountDOList& setRuleInfoList(const vector<DataCountDOList::RuleInfoList> & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
      inline DataCountDOList& setRuleInfoList(vector<DataCountDOList::RuleInfoList> && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


      // s0Count Field Functions 
      bool hasS0Count() const { return this->s0Count_ != nullptr;};
      void deleteS0Count() { this->s0Count_ = nullptr;};
      inline int64_t getS0Count() const { DARABONBA_PTR_GET_DEFAULT(s0Count_, 0L) };
      inline DataCountDOList& setS0Count(int64_t s0Count) { DARABONBA_PTR_SET_VALUE(s0Count_, s0Count) };


      // s10Count Field Functions 
      bool hasS10Count() const { return this->s10Count_ != nullptr;};
      void deleteS10Count() { this->s10Count_ = nullptr;};
      inline int64_t getS10Count() const { DARABONBA_PTR_GET_DEFAULT(s10Count_, 0L) };
      inline DataCountDOList& setS10Count(int64_t s10Count) { DARABONBA_PTR_SET_VALUE(s10Count_, s10Count) };


      // s1Count Field Functions 
      bool hasS1Count() const { return this->s1Count_ != nullptr;};
      void deleteS1Count() { this->s1Count_ = nullptr;};
      inline int64_t getS1Count() const { DARABONBA_PTR_GET_DEFAULT(s1Count_, 0L) };
      inline DataCountDOList& setS1Count(int64_t s1Count) { DARABONBA_PTR_SET_VALUE(s1Count_, s1Count) };


      // s2Count Field Functions 
      bool hasS2Count() const { return this->s2Count_ != nullptr;};
      void deleteS2Count() { this->s2Count_ = nullptr;};
      inline int64_t getS2Count() const { DARABONBA_PTR_GET_DEFAULT(s2Count_, 0L) };
      inline DataCountDOList& setS2Count(int64_t s2Count) { DARABONBA_PTR_SET_VALUE(s2Count_, s2Count) };


      // s3Count Field Functions 
      bool hasS3Count() const { return this->s3Count_ != nullptr;};
      void deleteS3Count() { this->s3Count_ = nullptr;};
      inline int64_t getS3Count() const { DARABONBA_PTR_GET_DEFAULT(s3Count_, 0L) };
      inline DataCountDOList& setS3Count(int64_t s3Count) { DARABONBA_PTR_SET_VALUE(s3Count_, s3Count) };


      // s4Count Field Functions 
      bool hasS4Count() const { return this->s4Count_ != nullptr;};
      void deleteS4Count() { this->s4Count_ = nullptr;};
      inline int64_t getS4Count() const { DARABONBA_PTR_GET_DEFAULT(s4Count_, 0L) };
      inline DataCountDOList& setS4Count(int64_t s4Count) { DARABONBA_PTR_SET_VALUE(s4Count_, s4Count) };


      // s5Count Field Functions 
      bool hasS5Count() const { return this->s5Count_ != nullptr;};
      void deleteS5Count() { this->s5Count_ = nullptr;};
      inline int64_t getS5Count() const { DARABONBA_PTR_GET_DEFAULT(s5Count_, 0L) };
      inline DataCountDOList& setS5Count(int64_t s5Count) { DARABONBA_PTR_SET_VALUE(s5Count_, s5Count) };


      // s6Count Field Functions 
      bool hasS6Count() const { return this->s6Count_ != nullptr;};
      void deleteS6Count() { this->s6Count_ = nullptr;};
      inline int64_t getS6Count() const { DARABONBA_PTR_GET_DEFAULT(s6Count_, 0L) };
      inline DataCountDOList& setS6Count(int64_t s6Count) { DARABONBA_PTR_SET_VALUE(s6Count_, s6Count) };


      // s7Count Field Functions 
      bool hasS7Count() const { return this->s7Count_ != nullptr;};
      void deleteS7Count() { this->s7Count_ = nullptr;};
      inline int64_t getS7Count() const { DARABONBA_PTR_GET_DEFAULT(s7Count_, 0L) };
      inline DataCountDOList& setS7Count(int64_t s7Count) { DARABONBA_PTR_SET_VALUE(s7Count_, s7Count) };


      // s8Count Field Functions 
      bool hasS8Count() const { return this->s8Count_ != nullptr;};
      void deleteS8Count() { this->s8Count_ = nullptr;};
      inline int64_t getS8Count() const { DARABONBA_PTR_GET_DEFAULT(s8Count_, 0L) };
      inline DataCountDOList& setS8Count(int64_t s8Count) { DARABONBA_PTR_SET_VALUE(s8Count_, s8Count) };


      // s9Count Field Functions 
      bool hasS9Count() const { return this->s9Count_ != nullptr;};
      void deleteS9Count() { this->s9Count_ = nullptr;};
      inline int64_t getS9Count() const { DARABONBA_PTR_GET_DEFAULT(s9Count_, 0L) };
      inline DataCountDOList& setS9Count(int64_t s9Count) { DARABONBA_PTR_SET_VALUE(s9Count_, s9Count) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int64_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
      inline DataCountDOList& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // structFlag Field Functions 
      bool hasStructFlag() const { return this->structFlag_ != nullptr;};
      void deleteStructFlag() { this->structFlag_ = nullptr;};
      inline int32_t getStructFlag() const { DARABONBA_PTR_GET_DEFAULT(structFlag_, 0) };
      inline DataCountDOList& setStructFlag(int32_t structFlag) { DARABONBA_PTR_SET_VALUE(structFlag_, structFlag) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline DataCountDOList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline DataCountDOList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline DataCountDOList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<DataCountDOList::DataCountDOListItem>> dataCountDOList_ {};
      shared_ptr<int64_t> date_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<DataCountDOList::RuleInfoList>> ruleInfoList_ {};
      shared_ptr<int64_t> s0Count_ {};
      shared_ptr<int64_t> s10Count_ {};
      shared_ptr<int64_t> s1Count_ {};
      shared_ptr<int64_t> s2Count_ {};
      shared_ptr<int64_t> s3Count_ {};
      shared_ptr<int64_t> s4Count_ {};
      shared_ptr<int64_t> s5Count_ {};
      shared_ptr<int64_t> s6Count_ {};
      shared_ptr<int64_t> s7Count_ {};
      shared_ptr<int64_t> s8Count_ {};
      shared_ptr<int64_t> s9Count_ {};
      shared_ptr<int64_t> sensitiveCount_ {};
      shared_ptr<int32_t> structFlag_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->dataCountDOList_ == nullptr
        && this->dbCount_ == nullptr && this->instanceCount_ == nullptr && this->requestId_ == nullptr && this->ruleInfoList_ == nullptr && this->s0Count_ == nullptr
        && this->s10Count_ == nullptr && this->s1Count_ == nullptr && this->s2Count_ == nullptr && this->s3Count_ == nullptr && this->s4Count_ == nullptr
        && this->s5Count_ == nullptr && this->s6Count_ == nullptr && this->s7Count_ == nullptr && this->s8Count_ == nullptr && this->s9Count_ == nullptr
        && this->sensitiveCount_ == nullptr && this->sensitiveDbCount_ == nullptr && this->sensitiveInstanceCount_ == nullptr && this->sensitiveUnStructSize_ == nullptr && this->subSensitiveCount_ == nullptr
        && this->subTotalCount_ == nullptr && this->totalCount_ == nullptr && this->unStructSize_ == nullptr; };
    // dataCountDOList Field Functions 
    bool hasDataCountDOList() const { return this->dataCountDOList_ != nullptr;};
    void deleteDataCountDOList() { this->dataCountDOList_ = nullptr;};
    inline const vector<ListTotalSensitiveInfoResponseBody::DataCountDOList> & getDataCountDOList() const { DARABONBA_PTR_GET_CONST(dataCountDOList_, vector<ListTotalSensitiveInfoResponseBody::DataCountDOList>) };
    inline vector<ListTotalSensitiveInfoResponseBody::DataCountDOList> getDataCountDOList() { DARABONBA_PTR_GET(dataCountDOList_, vector<ListTotalSensitiveInfoResponseBody::DataCountDOList>) };
    inline ListTotalSensitiveInfoResponseBody& setDataCountDOList(const vector<ListTotalSensitiveInfoResponseBody::DataCountDOList> & dataCountDOList) { DARABONBA_PTR_SET_VALUE(dataCountDOList_, dataCountDOList) };
    inline ListTotalSensitiveInfoResponseBody& setDataCountDOList(vector<ListTotalSensitiveInfoResponseBody::DataCountDOList> && dataCountDOList) { DARABONBA_PTR_SET_RVALUE(dataCountDOList_, dataCountDOList) };


    // dbCount Field Functions 
    bool hasDbCount() const { return this->dbCount_ != nullptr;};
    void deleteDbCount() { this->dbCount_ = nullptr;};
    inline int64_t getDbCount() const { DARABONBA_PTR_GET_DEFAULT(dbCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setDbCount(int64_t dbCount) { DARABONBA_PTR_SET_VALUE(dbCount_, dbCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTotalSensitiveInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfoList Field Functions 
    bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
    void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
    inline const vector<ListTotalSensitiveInfoResponseBody::RuleInfoList> & getRuleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, vector<ListTotalSensitiveInfoResponseBody::RuleInfoList>) };
    inline vector<ListTotalSensitiveInfoResponseBody::RuleInfoList> getRuleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, vector<ListTotalSensitiveInfoResponseBody::RuleInfoList>) };
    inline ListTotalSensitiveInfoResponseBody& setRuleInfoList(const vector<ListTotalSensitiveInfoResponseBody::RuleInfoList> & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
    inline ListTotalSensitiveInfoResponseBody& setRuleInfoList(vector<ListTotalSensitiveInfoResponseBody::RuleInfoList> && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


    // s0Count Field Functions 
    bool hasS0Count() const { return this->s0Count_ != nullptr;};
    void deleteS0Count() { this->s0Count_ = nullptr;};
    inline int64_t getS0Count() const { DARABONBA_PTR_GET_DEFAULT(s0Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS0Count(int64_t s0Count) { DARABONBA_PTR_SET_VALUE(s0Count_, s0Count) };


    // s10Count Field Functions 
    bool hasS10Count() const { return this->s10Count_ != nullptr;};
    void deleteS10Count() { this->s10Count_ = nullptr;};
    inline int64_t getS10Count() const { DARABONBA_PTR_GET_DEFAULT(s10Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS10Count(int64_t s10Count) { DARABONBA_PTR_SET_VALUE(s10Count_, s10Count) };


    // s1Count Field Functions 
    bool hasS1Count() const { return this->s1Count_ != nullptr;};
    void deleteS1Count() { this->s1Count_ = nullptr;};
    inline int64_t getS1Count() const { DARABONBA_PTR_GET_DEFAULT(s1Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS1Count(int64_t s1Count) { DARABONBA_PTR_SET_VALUE(s1Count_, s1Count) };


    // s2Count Field Functions 
    bool hasS2Count() const { return this->s2Count_ != nullptr;};
    void deleteS2Count() { this->s2Count_ = nullptr;};
    inline int64_t getS2Count() const { DARABONBA_PTR_GET_DEFAULT(s2Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS2Count(int64_t s2Count) { DARABONBA_PTR_SET_VALUE(s2Count_, s2Count) };


    // s3Count Field Functions 
    bool hasS3Count() const { return this->s3Count_ != nullptr;};
    void deleteS3Count() { this->s3Count_ = nullptr;};
    inline int64_t getS3Count() const { DARABONBA_PTR_GET_DEFAULT(s3Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS3Count(int64_t s3Count) { DARABONBA_PTR_SET_VALUE(s3Count_, s3Count) };


    // s4Count Field Functions 
    bool hasS4Count() const { return this->s4Count_ != nullptr;};
    void deleteS4Count() { this->s4Count_ = nullptr;};
    inline int64_t getS4Count() const { DARABONBA_PTR_GET_DEFAULT(s4Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS4Count(int64_t s4Count) { DARABONBA_PTR_SET_VALUE(s4Count_, s4Count) };


    // s5Count Field Functions 
    bool hasS5Count() const { return this->s5Count_ != nullptr;};
    void deleteS5Count() { this->s5Count_ = nullptr;};
    inline int64_t getS5Count() const { DARABONBA_PTR_GET_DEFAULT(s5Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS5Count(int64_t s5Count) { DARABONBA_PTR_SET_VALUE(s5Count_, s5Count) };


    // s6Count Field Functions 
    bool hasS6Count() const { return this->s6Count_ != nullptr;};
    void deleteS6Count() { this->s6Count_ = nullptr;};
    inline int64_t getS6Count() const { DARABONBA_PTR_GET_DEFAULT(s6Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS6Count(int64_t s6Count) { DARABONBA_PTR_SET_VALUE(s6Count_, s6Count) };


    // s7Count Field Functions 
    bool hasS7Count() const { return this->s7Count_ != nullptr;};
    void deleteS7Count() { this->s7Count_ = nullptr;};
    inline int64_t getS7Count() const { DARABONBA_PTR_GET_DEFAULT(s7Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS7Count(int64_t s7Count) { DARABONBA_PTR_SET_VALUE(s7Count_, s7Count) };


    // s8Count Field Functions 
    bool hasS8Count() const { return this->s8Count_ != nullptr;};
    void deleteS8Count() { this->s8Count_ = nullptr;};
    inline int64_t getS8Count() const { DARABONBA_PTR_GET_DEFAULT(s8Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS8Count(int64_t s8Count) { DARABONBA_PTR_SET_VALUE(s8Count_, s8Count) };


    // s9Count Field Functions 
    bool hasS9Count() const { return this->s9Count_ != nullptr;};
    void deleteS9Count() { this->s9Count_ = nullptr;};
    inline int64_t getS9Count() const { DARABONBA_PTR_GET_DEFAULT(s9Count_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setS9Count(int64_t s9Count) { DARABONBA_PTR_SET_VALUE(s9Count_, s9Count) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int64_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // sensitiveDbCount Field Functions 
    bool hasSensitiveDbCount() const { return this->sensitiveDbCount_ != nullptr;};
    void deleteSensitiveDbCount() { this->sensitiveDbCount_ = nullptr;};
    inline int64_t getSensitiveDbCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDbCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSensitiveDbCount(int64_t sensitiveDbCount) { DARABONBA_PTR_SET_VALUE(sensitiveDbCount_, sensitiveDbCount) };


    // sensitiveInstanceCount Field Functions 
    bool hasSensitiveInstanceCount() const { return this->sensitiveInstanceCount_ != nullptr;};
    void deleteSensitiveInstanceCount() { this->sensitiveInstanceCount_ = nullptr;};
    inline int64_t getSensitiveInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveInstanceCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSensitiveInstanceCount(int64_t sensitiveInstanceCount) { DARABONBA_PTR_SET_VALUE(sensitiveInstanceCount_, sensitiveInstanceCount) };


    // sensitiveUnStructSize Field Functions 
    bool hasSensitiveUnStructSize() const { return this->sensitiveUnStructSize_ != nullptr;};
    void deleteSensitiveUnStructSize() { this->sensitiveUnStructSize_ = nullptr;};
    inline int64_t getSensitiveUnStructSize() const { DARABONBA_PTR_GET_DEFAULT(sensitiveUnStructSize_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSensitiveUnStructSize(int64_t sensitiveUnStructSize) { DARABONBA_PTR_SET_VALUE(sensitiveUnStructSize_, sensitiveUnStructSize) };


    // subSensitiveCount Field Functions 
    bool hasSubSensitiveCount() const { return this->subSensitiveCount_ != nullptr;};
    void deleteSubSensitiveCount() { this->subSensitiveCount_ = nullptr;};
    inline int64_t getSubSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(subSensitiveCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSubSensitiveCount(int64_t subSensitiveCount) { DARABONBA_PTR_SET_VALUE(subSensitiveCount_, subSensitiveCount) };


    // subTotalCount Field Functions 
    bool hasSubTotalCount() const { return this->subTotalCount_ != nullptr;};
    void deleteSubTotalCount() { this->subTotalCount_ = nullptr;};
    inline int64_t getSubTotalCount() const { DARABONBA_PTR_GET_DEFAULT(subTotalCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setSubTotalCount(int64_t subTotalCount) { DARABONBA_PTR_SET_VALUE(subTotalCount_, subTotalCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unStructSize Field Functions 
    bool hasUnStructSize() const { return this->unStructSize_ != nullptr;};
    void deleteUnStructSize() { this->unStructSize_ = nullptr;};
    inline int64_t getUnStructSize() const { DARABONBA_PTR_GET_DEFAULT(unStructSize_, 0L) };
    inline ListTotalSensitiveInfoResponseBody& setUnStructSize(int64_t unStructSize) { DARABONBA_PTR_SET_VALUE(unStructSize_, unStructSize) };


  protected:
    shared_ptr<vector<ListTotalSensitiveInfoResponseBody::DataCountDOList>> dataCountDOList_ {};
    shared_ptr<int64_t> dbCount_ {};
    shared_ptr<int64_t> instanceCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTotalSensitiveInfoResponseBody::RuleInfoList>> ruleInfoList_ {};
    shared_ptr<int64_t> s0Count_ {};
    shared_ptr<int64_t> s10Count_ {};
    shared_ptr<int64_t> s1Count_ {};
    shared_ptr<int64_t> s2Count_ {};
    shared_ptr<int64_t> s3Count_ {};
    shared_ptr<int64_t> s4Count_ {};
    shared_ptr<int64_t> s5Count_ {};
    shared_ptr<int64_t> s6Count_ {};
    shared_ptr<int64_t> s7Count_ {};
    shared_ptr<int64_t> s8Count_ {};
    shared_ptr<int64_t> s9Count_ {};
    shared_ptr<int64_t> sensitiveCount_ {};
    shared_ptr<int64_t> sensitiveDbCount_ {};
    shared_ptr<int64_t> sensitiveInstanceCount_ {};
    shared_ptr<int64_t> sensitiveUnStructSize_ {};
    shared_ptr<int64_t> subSensitiveCount_ {};
    shared_ptr<int64_t> subTotalCount_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<int64_t> unStructSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
