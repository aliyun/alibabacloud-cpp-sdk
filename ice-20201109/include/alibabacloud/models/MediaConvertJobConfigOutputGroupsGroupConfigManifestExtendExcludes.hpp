// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGMANIFESTEXTENDEXCLUDES_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGMANIFESTEXTENDEXCLUDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(language, language_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(language, language_);
    };
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes(const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes(MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes &&) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& operator=(const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& operator=(MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->language_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
