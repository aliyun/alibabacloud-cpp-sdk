// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLAYLISTITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLAYLISTITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeletePlaylistItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePlaylistItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(ProgramItemIds, programItemIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePlaylistItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(ProgramItemIds, programItemIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePlaylistItemsRequest() = default ;
    DeletePlaylistItemsRequest(const DeletePlaylistItemsRequest &) = default ;
    DeletePlaylistItemsRequest(DeletePlaylistItemsRequest &&) = default ;
    DeletePlaylistItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePlaylistItemsRequest() = default ;
    DeletePlaylistItemsRequest& operator=(const DeletePlaylistItemsRequest &) = default ;
    DeletePlaylistItemsRequest& operator=(DeletePlaylistItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->programId_ == nullptr && return this->programItemIds_ == nullptr && return this->regionId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeletePlaylistItemsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline DeletePlaylistItemsRequest& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // programItemIds Field Functions 
    bool hasProgramItemIds() const { return this->programItemIds_ != nullptr;};
    void deleteProgramItemIds() { this->programItemIds_ = nullptr;};
    inline string programItemIds() const { DARABONBA_PTR_GET_DEFAULT(programItemIds_, "") };
    inline DeletePlaylistItemsRequest& setProgramItemIds(string programItemIds) { DARABONBA_PTR_SET_VALUE(programItemIds_, programItemIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePlaylistItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the episode list. If the episode list was created by calling the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation, check the value of the response parameter ProgramId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> programId_ = nullptr;
    // The IDs of the episodes that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<string> programItemIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
