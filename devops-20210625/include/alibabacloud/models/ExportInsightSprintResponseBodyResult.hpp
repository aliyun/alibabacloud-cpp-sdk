// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINSIGHTSPRINTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINSIGHTSPRINTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportInsightSprintResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportInsightSprintResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(actualEnd, actualEnd_);
      DARABONBA_PTR_TO_JSON(actualStart, actualStart_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workTimeCapacity, workTimeCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ExportInsightSprintResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(actualEnd, actualEnd_);
      DARABONBA_PTR_FROM_JSON(actualStart, actualStart_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workTimeCapacity, workTimeCapacity_);
    };
    ExportInsightSprintResponseBodyResult() = default ;
    ExportInsightSprintResponseBodyResult(const ExportInsightSprintResponseBodyResult &) = default ;
    ExportInsightSprintResponseBodyResult(ExportInsightSprintResponseBodyResult &&) = default ;
    ExportInsightSprintResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportInsightSprintResponseBodyResult() = default ;
    ExportInsightSprintResponseBodyResult& operator=(const ExportInsightSprintResponseBodyResult &) = default ;
    ExportInsightSprintResponseBodyResult& operator=(ExportInsightSprintResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualEnd_ == nullptr
        && return this->actualStart_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtModified_ == nullptr && return this->gmtStart_ == nullptr
        && return this->id_ == nullptr && return this->identifier_ == nullptr && return this->isDeleted_ == nullptr && return this->name_ == nullptr && return this->organizationId_ == nullptr
        && return this->projectId_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr && return this->workTimeCapacity_ == nullptr; };
    // actualEnd Field Functions 
    bool hasActualEnd() const { return this->actualEnd_ != nullptr;};
    void deleteActualEnd() { this->actualEnd_ = nullptr;};
    inline int64_t actualEnd() const { DARABONBA_PTR_GET_DEFAULT(actualEnd_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setActualEnd(int64_t actualEnd) { DARABONBA_PTR_SET_VALUE(actualEnd_, actualEnd) };


    // actualStart Field Functions 
    bool hasActualStart() const { return this->actualStart_ != nullptr;};
    void deleteActualStart() { this->actualStart_ = nullptr;};
    inline int64_t actualStart() const { DARABONBA_PTR_GET_DEFAULT(actualStart_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setActualStart(int64_t actualStart) { DARABONBA_PTR_SET_VALUE(actualStart_, actualStart) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportInsightSprintResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ExportInsightSprintResponseBodyResult& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline string isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, "") };
    inline ExportInsightSprintResponseBodyResult& setIsDeleted(string isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExportInsightSprintResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ExportInsightSprintResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ExportInsightSprintResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ExportInsightSprintResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ExportInsightSprintResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workTimeCapacity Field Functions 
    bool hasWorkTimeCapacity() const { return this->workTimeCapacity_ != nullptr;};
    void deleteWorkTimeCapacity() { this->workTimeCapacity_ = nullptr;};
    inline double workTimeCapacity() const { DARABONBA_PTR_GET_DEFAULT(workTimeCapacity_, 0.0) };
    inline ExportInsightSprintResponseBodyResult& setWorkTimeCapacity(double workTimeCapacity) { DARABONBA_PTR_SET_VALUE(workTimeCapacity_, workTimeCapacity) };


  protected:
    std::shared_ptr<int64_t> actualEnd_ = nullptr;
    std::shared_ptr<int64_t> actualStart_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> isDeleted_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<double> workTimeCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
