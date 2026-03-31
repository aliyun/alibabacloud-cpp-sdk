// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateVersions, templateVersions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersions, templateVersions_);
    };
    ListTemplateVersionsResponseBody() = default ;
    ListTemplateVersionsResponseBody(const ListTemplateVersionsResponseBody &) = default ;
    ListTemplateVersionsResponseBody(ListTemplateVersionsResponseBody &&) = default ;
    ListTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateVersionsResponseBody() = default ;
    ListTemplateVersionsResponseBody& operator=(const ListTemplateVersionsResponseBody &) = default ;
    ListTemplateVersionsResponseBody& operator=(ListTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateVersions& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      TemplateVersions() = default ;
      TemplateVersions(const TemplateVersions &) = default ;
      TemplateVersions(TemplateVersions &&) = default ;
      TemplateVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateVersions() = default ;
      TemplateVersions& operator=(const TemplateVersions &) = default ;
      TemplateVersions& operator=(TemplateVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->templateFormat_ == nullptr && this->templateVersion_ == nullptr && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr && this->versionName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TemplateVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // templateFormat Field Functions 
      bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
      void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
      inline string getTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
      inline TemplateVersions& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline TemplateVersions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline TemplateVersions& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline TemplateVersions& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline TemplateVersions& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The description of the version.
      shared_ptr<string> description_ {};
      // The format of the template content. Valid values: YAML and JSON.
      shared_ptr<string> templateFormat_ {};
      // The number of the version.
      shared_ptr<string> templateVersion_ {};
      // The user who last updated the version.
      shared_ptr<string> updatedBy_ {};
      // The time when the version was last updated.
      shared_ptr<string> updatedDate_ {};
      // The name of the version.
      shared_ptr<string> versionName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templateVersions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplateVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateVersions Field Functions 
    bool hasTemplateVersions() const { return this->templateVersions_ != nullptr;};
    void deleteTemplateVersions() { this->templateVersions_ = nullptr;};
    inline const vector<ListTemplateVersionsResponseBody::TemplateVersions> & getTemplateVersions() const { DARABONBA_PTR_GET_CONST(templateVersions_, vector<ListTemplateVersionsResponseBody::TemplateVersions>) };
    inline vector<ListTemplateVersionsResponseBody::TemplateVersions> getTemplateVersions() { DARABONBA_PTR_GET(templateVersions_, vector<ListTemplateVersionsResponseBody::TemplateVersions>) };
    inline ListTemplateVersionsResponseBody& setTemplateVersions(const vector<ListTemplateVersionsResponseBody::TemplateVersions> & templateVersions) { DARABONBA_PTR_SET_VALUE(templateVersions_, templateVersions) };
    inline ListTemplateVersionsResponseBody& setTemplateVersions(vector<ListTemplateVersionsResponseBody::TemplateVersions> && templateVersions) { DARABONBA_PTR_SET_RVALUE(templateVersions_, templateVersions) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The versions of the template.
    shared_ptr<vector<ListTemplateVersionsResponseBody::TemplateVersions>> templateVersions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
