// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSVIRTUALINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSVIRTUALINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeletePrometheusVirtualInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusVirtualInstanceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusVirtualInstanceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeletePrometheusVirtualInstanceRequest() = default ;
    DeletePrometheusVirtualInstanceRequest(const DeletePrometheusVirtualInstanceRequest &) = default ;
    DeletePrometheusVirtualInstanceRequest(DeletePrometheusVirtualInstanceRequest &&) = default ;
    DeletePrometheusVirtualInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusVirtualInstanceRequest() = default ;
    DeletePrometheusVirtualInstanceRequest& operator=(const DeletePrometheusVirtualInstanceRequest &) = default ;
    DeletePrometheusVirtualInstanceRequest& operator=(DeletePrometheusVirtualInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
