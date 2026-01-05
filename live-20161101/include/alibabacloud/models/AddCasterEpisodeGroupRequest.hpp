// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_TO_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    AddCasterEpisodeGroupRequest() = default ;
    AddCasterEpisodeGroupRequest(const AddCasterEpisodeGroupRequest &) = default ;
    AddCasterEpisodeGroupRequest(AddCasterEpisodeGroupRequest &&) = default ;
    AddCasterEpisodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeGroupRequest() = default ;
    AddCasterEpisodeGroupRequest& operator=(const AddCasterEpisodeGroupRequest &) = default ;
    AddCasterEpisodeGroupRequest& operator=(AddCasterEpisodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Item : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Item& obj) { 
        DARABONBA_PTR_TO_JSON(ItemName, itemName_);
        DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Item& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
        DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
      };
      Item() = default ;
      Item(const Item &) = default ;
      Item(Item &&) = default ;
      Item(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Item() = default ;
      Item& operator=(const Item &) = default ;
      Item& operator=(Item &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemName_ == nullptr
        && this->vodUrl_ == nullptr; };
      // itemName Field Functions 
      bool hasItemName() const { return this->itemName_ != nullptr;};
      void deleteItemName() { this->itemName_ = nullptr;};
      inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
      inline Item& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      // vodUrl Field Functions 
      bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
      void deleteVodUrl() { this->vodUrl_ = nullptr;};
      inline string getVodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
      inline Item& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


    protected:
      // The name of the episode.
      shared_ptr<string> itemName_ {};
      // The URL of the VOD file.
      // 
      // If you query the input sources of the production studio by calling the [DescribeCasterVideoResources](https://help.aliyun.com/document_detail/2848023.html) operation, check the value of the response parameter VodUrl to obtain the URL.
      // 
      // >  This parameter takes effect only when the input source is a video file that is not from the media library.\\
      // The video file can be in the MP4, FLV, or TS format.
      shared_ptr<string> vodUrl_ {};
    };

    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->clientToken_ == nullptr && this->domainName_ == nullptr && this->item_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->repeatNum_ == nullptr && this->sideOutputUrl_ == nullptr && this->startTime_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline AddCasterEpisodeGroupRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddCasterEpisodeGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddCasterEpisodeGroupRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<AddCasterEpisodeGroupRequest::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<AddCasterEpisodeGroupRequest::Item>) };
    inline vector<AddCasterEpisodeGroupRequest::Item> getItem() { DARABONBA_PTR_GET(item_, vector<AddCasterEpisodeGroupRequest::Item>) };
    inline AddCasterEpisodeGroupRequest& setItem(const vector<AddCasterEpisodeGroupRequest::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline AddCasterEpisodeGroupRequest& setItem(vector<AddCasterEpisodeGroupRequest::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterEpisodeGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterEpisodeGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNum Field Functions 
    bool hasRepeatNum() const { return this->repeatNum_ != nullptr;};
    void deleteRepeatNum() { this->repeatNum_ = nullptr;};
    inline int32_t getRepeatNum() const { DARABONBA_PTR_GET_DEFAULT(repeatNum_, 0) };
    inline AddCasterEpisodeGroupRequest& setRepeatNum(int32_t repeatNum) { DARABONBA_PTR_SET_VALUE(repeatNum_, repeatNum) };


    // sideOutputUrl Field Functions 
    bool hasSideOutputUrl() const { return this->sideOutputUrl_ != nullptr;};
    void deleteSideOutputUrl() { this->sideOutputUrl_ = nullptr;};
    inline string getSideOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrl_, "") };
    inline AddCasterEpisodeGroupRequest& setSideOutputUrl(string sideOutputUrl) { DARABONBA_PTR_SET_VALUE(sideOutputUrl_, sideOutputUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddCasterEpisodeGroupRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The callback URL.
    // 
    // If you query the configurations of the production studio by calling the [DescribeCasterConfig](https://help.aliyun.com/document_detail/2848011.html) operation, check the value of the response parameter CallbackUrl to obtain the URL.
    // 
    // This parameter is required.
    shared_ptr<string> callbackUrl_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The list of episodes.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCasterEpisodeGroupRequest::Item>> item_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The number of times the episode list repeats after the first playback is complete. Valid values:
    // 
    // *   **0**: indicates that the episode list is played only once.
    // *   **-1**: indicates that the episode list is played in loop mode.
    // 
    // This parameter is required.
    shared_ptr<int32_t> repeatNum_ {};
    // The custom standby URL.
    // 
    // If this parameter is empty, the ingest address corresponding to the output address automatically generated by Alibaba Cloud will be used by default.
    // 
    // This parameter is required.
    shared_ptr<string> sideOutputUrl_ {};
    // The time when the episode list starts to play. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
