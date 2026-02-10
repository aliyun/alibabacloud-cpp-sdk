// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODY_HPP_
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
  class GetInterceptionRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionRuleDetail, interceptionRuleDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionRuleDetail, interceptionRuleDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInterceptionRuleDetailResponseBody() = default ;
    GetInterceptionRuleDetailResponseBody(const GetInterceptionRuleDetailResponseBody &) = default ;
    GetInterceptionRuleDetailResponseBody(GetInterceptionRuleDetailResponseBody &&) = default ;
    GetInterceptionRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionRuleDetailResponseBody() = default ;
    GetInterceptionRuleDetailResponseBody& operator=(const GetInterceptionRuleDetailResponseBody &) = default ;
    GetInterceptionRuleDetailResponseBody& operator=(GetInterceptionRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InterceptionRuleDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterceptionRuleDetail& obj) { 
        DARABONBA_PTR_TO_JSON(DstTarget, dstTarget_);
        DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
        DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(SrcTarget, srcTarget_);
      };
      friend void from_json(const Darabonba::Json& j, InterceptionRuleDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(DstTarget, dstTarget_);
        DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
        DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(SrcTarget, srcTarget_);
      };
      InterceptionRuleDetail() = default ;
      InterceptionRuleDetail(const InterceptionRuleDetail &) = default ;
      InterceptionRuleDetail(InterceptionRuleDetail &&) = default ;
      InterceptionRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterceptionRuleDetail() = default ;
      InterceptionRuleDetail& operator=(const InterceptionRuleDetail &) = default ;
      InterceptionRuleDetail& operator=(InterceptionRuleDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SrcTarget : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcTarget& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ImageList, imageList_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(TagList, tagList_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
          DARABONBA_PTR_TO_JSON(TargetName, targetName_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, SrcTarget& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(TagList, tagList_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
          DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        SrcTarget() = default ;
        SrcTarget(const SrcTarget &) = default ;
        SrcTarget(SrcTarget &&) = default ;
        SrcTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcTarget() = default ;
        SrcTarget& operator=(const SrcTarget &) = default ;
        SrcTarget& operator=(SrcTarget &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->imageList_ == nullptr && this->namespace_ == nullptr && this->ruleType_ == nullptr && this->tagList_ == nullptr && this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline SrcTarget& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // imageList Field Functions 
        bool hasImageList() const { return this->imageList_ != nullptr;};
        void deleteImageList() { this->imageList_ = nullptr;};
        inline const vector<string> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
        inline vector<string> getImageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
        inline SrcTarget& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
        inline SrcTarget& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline SrcTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline SrcTarget& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // tagList Field Functions 
        bool hasTagList() const { return this->tagList_ != nullptr;};
        void deleteTagList() { this->tagList_ = nullptr;};
        inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
        inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
        inline SrcTarget& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
        inline SrcTarget& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline int32_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0) };
        inline SrcTarget& setTargetId(int32_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetName Field Functions 
        bool hasTargetName() const { return this->targetName_ != nullptr;};
        void deleteTargetName() { this->targetName_ = nullptr;};
        inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
        inline SrcTarget& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline SrcTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The images of the network object.
        shared_ptr<vector<string>> imageList_ {};
        // The namespace to which the network object belongs.
        shared_ptr<string> namespace_ {};
        // The type of the rule.
        shared_ptr<string> ruleType_ {};
        // The labels specified for the network object.
        shared_ptr<vector<string>> tagList_ {};
        // The ID of the network object.
        shared_ptr<int32_t> targetId_ {};
        // The name of the object.
        shared_ptr<string> targetName_ {};
        // The type of the network object.
        shared_ptr<string> targetType_ {};
      };

      class DstTarget : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DstTarget& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ImageList, imageList_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(TagList, tagList_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
          DARABONBA_PTR_TO_JSON(TargetName, targetName_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, DstTarget& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(TagList, tagList_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
          DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        DstTarget() = default ;
        DstTarget(const DstTarget &) = default ;
        DstTarget(DstTarget &&) = default ;
        DstTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DstTarget() = default ;
        DstTarget& operator=(const DstTarget &) = default ;
        DstTarget& operator=(DstTarget &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->imageList_ == nullptr && this->namespace_ == nullptr && this->ports_ == nullptr && this->ruleType_ == nullptr && this->tagList_ == nullptr
        && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline DstTarget& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // imageList Field Functions 
        bool hasImageList() const { return this->imageList_ != nullptr;};
        void deleteImageList() { this->imageList_ = nullptr;};
        inline const vector<string> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
        inline vector<string> getImageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
        inline DstTarget& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
        inline DstTarget& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline DstTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const vector<string> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<string>) };
        inline vector<string> getPorts() { DARABONBA_PTR_GET(ports_, vector<string>) };
        inline DstTarget& setPorts(const vector<string> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline DstTarget& setPorts(vector<string> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline DstTarget& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // tagList Field Functions 
        bool hasTagList() const { return this->tagList_ != nullptr;};
        void deleteTagList() { this->tagList_ = nullptr;};
        inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
        inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
        inline DstTarget& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
        inline DstTarget& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline int32_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0) };
        inline DstTarget& setTargetId(int32_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetName Field Functions 
        bool hasTargetName() const { return this->targetName_ != nullptr;};
        void deleteTargetName() { this->targetName_ = nullptr;};
        inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
        inline DstTarget& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline DstTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The name of the application.
        shared_ptr<string> appName_ {};
        // An array that consists of the name of the image specified for the network object.
        shared_ptr<vector<string>> imageList_ {};
        // The namespace to which the network object belongs.
        shared_ptr<string> namespace_ {};
        // An array that consists of the port range of the destination network object.
        shared_ptr<vector<string>> ports_ {};
        // The type of the rule.
        shared_ptr<string> ruleType_ {};
        // An array that consists of the labels specified for the network object.
        shared_ptr<vector<string>> tagList_ {};
        // The ID of the network object.
        shared_ptr<int32_t> targetId_ {};
        // The name of the object.
        shared_ptr<string> targetName_ {};
        // The type of the network object.
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->dstTarget_ == nullptr
        && this->interceptType_ == nullptr && this->orderIndex_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleSwitch_ == nullptr
        && this->ruleType_ == nullptr && this->srcTarget_ == nullptr; };
      // dstTarget Field Functions 
      bool hasDstTarget() const { return this->dstTarget_ != nullptr;};
      void deleteDstTarget() { this->dstTarget_ = nullptr;};
      inline const InterceptionRuleDetail::DstTarget & getDstTarget() const { DARABONBA_PTR_GET_CONST(dstTarget_, InterceptionRuleDetail::DstTarget) };
      inline InterceptionRuleDetail::DstTarget getDstTarget() { DARABONBA_PTR_GET(dstTarget_, InterceptionRuleDetail::DstTarget) };
      inline InterceptionRuleDetail& setDstTarget(const InterceptionRuleDetail::DstTarget & dstTarget) { DARABONBA_PTR_SET_VALUE(dstTarget_, dstTarget) };
      inline InterceptionRuleDetail& setDstTarget(InterceptionRuleDetail::DstTarget && dstTarget) { DARABONBA_PTR_SET_RVALUE(dstTarget_, dstTarget) };


      // interceptType Field Functions 
      bool hasInterceptType() const { return this->interceptType_ != nullptr;};
      void deleteInterceptType() { this->interceptType_ = nullptr;};
      inline int64_t getInterceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0L) };
      inline InterceptionRuleDetail& setInterceptType(int64_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


      // orderIndex Field Functions 
      bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
      void deleteOrderIndex() { this->orderIndex_ = nullptr;};
      inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
      inline InterceptionRuleDetail& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline InterceptionRuleDetail& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline InterceptionRuleDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleSwitch Field Functions 
      bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
      void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
      inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
      inline InterceptionRuleDetail& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline InterceptionRuleDetail& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // srcTarget Field Functions 
      bool hasSrcTarget() const { return this->srcTarget_ != nullptr;};
      void deleteSrcTarget() { this->srcTarget_ = nullptr;};
      inline const InterceptionRuleDetail::SrcTarget & getSrcTarget() const { DARABONBA_PTR_GET_CONST(srcTarget_, InterceptionRuleDetail::SrcTarget) };
      inline InterceptionRuleDetail::SrcTarget getSrcTarget() { DARABONBA_PTR_GET(srcTarget_, InterceptionRuleDetail::SrcTarget) };
      inline InterceptionRuleDetail& setSrcTarget(const InterceptionRuleDetail::SrcTarget & srcTarget) { DARABONBA_PTR_SET_VALUE(srcTarget_, srcTarget) };
      inline InterceptionRuleDetail& setSrcTarget(InterceptionRuleDetail::SrcTarget && srcTarget) { DARABONBA_PTR_SET_RVALUE(srcTarget_, srcTarget) };


    protected:
      // The destination network object.
      shared_ptr<InterceptionRuleDetail::DstTarget> dstTarget_ {};
      // The interception mode. Valid values:
      // 
      // *   **0**: monitor
      // *   **1**: block
      // *   **2**: alert
      // *   **3**: allow
      shared_ptr<int64_t> interceptType_ {};
      // The priority of the rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
      shared_ptr<int64_t> orderIndex_ {};
      // The ID of the rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the defense rule. Valid values:
      // 
      // *   **1**: The rule is enabled.
      // *   **0**: The rule is disabled.
      shared_ptr<int32_t> ruleSwitch_ {};
      // The type of the rule. Valid values:
      // 
      // *   **suggest**: a suggestion rule
      // *   **customize**: a custom rule
      shared_ptr<string> ruleType_ {};
      // The source network object.
      shared_ptr<InterceptionRuleDetail::SrcTarget> srcTarget_ {};
    };

    virtual bool empty() const override { return this->interceptionRuleDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // interceptionRuleDetail Field Functions 
    bool hasInterceptionRuleDetail() const { return this->interceptionRuleDetail_ != nullptr;};
    void deleteInterceptionRuleDetail() { this->interceptionRuleDetail_ = nullptr;};
    inline const GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail & getInterceptionRuleDetail() const { DARABONBA_PTR_GET_CONST(interceptionRuleDetail_, GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail getInterceptionRuleDetail() { DARABONBA_PTR_GET(interceptionRuleDetail_, GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBody& setInterceptionRuleDetail(const GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail & interceptionRuleDetail) { DARABONBA_PTR_SET_VALUE(interceptionRuleDetail_, interceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBody& setInterceptionRuleDetail(GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail && interceptionRuleDetail) { DARABONBA_PTR_SET_RVALUE(interceptionRuleDetail_, interceptionRuleDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    shared_ptr<GetInterceptionRuleDetailResponseBody::InterceptionRuleDetail> interceptionRuleDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
