// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETECDSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETECDSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CompleteCdsFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteCdsFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteCdsFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
    };
    CompleteCdsFileRequest() = default ;
    CompleteCdsFileRequest(const CompleteCdsFileRequest &) = default ;
    CompleteCdsFileRequest(CompleteCdsFileRequest &&) = default ;
    CompleteCdsFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteCdsFileRequest() = default ;
    CompleteCdsFileRequest& operator=(const CompleteCdsFileRequest &) = default ;
    CompleteCdsFileRequest& operator=(CompleteCdsFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->endUserId_ == nullptr && return this->fileId_ == nullptr && return this->groupId_ == nullptr && return this->regionId_ == nullptr && return this->uploadId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CompleteCdsFileRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CompleteCdsFileRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CompleteCdsFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CompleteCdsFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CompleteCdsFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline CompleteCdsFileRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


  protected:
    // The ID of the enterprise drive.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The username. You must specify at least one of `EndUserId` and `GroupId`.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The file ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // The ID of the team space. You must specify at least one of `EndUserId` and `GroupId`.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the file upload task. Callable interface [CreateCdsFile](https://help.aliyun.com/document_detail/2247619.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
