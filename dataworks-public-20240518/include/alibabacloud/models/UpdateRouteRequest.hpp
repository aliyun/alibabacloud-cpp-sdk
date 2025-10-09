// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateRouteRequest() = default ;
    UpdateRouteRequest(const UpdateRouteRequest &) = default ;
    UpdateRouteRequest(UpdateRouteRequest &&) = default ;
    UpdateRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteRequest() = default ;
    UpdateRouteRequest& operator=(const UpdateRouteRequest &) = default ;
    UpdateRouteRequest& operator=(UpdateRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidr_ != nullptr
        && this->id_ != nullptr; };
    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string destinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline UpdateRouteRequest& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateRouteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The destination CIDR block of the route that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationCidr_ = nullptr;
    // The route ID of the network resource.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
