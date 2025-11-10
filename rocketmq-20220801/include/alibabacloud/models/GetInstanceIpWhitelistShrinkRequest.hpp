// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceIpWhitelistShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIpWhitelistShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelistsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIpWhitelistShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelistsShrink_);
    };
    GetInstanceIpWhitelistShrinkRequest() = default ;
    GetInstanceIpWhitelistShrinkRequest(const GetInstanceIpWhitelistShrinkRequest &) = default ;
    GetInstanceIpWhitelistShrinkRequest(GetInstanceIpWhitelistShrinkRequest &&) = default ;
    GetInstanceIpWhitelistShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIpWhitelistShrinkRequest() = default ;
    GetInstanceIpWhitelistShrinkRequest& operator=(const GetInstanceIpWhitelistShrinkRequest &) = default ;
    GetInstanceIpWhitelistShrinkRequest& operator=(GetInstanceIpWhitelistShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipWhitelistsShrink_ == nullptr; };
    // ipWhitelistsShrink Field Functions 
    bool hasIpWhitelistsShrink() const { return this->ipWhitelistsShrink_ != nullptr;};
    void deleteIpWhitelistsShrink() { this->ipWhitelistsShrink_ = nullptr;};
    inline string ipWhitelistsShrink() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelistsShrink_, "") };
    inline GetInstanceIpWhitelistShrinkRequest& setIpWhitelistsShrink(string ipWhitelistsShrink) { DARABONBA_PTR_SET_VALUE(ipWhitelistsShrink_, ipWhitelistsShrink) };


  protected:
    // The  filter IP address whitelists.
    std::shared_ptr<string> ipWhitelistsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
