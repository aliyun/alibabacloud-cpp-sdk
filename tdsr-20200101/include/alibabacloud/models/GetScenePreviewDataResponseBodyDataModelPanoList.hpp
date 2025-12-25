// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODELPANOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATAMODELPANOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataModelPanoListPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataModelPanoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataModelPanoList& obj) { 
      DARABONBA_PTR_TO_JSON(CurRoomPicList, curRoomPicList_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FloorIdx, floorIdx_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MainImage, mainImage_);
      DARABONBA_PTR_TO_JSON(Neighbours, neighbours_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(RawName, rawName_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RoomIdx, roomIdx_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VirtualId, virtualId_);
      DARABONBA_PTR_TO_JSON(VirtualName, virtualName_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataModelPanoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CurRoomPicList, curRoomPicList_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FloorIdx, floorIdx_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MainImage, mainImage_);
      DARABONBA_PTR_FROM_JSON(Neighbours, neighbours_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(RawName, rawName_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RoomIdx, roomIdx_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VirtualId, virtualId_);
      DARABONBA_PTR_FROM_JSON(VirtualName, virtualName_);
    };
    GetScenePreviewDataResponseBodyDataModelPanoList() = default ;
    GetScenePreviewDataResponseBodyDataModelPanoList(const GetScenePreviewDataResponseBodyDataModelPanoList &) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoList(GetScenePreviewDataResponseBodyDataModelPanoList &&) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataModelPanoList() = default ;
    GetScenePreviewDataResponseBodyDataModelPanoList& operator=(const GetScenePreviewDataResponseBodyDataModelPanoList &) = default ;
    GetScenePreviewDataResponseBodyDataModelPanoList& operator=(GetScenePreviewDataResponseBodyDataModelPanoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->curRoomPicList_ == nullptr
        && return this->enabled_ == nullptr && return this->floorIdx_ == nullptr && return this->id_ == nullptr && return this->mainImage_ == nullptr && return this->neighbours_ == nullptr
        && return this->position_ == nullptr && return this->rawName_ == nullptr && return this->resource_ == nullptr && return this->roomIdx_ == nullptr && return this->subSceneId_ == nullptr
        && return this->token_ == nullptr && return this->virtualId_ == nullptr && return this->virtualName_ == nullptr; };
    // curRoomPicList Field Functions 
    bool hasCurRoomPicList() const { return this->curRoomPicList_ != nullptr;};
    void deleteCurRoomPicList() { this->curRoomPicList_ = nullptr;};
    inline const vector<string> & curRoomPicList() const { DARABONBA_PTR_GET_CONST(curRoomPicList_, vector<string>) };
    inline vector<string> curRoomPicList() { DARABONBA_PTR_GET(curRoomPicList_, vector<string>) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setCurRoomPicList(const vector<string> & curRoomPicList) { DARABONBA_PTR_SET_VALUE(curRoomPicList_, curRoomPicList) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setCurRoomPicList(vector<string> && curRoomPicList) { DARABONBA_PTR_SET_RVALUE(curRoomPicList_, curRoomPicList) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // floorIdx Field Functions 
    bool hasFloorIdx() const { return this->floorIdx_ != nullptr;};
    void deleteFloorIdx() { this->floorIdx_ = nullptr;};
    inline string floorIdx() const { DARABONBA_PTR_GET_DEFAULT(floorIdx_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setFloorIdx(string floorIdx) { DARABONBA_PTR_SET_VALUE(floorIdx_, floorIdx) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mainImage Field Functions 
    bool hasMainImage() const { return this->mainImage_ != nullptr;};
    void deleteMainImage() { this->mainImage_ = nullptr;};
    inline bool mainImage() const { DARABONBA_PTR_GET_DEFAULT(mainImage_, false) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setMainImage(bool mainImage) { DARABONBA_PTR_SET_VALUE(mainImage_, mainImage) };


    // neighbours Field Functions 
    bool hasNeighbours() const { return this->neighbours_ != nullptr;};
    void deleteNeighbours() { this->neighbours_ = nullptr;};
    inline const vector<string> & neighbours() const { DARABONBA_PTR_GET_CONST(neighbours_, vector<string>) };
    inline vector<string> neighbours() { DARABONBA_PTR_GET(neighbours_, vector<string>) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setNeighbours(const vector<string> & neighbours) { DARABONBA_PTR_SET_VALUE(neighbours_, neighbours) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setNeighbours(vector<string> && neighbours) { DARABONBA_PTR_SET_RVALUE(neighbours_, neighbours) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition & position() const { DARABONBA_PTR_GET_CONST(position_, Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition) };
    inline Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition position() { DARABONBA_PTR_GET(position_, Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setPosition(const Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setPosition(Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


    // rawName Field Functions 
    bool hasRawName() const { return this->rawName_ != nullptr;};
    void deleteRawName() { this->rawName_ = nullptr;};
    inline string rawName() const { DARABONBA_PTR_GET_DEFAULT(rawName_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setRawName(string rawName) { DARABONBA_PTR_SET_VALUE(rawName_, rawName) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // roomIdx Field Functions 
    bool hasRoomIdx() const { return this->roomIdx_ != nullptr;};
    void deleteRoomIdx() { this->roomIdx_ = nullptr;};
    inline string roomIdx() const { DARABONBA_PTR_GET_DEFAULT(roomIdx_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setRoomIdx(string roomIdx) { DARABONBA_PTR_SET_VALUE(roomIdx_, roomIdx) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // virtualId Field Functions 
    bool hasVirtualId() const { return this->virtualId_ != nullptr;};
    void deleteVirtualId() { this->virtualId_ = nullptr;};
    inline string virtualId() const { DARABONBA_PTR_GET_DEFAULT(virtualId_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setVirtualId(string virtualId) { DARABONBA_PTR_SET_VALUE(virtualId_, virtualId) };


    // virtualName Field Functions 
    bool hasVirtualName() const { return this->virtualName_ != nullptr;};
    void deleteVirtualName() { this->virtualName_ = nullptr;};
    inline string virtualName() const { DARABONBA_PTR_GET_DEFAULT(virtualName_, "") };
    inline GetScenePreviewDataResponseBodyDataModelPanoList& setVirtualName(string virtualName) { DARABONBA_PTR_SET_VALUE(virtualName_, virtualName) };


  protected:
    std::shared_ptr<vector<string>> curRoomPicList_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> floorIdx_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> mainImage_ = nullptr;
    std::shared_ptr<vector<string>> neighbours_ = nullptr;
    std::shared_ptr<Models::GetScenePreviewDataResponseBodyDataModelPanoListPosition> position_ = nullptr;
    std::shared_ptr<string> rawName_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> roomIdx_ = nullptr;
    std::shared_ptr<string> subSceneId_ = nullptr;
    // token
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> virtualId_ = nullptr;
    std::shared_ptr<string> virtualName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
