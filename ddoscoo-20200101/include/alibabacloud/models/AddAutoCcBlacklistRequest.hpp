// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTOCCBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTOCCBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class AddAutoCcBlacklistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAutoCcBlacklistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Blacklist, blacklist_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAutoCcBlacklistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Blacklist, blacklist_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddAutoCcBlacklistRequest() = default ;
    AddAutoCcBlacklistRequest(const AddAutoCcBlacklistRequest &) = default ;
    AddAutoCcBlacklistRequest(AddAutoCcBlacklistRequest &&) = default ;
    AddAutoCcBlacklistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAutoCcBlacklistRequest() = default ;
    AddAutoCcBlacklistRequest& operator=(const AddAutoCcBlacklistRequest &) = default ;
    AddAutoCcBlacklistRequest& operator=(AddAutoCcBlacklistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blacklist_ == nullptr
        && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr; };
    // blacklist Field Functions 
    bool hasBlacklist() const { return this->blacklist_ != nullptr;};
    void deleteBlacklist() { this->blacklist_ = nullptr;};
    inline string blacklist() const { DARABONBA_PTR_GET_DEFAULT(blacklist_, "") };
    inline AddAutoCcBlacklistRequest& setBlacklist(string blacklist) { DARABONBA_PTR_SET_VALUE(blacklist_, blacklist) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline AddAutoCcBlacklistRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddAutoCcBlacklistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The IP addresses that you want to manage. This parameter is a JSON string. The string contains the following field:
    // 
    // *   **src**: the IP address. This field is required and must be of the STRING type.
    // 
    // >  You can manually add up to 2,000 IP addresses to the IP address blacklist. Separate multiple IP addresses with spaces or line breaks.
    // 
    // This parameter is required.
    std::shared_ptr<string> blacklist_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> expireTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
