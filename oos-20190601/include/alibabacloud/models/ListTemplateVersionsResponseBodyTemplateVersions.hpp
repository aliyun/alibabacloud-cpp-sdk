// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODYTEMPLATEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODYTEMPLATEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTemplateVersionsResponseBodyTemplateVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateVersionsResponseBodyTemplateVersions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateVersionsResponseBodyTemplateVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListTemplateVersionsResponseBodyTemplateVersions() = default ;
    ListTemplateVersionsResponseBodyTemplateVersions(const ListTemplateVersionsResponseBodyTemplateVersions &) = default ;
    ListTemplateVersionsResponseBodyTemplateVersions(ListTemplateVersionsResponseBodyTemplateVersions &&) = default ;
    ListTemplateVersionsResponseBodyTemplateVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateVersionsResponseBodyTemplateVersions() = default ;
    ListTemplateVersionsResponseBodyTemplateVersions& operator=(const ListTemplateVersionsResponseBodyTemplateVersions &) = default ;
    ListTemplateVersionsResponseBodyTemplateVersions& operator=(ListTemplateVersionsResponseBodyTemplateVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->templateFormat_ == nullptr && return this->templateVersion_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr && return this->versionName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string templateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListTemplateVersionsResponseBodyTemplateVersions& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The description of the version.
    std::shared_ptr<string> description_ = nullptr;
    // The format of the template content. Valid values: YAML and JSON.
    std::shared_ptr<string> templateFormat_ = nullptr;
    // The number of the version.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The user who last updated the version.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the version was last updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
    // The name of the version.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
