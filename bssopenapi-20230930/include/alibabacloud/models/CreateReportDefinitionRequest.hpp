// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateReportDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_TO_JSON(McProject, mcProject_);
      DARABONBA_PTR_TO_JSON(McTableName, mcTableName_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_TO_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_FROM_JSON(McProject, mcProject_);
      DARABONBA_PTR_FROM_JSON(McTableName, mcTableName_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_FROM_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    CreateReportDefinitionRequest() = default ;
    CreateReportDefinitionRequest(const CreateReportDefinitionRequest &) = default ;
    CreateReportDefinitionRequest(CreateReportDefinitionRequest &&) = default ;
    CreateReportDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportDefinitionRequest() = default ;
    CreateReportDefinitionRequest& operator=(const CreateReportDefinitionRequest &) = default ;
    CreateReportDefinitionRequest& operator=(CreateReportDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginBillingCycle_ != nullptr
        && this->mcProject_ != nullptr && this->mcTableName_ != nullptr && this->nbid_ != nullptr && this->ossBucketName_ != nullptr && this->ossBucketOwnerAccountId_ != nullptr
        && this->ossBucketPath_ != nullptr && this->reportSourceType_ != nullptr && this->reportType_ != nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string beginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline CreateReportDefinitionRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // mcProject Field Functions 
    bool hasMcProject() const { return this->mcProject_ != nullptr;};
    void deleteMcProject() { this->mcProject_ = nullptr;};
    inline string mcProject() const { DARABONBA_PTR_GET_DEFAULT(mcProject_, "") };
    inline CreateReportDefinitionRequest& setMcProject(string mcProject) { DARABONBA_PTR_SET_VALUE(mcProject_, mcProject) };


    // mcTableName Field Functions 
    bool hasMcTableName() const { return this->mcTableName_ != nullptr;};
    void deleteMcTableName() { this->mcTableName_ = nullptr;};
    inline string mcTableName() const { DARABONBA_PTR_GET_DEFAULT(mcTableName_, "") };
    inline CreateReportDefinitionRequest& setMcTableName(string mcTableName) { DARABONBA_PTR_SET_VALUE(mcTableName_, mcTableName) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateReportDefinitionRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateReportDefinitionRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossBucketOwnerAccountId Field Functions 
    bool hasOssBucketOwnerAccountId() const { return this->ossBucketOwnerAccountId_ != nullptr;};
    void deleteOssBucketOwnerAccountId() { this->ossBucketOwnerAccountId_ = nullptr;};
    inline int64_t ossBucketOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ossBucketOwnerAccountId_, 0L) };
    inline CreateReportDefinitionRequest& setOssBucketOwnerAccountId(int64_t ossBucketOwnerAccountId) { DARABONBA_PTR_SET_VALUE(ossBucketOwnerAccountId_, ossBucketOwnerAccountId) };


    // ossBucketPath Field Functions 
    bool hasOssBucketPath() const { return this->ossBucketPath_ != nullptr;};
    void deleteOssBucketPath() { this->ossBucketPath_ = nullptr;};
    inline string ossBucketPath() const { DARABONBA_PTR_GET_DEFAULT(ossBucketPath_, "") };
    inline CreateReportDefinitionRequest& setOssBucketPath(string ossBucketPath) { DARABONBA_PTR_SET_VALUE(ossBucketPath_, ossBucketPath) };


    // reportSourceType Field Functions 
    bool hasReportSourceType() const { return this->reportSourceType_ != nullptr;};
    void deleteReportSourceType() { this->reportSourceType_ = nullptr;};
    inline string reportSourceType() const { DARABONBA_PTR_GET_DEFAULT(reportSourceType_, "") };
    inline CreateReportDefinitionRequest& setReportSourceType(string reportSourceType) { DARABONBA_PTR_SET_VALUE(reportSourceType_, reportSourceType) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline CreateReportDefinitionRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    std::shared_ptr<string> beginBillingCycle_ = nullptr;
    std::shared_ptr<string> mcProject_ = nullptr;
    std::shared_ptr<string> mcTableName_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<int64_t> ossBucketOwnerAccountId_ = nullptr;
    std::shared_ptr<string> ossBucketPath_ = nullptr;
    std::shared_ptr<string> reportSourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
