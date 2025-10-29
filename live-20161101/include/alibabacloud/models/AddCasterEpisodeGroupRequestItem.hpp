// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPREQUESTITEM_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPREQUESTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeGroupRequestItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeGroupRequestItem& obj) { 
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeGroupRequestItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
    };
    AddCasterEpisodeGroupRequestItem() = default ;
    AddCasterEpisodeGroupRequestItem(const AddCasterEpisodeGroupRequestItem &) = default ;
    AddCasterEpisodeGroupRequestItem(AddCasterEpisodeGroupRequestItem &&) = default ;
    AddCasterEpisodeGroupRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeGroupRequestItem() = default ;
    AddCasterEpisodeGroupRequestItem& operator=(const AddCasterEpisodeGroupRequestItem &) = default ;
    AddCasterEpisodeGroupRequestItem& operator=(AddCasterEpisodeGroupRequestItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemName_ == nullptr
        && return this->vodUrl_ == nullptr; };
    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline AddCasterEpisodeGroupRequestItem& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // vodUrl Field Functions 
    bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
    void deleteVodUrl() { this->vodUrl_ = nullptr;};
    inline string vodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
    inline AddCasterEpisodeGroupRequestItem& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


  protected:
    // The name of the episode.
    std::shared_ptr<string> itemName_ = nullptr;
    // The URL of the VOD file.
    // 
    // If you query the input sources of the production studio by calling the [DescribeCasterVideoResources](https://help.aliyun.com/document_detail/2848023.html) operation, check the value of the response parameter VodUrl to obtain the URL.
    // 
    // >  This parameter takes effect only when the input source is a video file that is not from the media library.\\
    // The video file can be in the MP4, FLV, or TS format.
    std::shared_ptr<string> vodUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
