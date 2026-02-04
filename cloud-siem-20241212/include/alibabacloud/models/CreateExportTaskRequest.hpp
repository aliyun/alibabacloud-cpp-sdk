// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskParameter, exportTaskParameter_);
      DARABONBA_PTR_TO_JSON(ExportTaskType, exportTaskType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskParameter, exportTaskParameter_);
      DARABONBA_PTR_FROM_JSON(ExportTaskType, exportTaskType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    CreateExportTaskRequest() = default ;
    CreateExportTaskRequest(const CreateExportTaskRequest &) = default ;
    CreateExportTaskRequest(CreateExportTaskRequest &&) = default ;
    CreateExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExportTaskRequest() = default ;
    CreateExportTaskRequest& operator=(const CreateExportTaskRequest &) = default ;
    CreateExportTaskRequest& operator=(CreateExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskParameter_ == nullptr
        && this->exportTaskType_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // exportTaskParameter Field Functions 
    bool hasExportTaskParameter() const { return this->exportTaskParameter_ != nullptr;};
    void deleteExportTaskParameter() { this->exportTaskParameter_ = nullptr;};
    inline string getExportTaskParameter() const { DARABONBA_PTR_GET_DEFAULT(exportTaskParameter_, "") };
    inline CreateExportTaskRequest& setExportTaskParameter(string exportTaskParameter) { DARABONBA_PTR_SET_VALUE(exportTaskParameter_, exportTaskParameter) };


    // exportTaskType Field Functions 
    bool hasExportTaskType() const { return this->exportTaskType_ != nullptr;};
    void deleteExportTaskType() { this->exportTaskType_ = nullptr;};
    inline string getExportTaskType() const { DARABONBA_PTR_GET_DEFAULT(exportTaskType_, "") };
    inline CreateExportTaskRequest& setExportTaskType(string exportTaskType) { DARABONBA_PTR_SET_VALUE(exportTaskType_, exportTaskType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateExportTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateExportTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateExportTaskRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> exportTaskParameter_ {};
    shared_ptr<string> exportTaskType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
