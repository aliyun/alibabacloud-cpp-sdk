// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeCdnRegionAndIspRequest() = default ;
    DescribeCdnRegionAndIspRequest(const DescribeCdnRegionAndIspRequest &) = default ;
    DescribeCdnRegionAndIspRequest(DescribeCdnRegionAndIspRequest &&) = default ;
    DescribeCdnRegionAndIspRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspRequest() = default ;
    DescribeCdnRegionAndIspRequest& operator=(const DescribeCdnRegionAndIspRequest &) = default ;
    DescribeCdnRegionAndIspRequest& operator=(DescribeCdnRegionAndIspRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->securityToken_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCdnRegionAndIspRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeCdnRegionAndIspRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
