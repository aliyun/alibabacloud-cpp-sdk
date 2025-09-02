// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYFOLLOWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYFOLLOWERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteQualityFollowerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualityFollowerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FollowerId, followerId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualityFollowerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FollowerId, followerId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    DeleteQualityFollowerRequest() = default ;
    DeleteQualityFollowerRequest(const DeleteQualityFollowerRequest &) = default ;
    DeleteQualityFollowerRequest(DeleteQualityFollowerRequest &&) = default ;
    DeleteQualityFollowerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualityFollowerRequest() = default ;
    DeleteQualityFollowerRequest& operator=(const DeleteQualityFollowerRequest &) = default ;
    DeleteQualityFollowerRequest& operator=(DeleteQualityFollowerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->followerId_ != nullptr
        && this->projectId_ != nullptr && this->projectName_ != nullptr; };
    // followerId Field Functions 
    bool hasFollowerId() const { return this->followerId_ != nullptr;};
    void deleteFollowerId() { this->followerId_ = nullptr;};
    inline int64_t followerId() const { DARABONBA_PTR_GET_DEFAULT(followerId_, 0L) };
    inline DeleteQualityFollowerRequest& setFollowerId(int64_t followerId) { DARABONBA_PTR_SET_VALUE(followerId_, followerId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteQualityFollowerRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DeleteQualityFollowerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The ID of the subscription relationship between the partition filter expression and the subscriber. You can call the [GetQualityFollower](https://help.aliyun.com/document_detail/174000.html) operation to obtain the ID of the subscription relationship.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> followerId_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the Workspace page to obtain the workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the compute engine or data source for which the partition filter expression is configured. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the rule configuration page of Data Quality page to obtain the name.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
