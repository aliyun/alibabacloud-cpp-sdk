// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODY_HPP_
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
  class DescribeLiveStreamWatermarkRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarkRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarkRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveStreamWatermarkRulesResponseBody() = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(const DescribeLiveStreamWatermarkRulesResponseBody &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(DescribeLiveStreamWatermarkRulesResponseBody &&) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarkRulesResponseBody() = default ;
    DescribeLiveStreamWatermarkRulesResponseBody& operator=(const DescribeLiveStreamWatermarkRulesResponseBody &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody& operator=(DescribeLiveStreamWatermarkRulesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(App, app_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
        && this->description_ == nullptr && this->domain_ == nullptr && this->name_ == nullptr && this->ruleId_ == nullptr && this->stream_ == nullptr
        && this->templateId_ == nullptr; };
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


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline RuleInfo& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
        inline RuleInfo& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline RuleInfo& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> app_ {};
        // The description of the custom rule.
        shared_ptr<string> description_ {};
        // The streaming domain.
        shared_ptr<string> domain_ {};
        // The name of the custom rule.
        shared_ptr<string> name_ {};
        // The ID of the watermark rule.
        // 
        // >  You can obtain the rule ID by checking the value of the RuleId parameter that is returned by the [AddLiveStreamWatermarkRule](https://help.aliyun.com/document_detail/2848100.html) operation.
        shared_ptr<string> ruleId_ {};
        // The name of the live stream. The following matching rules apply:
        // 
        // *   A stream name can be exactly matched. Example: liveStreamA.
        // *   Fuzzy match is also supported. The use of an asterisk (`*`) allows all approximate matches to be found.
        // *   You can place the asterisk before or after an approximate string.
        // 
        // > 
        // 
        // *   Fuzzy match: Only one asterisk (`*`) before or after an approximate string is allowed. The approximate string must be enclosed in `()`. Separate multiple strings with vertical bars (`|`).
        // 
        // *   For example, `*(t1|t2)` matches all streams whose name has the `t1` or `t2` suffix, and `(abc|123)*` matches all streams whose name has the `abc` or `123` prefix.
        shared_ptr<string> stream_ {};
        // The ID of the watermark template.
        // 
        // >  You can obtain the template ID by checking the value of the TemplateId parameter that is returned by the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/2848096.html) operation.
        shared_ptr<string> templateId_ {};
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
        && this->ruleInfoList_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfoList Field Functions 
    bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
    void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
    inline const DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList & getRuleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList getRuleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRuleInfoList(const DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRuleInfoList(DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The watermark rules.
    shared_ptr<DescribeLiveStreamWatermarkRulesResponseBody::RuleInfoList> ruleInfoList_ {};
    // The total number of entries that meet the specified conditions.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
