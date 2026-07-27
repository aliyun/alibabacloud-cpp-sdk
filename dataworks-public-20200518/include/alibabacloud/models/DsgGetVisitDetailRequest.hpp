// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGGETVISITDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGGETVISITDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgGetVisitDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgGetVisitDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SensLevel, sensLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DsgGetVisitDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SensLevel, sensLevel_);
    };
    DsgGetVisitDetailRequest() = default ;
    DsgGetVisitDetailRequest(const DsgGetVisitDetailRequest &) = default ;
    DsgGetVisitDetailRequest(DsgGetVisitDetailRequest &&) = default ;
    DsgGetVisitDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgGetVisitDetailRequest() = default ;
    DsgGetVisitDetailRequest& operator=(const DsgGetVisitDetailRequest &) = default ;
    DsgGetVisitDetailRequest& operator=(DsgGetVisitDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->engineName_ == nullptr && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->projectId_ == nullptr && this->ruleName_ == nullptr && this->sensLevel_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DsgGetVisitDetailRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DsgGetVisitDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DsgGetVisitDetailRequest& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DsgGetVisitDetailRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DsgGetVisitDetailRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DsgGetVisitDetailRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DsgGetVisitDetailRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgGetVisitDetailRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevel Field Functions 
    bool hasSensLevel() const { return this->sensLevel_ != nullptr;};
    void deleteSensLevel() { this->sensLevel_ = nullptr;};
    inline string getSensLevel() const { DARABONBA_PTR_GET_DEFAULT(sensLevel_, "") };
    inline DsgGetVisitDetailRequest& setSensLevel(string sensLevel) { DARABONBA_PTR_SET_VALUE(sensLevel_, sensLevel) };


  protected:
    // The start time of the query range. Example: "2026-06-26 00:00:00".
    // 
    // This parameter is required.
    shared_ptr<string> beginTime_ {};
    // The end time of the query range. Example: "2026-06-30 23:59:59".
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The engine type. Valid values:
    // - ODPS.ODPS
    // - EMR
    // - HOLO.POSTGRES
    // 
    // This parameter is required.
    shared_ptr<string> engineName_ {};
    // The keyword of the table or project name. DataWorks supports fuzzy match. You can enter a keyword to query table or project names that contain the keyword.
    shared_ptr<string> keyword_ {};
    // The page number. Minimum value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The project name (ProjectName is easier to understand). Example: dsg_demo_gw.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The name of the sensitive field.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The sensitivity level. Example: 3.
    shared_ptr<string> sensLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
