// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class UpdateAlertTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateAlertTemplateRequest() = default ;
    UpdateAlertTemplateRequest(const UpdateAlertTemplateRequest &) = default ;
    UpdateAlertTemplateRequest(UpdateAlertTemplateRequest &&) = default ;
    UpdateAlertTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertTemplateRequest() = default ;
    UpdateAlertTemplateRequest& operator=(const UpdateAlertTemplateRequest &) = default ;
    UpdateAlertTemplateRequest& operator=(UpdateAlertTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->id_ == nullptr && this->labels_ == nullptr && this->matchExpressions_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->regionId_ == nullptr && this->rule_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline UpdateAlertTemplateRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateAlertTemplateRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline UpdateAlertTemplateRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // matchExpressions Field Functions 
    bool hasMatchExpressions() const { return this->matchExpressions_ != nullptr;};
    void deleteMatchExpressions() { this->matchExpressions_ = nullptr;};
    inline string getMatchExpressions() const { DARABONBA_PTR_GET_DEFAULT(matchExpressions_, "") };
    inline UpdateAlertTemplateRequest& setMatchExpressions(string matchExpressions) { DARABONBA_PTR_SET_VALUE(matchExpressions_, matchExpressions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAlertTemplateRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlertTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateAlertTemplateRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UpdateAlertTemplateRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAlertTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> annotations_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> labels_ {};
    shared_ptr<string> matchExpressions_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> rule_ {};
    // This parameter is required.
    shared_ptr<bool> status_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
