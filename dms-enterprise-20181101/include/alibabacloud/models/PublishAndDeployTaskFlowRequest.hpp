// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHANDDEPLOYTASKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHANDDEPLOYTASKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PublishAndDeployTaskFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAndDeployTaskFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(VersionComments, versionComments_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAndDeployTaskFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(VersionComments, versionComments_);
    };
    PublishAndDeployTaskFlowRequest() = default ;
    PublishAndDeployTaskFlowRequest(const PublishAndDeployTaskFlowRequest &) = default ;
    PublishAndDeployTaskFlowRequest(PublishAndDeployTaskFlowRequest &&) = default ;
    PublishAndDeployTaskFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAndDeployTaskFlowRequest() = default ;
    PublishAndDeployTaskFlowRequest& operator=(const PublishAndDeployTaskFlowRequest &) = default ;
    PublishAndDeployTaskFlowRequest& operator=(PublishAndDeployTaskFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->tid_ != nullptr && this->versionComments_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline PublishAndDeployTaskFlowRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline PublishAndDeployTaskFlowRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // versionComments Field Functions 
    bool hasVersionComments() const { return this->versionComments_ != nullptr;};
    void deleteVersionComments() { this->versionComments_ = nullptr;};
    inline string versionComments() const { DARABONBA_PTR_GET_DEFAULT(versionComments_, "") };
    inline PublishAndDeployTaskFlowRequest& setVersionComments(string versionComments) { DARABONBA_PTR_SET_VALUE(versionComments_, versionComments) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> versionComments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
