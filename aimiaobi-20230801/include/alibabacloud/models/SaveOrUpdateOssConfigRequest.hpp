// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEORUPDATEOSSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEORUPDATEOSSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveOrUpdateOssConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOrUpdateOssConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOrUpdateOssConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SaveOrUpdateOssConfigRequest() = default ;
    SaveOrUpdateOssConfigRequest(const SaveOrUpdateOssConfigRequest &) = default ;
    SaveOrUpdateOssConfigRequest(SaveOrUpdateOssConfigRequest &&) = default ;
    SaveOrUpdateOssConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOrUpdateOssConfigRequest() = default ;
    SaveOrUpdateOssConfigRequest& operator=(const SaveOrUpdateOssConfigRequest &) = default ;
    SaveOrUpdateOssConfigRequest& operator=(SaveOrUpdateOssConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->endPoint_ == nullptr && this->workspaceId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline SaveOrUpdateOssConfigRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline SaveOrUpdateOssConfigRequest& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SaveOrUpdateOssConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> bucketName_ {};
    shared_ptr<string> endPoint_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
