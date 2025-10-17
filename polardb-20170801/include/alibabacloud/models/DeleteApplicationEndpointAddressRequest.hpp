// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteApplicationEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
    };
    DeleteApplicationEndpointAddressRequest() = default ;
    DeleteApplicationEndpointAddressRequest(const DeleteApplicationEndpointAddressRequest &) = default ;
    DeleteApplicationEndpointAddressRequest(DeleteApplicationEndpointAddressRequest &&) = default ;
    DeleteApplicationEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationEndpointAddressRequest() = default ;
    DeleteApplicationEndpointAddressRequest& operator=(const DeleteApplicationEndpointAddressRequest &) = default ;
    DeleteApplicationEndpointAddressRequest& operator=(DeleteApplicationEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->endpointId_ == nullptr && return this->netType_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeleteApplicationEndpointAddressRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DeleteApplicationEndpointAddressRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DeleteApplicationEndpointAddressRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endpointId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> netType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
