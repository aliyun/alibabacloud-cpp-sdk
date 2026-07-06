// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSISTARGET_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSISTARGET_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DiagnosisTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnosisTarget& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RelatedId, relatedId_);
      DARABONBA_PTR_TO_JSON(Repository, repository_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnosisTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RelatedId, relatedId_);
      DARABONBA_PTR_FROM_JSON(Repository, repository_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DiagnosisTarget() = default ;
    DiagnosisTarget(const DiagnosisTarget &) = default ;
    DiagnosisTarget(DiagnosisTarget &&) = default ;
    DiagnosisTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnosisTarget() = default ;
    DiagnosisTarget& operator=(const DiagnosisTarget &) = default ;
    DiagnosisTarget& operator=(DiagnosisTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->extra_ == nullptr && this->namespace_ == nullptr && this->relatedId_ == nullptr && this->repository_ == nullptr && this->startTime_ == nullptr
        && this->tag_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DiagnosisTarget& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> getExtra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline DiagnosisTarget& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline DiagnosisTarget& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DiagnosisTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // relatedId Field Functions 
    bool hasRelatedId() const { return this->relatedId_ != nullptr;};
    void deleteRelatedId() { this->relatedId_ = nullptr;};
    inline string getRelatedId() const { DARABONBA_PTR_GET_DEFAULT(relatedId_, "") };
    inline DiagnosisTarget& setRelatedId(string relatedId) { DARABONBA_PTR_SET_VALUE(relatedId_, relatedId) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline DiagnosisTarget& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DiagnosisTarget& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DiagnosisTarget& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The end of the diagnostic time window, in ISO 8601 format. Must be after `StartTime`.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> endTime_ {};
    // A map of key-value pairs providing additional context for the diagnosis.
    shared_ptr<map<string, string>> extra_ {};
    // The namespace that contains the repository.
    shared_ptr<string> namespace_ {};
    // The ID of a related operation, such as a previous diagnostic task.
    shared_ptr<string> relatedId_ {};
    // The name of the repository.
    shared_ptr<string> repository_ {};
    // The start of the diagnostic time window, in ISO 8601 format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> startTime_ {};
    // The container image tag.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
