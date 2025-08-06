// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVODDEFAULTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKVODDEFAULTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CheckVodDefaultRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVodDefaultRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVodDefaultRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    CheckVodDefaultRoleRequest() = default ;
    CheckVodDefaultRoleRequest(const CheckVodDefaultRoleRequest &) = default ;
    CheckVodDefaultRoleRequest(CheckVodDefaultRoleRequest &&) = default ;
    CheckVodDefaultRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVodDefaultRoleRequest() = default ;
    CheckVodDefaultRoleRequest& operator=(const CheckVodDefaultRoleRequest &) = default ;
    CheckVodDefaultRoleRequest& operator=(CheckVodDefaultRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->resourceRealOwnerId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CheckVodDefaultRoleRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline CheckVodDefaultRoleRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


  protected:
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
