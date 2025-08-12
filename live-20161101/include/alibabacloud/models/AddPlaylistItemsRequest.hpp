// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPLAYLISTITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddPlaylistItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPlaylistItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProgramConfig, programConfig_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(ProgramItems, programItems_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPlaylistItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProgramConfig, programConfig_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(ProgramItems, programItems_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddPlaylistItemsRequest() = default ;
    AddPlaylistItemsRequest(const AddPlaylistItemsRequest &) = default ;
    AddPlaylistItemsRequest(AddPlaylistItemsRequest &&) = default ;
    AddPlaylistItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPlaylistItemsRequest() = default ;
    AddPlaylistItemsRequest& operator=(const AddPlaylistItemsRequest &) = default ;
    AddPlaylistItemsRequest& operator=(AddPlaylistItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->ownerId_ != nullptr && this->programConfig_ != nullptr && this->programId_ != nullptr && this->programItems_ != nullptr && this->regionId_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddPlaylistItemsRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddPlaylistItemsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programConfig Field Functions 
    bool hasProgramConfig() const { return this->programConfig_ != nullptr;};
    void deleteProgramConfig() { this->programConfig_ = nullptr;};
    inline string programConfig() const { DARABONBA_PTR_GET_DEFAULT(programConfig_, "") };
    inline AddPlaylistItemsRequest& setProgramConfig(string programConfig) { DARABONBA_PTR_SET_VALUE(programConfig_, programConfig) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline AddPlaylistItemsRequest& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // programItems Field Functions 
    bool hasProgramItems() const { return this->programItems_ != nullptr;};
    void deleteProgramItems() { this->programItems_ = nullptr;};
    inline string programItems() const { DARABONBA_PTR_GET_DEFAULT(programItems_, "") };
    inline AddPlaylistItemsRequest& setProgramItems(string programItems) { DARABONBA_PTR_SET_VALUE(programItems_, programItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPlaylistItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // The production studio must use the following configurations:
    // 
    // *   **NormType**: 3****. You need to call the **CreateCaster** operation to create a production studio for lightweight carousel playback in advance.
    // *   **CasterTemplate**: lp_noTranscode.
    // *   **channelEnable**: 0.
    // *   **programEffect**: 1.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The configurations of the episode list. If the episode list is added to the production studio for the first time, specify this parameter to pass in the initial configurations. For more information, see the **ProgramConfig** section of this topic.
    std::shared_ptr<string> programConfig_ = nullptr;
    // The ID of the episode list. If you do not specify this parameter, an episode list is created by default.
    std::shared_ptr<string> programId_ = nullptr;
    // The episodes that you want to add to the production studio. The value is a JSON string. For more information, see the **InputProgramItem** section of this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> programItems_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
