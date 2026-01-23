// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHARTNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHARTNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateChartNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChartNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChartNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    UpdateChartNamespaceRequest() = default ;
    UpdateChartNamespaceRequest(const UpdateChartNamespaceRequest &) = default ;
    UpdateChartNamespaceRequest(UpdateChartNamespaceRequest &&) = default ;
    UpdateChartNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChartNamespaceRequest() = default ;
    UpdateChartNamespaceRequest& operator=(const UpdateChartNamespaceRequest &) = default ;
    UpdateChartNamespaceRequest& operator=(UpdateChartNamespaceRequest &&) = default ;
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
    inline UpdateChartNamespaceRequest& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string getDefaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline UpdateChartNamespaceRequest& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateChartNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateChartNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to automatically create repositories in the namespace. Valid values:
    // 
    // *   `true`: automatically creates repositories in the namespace.
    // *   `false`: does not automatically create repositories in the namespace.
    shared_ptr<bool> autoCreateRepo_ {};
    // The default type of the repository. Valid values:
    // 
    // *   `PUBLIC`: a public repository
    // *   `PRIVATE`: a private repository
    shared_ptr<string> defaultRepoType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the namespace to which the repository belongs.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
