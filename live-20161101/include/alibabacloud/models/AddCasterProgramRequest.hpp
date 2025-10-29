// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCasterProgramRequestEpisode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Episode, episode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Episode, episode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddCasterProgramRequest() = default ;
    AddCasterProgramRequest(const AddCasterProgramRequest &) = default ;
    AddCasterProgramRequest(AddCasterProgramRequest &&) = default ;
    AddCasterProgramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramRequest() = default ;
    AddCasterProgramRequest& operator=(const AddCasterProgramRequest &) = default ;
    AddCasterProgramRequest& operator=(AddCasterProgramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->episode_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterProgramRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episode Field Functions 
    bool hasEpisode() const { return this->episode_ != nullptr;};
    void deleteEpisode() { this->episode_ = nullptr;};
    inline const vector<AddCasterProgramRequestEpisode> & episode() const { DARABONBA_PTR_GET_CONST(episode_, vector<AddCasterProgramRequestEpisode>) };
    inline vector<AddCasterProgramRequestEpisode> episode() { DARABONBA_PTR_GET(episode_, vector<AddCasterProgramRequestEpisode>) };
    inline AddCasterProgramRequest& setEpisode(const vector<AddCasterProgramRequestEpisode> & episode) { DARABONBA_PTR_SET_VALUE(episode_, episode) };
    inline AddCasterProgramRequest& setEpisode(vector<AddCasterProgramRequestEpisode> && episode) { DARABONBA_PTR_SET_RVALUE(episode_, episode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterProgramRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterProgramRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The information about episodes in the episode list.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddCasterProgramRequestEpisode>> episode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
