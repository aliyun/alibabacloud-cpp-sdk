// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateProfileRequest() = default ;
    CreateProfileRequest(const CreateProfileRequest &) = default ;
    CreateProfileRequest(CreateProfileRequest &&) = default ;
    CreateProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProfileRequest() = default ;
    CreateProfileRequest& operator=(const CreateProfileRequest &) = default ;
    CreateProfileRequest& operator=(CreateProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Immutable, immutable_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Attributes() = default ;
      Attributes(const Attributes &) = default ;
      Attributes(Attributes &&) = default ;
      Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attributes() = default ;
      Attributes& operator=(const Attributes &) = default ;
      Attributes& operator=(Attributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->immutable_ == nullptr && this->name_ == nullptr; };
      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline Attributes& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Attributes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // immutable Field Functions 
      bool hasImmutable() const { return this->immutable_ != nullptr;};
      void deleteImmutable() { this->immutable_ = nullptr;};
      inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
      inline Attributes& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> defaultValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> immutable_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->attributes_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateProfileRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<CreateProfileRequest::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<CreateProfileRequest::Attributes>) };
    inline vector<CreateProfileRequest::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<CreateProfileRequest::Attributes>) };
    inline CreateProfileRequest& setAttributes(const vector<CreateProfileRequest::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateProfileRequest& setAttributes(vector<CreateProfileRequest::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProfileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProfileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline CreateProfileRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateProfileRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<vector<CreateProfileRequest::Attributes>> attributes_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
