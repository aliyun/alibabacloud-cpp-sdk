// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREGISTRYNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREGISTRYNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DeleteRegistryNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRegistryNamespaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteRegistryNamespaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteRegistryNamespaceRequest() = default ;
    DeleteRegistryNamespaceRequest(const DeleteRegistryNamespaceRequest &) = default ;
    DeleteRegistryNamespaceRequest(DeleteRegistryNamespaceRequest &&) = default ;
    DeleteRegistryNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRegistryNamespaceRequest() = default ;
    DeleteRegistryNamespaceRequest& operator=(const DeleteRegistryNamespaceRequest &) = default ;
    DeleteRegistryNamespaceRequest& operator=(DeleteRegistryNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
