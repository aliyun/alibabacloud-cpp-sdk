// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBatchTaskUdfLineagesRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskUdfLineagesRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(LineageGroupList, lineageGroupList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskUdfLineagesRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(LineageGroupList, lineageGroupList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateBatchTaskUdfLineagesRequestUpdateCommand() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommand(const UpdateBatchTaskUdfLineagesRequestUpdateCommand &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommand(UpdateBatchTaskUdfLineagesRequestUpdateCommand &&) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskUdfLineagesRequestUpdateCommand() = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommand& operator=(const UpdateBatchTaskUdfLineagesRequestUpdateCommand &) = default ;
    UpdateBatchTaskUdfLineagesRequestUpdateCommand& operator=(UpdateBatchTaskUdfLineagesRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->lineageGroupList_ == nullptr && return this->projectId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // lineageGroupList Field Functions 
    bool hasLineageGroupList() const { return this->lineageGroupList_ != nullptr;};
    void deleteLineageGroupList() { this->lineageGroupList_ = nullptr;};
    inline const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList> & lineageGroupList() const { DARABONBA_PTR_GET_CONST(lineageGroupList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList>) };
    inline vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList> lineageGroupList() { DARABONBA_PTR_GET(lineageGroupList_, vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList>) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommand& setLineageGroupList(const vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList> & lineageGroupList) { DARABONBA_PTR_SET_VALUE(lineageGroupList_, lineageGroupList) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommand& setLineageGroupList(vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList> && lineageGroupList) { DARABONBA_PTR_SET_RVALUE(lineageGroupList_, lineageGroupList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBatchTaskUdfLineagesRequestUpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateBatchTaskUdfLineagesRequestUpdateCommandLineageGroupList>> lineageGroupList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
