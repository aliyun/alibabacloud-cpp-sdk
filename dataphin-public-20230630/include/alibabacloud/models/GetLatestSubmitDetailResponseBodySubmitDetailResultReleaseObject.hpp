// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULTRELEASEOBJECT_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULTRELEASEOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubmitComment, submitComment_);
      DARABONBA_PTR_TO_JSON(SubmitObject, submitObject_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubmitComment, submitComment_);
      DARABONBA_PTR_FROM_JSON(SubmitObject, submitObject_);
    };
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject(const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject(GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject &&) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& operator=(const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& operator=(GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && return this->nodeId_ == nullptr && return this->objectVersion_ == nullptr && return this->projectId_ == nullptr && return this->submitComment_ == nullptr && return this->submitObject_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // objectVersion Field Functions 
    bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
    void deleteObjectVersion() { this->objectVersion_ = nullptr;};
    inline string objectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // submitComment Field Functions 
    bool hasSubmitComment() const { return this->submitComment_ != nullptr;};
    void deleteSubmitComment() { this->submitComment_ = nullptr;};
    inline string submitComment() const { DARABONBA_PTR_GET_DEFAULT(submitComment_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setSubmitComment(string submitComment) { DARABONBA_PTR_SET_VALUE(submitComment_, submitComment) };


    // submitObject Field Functions 
    bool hasSubmitObject() const { return this->submitObject_ != nullptr;};
    void deleteSubmitObject() { this->submitObject_ = nullptr;};
    inline const Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject & submitObject() const { DARABONBA_PTR_GET_CONST(submitObject_, Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject) };
    inline Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject submitObject() { DARABONBA_PTR_GET(submitObject_, Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setSubmitObject(const Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject & submitObject) { DARABONBA_PTR_SET_VALUE(submitObject_, submitObject) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject& setSubmitObject(Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject && submitObject) { DARABONBA_PTR_SET_RVALUE(submitObject_, submitObject) };


  protected:
    std::shared_ptr<string> changeType_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> objectVersion_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> submitComment_ = nullptr;
    std::shared_ptr<Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject> submitObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
