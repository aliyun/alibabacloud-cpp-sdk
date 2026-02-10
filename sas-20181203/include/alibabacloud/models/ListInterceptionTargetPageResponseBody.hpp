// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODY_HPP_
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
  class ListInterceptionTargetPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionTargetPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTargetList, ruleTargetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionTargetPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTargetList, ruleTargetList_);
    };
    ListInterceptionTargetPageResponseBody() = default ;
    ListInterceptionTargetPageResponseBody(const ListInterceptionTargetPageResponseBody &) = default ;
    ListInterceptionTargetPageResponseBody(ListInterceptionTargetPageResponseBody &&) = default ;
    ListInterceptionTargetPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionTargetPageResponseBody() = default ;
    ListInterceptionTargetPageResponseBody& operator=(const ListInterceptionTargetPageResponseBody &) = default ;
    ListInterceptionTargetPageResponseBody& operator=(ListInterceptionTargetPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleTargetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleTargetList& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ImageList, imageList_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, RuleTargetList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      RuleTargetList() = default ;
      RuleTargetList(const RuleTargetList &) = default ;
      RuleTargetList(RuleTargetList &&) = default ;
      RuleTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleTargetList() = default ;
      RuleTargetList& operator=(const RuleTargetList &) = default ;
      RuleTargetList& operator=(RuleTargetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->imageList_ == nullptr && this->namespace_ == nullptr && this->ruleType_ == nullptr
        && this->tagList_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RuleTargetList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline RuleTargetList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline RuleTargetList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // imageList Field Functions 
      bool hasImageList() const { return this->imageList_ != nullptr;};
      void deleteImageList() { this->imageList_ = nullptr;};
      inline const vector<string> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
      inline vector<string> getImageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
      inline RuleTargetList& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
      inline RuleTargetList& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline RuleTargetList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline RuleTargetList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
      inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
      inline RuleTargetList& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline RuleTargetList& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline int64_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
      inline RuleTargetList& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline RuleTargetList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline RuleTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The name of the application of the network object.
      shared_ptr<string> appName_ {};
      // The ID of the container cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the container cluster.
      shared_ptr<string> clusterName_ {};
      // The images of the network object.
      shared_ptr<vector<string>> imageList_ {};
      // The namespace to which the network object belongs.
      shared_ptr<string> namespace_ {};
      // The type of the rule. Valid value:
      // 
      // *   customize: custom rule
      shared_ptr<string> ruleType_ {};
      // The tags specified for the network object.
      shared_ptr<vector<string>> tagList_ {};
      // The ID of the network object.
      // 
      // > You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the IDs of network objects.
      shared_ptr<int64_t> targetId_ {};
      // The name of the network object.
      shared_ptr<string> targetName_ {};
      // The type of the network object. Valid value:
      // 
      // *   IMAGE
      shared_ptr<string> targetType_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->ruleTargetList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListInterceptionTargetPageResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListInterceptionTargetPageResponseBody::PageInfo) };
    inline ListInterceptionTargetPageResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListInterceptionTargetPageResponseBody::PageInfo) };
    inline ListInterceptionTargetPageResponseBody& setPageInfo(const ListInterceptionTargetPageResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListInterceptionTargetPageResponseBody& setPageInfo(ListInterceptionTargetPageResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterceptionTargetPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTargetList Field Functions 
    bool hasRuleTargetList() const { return this->ruleTargetList_ != nullptr;};
    void deleteRuleTargetList() { this->ruleTargetList_ = nullptr;};
    inline const vector<ListInterceptionTargetPageResponseBody::RuleTargetList> & getRuleTargetList() const { DARABONBA_PTR_GET_CONST(ruleTargetList_, vector<ListInterceptionTargetPageResponseBody::RuleTargetList>) };
    inline vector<ListInterceptionTargetPageResponseBody::RuleTargetList> getRuleTargetList() { DARABONBA_PTR_GET(ruleTargetList_, vector<ListInterceptionTargetPageResponseBody::RuleTargetList>) };
    inline ListInterceptionTargetPageResponseBody& setRuleTargetList(const vector<ListInterceptionTargetPageResponseBody::RuleTargetList> & ruleTargetList) { DARABONBA_PTR_SET_VALUE(ruleTargetList_, ruleTargetList) };
    inline ListInterceptionTargetPageResponseBody& setRuleTargetList(vector<ListInterceptionTargetPageResponseBody::RuleTargetList> && ruleTargetList) { DARABONBA_PTR_SET_RVALUE(ruleTargetList_, ruleTargetList) };


  protected:
    // The pagination information.
    shared_ptr<ListInterceptionTargetPageResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the network objects.
    shared_ptr<vector<ListInterceptionTargetPageResponseBody::RuleTargetList>> ruleTargetList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
