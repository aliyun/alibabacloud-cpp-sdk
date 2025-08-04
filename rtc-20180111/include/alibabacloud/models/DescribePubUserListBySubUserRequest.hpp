// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribePubUserListBySubUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePubUserListBySubUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePubUserListBySubUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    DescribePubUserListBySubUserRequest() = default ;
    DescribePubUserListBySubUserRequest(const DescribePubUserListBySubUserRequest &) = default ;
    DescribePubUserListBySubUserRequest(DescribePubUserListBySubUserRequest &&) = default ;
    DescribePubUserListBySubUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePubUserListBySubUserRequest() = default ;
    DescribePubUserListBySubUserRequest& operator=(const DescribePubUserListBySubUserRequest &) = default ;
    DescribePubUserListBySubUserRequest& operator=(DescribePubUserListBySubUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->createdTs_ != nullptr && this->destroyedTs_ != nullptr && this->subUserId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribePubUserListBySubUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribePubUserListBySubUserRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribePubUserListBySubUserRequest& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribePubUserListBySubUserRequest& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline string subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
    inline DescribePubUserListBySubUserRequest& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // APP ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
