// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIGITALEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIGITALEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDigitalEmployeeRequestKnowledges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateDigitalEmployeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(knowledges, knowledges_);
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDigitalEmployeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(knowledges, knowledges_);
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
    };
    UpdateDigitalEmployeeRequest() = default ;
    UpdateDigitalEmployeeRequest(const UpdateDigitalEmployeeRequest &) = default ;
    UpdateDigitalEmployeeRequest(UpdateDigitalEmployeeRequest &&) = default ;
    UpdateDigitalEmployeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDigitalEmployeeRequest() = default ;
    UpdateDigitalEmployeeRequest& operator=(const UpdateDigitalEmployeeRequest &) = default ;
    UpdateDigitalEmployeeRequest& operator=(UpdateDigitalEmployeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRule_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->knowledges_ == nullptr && return this->roleArn_ == nullptr; };
    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string defaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline UpdateDigitalEmployeeRequest& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDigitalEmployeeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateDigitalEmployeeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // knowledges Field Functions 
    bool hasKnowledges() const { return this->knowledges_ != nullptr;};
    void deleteKnowledges() { this->knowledges_ = nullptr;};
    inline const UpdateDigitalEmployeeRequestKnowledges & knowledges() const { DARABONBA_PTR_GET_CONST(knowledges_, UpdateDigitalEmployeeRequestKnowledges) };
    inline UpdateDigitalEmployeeRequestKnowledges knowledges() { DARABONBA_PTR_GET(knowledges_, UpdateDigitalEmployeeRequestKnowledges) };
    inline UpdateDigitalEmployeeRequest& setKnowledges(const UpdateDigitalEmployeeRequestKnowledges & knowledges) { DARABONBA_PTR_SET_VALUE(knowledges_, knowledges) };
    inline UpdateDigitalEmployeeRequest& setKnowledges(UpdateDigitalEmployeeRequestKnowledges && knowledges) { DARABONBA_PTR_SET_RVALUE(knowledges_, knowledges) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline UpdateDigitalEmployeeRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    std::shared_ptr<string> defaultRule_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<UpdateDigitalEmployeeRequestKnowledges> knowledges_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
