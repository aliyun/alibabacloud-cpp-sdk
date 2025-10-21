// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLINKAPIPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLINKAPIPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class FlinkApiProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlinkApiProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flinkApiPath, flinkApiPath_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, FlinkApiProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flinkApiPath, flinkApiPath_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    FlinkApiProxyRequest() = default ;
    FlinkApiProxyRequest(const FlinkApiProxyRequest &) = default ;
    FlinkApiProxyRequest(FlinkApiProxyRequest &&) = default ;
    FlinkApiProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlinkApiProxyRequest() = default ;
    FlinkApiProxyRequest& operator=(const FlinkApiProxyRequest &) = default ;
    FlinkApiProxyRequest& operator=(FlinkApiProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flinkApiPath_ == nullptr
        && return this->namespace_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr; };
    // flinkApiPath Field Functions 
    bool hasFlinkApiPath() const { return this->flinkApiPath_ != nullptr;};
    void deleteFlinkApiPath() { this->flinkApiPath_ = nullptr;};
    inline string flinkApiPath() const { DARABONBA_PTR_GET_DEFAULT(flinkApiPath_, "") };
    inline FlinkApiProxyRequest& setFlinkApiPath(string flinkApiPath) { DARABONBA_PTR_SET_VALUE(flinkApiPath_, flinkApiPath) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline FlinkApiProxyRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline FlinkApiProxyRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline FlinkApiProxyRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The path of the Flink UI.
    // 
    // This parameter is required.
    std::shared_ptr<string> flinkApiPath_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The resource ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   jobs
    // *   sessionclusters
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
