// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNETWORKROUTES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNETWORKROUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestNetworkRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestNetworkRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestNetworkRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    CreateAppInstanceGroupRequestNetworkRoutes() = default ;
    CreateAppInstanceGroupRequestNetworkRoutes(const CreateAppInstanceGroupRequestNetworkRoutes &) = default ;
    CreateAppInstanceGroupRequestNetworkRoutes(CreateAppInstanceGroupRequestNetworkRoutes &&) = default ;
    CreateAppInstanceGroupRequestNetworkRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestNetworkRoutes() = default ;
    CreateAppInstanceGroupRequestNetworkRoutes& operator=(const CreateAppInstanceGroupRequestNetworkRoutes &) = default ;
    CreateAppInstanceGroupRequestNetworkRoutes& operator=(CreateAppInstanceGroupRequestNetworkRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && return this->mode_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline CreateAppInstanceGroupRequestNetworkRoutes& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateAppInstanceGroupRequestNetworkRoutes& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The destination. The value is a CIDR block.
    std::shared_ptr<string> destination_ = nullptr;
    // The network egress mode.
    // 
    // Valid value:
    // 
    // *   Shared: accesses the network by using NAT Gateway.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
