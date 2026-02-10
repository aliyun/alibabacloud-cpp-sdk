// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIProduceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
    };
    DescribeLiveAIProduceRulesResponseBody() = default ;
    DescribeLiveAIProduceRulesResponseBody(const DescribeLiveAIProduceRulesResponseBody &) = default ;
    DescribeLiveAIProduceRulesResponseBody(DescribeLiveAIProduceRulesResponseBody &&) = default ;
    DescribeLiveAIProduceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIProduceRulesResponseBody() = default ;
    DescribeLiveAIProduceRulesResponseBody& operator=(const DescribeLiveAIProduceRulesResponseBody &) = default ;
    DescribeLiveAIProduceRulesResponseBody& operator=(DescribeLiveAIProduceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RuleInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
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
      class RuleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(App, app_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
          DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
          DARABONBA_PTR_TO_JSON(LiveTemplate, liveTemplate_);
          DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
          DARABONBA_PTR_TO_JSON(StudioName, studioName_);
          DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
          DARABONBA_PTR_TO_JSON(SuffixName, suffixName_);
        };
        friend void from_json(const Darabonba::Json& j, RuleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(App, app_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
          DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
          DARABONBA_PTR_FROM_JSON(LiveTemplate, liveTemplate_);
          DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
          DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
          DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
          DARABONBA_PTR_FROM_JSON(SuffixName, suffixName_);
        };
        RuleInfo() = default ;
        RuleInfo(const RuleInfo &) = default ;
        RuleInfo(RuleInfo &&) = default ;
        RuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleInfo() = default ;
        RuleInfo& operator=(const RuleInfo &) = default ;
        RuleInfo& operator=(RuleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->app_ == nullptr
        && this->description_ == nullptr && this->domain_ == nullptr && this->gmtModifyTime_ == nullptr && this->isLazy_ == nullptr && this->liveTemplate_ == nullptr
        && this->rulesId_ == nullptr && this->studioName_ == nullptr && this->subtitleName_ == nullptr && this->suffixName_ == nullptr; };
        // app Field Functions 
        bool hasApp() const { return this->app_ != nullptr;};
        void deleteApp() { this->app_ = nullptr;};
        inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
        inline RuleInfo& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RuleInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline RuleInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // gmtModifyTime Field Functions 
        bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
        void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
        inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
        inline RuleInfo& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


        // isLazy Field Functions 
        bool hasIsLazy() const { return this->isLazy_ != nullptr;};
        void deleteIsLazy() { this->isLazy_ = nullptr;};
        inline bool getIsLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
        inline RuleInfo& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


        // liveTemplate Field Functions 
        bool hasLiveTemplate() const { return this->liveTemplate_ != nullptr;};
        void deleteLiveTemplate() { this->liveTemplate_ = nullptr;};
        inline string getLiveTemplate() const { DARABONBA_PTR_GET_DEFAULT(liveTemplate_, "") };
        inline RuleInfo& setLiveTemplate(string liveTemplate) { DARABONBA_PTR_SET_VALUE(liveTemplate_, liveTemplate) };


        // rulesId Field Functions 
        bool hasRulesId() const { return this->rulesId_ != nullptr;};
        void deleteRulesId() { this->rulesId_ = nullptr;};
        inline string getRulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
        inline RuleInfo& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


        // studioName Field Functions 
        bool hasStudioName() const { return this->studioName_ != nullptr;};
        void deleteStudioName() { this->studioName_ = nullptr;};
        inline string getStudioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
        inline RuleInfo& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


        // subtitleName Field Functions 
        bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
        void deleteSubtitleName() { this->subtitleName_ = nullptr;};
        inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
        inline RuleInfo& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


        // suffixName Field Functions 
        bool hasSuffixName() const { return this->suffixName_ != nullptr;};
        void deleteSuffixName() { this->suffixName_ = nullptr;};
        inline string getSuffixName() const { DARABONBA_PTR_GET_DEFAULT(suffixName_, "") };
        inline RuleInfo& setSuffixName(string suffixName) { DARABONBA_PTR_SET_VALUE(suffixName_, suffixName) };


      protected:
        shared_ptr<string> app_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> gmtModifyTime_ {};
        shared_ptr<bool> isLazy_ {};
        shared_ptr<string> liveTemplate_ {};
        shared_ptr<string> rulesId_ {};
        shared_ptr<string> studioName_ {};
        shared_ptr<string> subtitleName_ {};
        shared_ptr<string> suffixName_ {};
      };

      virtual bool empty() const override { return this->ruleInfo_ == nullptr; };
      // ruleInfo Field Functions 
      bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
      void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
      inline const vector<RuleInfoList::RuleInfo> & getRuleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<RuleInfoList::RuleInfo>) };
      inline vector<RuleInfoList::RuleInfo> getRuleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<RuleInfoList::RuleInfo>) };
      inline RuleInfoList& setRuleInfo(const vector<RuleInfoList::RuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
      inline RuleInfoList& setRuleInfo(vector<RuleInfoList::RuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


    protected:
      shared_ptr<vector<RuleInfoList::RuleInfo>> ruleInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAIProduceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfoList Field Functions 
    bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
    void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
    inline const DescribeLiveAIProduceRulesResponseBody::RuleInfoList & getRuleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, DescribeLiveAIProduceRulesResponseBody::RuleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBody::RuleInfoList getRuleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, DescribeLiveAIProduceRulesResponseBody::RuleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBody& setRuleInfoList(const DescribeLiveAIProduceRulesResponseBody::RuleInfoList & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBody& setRuleInfoList(DescribeLiveAIProduceRulesResponseBody::RuleInfoList && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeLiveAIProduceRulesResponseBody::RuleInfoList> ruleInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
