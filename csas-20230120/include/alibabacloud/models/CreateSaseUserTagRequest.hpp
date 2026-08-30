// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASEUSERTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASEUSERTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateSaseUserTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSaseUserTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSaseUserTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateSaseUserTagRequest() = default ;
    CreateSaseUserTagRequest(const CreateSaseUserTagRequest &) = default ;
    CreateSaseUserTagRequest(CreateSaseUserTagRequest &&) = default ;
    CreateSaseUserTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSaseUserTagRequest() = default ;
    CreateSaseUserTagRequest& operator=(const CreateSaseUserTagRequest &) = default ;
    CreateSaseUserTagRequest& operator=(CreateSaseUserTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSaseUserTagRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSaseUserTagRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the employee tag.
    shared_ptr<string> description_ {};
    // The name of the user tag.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
