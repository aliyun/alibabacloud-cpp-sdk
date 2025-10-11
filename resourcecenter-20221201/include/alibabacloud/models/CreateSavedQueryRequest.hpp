// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVEDQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVEDQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateSavedQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavedQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavedQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateSavedQueryRequest() = default ;
    CreateSavedQueryRequest(const CreateSavedQueryRequest &) = default ;
    CreateSavedQueryRequest(CreateSavedQueryRequest &&) = default ;
    CreateSavedQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavedQueryRequest() = default ;
    CreateSavedQueryRequest& operator=(const CreateSavedQueryRequest &) = default ;
    CreateSavedQueryRequest& operator=(CreateSavedQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->expression_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSavedQueryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreateSavedQueryRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSavedQueryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the template.
    // 
    // The description must be 1 to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The query statement in the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // The name of the template.
    // 
    // *   The name must be 1 to 64 characters in length.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
