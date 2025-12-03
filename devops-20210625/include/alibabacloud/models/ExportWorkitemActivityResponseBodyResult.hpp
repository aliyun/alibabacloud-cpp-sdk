// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWORKITEMACTIVITYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWORKITEMACTIVITYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportWorkitemActivityResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWorkitemActivityResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(gmtEvent, gmtEvent_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(newValue, newValue_);
      DARABONBA_PTR_TO_JSON(oldValue, oldValue_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemId, workitemId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWorkitemActivityResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtEvent, gmtEvent_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(newValue, newValue_);
      DARABONBA_PTR_FROM_JSON(oldValue, oldValue_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemId, workitemId_);
    };
    ExportWorkitemActivityResponseBodyResult() = default ;
    ExportWorkitemActivityResponseBodyResult(const ExportWorkitemActivityResponseBodyResult &) = default ;
    ExportWorkitemActivityResponseBodyResult(ExportWorkitemActivityResponseBodyResult &&) = default ;
    ExportWorkitemActivityResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWorkitemActivityResponseBodyResult() = default ;
    ExportWorkitemActivityResponseBodyResult& operator=(const ExportWorkitemActivityResponseBodyResult &) = default ;
    ExportWorkitemActivityResponseBodyResult& operator=(ExportWorkitemActivityResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtEvent_ == nullptr
        && return this->id_ == nullptr && return this->identifier_ == nullptr && return this->newValue_ == nullptr && return this->oldValue_ == nullptr && return this->organizationId_ == nullptr
        && return this->projectId_ == nullptr && return this->source_ == nullptr && return this->type_ == nullptr && return this->workitemId_ == nullptr; };
    // gmtEvent Field Functions 
    bool hasGmtEvent() const { return this->gmtEvent_ != nullptr;};
    void deleteGmtEvent() { this->gmtEvent_ = nullptr;};
    inline int64_t gmtEvent() const { DARABONBA_PTR_GET_DEFAULT(gmtEvent_, 0L) };
    inline ExportWorkitemActivityResponseBodyResult& setGmtEvent(int64_t gmtEvent) { DARABONBA_PTR_SET_VALUE(gmtEvent_, gmtEvent) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportWorkitemActivityResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemId Field Functions 
    bool hasWorkitemId() const { return this->workitemId_ != nullptr;};
    void deleteWorkitemId() { this->workitemId_ = nullptr;};
    inline string workitemId() const { DARABONBA_PTR_GET_DEFAULT(workitemId_, "") };
    inline ExportWorkitemActivityResponseBodyResult& setWorkitemId(string workitemId) { DARABONBA_PTR_SET_VALUE(workitemId_, workitemId) };


  protected:
    std::shared_ptr<int64_t> gmtEvent_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> newValue_ = nullptr;
    std::shared_ptr<string> oldValue_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workitemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
