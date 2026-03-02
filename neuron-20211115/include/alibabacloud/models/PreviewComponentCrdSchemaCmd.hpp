// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMACMD_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMACMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PreviewComponentCrdSchemaCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewComponentCrdSchemaCmd& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isCustom, isCustom_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(reesourceVersion, reesourceVersion_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewComponentCrdSchemaCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isCustom, isCustom_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(reesourceVersion, reesourceVersion_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PreviewComponentCrdSchemaCmd() = default ;
    PreviewComponentCrdSchemaCmd(const PreviewComponentCrdSchemaCmd &) = default ;
    PreviewComponentCrdSchemaCmd(PreviewComponentCrdSchemaCmd &&) = default ;
    PreviewComponentCrdSchemaCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewComponentCrdSchemaCmd() = default ;
    PreviewComponentCrdSchemaCmd& operator=(const PreviewComponentCrdSchemaCmd &) = default ;
    PreviewComponentCrdSchemaCmd& operator=(PreviewComponentCrdSchemaCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->configuration_ == nullptr && this->credentials_ == nullptr && this->id_ == nullptr && this->isCustom_ == nullptr && this->name_ == nullptr
        && this->reesourceVersion_ == nullptr && this->resourceId_ == nullptr && this->scope_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline PreviewComponentCrdSchemaCmd& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ConfigModel> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigModel>) };
    inline vector<ConfigModel> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigModel>) };
    inline PreviewComponentCrdSchemaCmd& setConfiguration(const vector<ConfigModel> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline PreviewComponentCrdSchemaCmd& setConfiguration(vector<ConfigModel> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline string getCredentials() const { DARABONBA_PTR_GET_DEFAULT(credentials_, "") };
    inline PreviewComponentCrdSchemaCmd& setCredentials(string credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PreviewComponentCrdSchemaCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline PreviewComponentCrdSchemaCmd& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PreviewComponentCrdSchemaCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reesourceVersion Field Functions 
    bool hasReesourceVersion() const { return this->reesourceVersion_ != nullptr;};
    void deleteReesourceVersion() { this->reesourceVersion_ = nullptr;};
    inline string getReesourceVersion() const { DARABONBA_PTR_GET_DEFAULT(reesourceVersion_, "") };
    inline PreviewComponentCrdSchemaCmd& setReesourceVersion(string reesourceVersion) { DARABONBA_PTR_SET_VALUE(reesourceVersion_, reesourceVersion) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline PreviewComponentCrdSchemaCmd& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline PreviewComponentCrdSchemaCmd& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline PreviewComponentCrdSchemaCmd& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PreviewComponentCrdSchemaCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<vector<ConfigModel>> configuration_ {};
    shared_ptr<string> credentials_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isCustom_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> reesourceVersion_ {};
    shared_ptr<int64_t> resourceId_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<int64_t> templateId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
