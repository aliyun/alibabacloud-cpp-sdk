// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCREENSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCREENSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateScreenshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScreenshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(ScreenshotId, screenshotId_);
      DARABONBA_PTR_TO_JSON(SkipCheckPolicyConfig, skipCheckPolicyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScreenshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIdList, androidInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(ScreenshotId, screenshotId_);
      DARABONBA_PTR_FROM_JSON(SkipCheckPolicyConfig, skipCheckPolicyConfig_);
    };
    CreateScreenshotRequest() = default ;
    CreateScreenshotRequest(const CreateScreenshotRequest &) = default ;
    CreateScreenshotRequest(CreateScreenshotRequest &&) = default ;
    CreateScreenshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScreenshotRequest() = default ;
    CreateScreenshotRequest& operator=(const CreateScreenshotRequest &) = default ;
    CreateScreenshotRequest& operator=(CreateScreenshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIdList_ == nullptr
        && this->ossBucketName_ == nullptr && this->screenshotId_ == nullptr && this->skipCheckPolicyConfig_ == nullptr; };
    // androidInstanceIdList Field Functions 
    bool hasAndroidInstanceIdList() const { return this->androidInstanceIdList_ != nullptr;};
    void deleteAndroidInstanceIdList() { this->androidInstanceIdList_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIdList() const { DARABONBA_PTR_GET_CONST(androidInstanceIdList_, vector<string>) };
    inline vector<string> getAndroidInstanceIdList() { DARABONBA_PTR_GET(androidInstanceIdList_, vector<string>) };
    inline CreateScreenshotRequest& setAndroidInstanceIdList(const vector<string> & androidInstanceIdList) { DARABONBA_PTR_SET_VALUE(androidInstanceIdList_, androidInstanceIdList) };
    inline CreateScreenshotRequest& setAndroidInstanceIdList(vector<string> && androidInstanceIdList) { DARABONBA_PTR_SET_RVALUE(androidInstanceIdList_, androidInstanceIdList) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateScreenshotRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // screenshotId Field Functions 
    bool hasScreenshotId() const { return this->screenshotId_ != nullptr;};
    void deleteScreenshotId() { this->screenshotId_ = nullptr;};
    inline string getScreenshotId() const { DARABONBA_PTR_GET_DEFAULT(screenshotId_, "") };
    inline CreateScreenshotRequest& setScreenshotId(string screenshotId) { DARABONBA_PTR_SET_VALUE(screenshotId_, screenshotId) };


    // skipCheckPolicyConfig Field Functions 
    bool hasSkipCheckPolicyConfig() const { return this->skipCheckPolicyConfig_ != nullptr;};
    void deleteSkipCheckPolicyConfig() { this->skipCheckPolicyConfig_ = nullptr;};
    inline string getSkipCheckPolicyConfig() const { DARABONBA_PTR_GET_DEFAULT(skipCheckPolicyConfig_, "") };
    inline CreateScreenshotRequest& setSkipCheckPolicyConfig(string skipCheckPolicyConfig) { DARABONBA_PTR_SET_VALUE(skipCheckPolicyConfig_, skipCheckPolicyConfig) };


  protected:
    // The IDs of the cloud phone instances. You can create multiple snapshots simultaneously.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> androidInstanceIdList_ {};
    // The name of the OSS bucket. The name must start with "cloudphone-saved-bucket-". The OSS bucket and the cloud phone instance must be in the same region. If you leave this parameter empty, the system will create a default OSS bucket named “cloudphone-saved-bucket-{Region of the cloud phone instance}-{AliUid}.”
    shared_ptr<string> ossBucketName_ {};
    shared_ptr<string> screenshotId_ {};
    // Specifies whether to bypass the snapshot policy control. Default value: false.
    shared_ptr<string> skipCheckPolicyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
