// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEEVENTOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEEVENTOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateImageEventOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageEventOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageEventOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    UpdateImageEventOperationRequest() = default ;
    UpdateImageEventOperationRequest(const UpdateImageEventOperationRequest &) = default ;
    UpdateImageEventOperationRequest(UpdateImageEventOperationRequest &&) = default ;
    UpdateImageEventOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageEventOperationRequest() = default ;
    UpdateImageEventOperationRequest& operator=(const UpdateImageEventOperationRequest &) = default ;
    UpdateImageEventOperationRequest& operator=(UpdateImageEventOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->id_ == nullptr && return this->note_ == nullptr && return this->scenarios_ == nullptr && return this->source_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline UpdateImageEventOperationRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateImageEventOperationRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline UpdateImageEventOperationRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline string scenarios() const { DARABONBA_PTR_GET_DEFAULT(scenarios_, "") };
    inline UpdateImageEventOperationRequest& setScenarios(string scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateImageEventOperationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The rule conditions. Specify a value in the JSON format. You can specify the following keys:
    // 
    // *   **condition**: the matching condition.
    // *   **type**: the matching type.
    // *   **value**: the matching value.
    std::shared_ptr<string> conditions_ = nullptr;
    // The ID of the alert handling rule. 
    // > You can call the [DescribeImageEventOperationPage](~~DescribeImageEventOperationPage~~) operation to query the ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The remarks that you want to add.
    std::shared_ptr<string> note_ = nullptr;
    // The application scope of the rule. The value is in the JSON format. Valid values:
    // 
    // *   **type**
    // *   **value**
    std::shared_ptr<string> scenarios_ = nullptr;
    // The source of the whitelist. Valid values:
    // 
    // *   **image**: image.
    // *   **agentless**: agentless detection.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
