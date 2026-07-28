// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODULEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODULEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateModuleVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModuleVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModuleVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateModuleVersionRequest() = default ;
    CreateModuleVersionRequest(const CreateModuleVersionRequest &) = default ;
    CreateModuleVersionRequest(CreateModuleVersionRequest &&) = default ;
    CreateModuleVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModuleVersionRequest() = default ;
    CreateModuleVersionRequest& operator=(const CreateModuleVersionRequest &) = default ;
    CreateModuleVersionRequest& operator=(CreateModuleVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModuleVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModuleVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModuleVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The idempotence token. Format: [0-9a-zA-Z-]{1,64}. Use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The version description. The description can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The template version name. The name must meet the following requirements:
    // 
    // - The name must be 2 to 128 characters in length.
    // - The name can contain letters, digits, Chinese characters, hyphens (-), underscores (_), and periods (.). The name cannot start or end with a hyphen, underscore, or period.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
