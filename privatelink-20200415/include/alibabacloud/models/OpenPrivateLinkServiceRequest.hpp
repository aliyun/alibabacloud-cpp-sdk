// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENPRIVATELINKSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENPRIVATELINKSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class OpenPrivateLinkServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenPrivateLinkServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenPrivateLinkServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    OpenPrivateLinkServiceRequest() = default ;
    OpenPrivateLinkServiceRequest(const OpenPrivateLinkServiceRequest &) = default ;
    OpenPrivateLinkServiceRequest(OpenPrivateLinkServiceRequest &&) = default ;
    OpenPrivateLinkServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenPrivateLinkServiceRequest() = default ;
    OpenPrivateLinkServiceRequest& operator=(const OpenPrivateLinkServiceRequest &) = default ;
    OpenPrivateLinkServiceRequest& operator=(OpenPrivateLinkServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline OpenPrivateLinkServiceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
