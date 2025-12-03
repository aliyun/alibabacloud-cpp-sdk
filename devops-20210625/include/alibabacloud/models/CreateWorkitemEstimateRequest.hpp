// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemEstimateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemEstimateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(recordUserIdentifier, recordUserIdentifier_);
      DARABONBA_PTR_TO_JSON(spentTime, spentTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemEstimateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(recordUserIdentifier, recordUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(spentTime, spentTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    CreateWorkitemEstimateRequest() = default ;
    CreateWorkitemEstimateRequest(const CreateWorkitemEstimateRequest &) = default ;
    CreateWorkitemEstimateRequest(CreateWorkitemEstimateRequest &&) = default ;
    CreateWorkitemEstimateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemEstimateRequest() = default ;
    CreateWorkitemEstimateRequest& operator=(const CreateWorkitemEstimateRequest &) = default ;
    CreateWorkitemEstimateRequest& operator=(CreateWorkitemEstimateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->recordUserIdentifier_ == nullptr && return this->spentTime_ == nullptr && return this->type_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkitemEstimateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // recordUserIdentifier Field Functions 
    bool hasRecordUserIdentifier() const { return this->recordUserIdentifier_ != nullptr;};
    void deleteRecordUserIdentifier() { this->recordUserIdentifier_ = nullptr;};
    inline string recordUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(recordUserIdentifier_, "") };
    inline CreateWorkitemEstimateRequest& setRecordUserIdentifier(string recordUserIdentifier) { DARABONBA_PTR_SET_VALUE(recordUserIdentifier_, recordUserIdentifier) };


    // spentTime Field Functions 
    bool hasSpentTime() const { return this->spentTime_ != nullptr;};
    void deleteSpentTime() { this->spentTime_ = nullptr;};
    inline string spentTime() const { DARABONBA_PTR_GET_DEFAULT(spentTime_, "") };
    inline CreateWorkitemEstimateRequest& setSpentTime(string spentTime) { DARABONBA_PTR_SET_VALUE(spentTime_, spentTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkitemEstimateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline CreateWorkitemEstimateRequest& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> recordUserIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spentTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
