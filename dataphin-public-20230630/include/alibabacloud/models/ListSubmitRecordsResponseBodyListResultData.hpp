// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSRESPONSEBODYLISTRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSRESPONSEBODYLISTRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsResponseBodyListResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubmitComment, submitComment_);
      DARABONBA_PTR_TO_JSON(Submitter, submitter_);
      DARABONBA_PTR_TO_JSON(SubmitterName, submitterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubmitComment, submitComment_);
      DARABONBA_PTR_FROM_JSON(Submitter, submitter_);
      DARABONBA_PTR_FROM_JSON(SubmitterName, submitterName_);
    };
    ListSubmitRecordsResponseBodyListResultData() = default ;
    ListSubmitRecordsResponseBodyListResultData(const ListSubmitRecordsResponseBodyListResultData &) = default ;
    ListSubmitRecordsResponseBodyListResultData(ListSubmitRecordsResponseBodyListResultData &&) = default ;
    ListSubmitRecordsResponseBodyListResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsResponseBodyListResultData() = default ;
    ListSubmitRecordsResponseBodyListResultData& operator=(const ListSubmitRecordsResponseBodyListResultData &) = default ;
    ListSubmitRecordsResponseBodyListResultData& operator=(ListSubmitRecordsResponseBodyListResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeType_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModify_ != nullptr && this->id_ != nullptr && this->nodeId_ != nullptr && this->objectId_ != nullptr
        && this->objectName_ != nullptr && this->objectType_ != nullptr && this->objectVersion_ != nullptr && this->projectId_ != nullptr && this->submitComment_ != nullptr
        && this->submitter_ != nullptr && this->submitterName_ != nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline ListSubmitRecordsResponseBodyListResultData& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSubmitRecordsResponseBodyListResultData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // objectVersion Field Functions 
    bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
    void deleteObjectVersion() { this->objectVersion_ = nullptr;};
    inline string objectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // submitComment Field Functions 
    bool hasSubmitComment() const { return this->submitComment_ != nullptr;};
    void deleteSubmitComment() { this->submitComment_ = nullptr;};
    inline string submitComment() const { DARABONBA_PTR_GET_DEFAULT(submitComment_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setSubmitComment(string submitComment) { DARABONBA_PTR_SET_VALUE(submitComment_, submitComment) };


    // submitter Field Functions 
    bool hasSubmitter() const { return this->submitter_ != nullptr;};
    void deleteSubmitter() { this->submitter_ = nullptr;};
    inline string submitter() const { DARABONBA_PTR_GET_DEFAULT(submitter_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setSubmitter(string submitter) { DARABONBA_PTR_SET_VALUE(submitter_, submitter) };


    // submitterName Field Functions 
    bool hasSubmitterName() const { return this->submitterName_ != nullptr;};
    void deleteSubmitterName() { this->submitterName_ = nullptr;};
    inline string submitterName() const { DARABONBA_PTR_GET_DEFAULT(submitterName_, "") };
    inline ListSubmitRecordsResponseBodyListResultData& setSubmitterName(string submitterName) { DARABONBA_PTR_SET_VALUE(submitterName_, submitterName) };


  protected:
    std::shared_ptr<int32_t> changeType_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectName_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> objectVersion_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> submitComment_ = nullptr;
    std::shared_ptr<string> submitter_ = nullptr;
    std::shared_ptr<string> submitterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
