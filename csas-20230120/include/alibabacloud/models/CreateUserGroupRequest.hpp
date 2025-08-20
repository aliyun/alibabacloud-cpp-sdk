// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUserGroupRequestAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateUserGroupRequest() = default ;
    CreateUserGroupRequest(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest(CreateUserGroupRequest &&) = default ;
    CreateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupRequest() = default ;
    CreateUserGroupRequest& operator=(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest& operator=(CreateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<CreateUserGroupRequestAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<CreateUserGroupRequestAttributes>) };
    inline vector<CreateUserGroupRequestAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<CreateUserGroupRequestAttributes>) };
    inline CreateUserGroupRequest& setAttributes(const vector<CreateUserGroupRequestAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateUserGroupRequest& setAttributes(vector<CreateUserGroupRequestAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUserGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateUserGroupRequestAttributes>> attributes_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
