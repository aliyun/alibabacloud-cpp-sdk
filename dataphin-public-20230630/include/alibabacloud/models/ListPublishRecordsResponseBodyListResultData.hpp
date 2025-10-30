// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSRESPONSEBODYLISTRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSRESPONSEBODYLISTRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPublishRecordsResponseBodyListResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishRecordsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(PublishName, publishName_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(Publisher, publisher_);
      DARABONBA_PTR_TO_JSON(PublisherName, publisherName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishRecordsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(PublishName, publishName_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
      DARABONBA_PTR_FROM_JSON(PublisherName, publisherName_);
    };
    ListPublishRecordsResponseBodyListResultData() = default ;
    ListPublishRecordsResponseBodyListResultData(const ListPublishRecordsResponseBodyListResultData &) = default ;
    ListPublishRecordsResponseBodyListResultData(ListPublishRecordsResponseBodyListResultData &&) = default ;
    ListPublishRecordsResponseBodyListResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishRecordsResponseBodyListResultData() = default ;
    ListPublishRecordsResponseBodyListResultData& operator=(const ListPublishRecordsResponseBodyListResultData &) = default ;
    ListPublishRecordsResponseBodyListResultData& operator=(ListPublishRecordsResponseBodyListResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && return this->errorMessage_ == nullptr && return this->finishTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModify_ == nullptr && return this->id_ == nullptr
        && return this->nodeId_ == nullptr && return this->objectId_ == nullptr && return this->objectName_ == nullptr && return this->objectType_ == nullptr && return this->objectVersion_ == nullptr
        && return this->projectId_ == nullptr && return this->publishName_ == nullptr && return this->publishStatus_ == nullptr && return this->publisher_ == nullptr && return this->publisherName_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline ListPublishRecordsResponseBodyListResultData& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPublishRecordsResponseBodyListResultData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // objectVersion Field Functions 
    bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
    void deleteObjectVersion() { this->objectVersion_ = nullptr;};
    inline string objectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // publishName Field Functions 
    bool hasPublishName() const { return this->publishName_ != nullptr;};
    void deletePublishName() { this->publishName_ = nullptr;};
    inline string publishName() const { DARABONBA_PTR_GET_DEFAULT(publishName_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setPublishName(string publishName) { DARABONBA_PTR_SET_VALUE(publishName_, publishName) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline int32_t publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
    inline ListPublishRecordsResponseBodyListResultData& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // publisher Field Functions 
    bool hasPublisher() const { return this->publisher_ != nullptr;};
    void deletePublisher() { this->publisher_ = nullptr;};
    inline string publisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


    // publisherName Field Functions 
    bool hasPublisherName() const { return this->publisherName_ != nullptr;};
    void deletePublisherName() { this->publisherName_ = nullptr;};
    inline string publisherName() const { DARABONBA_PTR_GET_DEFAULT(publisherName_, "") };
    inline ListPublishRecordsResponseBodyListResultData& setPublisherName(string publisherName) { DARABONBA_PTR_SET_VALUE(publisherName_, publisherName) };


  protected:
    std::shared_ptr<int32_t> changeType_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectName_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> objectVersion_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> publishName_ = nullptr;
    std::shared_ptr<int32_t> publishStatus_ = nullptr;
    std::shared_ptr<string> publisher_ = nullptr;
    std::shared_ptr<string> publisherName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
