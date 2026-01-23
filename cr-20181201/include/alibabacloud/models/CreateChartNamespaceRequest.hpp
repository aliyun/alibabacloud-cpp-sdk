// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHARTNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHARTNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateChartNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChartNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChartNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    CreateChartNamespaceRequest() = default ;
    CreateChartNamespaceRequest(const CreateChartNamespaceRequest &) = default ;
    CreateChartNamespaceRequest(CreateChartNamespaceRequest &&) = default ;
    CreateChartNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChartNamespaceRequest() = default ;
    CreateChartNamespaceRequest& operator=(const CreateChartNamespaceRequest &) = default ;
    CreateChartNamespaceRequest& operator=(CreateChartNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateRepo_ == nullptr
        && this->defaultRepoType_ == nullptr && this->instanceId_ == nullptr && this->namespaceName_ == nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool getAutoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline CreateChartNamespaceRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline CreateChartNamespaceRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateChartNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateChartNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to automatically create repositories in the namespace. Valid values:
    // 
    // \\-`  true `: automatically creates repositories in the namespace.
    // 
    // \\-`  false `: does not automatically create repositories in the namespace.
    shared_ptr<bool> autoCreateRepo_ {};
    // The default repository type. Valid values:
    // 
    // *   `PUBLIC`: a public repository
    // *   `PRIVATE`: a private repository
    shared_ptr<string> defaultRepoType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
