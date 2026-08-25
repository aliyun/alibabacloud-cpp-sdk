// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKFROMRESOURCEIMPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKFROMRESOURCEIMPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateTaskFromResourceImportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskFromResourceImportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskFromResourceImportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateTaskFromResourceImportRequest() = default ;
    CreateTaskFromResourceImportRequest(const CreateTaskFromResourceImportRequest &) = default ;
    CreateTaskFromResourceImportRequest(CreateTaskFromResourceImportRequest &&) = default ;
    CreateTaskFromResourceImportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskFromResourceImportRequest() = default ;
    CreateTaskFromResourceImportRequest& operator=(const CreateTaskFromResourceImportRequest &) = default ;
    CreateTaskFromResourceImportRequest& operator=(CreateTaskFromResourceImportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->exportTaskId_ == nullptr && this->exportVersion_ == nullptr && this->taskName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTaskFromResourceImportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline CreateTaskFromResourceImportRequest& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string getExportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline CreateTaskFromResourceImportRequest& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTaskFromResourceImportRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> exportTaskId_ {};
    // This parameter is required.
    shared_ptr<string> exportVersion_ {};
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
