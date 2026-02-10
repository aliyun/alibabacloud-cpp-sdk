// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODY_HPP_
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
  class ListInterceptionRulePageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionRulePageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionRuleList, interceptionRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionRulePageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionRuleList, interceptionRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInterceptionRulePageResponseBody() = default ;
    ListInterceptionRulePageResponseBody(const ListInterceptionRulePageResponseBody &) = default ;
    ListInterceptionRulePageResponseBody(ListInterceptionRulePageResponseBody &&) = default ;
    ListInterceptionRulePageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionRulePageResponseBody() = default ;
    ListInterceptionRulePageResponseBody& operator=(const ListInterceptionRulePageResponseBody &) = default ;
    ListInterceptionRulePageResponseBody& operator=(ListInterceptionRulePageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class InterceptionRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterceptionRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(DstTarget, dstTarget_);
        DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
        DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(SrcTarget, srcTarget_);
      };
      friend void from_json(const Darabonba::Json& j, InterceptionRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(DstTarget, dstTarget_);
        DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
        DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(SrcTarget, srcTarget_);
      };
      InterceptionRuleList() = default ;
      InterceptionRuleList(const InterceptionRuleList &) = default ;
      InterceptionRuleList(InterceptionRuleList &&) = default ;
      InterceptionRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterceptionRuleList() = default ;
      InterceptionRuleList& operator=(const InterceptionRuleList &) = default ;
      InterceptionRuleList& operator=(InterceptionRuleList &&) = default ;
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
        // An array that consists of the images of the network object.
        shared_ptr<vector<string>> imageList_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The type of the defense rule. Valid values:
        // 
        // *   **suggest**: intelligently recommended rule
        // *   **customize**: custom rule
        // *   **system**: system rule
        shared_ptr<string> ruleType_ {};
        // An array that consists of tags added to the source network object.
        shared_ptr<vector<string>> tagList_ {};
        // The ID of the network object.
        shared_ptr<int32_t> targetId_ {};
        // The name of the network object.
        shared_ptr<string> targetName_ {};
        // The type of the affected assets.
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
        // An array that consists of the affected images.
        shared_ptr<vector<string>> imageList_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // An array that consists of information about the ports used by the destination server.
        shared_ptr<vector<string>> ports_ {};
        // The type of the defense rule. Valid values:
        // 
        // *   **suggest**: intelligently recommended rule
        // *   **customize**: custom rule
        // *   **system**: system rule
        shared_ptr<string> ruleType_ {};
        // An array that consists of tags added to the destination network object.
        shared_ptr<vector<string>> tagList_ {};
        // The ID of the network object.
        shared_ptr<int32_t> targetId_ {};
        // The name of the network object.
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
      inline const InterceptionRuleList::DstTarget & getDstTarget() const { DARABONBA_PTR_GET_CONST(dstTarget_, InterceptionRuleList::DstTarget) };
      inline InterceptionRuleList::DstTarget getDstTarget() { DARABONBA_PTR_GET(dstTarget_, InterceptionRuleList::DstTarget) };
      inline InterceptionRuleList& setDstTarget(const InterceptionRuleList::DstTarget & dstTarget) { DARABONBA_PTR_SET_VALUE(dstTarget_, dstTarget) };
      inline InterceptionRuleList& setDstTarget(InterceptionRuleList::DstTarget && dstTarget) { DARABONBA_PTR_SET_RVALUE(dstTarget_, dstTarget) };


      // interceptType Field Functions 
      bool hasInterceptType() const { return this->interceptType_ != nullptr;};
      void deleteInterceptType() { this->interceptType_ = nullptr;};
      inline int64_t getInterceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0L) };
      inline InterceptionRuleList& setInterceptType(int64_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


      // orderIndex Field Functions 
      bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
      void deleteOrderIndex() { this->orderIndex_ = nullptr;};
      inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
      inline InterceptionRuleList& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline InterceptionRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline InterceptionRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleSwitch Field Functions 
      bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
      void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
      inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
      inline InterceptionRuleList& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline InterceptionRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // srcTarget Field Functions 
      bool hasSrcTarget() const { return this->srcTarget_ != nullptr;};
      void deleteSrcTarget() { this->srcTarget_ = nullptr;};
      inline const InterceptionRuleList::SrcTarget & getSrcTarget() const { DARABONBA_PTR_GET_CONST(srcTarget_, InterceptionRuleList::SrcTarget) };
      inline InterceptionRuleList::SrcTarget getSrcTarget() { DARABONBA_PTR_GET(srcTarget_, InterceptionRuleList::SrcTarget) };
      inline InterceptionRuleList& setSrcTarget(const InterceptionRuleList::SrcTarget & srcTarget) { DARABONBA_PTR_SET_VALUE(srcTarget_, srcTarget) };
      inline InterceptionRuleList& setSrcTarget(InterceptionRuleList::SrcTarget && srcTarget) { DARABONBA_PTR_SET_RVALUE(srcTarget_, srcTarget) };


    protected:
      // The destination network object.
      shared_ptr<InterceptionRuleList::DstTarget> dstTarget_ {};
      // The interception mode. Valid values:
      // 
      // *   **0**: monitor
      // *   **1**: block
      // *   **2**: alert
      // *   **3**: allow
      shared_ptr<int64_t> interceptType_ {};
      // The order in which the entries are sorted.
      shared_ptr<int64_t> orderIndex_ {};
      // The ID of the defense rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the defense rule.
      shared_ptr<string> ruleName_ {};
      // The status of the defense rule. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> ruleSwitch_ {};
      // The type of the defense rule.
      shared_ptr<string> ruleType_ {};
      // The source network object.
      shared_ptr<InterceptionRuleList::SrcTarget> srcTarget_ {};
    };

    virtual bool empty() const override { return this->interceptionRuleList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // interceptionRuleList Field Functions 
    bool hasInterceptionRuleList() const { return this->interceptionRuleList_ != nullptr;};
    void deleteInterceptionRuleList() { this->interceptionRuleList_ = nullptr;};
    inline const vector<ListInterceptionRulePageResponseBody::InterceptionRuleList> & getInterceptionRuleList() const { DARABONBA_PTR_GET_CONST(interceptionRuleList_, vector<ListInterceptionRulePageResponseBody::InterceptionRuleList>) };
    inline vector<ListInterceptionRulePageResponseBody::InterceptionRuleList> getInterceptionRuleList() { DARABONBA_PTR_GET(interceptionRuleList_, vector<ListInterceptionRulePageResponseBody::InterceptionRuleList>) };
    inline ListInterceptionRulePageResponseBody& setInterceptionRuleList(const vector<ListInterceptionRulePageResponseBody::InterceptionRuleList> & interceptionRuleList) { DARABONBA_PTR_SET_VALUE(interceptionRuleList_, interceptionRuleList) };
    inline ListInterceptionRulePageResponseBody& setInterceptionRuleList(vector<ListInterceptionRulePageResponseBody::InterceptionRuleList> && interceptionRuleList) { DARABONBA_PTR_SET_RVALUE(interceptionRuleList_, interceptionRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListInterceptionRulePageResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListInterceptionRulePageResponseBody::PageInfo) };
    inline ListInterceptionRulePageResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListInterceptionRulePageResponseBody::PageInfo) };
    inline ListInterceptionRulePageResponseBody& setPageInfo(const ListInterceptionRulePageResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListInterceptionRulePageResponseBody& setPageInfo(ListInterceptionRulePageResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterceptionRulePageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the defense rules.
    shared_ptr<vector<ListInterceptionRulePageResponseBody::InterceptionRuleList>> interceptionRuleList_ {};
    // The pagination information.
    shared_ptr<ListInterceptionRulePageResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
