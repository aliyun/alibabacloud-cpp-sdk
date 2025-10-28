// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SCONFIGMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SCONFIGMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sConfigMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sConfigMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sConfigMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    UpdateK8sConfigMapRequest() = default ;
    UpdateK8sConfigMapRequest(const UpdateK8sConfigMapRequest &) = default ;
    UpdateK8sConfigMapRequest(UpdateK8sConfigMapRequest &&) = default ;
    UpdateK8sConfigMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sConfigMapRequest() = default ;
    UpdateK8sConfigMapRequest& operator=(const UpdateK8sConfigMapRequest &) = default ;
    UpdateK8sConfigMapRequest& operator=(UpdateK8sConfigMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->data_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sConfigMapRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline UpdateK8sConfigMapRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline UpdateK8sConfigMapRequest& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateK8sConfigMapRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateK8sConfigMapRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The ID of the Kubernetes cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The data of the ConfigMap. Set this parameter to a JSON string.
    Darabonba::Json data_ = nullptr;
    // The name of the ConfigMap. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
