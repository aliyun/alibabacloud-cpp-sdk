// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGSIMPORTRULESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGSIMPORTRULESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIJobRequestJobSettingsImportRuleSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestJobSettingsImportRuleSettings& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestJobSettingsImportRuleSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreateDIJobRequestJobSettingsImportRuleSettings() = default ;
    CreateDIJobRequestJobSettingsImportRuleSettings(const CreateDIJobRequestJobSettingsImportRuleSettings &) = default ;
    CreateDIJobRequestJobSettingsImportRuleSettings(CreateDIJobRequestJobSettingsImportRuleSettings &&) = default ;
    CreateDIJobRequestJobSettingsImportRuleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestJobSettingsImportRuleSettings() = default ;
    CreateDIJobRequestJobSettingsImportRuleSettings& operator=(const CreateDIJobRequestJobSettingsImportRuleSettings &) = default ;
    CreateDIJobRequestJobSettingsImportRuleSettings& operator=(CreateDIJobRequestJobSettingsImportRuleSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->source_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateDIJobRequestJobSettingsImportRuleSettings& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateDIJobRequestJobSettingsImportRuleSettings& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The ID of the task to be imported.
    std::shared_ptr<string> fileId_ = nullptr;
    // The import source of the task. Set the value to Datastudio, which indicates synchronization tasks created in DataStudio.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
