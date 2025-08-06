// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsConsoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsConsoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreprocessType, preprocessType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsConsoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreprocessType, preprocessType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitPreprocessJobsConsoleRequest() = default ;
    SubmitPreprocessJobsConsoleRequest(const SubmitPreprocessJobsConsoleRequest &) = default ;
    SubmitPreprocessJobsConsoleRequest(SubmitPreprocessJobsConsoleRequest &&) = default ;
    SubmitPreprocessJobsConsoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsConsoleRequest() = default ;
    SubmitPreprocessJobsConsoleRequest& operator=(const SubmitPreprocessJobsConsoleRequest &) = default ;
    SubmitPreprocessJobsConsoleRequest& operator=(SubmitPreprocessJobsConsoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->preprocessType_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->videoId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitPreprocessJobsConsoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preprocessType Field Functions 
    bool hasPreprocessType() const { return this->preprocessType_ != nullptr;};
    void deletePreprocessType() { this->preprocessType_ = nullptr;};
    inline string preprocessType() const { DARABONBA_PTR_GET_DEFAULT(preprocessType_, "") };
    inline SubmitPreprocessJobsConsoleRequest& setPreprocessType(string preprocessType) { DARABONBA_PTR_SET_VALUE(preprocessType_, preprocessType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitPreprocessJobsConsoleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitPreprocessJobsConsoleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitPreprocessJobsConsoleRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> preprocessType_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
