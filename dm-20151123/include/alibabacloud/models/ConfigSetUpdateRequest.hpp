// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ValidationOption, validationOption_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ValidationOption, validationOption_);
    };
    ConfigSetUpdateRequest() = default ;
    ConfigSetUpdateRequest(const ConfigSetUpdateRequest &) = default ;
    ConfigSetUpdateRequest(ConfigSetUpdateRequest &&) = default ;
    ConfigSetUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetUpdateRequest() = default ;
    ConfigSetUpdateRequest& operator=(const ConfigSetUpdateRequest &) = default ;
    ConfigSetUpdateRequest& operator=(ConfigSetUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ValidationOption : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ValidationOption& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ForbiddenStatusList, forbiddenStatusList_);
        DARABONBA_PTR_TO_JSON(ForbiddenSubStatusList, forbiddenSubStatusList_);
      };
      friend void from_json(const Darabonba::Json& j, ValidationOption& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ForbiddenStatusList, forbiddenStatusList_);
        DARABONBA_PTR_FROM_JSON(ForbiddenSubStatusList, forbiddenSubStatusList_);
      };
      ValidationOption() = default ;
      ValidationOption(const ValidationOption &) = default ;
      ValidationOption(ValidationOption &&) = default ;
      ValidationOption(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ValidationOption() = default ;
      ValidationOption& operator=(const ValidationOption &) = default ;
      ValidationOption& operator=(ValidationOption &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->forbiddenStatusList_ == nullptr && this->forbiddenSubStatusList_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ValidationOption& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // forbiddenStatusList Field Functions 
      bool hasForbiddenStatusList() const { return this->forbiddenStatusList_ != nullptr;};
      void deleteForbiddenStatusList() { this->forbiddenStatusList_ = nullptr;};
      inline const vector<string> & getForbiddenStatusList() const { DARABONBA_PTR_GET_CONST(forbiddenStatusList_, vector<string>) };
      inline vector<string> getForbiddenStatusList() { DARABONBA_PTR_GET(forbiddenStatusList_, vector<string>) };
      inline ValidationOption& setForbiddenStatusList(const vector<string> & forbiddenStatusList) { DARABONBA_PTR_SET_VALUE(forbiddenStatusList_, forbiddenStatusList) };
      inline ValidationOption& setForbiddenStatusList(vector<string> && forbiddenStatusList) { DARABONBA_PTR_SET_RVALUE(forbiddenStatusList_, forbiddenStatusList) };


      // forbiddenSubStatusList Field Functions 
      bool hasForbiddenSubStatusList() const { return this->forbiddenSubStatusList_ != nullptr;};
      void deleteForbiddenSubStatusList() { this->forbiddenSubStatusList_ = nullptr;};
      inline const vector<string> & getForbiddenSubStatusList() const { DARABONBA_PTR_GET_CONST(forbiddenSubStatusList_, vector<string>) };
      inline vector<string> getForbiddenSubStatusList() { DARABONBA_PTR_GET(forbiddenSubStatusList_, vector<string>) };
      inline ValidationOption& setForbiddenSubStatusList(const vector<string> & forbiddenSubStatusList) { DARABONBA_PTR_SET_VALUE(forbiddenSubStatusList_, forbiddenSubStatusList) };
      inline ValidationOption& setForbiddenSubStatusList(vector<string> && forbiddenSubStatusList) { DARABONBA_PTR_SET_RVALUE(forbiddenSubStatusList_, forbiddenSubStatusList) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<vector<string>> forbiddenStatusList_ {};
      shared_ptr<vector<string>> forbiddenSubStatusList_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->ipPoolId_ == nullptr && this->isPublicChannelBackoff_ == nullptr && this->name_ == nullptr && this->validationOption_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigSetUpdateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ConfigSetUpdateRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline ConfigSetUpdateRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // isPublicChannelBackoff Field Functions 
    bool hasIsPublicChannelBackoff() const { return this->isPublicChannelBackoff_ != nullptr;};
    void deleteIsPublicChannelBackoff() { this->isPublicChannelBackoff_ = nullptr;};
    inline bool getIsPublicChannelBackoff() const { DARABONBA_PTR_GET_DEFAULT(isPublicChannelBackoff_, false) };
    inline ConfigSetUpdateRequest& setIsPublicChannelBackoff(bool isPublicChannelBackoff) { DARABONBA_PTR_SET_VALUE(isPublicChannelBackoff_, isPublicChannelBackoff) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigSetUpdateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // validationOption Field Functions 
    bool hasValidationOption() const { return this->validationOption_ != nullptr;};
    void deleteValidationOption() { this->validationOption_ = nullptr;};
    inline const ConfigSetUpdateRequest::ValidationOption & getValidationOption() const { DARABONBA_PTR_GET_CONST(validationOption_, ConfigSetUpdateRequest::ValidationOption) };
    inline ConfigSetUpdateRequest::ValidationOption getValidationOption() { DARABONBA_PTR_GET(validationOption_, ConfigSetUpdateRequest::ValidationOption) };
    inline ConfigSetUpdateRequest& setValidationOption(const ConfigSetUpdateRequest::ValidationOption & validationOption) { DARABONBA_PTR_SET_VALUE(validationOption_, validationOption) };
    inline ConfigSetUpdateRequest& setValidationOption(ConfigSetUpdateRequest::ValidationOption && validationOption) { DARABONBA_PTR_SET_RVALUE(validationOption_, validationOption) };


  protected:
    // The description. Maximum length: 50 characters.
    shared_ptr<string> description_ {};
    // The configuration set ID. This parameter is required.
    shared_ptr<string> id_ {};
    // The associated IP pool ID. This parameter is optional.
    shared_ptr<string> ipPoolId_ {};
    shared_ptr<bool> isPublicChannelBackoff_ {};
    // The configuration name. This parameter is required. Maximum length: 50 characters. The name must be unique.
    shared_ptr<string> name_ {};
    shared_ptr<ConfigSetUpdateRequest::ValidationOption> validationOption_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
