// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODY_HPP_
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
  class ListInstancePackageStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePackageStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PackageStates, packageStates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePackageStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PackageStates, packageStates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePackageStatesResponseBody() = default ;
    ListInstancePackageStatesResponseBody(const ListInstancePackageStatesResponseBody &) = default ;
    ListInstancePackageStatesResponseBody(ListInstancePackageStatesResponseBody &&) = default ;
    ListInstancePackageStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePackageStatesResponseBody() = default ;
    ListInstancePackageStatesResponseBody& operator=(const ListInstancePackageStatesResponseBody &) = default ;
    ListInstancePackageStatesResponseBody& operator=(ListInstancePackageStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageStates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageStates& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigurationInfo, configurationInfo_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Publisher, publisher_);
        DARABONBA_PTR_TO_JSON(TemplateCategory, templateCategory_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(TemplateVersionName, templateVersionName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PackageStates& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigurationInfo, configurationInfo_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
        DARABONBA_PTR_FROM_JSON(TemplateCategory, templateCategory_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(TemplateVersionName, templateVersionName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PackageStates() = default ;
      PackageStates(const PackageStates &) = default ;
      PackageStates(PackageStates &&) = default ;
      PackageStates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageStates() = default ;
      PackageStates& operator=(const PackageStates &) = default ;
      PackageStates& operator=(PackageStates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configurationInfo_ == nullptr
        && this->description_ == nullptr && this->parameters_ == nullptr && this->publisher_ == nullptr && this->templateCategory_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr && this->templateVersionName_ == nullptr && this->updateTime_ == nullptr; };
      // configurationInfo Field Functions 
      bool hasConfigurationInfo() const { return this->configurationInfo_ != nullptr;};
      void deleteConfigurationInfo() { this->configurationInfo_ = nullptr;};
      inline string getConfigurationInfo() const { DARABONBA_PTR_GET_DEFAULT(configurationInfo_, "") };
      inline PackageStates& setConfigurationInfo(string configurationInfo) { DARABONBA_PTR_SET_VALUE(configurationInfo_, configurationInfo) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PackageStates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline PackageStates& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // publisher Field Functions 
      bool hasPublisher() const { return this->publisher_ != nullptr;};
      void deletePublisher() { this->publisher_ = nullptr;};
      inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
      inline PackageStates& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


      // templateCategory Field Functions 
      bool hasTemplateCategory() const { return this->templateCategory_ != nullptr;};
      void deleteTemplateCategory() { this->templateCategory_ = nullptr;};
      inline string getTemplateCategory() const { DARABONBA_PTR_GET_DEFAULT(templateCategory_, "") };
      inline PackageStates& setTemplateCategory(string templateCategory) { DARABONBA_PTR_SET_VALUE(templateCategory_, templateCategory) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline PackageStates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline PackageStates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline PackageStates& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // templateVersionName Field Functions 
      bool hasTemplateVersionName() const { return this->templateVersionName_ != nullptr;};
      void deleteTemplateVersionName() { this->templateVersionName_ = nullptr;};
      inline string getTemplateVersionName() const { DARABONBA_PTR_GET_DEFAULT(templateVersionName_, "") };
      inline PackageStates& setTemplateVersionName(string templateVersionName) { DARABONBA_PTR_SET_VALUE(templateVersionName_, templateVersionName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PackageStates& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> configurationInfo_ {};
      // Description
      shared_ptr<string> description_ {};
      // Parameters
      shared_ptr<string> parameters_ {};
      // Publisher
      shared_ptr<string> publisher_ {};
      // Template type
      shared_ptr<string> templateCategory_ {};
      // Template ID
      shared_ptr<string> templateId_ {};
      // Template name.
      shared_ptr<string> templateName_ {};
      // Template version number
      shared_ptr<string> templateVersion_ {};
      // Template version name
      shared_ptr<string> templateVersionName_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->packageStates_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListInstancePackageStatesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePackageStatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageStates Field Functions 
    bool hasPackageStates() const { return this->packageStates_ != nullptr;};
    void deletePackageStates() { this->packageStates_ = nullptr;};
    inline const vector<ListInstancePackageStatesResponseBody::PackageStates> & getPackageStates() const { DARABONBA_PTR_GET_CONST(packageStates_, vector<ListInstancePackageStatesResponseBody::PackageStates>) };
    inline vector<ListInstancePackageStatesResponseBody::PackageStates> getPackageStates() { DARABONBA_PTR_GET(packageStates_, vector<ListInstancePackageStatesResponseBody::PackageStates>) };
    inline ListInstancePackageStatesResponseBody& setPackageStates(const vector<ListInstancePackageStatesResponseBody::PackageStates> & packageStates) { DARABONBA_PTR_SET_VALUE(packageStates_, packageStates) };
    inline ListInstancePackageStatesResponseBody& setPackageStates(vector<ListInstancePackageStatesResponseBody::PackageStates> && packageStates) { DARABONBA_PTR_SET_RVALUE(packageStates_, packageStates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePackageStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Page size.
    shared_ptr<string> maxResults_ {};
    // Token string for pagination.
    shared_ptr<string> nextToken_ {};
    // List of extensions
    shared_ptr<vector<ListInstancePackageStatesResponseBody::PackageStates>> packageStates_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
