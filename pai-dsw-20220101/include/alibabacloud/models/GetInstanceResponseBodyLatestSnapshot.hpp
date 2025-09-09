// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYLATESTSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYLATESTSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBodyLatestSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyLatestSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RepositoryUrl, repositoryUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyLatestSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RepositoryUrl, repositoryUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceResponseBodyLatestSnapshot() = default ;
    GetInstanceResponseBodyLatestSnapshot(const GetInstanceResponseBodyLatestSnapshot &) = default ;
    GetInstanceResponseBodyLatestSnapshot(GetInstanceResponseBodyLatestSnapshot &&) = default ;
    GetInstanceResponseBodyLatestSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyLatestSnapshot() = default ;
    GetInstanceResponseBodyLatestSnapshot& operator=(const GetInstanceResponseBodyLatestSnapshot &) = default ;
    GetInstanceResponseBodyLatestSnapshot& operator=(GetInstanceResponseBodyLatestSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreateTime_ != nullptr
        && this->gmtModifiedTime_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->imageUrl_ != nullptr && this->reasonCode_ != nullptr
        && this->reasonMessage_ != nullptr && this->repositoryUrl_ != nullptr && this->status_ != nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // repositoryUrl Field Functions 
    bool hasRepositoryUrl() const { return this->repositoryUrl_ != nullptr;};
    void deleteRepositoryUrl() { this->repositoryUrl_ = nullptr;};
    inline string repositoryUrl() const { DARABONBA_PTR_GET_DEFAULT(repositoryUrl_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setRepositoryUrl(string repositoryUrl) { DARABONBA_PTR_SET_VALUE(repositoryUrl_, repositoryUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyLatestSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the snapshot was created.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the snapshot was modified.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The image URL.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The error code of the instance snapshot.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The error message of the instance snapshot.
    std::shared_ptr<string> reasonMessage_ = nullptr;
    // The image repository URL.
    std::shared_ptr<string> repositoryUrl_ = nullptr;
    // The instance snapshot status.
    // 
    // Valid values:
    // 
    // *   Committing
    // *   Pushing
    // *   Failed
    // *   Saved
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
