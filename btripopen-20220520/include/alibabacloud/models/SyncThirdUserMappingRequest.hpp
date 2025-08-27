// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCTHIRDUSERMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCTHIRDUSERMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class SyncThirdUserMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncThirdUserMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_channel_type, thirdChannelType_);
      DARABONBA_PTR_TO_JSON(third_user_id, thirdUserId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncThirdUserMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_channel_type, thirdChannelType_);
      DARABONBA_PTR_FROM_JSON(third_user_id, thirdUserId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    SyncThirdUserMappingRequest() = default ;
    SyncThirdUserMappingRequest(const SyncThirdUserMappingRequest &) = default ;
    SyncThirdUserMappingRequest(SyncThirdUserMappingRequest &&) = default ;
    SyncThirdUserMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncThirdUserMappingRequest() = default ;
    SyncThirdUserMappingRequest& operator=(const SyncThirdUserMappingRequest &) = default ;
    SyncThirdUserMappingRequest& operator=(SyncThirdUserMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->thirdChannelType_ != nullptr && this->thirdUserId_ != nullptr && this->userId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SyncThirdUserMappingRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdChannelType Field Functions 
    bool hasThirdChannelType() const { return this->thirdChannelType_ != nullptr;};
    void deleteThirdChannelType() { this->thirdChannelType_ = nullptr;};
    inline string thirdChannelType() const { DARABONBA_PTR_GET_DEFAULT(thirdChannelType_, "") };
    inline SyncThirdUserMappingRequest& setThirdChannelType(string thirdChannelType) { DARABONBA_PTR_SET_VALUE(thirdChannelType_, thirdChannelType) };


    // thirdUserId Field Functions 
    bool hasThirdUserId() const { return this->thirdUserId_ != nullptr;};
    void deleteThirdUserId() { this->thirdUserId_ = nullptr;};
    inline string thirdUserId() const { DARABONBA_PTR_GET_DEFAULT(thirdUserId_, "") };
    inline SyncThirdUserMappingRequest& setThirdUserId(string thirdUserId) { DARABONBA_PTR_SET_VALUE(thirdUserId_, thirdUserId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SyncThirdUserMappingRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdChannelType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
