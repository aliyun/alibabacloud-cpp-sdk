// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryNamespaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryNamespaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetRegistryNamespaceRequest() = default ;
    GetRegistryNamespaceRequest(const GetRegistryNamespaceRequest &) = default ;
    GetRegistryNamespaceRequest(GetRegistryNamespaceRequest &&) = default ;
    GetRegistryNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryNamespaceRequest() = default ;
    GetRegistryNamespaceRequest& operator=(const GetRegistryNamespaceRequest &) = default ;
    GetRegistryNamespaceRequest& operator=(GetRegistryNamespaceRequest &&) = default ;
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
