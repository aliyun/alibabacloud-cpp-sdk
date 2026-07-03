// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDATAAGENTACCURACYTESTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDATAAGENTACCURACYTESTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class StartDataAgentAccuracyTestTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDataAgentAccuracyTestTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_TO_JSON(CsvFile, csvFile_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, StartDataAgentAccuracyTestTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_FROM_JSON(CsvFile, csvFile_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    StartDataAgentAccuracyTestTaskRequest() = default ;
    StartDataAgentAccuracyTestTaskRequest(const StartDataAgentAccuracyTestTaskRequest &) = default ;
    StartDataAgentAccuracyTestTaskRequest(StartDataAgentAccuracyTestTaskRequest &&) = default ;
    StartDataAgentAccuracyTestTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDataAgentAccuracyTestTaskRequest() = default ;
    StartDataAgentAccuracyTestTaskRequest& operator=(const StartDataAgentAccuracyTestTaskRequest &) = default ;
    StartDataAgentAccuracyTestTaskRequest& operator=(StartDataAgentAccuracyTestTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accuracyTestInsId_ == nullptr
        && this->csvFile_ == nullptr && this->dmsUnit_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // accuracyTestInsId Field Functions 
    bool hasAccuracyTestInsId() const { return this->accuracyTestInsId_ != nullptr;};
    void deleteAccuracyTestInsId() { this->accuracyTestInsId_ = nullptr;};
    inline string getAccuracyTestInsId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestInsId_, "") };
    inline StartDataAgentAccuracyTestTaskRequest& setAccuracyTestInsId(string accuracyTestInsId) { DARABONBA_PTR_SET_VALUE(accuracyTestInsId_, accuracyTestInsId) };


    // csvFile Field Functions 
    bool hasCsvFile() const { return this->csvFile_ != nullptr;};
    void deleteCsvFile() { this->csvFile_ = nullptr;};
    inline string getCsvFile() const { DARABONBA_PTR_GET_DEFAULT(csvFile_, "") };
    inline StartDataAgentAccuracyTestTaskRequest& setCsvFile(string csvFile) { DARABONBA_PTR_SET_VALUE(csvFile_, csvFile) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline StartDataAgentAccuracyTestTaskRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartDataAgentAccuracyTestTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline StartDataAgentAccuracyTestTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accuracy test instance ID.
    shared_ptr<string> accuracyTestInsId_ {};
    // The accuracy test sample.
    shared_ptr<string> csvFile_ {};
    // The DMS unit used to create the resource.
    shared_ptr<string> dmsUnit_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
