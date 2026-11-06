// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTICVPCENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTICVPCENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteAgenticVpcEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgenticVpcEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgenticVpcEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
    };
    DeleteAgenticVpcEndpointRequest() = default ;
    DeleteAgenticVpcEndpointRequest(const DeleteAgenticVpcEndpointRequest &) = default ;
    DeleteAgenticVpcEndpointRequest(DeleteAgenticVpcEndpointRequest &&) = default ;
    DeleteAgenticVpcEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgenticVpcEndpointRequest() = default ;
    DeleteAgenticVpcEndpointRequest& operator=(const DeleteAgenticVpcEndpointRequest &) = default ;
    DeleteAgenticVpcEndpointRequest& operator=(DeleteAgenticVpcEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointId_ == nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DeleteAgenticVpcEndpointRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


  protected:
    // The ID of the endpoint to be deleted. You can delete the endpoint even if it has associated data sources, but this may interrupt access.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
