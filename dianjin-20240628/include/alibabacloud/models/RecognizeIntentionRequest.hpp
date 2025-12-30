// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysis, analysis_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(conversation, conversation_);
      DARABONBA_PTR_TO_JSON(globalIntentionList, globalIntentionList_);
      DARABONBA_PTR_TO_JSON(hierarchicalIntentionList, hierarchicalIntentionList_);
      DARABONBA_PTR_TO_JSON(intentionDomainCode, intentionDomainCode_);
      DARABONBA_PTR_TO_JSON(intentionList, intentionList_);
      DARABONBA_PTR_TO_JSON(opType, opType_);
      DARABONBA_PTR_TO_JSON(recommend, recommend_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(conversation, conversation_);
      DARABONBA_PTR_FROM_JSON(globalIntentionList, globalIntentionList_);
      DARABONBA_PTR_FROM_JSON(hierarchicalIntentionList, hierarchicalIntentionList_);
      DARABONBA_PTR_FROM_JSON(intentionDomainCode, intentionDomainCode_);
      DARABONBA_PTR_FROM_JSON(intentionList, intentionList_);
      DARABONBA_PTR_FROM_JSON(opType, opType_);
      DARABONBA_PTR_FROM_JSON(recommend, recommend_);
    };
    RecognizeIntentionRequest() = default ;
    RecognizeIntentionRequest(const RecognizeIntentionRequest &) = default ;
    RecognizeIntentionRequest(RecognizeIntentionRequest &&) = default ;
    RecognizeIntentionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionRequest() = default ;
    RecognizeIntentionRequest& operator=(const RecognizeIntentionRequest &) = default ;
    RecognizeIntentionRequest& operator=(RecognizeIntentionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IntentionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntentionList& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(intention, intention_);
        DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
      };
      friend void from_json(const Darabonba::Json& j, IntentionList& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(intention, intention_);
        DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
      };
      IntentionList() = default ;
      IntentionList(const IntentionList &) = default ;
      IntentionList(IntentionList &&) = default ;
      IntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IntentionList() = default ;
      IntentionList& operator=(const IntentionList &) = default ;
      IntentionList& operator=(IntentionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->intention_ == nullptr && this->intentionCode_ == nullptr && this->intentionScript_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // intention Field Functions 
      bool hasIntention() const { return this->intention_ != nullptr;};
      void deleteIntention() { this->intention_ = nullptr;};
      inline string getIntention() const { DARABONBA_PTR_GET_DEFAULT(intention_, "") };
      inline IntentionList& setIntention(string intention) { DARABONBA_PTR_SET_VALUE(intention_, intention) };


      // intentionCode Field Functions 
      bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
      void deleteIntentionCode() { this->intentionCode_ = nullptr;};
      inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
      inline IntentionList& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


      // intentionScript Field Functions 
      bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
      void deleteIntentionScript() { this->intentionScript_ = nullptr;};
      inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
      inline IntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> intention_ {};
      shared_ptr<string> intentionCode_ {};
      shared_ptr<string> intentionScript_ {};
    };

    class HierarchicalIntentionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HierarchicalIntentionList& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(intention, intention_);
        DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
      };
      friend void from_json(const Darabonba::Json& j, HierarchicalIntentionList& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(intention, intention_);
        DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
      };
      HierarchicalIntentionList() = default ;
      HierarchicalIntentionList(const HierarchicalIntentionList &) = default ;
      HierarchicalIntentionList(HierarchicalIntentionList &&) = default ;
      HierarchicalIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HierarchicalIntentionList() = default ;
      HierarchicalIntentionList& operator=(const HierarchicalIntentionList &) = default ;
      HierarchicalIntentionList& operator=(HierarchicalIntentionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->intention_ == nullptr && this->intentionCode_ == nullptr && this->intentionScript_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline HierarchicalIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // intention Field Functions 
      bool hasIntention() const { return this->intention_ != nullptr;};
      void deleteIntention() { this->intention_ = nullptr;};
      inline string getIntention() const { DARABONBA_PTR_GET_DEFAULT(intention_, "") };
      inline HierarchicalIntentionList& setIntention(string intention) { DARABONBA_PTR_SET_VALUE(intention_, intention) };


      // intentionCode Field Functions 
      bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
      void deleteIntentionCode() { this->intentionCode_ = nullptr;};
      inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
      inline HierarchicalIntentionList& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


      // intentionScript Field Functions 
      bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
      void deleteIntentionScript() { this->intentionScript_ = nullptr;};
      inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
      inline HierarchicalIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> intention_ {};
      shared_ptr<string> intentionCode_ {};
      shared_ptr<string> intentionScript_ {};
    };

    class GlobalIntentionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalIntentionList& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(intention, intention_);
        DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalIntentionList& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(intention, intention_);
        DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
      };
      GlobalIntentionList() = default ;
      GlobalIntentionList(const GlobalIntentionList &) = default ;
      GlobalIntentionList(GlobalIntentionList &&) = default ;
      GlobalIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalIntentionList() = default ;
      GlobalIntentionList& operator=(const GlobalIntentionList &) = default ;
      GlobalIntentionList& operator=(GlobalIntentionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->intention_ == nullptr && this->intentionCode_ == nullptr && this->intentionScript_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GlobalIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // intention Field Functions 
      bool hasIntention() const { return this->intention_ != nullptr;};
      void deleteIntention() { this->intention_ = nullptr;};
      inline string getIntention() const { DARABONBA_PTR_GET_DEFAULT(intention_, "") };
      inline GlobalIntentionList& setIntention(string intention) { DARABONBA_PTR_SET_VALUE(intention_, intention) };


      // intentionCode Field Functions 
      bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
      void deleteIntentionCode() { this->intentionCode_ = nullptr;};
      inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
      inline GlobalIntentionList& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


      // intentionScript Field Functions 
      bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
      void deleteIntentionScript() { this->intentionScript_ = nullptr;};
      inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
      inline GlobalIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> intention_ {};
      shared_ptr<string> intentionCode_ {};
      shared_ptr<string> intentionScript_ {};
    };

    virtual bool empty() const override { return this->analysis_ == nullptr
        && this->bizType_ == nullptr && this->conversation_ == nullptr && this->globalIntentionList_ == nullptr && this->hierarchicalIntentionList_ == nullptr && this->intentionDomainCode_ == nullptr
        && this->intentionList_ == nullptr && this->opType_ == nullptr && this->recommend_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline bool getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, false) };
    inline RecognizeIntentionRequest& setAnalysis(bool analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RecognizeIntentionRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conversation Field Functions 
    bool hasConversation() const { return this->conversation_ != nullptr;};
    void deleteConversation() { this->conversation_ = nullptr;};
    inline string getConversation() const { DARABONBA_PTR_GET_DEFAULT(conversation_, "") };
    inline RecognizeIntentionRequest& setConversation(string conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };


    // globalIntentionList Field Functions 
    bool hasGlobalIntentionList() const { return this->globalIntentionList_ != nullptr;};
    void deleteGlobalIntentionList() { this->globalIntentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequest::GlobalIntentionList> & getGlobalIntentionList() const { DARABONBA_PTR_GET_CONST(globalIntentionList_, vector<RecognizeIntentionRequest::GlobalIntentionList>) };
    inline vector<RecognizeIntentionRequest::GlobalIntentionList> getGlobalIntentionList() { DARABONBA_PTR_GET(globalIntentionList_, vector<RecognizeIntentionRequest::GlobalIntentionList>) };
    inline RecognizeIntentionRequest& setGlobalIntentionList(const vector<RecognizeIntentionRequest::GlobalIntentionList> & globalIntentionList) { DARABONBA_PTR_SET_VALUE(globalIntentionList_, globalIntentionList) };
    inline RecognizeIntentionRequest& setGlobalIntentionList(vector<RecognizeIntentionRequest::GlobalIntentionList> && globalIntentionList) { DARABONBA_PTR_SET_RVALUE(globalIntentionList_, globalIntentionList) };


    // hierarchicalIntentionList Field Functions 
    bool hasHierarchicalIntentionList() const { return this->hierarchicalIntentionList_ != nullptr;};
    void deleteHierarchicalIntentionList() { this->hierarchicalIntentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequest::HierarchicalIntentionList> & getHierarchicalIntentionList() const { DARABONBA_PTR_GET_CONST(hierarchicalIntentionList_, vector<RecognizeIntentionRequest::HierarchicalIntentionList>) };
    inline vector<RecognizeIntentionRequest::HierarchicalIntentionList> getHierarchicalIntentionList() { DARABONBA_PTR_GET(hierarchicalIntentionList_, vector<RecognizeIntentionRequest::HierarchicalIntentionList>) };
    inline RecognizeIntentionRequest& setHierarchicalIntentionList(const vector<RecognizeIntentionRequest::HierarchicalIntentionList> & hierarchicalIntentionList) { DARABONBA_PTR_SET_VALUE(hierarchicalIntentionList_, hierarchicalIntentionList) };
    inline RecognizeIntentionRequest& setHierarchicalIntentionList(vector<RecognizeIntentionRequest::HierarchicalIntentionList> && hierarchicalIntentionList) { DARABONBA_PTR_SET_RVALUE(hierarchicalIntentionList_, hierarchicalIntentionList) };


    // intentionDomainCode Field Functions 
    bool hasIntentionDomainCode() const { return this->intentionDomainCode_ != nullptr;};
    void deleteIntentionDomainCode() { this->intentionDomainCode_ = nullptr;};
    inline string getIntentionDomainCode() const { DARABONBA_PTR_GET_DEFAULT(intentionDomainCode_, "") };
    inline RecognizeIntentionRequest& setIntentionDomainCode(string intentionDomainCode) { DARABONBA_PTR_SET_VALUE(intentionDomainCode_, intentionDomainCode) };


    // intentionList Field Functions 
    bool hasIntentionList() const { return this->intentionList_ != nullptr;};
    void deleteIntentionList() { this->intentionList_ = nullptr;};
    inline const vector<RecognizeIntentionRequest::IntentionList> & getIntentionList() const { DARABONBA_PTR_GET_CONST(intentionList_, vector<RecognizeIntentionRequest::IntentionList>) };
    inline vector<RecognizeIntentionRequest::IntentionList> getIntentionList() { DARABONBA_PTR_GET(intentionList_, vector<RecognizeIntentionRequest::IntentionList>) };
    inline RecognizeIntentionRequest& setIntentionList(const vector<RecognizeIntentionRequest::IntentionList> & intentionList) { DARABONBA_PTR_SET_VALUE(intentionList_, intentionList) };
    inline RecognizeIntentionRequest& setIntentionList(vector<RecognizeIntentionRequest::IntentionList> && intentionList) { DARABONBA_PTR_SET_RVALUE(intentionList_, intentionList) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline RecognizeIntentionRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // recommend Field Functions 
    bool hasRecommend() const { return this->recommend_ != nullptr;};
    void deleteRecommend() { this->recommend_ = nullptr;};
    inline bool getRecommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, false) };
    inline RecognizeIntentionRequest& setRecommend(bool recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


  protected:
    shared_ptr<bool> analysis_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<string> conversation_ {};
    shared_ptr<vector<RecognizeIntentionRequest::GlobalIntentionList>> globalIntentionList_ {};
    shared_ptr<vector<RecognizeIntentionRequest::HierarchicalIntentionList>> hierarchicalIntentionList_ {};
    shared_ptr<string> intentionDomainCode_ {};
    shared_ptr<vector<RecognizeIntentionRequest::IntentionList>> intentionList_ {};
    shared_ptr<string> opType_ {};
    shared_ptr<bool> recommend_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
