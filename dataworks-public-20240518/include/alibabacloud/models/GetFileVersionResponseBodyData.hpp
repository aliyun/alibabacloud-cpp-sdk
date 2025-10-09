// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEVERSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEVERSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileVersionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileVersionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
      DARABONBA_PTR_TO_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePropertyContent, filePropertyContent_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(IsCurrentProd, isCurrentProd_);
      DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileVersionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
      DARABONBA_PTR_FROM_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePropertyContent, filePropertyContent_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(IsCurrentProd, isCurrentProd_);
      DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    GetFileVersionResponseBodyData() = default ;
    GetFileVersionResponseBodyData(const GetFileVersionResponseBodyData &) = default ;
    GetFileVersionResponseBodyData(GetFileVersionResponseBodyData &&) = default ;
    GetFileVersionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileVersionResponseBodyData() = default ;
    GetFileVersionResponseBodyData& operator=(const GetFileVersionResponseBodyData &) = default ;
    GetFileVersionResponseBodyData& operator=(GetFileVersionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeType_ != nullptr
        && this->comment_ != nullptr && this->commitTime_ != nullptr && this->commitUser_ != nullptr && this->fileContent_ != nullptr && this->fileName_ != nullptr
        && this->filePropertyContent_ != nullptr && this->fileVersion_ != nullptr && this->isCurrentProd_ != nullptr && this->nodeContent_ != nullptr && this->nodeId_ != nullptr
        && this->status_ != nullptr && this->useType_ != nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline GetFileVersionResponseBodyData& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetFileVersionResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // commitTime Field Functions 
    bool hasCommitTime() const { return this->commitTime_ != nullptr;};
    void deleteCommitTime() { this->commitTime_ = nullptr;};
    inline int64_t commitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, 0L) };
    inline GetFileVersionResponseBodyData& setCommitTime(int64_t commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


    // commitUser Field Functions 
    bool hasCommitUser() const { return this->commitUser_ != nullptr;};
    void deleteCommitUser() { this->commitUser_ = nullptr;};
    inline string commitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
    inline GetFileVersionResponseBodyData& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline string fileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
    inline GetFileVersionResponseBodyData& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetFileVersionResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePropertyContent Field Functions 
    bool hasFilePropertyContent() const { return this->filePropertyContent_ != nullptr;};
    void deleteFilePropertyContent() { this->filePropertyContent_ = nullptr;};
    inline string filePropertyContent() const { DARABONBA_PTR_GET_DEFAULT(filePropertyContent_, "") };
    inline GetFileVersionResponseBodyData& setFilePropertyContent(string filePropertyContent) { DARABONBA_PTR_SET_VALUE(filePropertyContent_, filePropertyContent) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline GetFileVersionResponseBodyData& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // isCurrentProd Field Functions 
    bool hasIsCurrentProd() const { return this->isCurrentProd_ != nullptr;};
    void deleteIsCurrentProd() { this->isCurrentProd_ = nullptr;};
    inline bool isCurrentProd() const { DARABONBA_PTR_GET_DEFAULT(isCurrentProd_, false) };
    inline GetFileVersionResponseBodyData& setIsCurrentProd(bool isCurrentProd) { DARABONBA_PTR_SET_VALUE(isCurrentProd_, isCurrentProd) };


    // nodeContent Field Functions 
    bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
    void deleteNodeContent() { this->nodeContent_ = nullptr;};
    inline string nodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
    inline GetFileVersionResponseBodyData& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetFileVersionResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFileVersionResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline GetFileVersionResponseBodyData& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The type of the change to the file of the current version. Valid values: CREATE, UPDATE, and DELETE.
    std::shared_ptr<string> changeType_ = nullptr;
    // The description of the file version.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the file version was generated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> commitTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to generate the file of the current version.
    std::shared_ptr<string> commitUser_ = nullptr;
    // The code in the file of the current version.
    std::shared_ptr<string> fileContent_ = nullptr;
    // The name of the file of the current version.
    std::shared_ptr<string> fileName_ = nullptr;
    // The basic information about the file of the current version.
    std::shared_ptr<string> filePropertyContent_ = nullptr;
    // The file version.
    std::shared_ptr<int32_t> fileVersion_ = nullptr;
    // Indicates whether the version is the latest version in the production environment. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isCurrentProd_ = nullptr;
    // The scheduling configurations of the node that corresponds to the file of the current version.
    std::shared_ptr<string> nodeContent_ = nullptr;
    // The ID of the node that corresponds to the file version.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The status of the file version. Valid values:
    // 
    // *   COMMITTING
    // *   COMMITTED or CHECK_OK
    // *   PACKAGED
    // *   DEPLOYING
    // *   DEPLOYED
    // *   CANCELLED
    std::shared_ptr<string> status_ = nullptr;
    // The module to which the file belongs. Valid values:
    // 
    // *   0: NORMAL, which indicates that the file is used for DataStudio.
    // *   1: MANUAL, which indicates that the file is used for a manually triggered node.
    // *   2: MANUAL_BIZ, which indicates that the file is used for a manually triggered workflow.
    // *   3: SKIP, which indicates that the file is used for a dry-run node in DataStudio.
    // *   10: ADHOCQUERY, which indicates that the file is used for an ad hoc query.
    // *   30: COMPONENT, which indicates that the file is used for a script template.
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
