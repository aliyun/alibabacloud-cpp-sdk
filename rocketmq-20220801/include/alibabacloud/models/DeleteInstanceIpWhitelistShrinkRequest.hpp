// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEIPWHITELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEIPWHITELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DeleteInstanceIpWhitelistShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceIpWhitelistShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(ipWhitelists, ipWhitelistsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceIpWhitelistShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelists, ipWhitelistsShrink_);
    };
    DeleteInstanceIpWhitelistShrinkRequest() = default ;
    DeleteInstanceIpWhitelistShrinkRequest(const DeleteInstanceIpWhitelistShrinkRequest &) = default ;
    DeleteInstanceIpWhitelistShrinkRequest(DeleteInstanceIpWhitelistShrinkRequest &&) = default ;
    DeleteInstanceIpWhitelistShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceIpWhitelistShrinkRequest() = default ;
    DeleteInstanceIpWhitelistShrinkRequest& operator=(const DeleteInstanceIpWhitelistShrinkRequest &) = default ;
    DeleteInstanceIpWhitelistShrinkRequest& operator=(DeleteInstanceIpWhitelistShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipWhitelist_ == nullptr
        && return this->ipWhitelistsShrink_ == nullptr; };
    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline DeleteInstanceIpWhitelistShrinkRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // ipWhitelistsShrink Field Functions 
    bool hasIpWhitelistsShrink() const { return this->ipWhitelistsShrink_ != nullptr;};
    void deleteIpWhitelistsShrink() { this->ipWhitelistsShrink_ = nullptr;};
    inline string ipWhitelistsShrink() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelistsShrink_, "") };
    inline DeleteInstanceIpWhitelistShrinkRequest& setIpWhitelistsShrink(string ipWhitelistsShrink) { DARABONBA_PTR_SET_VALUE(ipWhitelistsShrink_, ipWhitelistsShrink) };


  protected:
    // The IP address whitelist.
    std::shared_ptr<string> ipWhitelist_ = nullptr;
    // The IP address whitelist.
    std::shared_ptr<string> ipWhitelistsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
