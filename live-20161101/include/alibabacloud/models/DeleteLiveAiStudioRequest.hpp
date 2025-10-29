// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEAISTUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEAISTUDIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveAIStudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StudioId, studioId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StudioId, studioId_);
    };
    DeleteLiveAIStudioRequest() = default ;
    DeleteLiveAIStudioRequest(const DeleteLiveAIStudioRequest &) = default ;
    DeleteLiveAIStudioRequest(DeleteLiveAIStudioRequest &&) = default ;
    DeleteLiveAIStudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveAIStudioRequest() = default ;
    DeleteLiveAIStudioRequest& operator=(const DeleteLiveAIStudioRequest &) = default ;
    DeleteLiveAIStudioRequest& operator=(DeleteLiveAIStudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->studioId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveAIStudioRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveAIStudioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // studioId Field Functions 
    bool hasStudioId() const { return this->studioId_ != nullptr;};
    void deleteStudioId() { this->studioId_ = nullptr;};
    inline string studioId() const { DARABONBA_PTR_GET_DEFAULT(studioId_, "") };
    inline DeleteLiveAIStudioRequest& setStudioId(string studioId) { DARABONBA_PTR_SET_VALUE(studioId_, studioId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the template. You can obtain the ID from the response to the CreateLiveAIStudio operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> studioId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
