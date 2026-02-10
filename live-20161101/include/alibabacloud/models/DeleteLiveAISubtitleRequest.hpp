// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEAISUBTITLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEAISUBTITLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveAISubtitleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveAISubtitleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveAISubtitleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
    };
    DeleteLiveAISubtitleRequest() = default ;
    DeleteLiveAISubtitleRequest(const DeleteLiveAISubtitleRequest &) = default ;
    DeleteLiveAISubtitleRequest(DeleteLiveAISubtitleRequest &&) = default ;
    DeleteLiveAISubtitleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveAISubtitleRequest() = default ;
    DeleteLiveAISubtitleRequest& operator=(const DeleteLiveAISubtitleRequest &) = default ;
    DeleteLiveAISubtitleRequest& operator=(DeleteLiveAISubtitleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->subtitleId_ == nullptr && this->subtitleName_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveAISubtitleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveAISubtitleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subtitleId Field Functions 
    bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
    void deleteSubtitleId() { this->subtitleId_ = nullptr;};
    inline string getSubtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
    inline DeleteLiveAISubtitleRequest& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline DeleteLiveAISubtitleRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the subtitle template.
    // 
    // This parameter is required.
    shared_ptr<string> subtitleId_ {};
    // The name of the subtitle template. The name can contain only digits, letters, and hyphens (-). The name cannot start with a hyphen.
    shared_ptr<string> subtitleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
