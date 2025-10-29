// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESHOWFROMSHOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESHOWFROMSHOWLISTREQUEST_HPP_
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
  class RemoveShowFromShowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveShowFromShowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(isBatchMode, isBatchMode_);
      DARABONBA_PTR_TO_JSON(showIdList, showIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveShowFromShowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(isBatchMode, isBatchMode_);
      DARABONBA_PTR_FROM_JSON(showIdList, showIdList_);
    };
    RemoveShowFromShowListRequest() = default ;
    RemoveShowFromShowListRequest(const RemoveShowFromShowListRequest &) = default ;
    RemoveShowFromShowListRequest(RemoveShowFromShowListRequest &&) = default ;
    RemoveShowFromShowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveShowFromShowListRequest() = default ;
    RemoveShowFromShowListRequest& operator=(const RemoveShowFromShowListRequest &) = default ;
    RemoveShowFromShowListRequest& operator=(RemoveShowFromShowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->showId_ == nullptr && return this->isBatchMode_ == nullptr && return this->showIdList_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline RemoveShowFromShowListRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveShowFromShowListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveShowFromShowListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string showId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline RemoveShowFromShowListRequest& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // isBatchMode Field Functions 
    bool hasIsBatchMode() const { return this->isBatchMode_ != nullptr;};
    void deleteIsBatchMode() { this->isBatchMode_ = nullptr;};
    inline bool isBatchMode() const { DARABONBA_PTR_GET_DEFAULT(isBatchMode_, false) };
    inline RemoveShowFromShowListRequest& setIsBatchMode(bool isBatchMode) { DARABONBA_PTR_SET_VALUE(isBatchMode_, isBatchMode) };


    // showIdList Field Functions 
    bool hasShowIdList() const { return this->showIdList_ != nullptr;};
    void deleteShowIdList() { this->showIdList_ = nullptr;};
    inline const vector<string> & showIdList() const { DARABONBA_PTR_GET_CONST(showIdList_, vector<string>) };
    inline vector<string> showIdList() { DARABONBA_PTR_GET(showIdList_, vector<string>) };
    inline RemoveShowFromShowListRequest& setShowIdList(const vector<string> & showIdList) { DARABONBA_PTR_SET_VALUE(showIdList_, showIdList) };
    inline RemoveShowFromShowListRequest& setShowIdList(vector<string> && showIdList) { DARABONBA_PTR_SET_RVALUE(showIdList_, showIdList) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the episode.
    // 
    // >  You can obtain the ID by checking the value of the response parameter ShowId of the [AddShowIntoShowList](https://help.aliyun.com/document_detail/370861.html) operation.
    std::shared_ptr<string> showId_ = nullptr;
    // Specifies whether to remove multiple episodes at a time. Valid values:
    // 
    // *   true: removes multiple episodes at a time.
    // *   false: removes a single episode.
    // 
    // >  If you do not configure this parameter or this parameter is left empty, a single episode is to be removed.
    std::shared_ptr<bool> isBatchMode_ = nullptr;
    // The IDs of episodes that you want to remove.
    std::shared_ptr<vector<string>> showIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
