// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeGroupContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeGroupContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeGroupContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddCasterEpisodeGroupContentRequest() = default ;
    AddCasterEpisodeGroupContentRequest(const AddCasterEpisodeGroupContentRequest &) = default ;
    AddCasterEpisodeGroupContentRequest(AddCasterEpisodeGroupContentRequest &&) = default ;
    AddCasterEpisodeGroupContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeGroupContentRequest() = default ;
    AddCasterEpisodeGroupContentRequest& operator=(const AddCasterEpisodeGroupContentRequest &) = default ;
    AddCasterEpisodeGroupContentRequest& operator=(AddCasterEpisodeGroupContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->content_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddCasterEpisodeGroupContentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AddCasterEpisodeGroupContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterEpisodeGroupContentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterEpisodeGroupContentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client-generated token that is used to ensure the idempotence of the request.
    // 
    // > The client generates this value. Make sure that the value is unique among different requests. The value can be up to 64 ASCII characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The properties of the episode in the production studio. This parameter is a JSON string. The parameter names are in upper camel case. The properties are described as follows:
    // 
    // - **CallbackUrl**: The webhook address.
    // 
    // - **SideOutputUrl**: The custom bypass output URL.
    // 
    // - **RepeatNum**: The number of times to loop the episode. A value of 0 means the episode does not loop. A value of -1 means the episode loops indefinitely.
    // 
    // - **StartTime**: The start time in UTC. The format is *yyyy-MM-dd*T*HH:mm:ss*Z.
    // 
    // - **DomainName**: The domain name.
    // 
    // - **Items**
    // 
    //   : The list of items in the episode.
    // 
    //   - **ItemName**: The item name.
    // 
    //   - **VodUrl**: The URL of the video-on-demand (VOD) file. This parameter is required only when the resource is a video file that has not been imported to the Material Library. The MP4, FLV, and TS formats are supported.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
