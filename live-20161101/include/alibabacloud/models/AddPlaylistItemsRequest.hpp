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
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->ownerId_ == nullptr && this->programConfig_ == nullptr && this->programId_ == nullptr && this->programItems_ == nullptr && this->regionId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddPlaylistItemsRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddPlaylistItemsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programConfig Field Functions 
    bool hasProgramConfig() const { return this->programConfig_ != nullptr;};
    void deleteProgramConfig() { this->programConfig_ = nullptr;};
    inline string getProgramConfig() const { DARABONBA_PTR_GET_DEFAULT(programConfig_, "") };
    inline AddPlaylistItemsRequest& setProgramConfig(string programConfig) { DARABONBA_PTR_SET_VALUE(programConfig_, programConfig) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline AddPlaylistItemsRequest& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // programItems Field Functions 
    bool hasProgramItems() const { return this->programItems_ != nullptr;};
    void deleteProgramItems() { this->programItems_ = nullptr;};
    inline string getProgramItems() const { DARABONBA_PTR_GET_DEFAULT(programItems_, "") };
    inline AddPlaylistItemsRequest& setProgramItems(string programItems) { DARABONBA_PTR_SET_VALUE(programItems_, programItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPlaylistItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The production studio ID.
    // 
    // - If you created the production studio by calling the [CreateCaster operation](https://help.aliyun.com/document_detail/2848009.html), check the CasterId parameter value returned by the CreateCaster operation.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, navigate to **ApsaraVideo Live console** > **Production Studios** > **Cloud Production Studio** to view the production studio name.
    // 
    // > The production studio name in the production studio list on the Cloud Production Studio page of the ApsaraVideo Live console is the production studio ID.
    // 
    // 
    // The production studio must meet the following configurations:
    // - **NormType**: **3**. Create a lightweight carousel production studio in advance. You can call the **CreateCaster** operation to create a production studio.
    // - **CasterTemplate**: lp_noTranscode.
    // - **channelEnable**: 0.
    // - **programEffect**: 1.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The playlist item configuration. If this is the first time you add a playlist item, specify this parameter for initialization. For more information, see **ProgramConfig**.
    shared_ptr<string> programConfig_ {};
    // The playlist ID. If the production studio already has a playlist, you must specify the corresponding ProgramId. If no playlist has been created, you can leave this parameter empty, and the system performs automatic creation.
    shared_ptr<string> programId_ {};
    // The list of playlist item inputs. The value is a JSON string. For more information, see **InputProgramItem**.
    // 
    // This parameter is required.
    shared_ptr<string> programItems_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
