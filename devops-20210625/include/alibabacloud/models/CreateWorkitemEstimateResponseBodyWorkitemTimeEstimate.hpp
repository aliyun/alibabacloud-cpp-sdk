// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATERESPONSEBODYWORKITEMTIMEESTIMATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATERESPONSEBODYWORKITEMTIMEESTIMATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(recordUser, recordUser_);
      DARABONBA_PTR_TO_JSON(spentTime, spentTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(recordUser, recordUser_);
      DARABONBA_PTR_FROM_JSON(spentTime, spentTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate() = default ;
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate(const CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate &) = default ;
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate(CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate &&) = default ;
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate() = default ;
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& operator=(const CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate &) = default ;
    CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& operator=(CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->identifier_ == nullptr && return this->recordUser_ == nullptr && return this->spentTime_ == nullptr && return this->type_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // recordUser Field Functions 
    bool hasRecordUser() const { return this->recordUser_ != nullptr;};
    void deleteRecordUser() { this->recordUser_ = nullptr;};
    inline const Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser & recordUser() const { DARABONBA_PTR_GET_CONST(recordUser_, Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser) };
    inline Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser recordUser() { DARABONBA_PTR_GET(recordUser_, Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser) };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setRecordUser(const Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser & recordUser) { DARABONBA_PTR_SET_VALUE(recordUser_, recordUser) };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setRecordUser(Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser && recordUser) { DARABONBA_PTR_SET_RVALUE(recordUser_, recordUser) };


    // spentTime Field Functions 
    bool hasSpentTime() const { return this->spentTime_ != nullptr;};
    void deleteSpentTime() { this->spentTime_ = nullptr;};
    inline int64_t spentTime() const { DARABONBA_PTR_GET_DEFAULT(spentTime_, 0L) };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setSpentTime(int64_t spentTime) { DARABONBA_PTR_SET_VALUE(spentTime_, spentTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<Models::CreateWorkitemEstimateResponseBodyWorkitemTimeEstimateRecordUser> recordUser_ = nullptr;
    std::shared_ptr<int64_t> spentTime_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
