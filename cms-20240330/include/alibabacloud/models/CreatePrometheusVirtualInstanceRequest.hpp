// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIRTUALINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIRTUALINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusVirtualInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusVirtualInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusVirtualInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    CreatePrometheusVirtualInstanceRequest() = default ;
    CreatePrometheusVirtualInstanceRequest(const CreatePrometheusVirtualInstanceRequest &) = default ;
    CreatePrometheusVirtualInstanceRequest(CreatePrometheusVirtualInstanceRequest &&) = default ;
    CreatePrometheusVirtualInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusVirtualInstanceRequest() = default ;
    CreatePrometheusVirtualInstanceRequest& operator=(const CreatePrometheusVirtualInstanceRequest &) = default ;
    CreatePrometheusVirtualInstanceRequest& operator=(CreatePrometheusVirtualInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreatePrometheusVirtualInstanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // Each cloud product can only create one virtual instance in each region.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
