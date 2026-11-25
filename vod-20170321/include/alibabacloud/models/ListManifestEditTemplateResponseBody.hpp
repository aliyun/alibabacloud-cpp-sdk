// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANIFESTEDITTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANIFESTEDITTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListManifestEditTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManifestEditTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListManifestEditTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListManifestEditTemplateResponseBody() = default ;
    ListManifestEditTemplateResponseBody(const ListManifestEditTemplateResponseBody &) = default ;
    ListManifestEditTemplateResponseBody(ListManifestEditTemplateResponseBody &&) = default ;
    ListManifestEditTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManifestEditTemplateResponseBody() = default ;
    ListManifestEditTemplateResponseBody& operator=(const ListManifestEditTemplateResponseBody &) = default ;
    ListManifestEditTemplateResponseBody& operator=(ListManifestEditTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      TemplateList() = default ;
      TemplateList(const TemplateList &) = default ;
      TemplateList(TemplateList &&) = default ;
      TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateList() = default ;
      TemplateList& operator=(const TemplateList &) = default ;
      TemplateList& operator=(TemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline TemplateList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TemplateList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline TemplateList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline TemplateList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The application ID. Default value: **app-1000000**. For more information, see [Multiple applications](https://help.aliyun.com/document_detail/113600.html).
      shared_ptr<string> appId_ {};
      // The creation time. The time follows the yyyy-MM-ddTHH:mm:ssZ format (UTC).
      shared_ptr<string> creationTime_ {};
      // The modification time. The time follows the yyyy-MM-ddTHH:mm:ssZ format (UTC).
      shared_ptr<string> modifyTime_ {};
      // The name of the track template group.
      shared_ptr<string> name_ {};
      // The template status. A value of **1** indicates enabled, and a value of **0** indicates disabled.
      shared_ptr<int32_t> status_ {};
      // The ManifestEdit template ID.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templateList_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListManifestEditTemplateResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListManifestEditTemplateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManifestEditTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<ListManifestEditTemplateResponseBody::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<ListManifestEditTemplateResponseBody::TemplateList>) };
    inline vector<ListManifestEditTemplateResponseBody::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<ListManifestEditTemplateResponseBody::TemplateList>) };
    inline ListManifestEditTemplateResponseBody& setTemplateList(const vector<ListManifestEditTemplateResponseBody::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline ListManifestEditTemplateResponseBody& setTemplateList(vector<ListManifestEditTemplateResponseBody::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListManifestEditTemplateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The position returned by the current call. An empty value indicates that all data has been retrieved.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of ManifestEdit templates.
    shared_ptr<vector<ListManifestEditTemplateResponseBody::TemplateList>> templateList_ {};
    // The total number of entries that meet the current request conditions. This parameter is optional and is not returned by default.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
