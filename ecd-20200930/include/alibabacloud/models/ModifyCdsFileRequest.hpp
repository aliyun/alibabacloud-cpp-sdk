// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCdsFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdsFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdsFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCdsFileRequest() = default ;
    ModifyCdsFileRequest(const ModifyCdsFileRequest &) = default ;
    ModifyCdsFileRequest(ModifyCdsFileRequest &&) = default ;
    ModifyCdsFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdsFileRequest() = default ;
    ModifyCdsFileRequest& operator=(const ModifyCdsFileRequest &) = default ;
    ModifyCdsFileRequest& operator=(ModifyCdsFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->conflictPolicy_ == nullptr && return this->endUserId_ == nullptr && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->groupId_ == nullptr
        && return this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ModifyCdsFileRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string conflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline ModifyCdsFileRequest& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ModifyCdsFileRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ModifyCdsFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ModifyCdsFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyCdsFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCdsFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The enterprise drive ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The processing policy when a file with the same name appears.
    // 
    // Valid values:
    // 
    // *   refuse: If you want to create a file that uses the same name as an existing file in the cloud, the system denies your request and returns the details of the existing file.
    // *   auto_rename: automatically renames a file if the file has the same name as an existing file in the cloud. By default, the current point in time is appended to the end of the original file name. Example: xxx20240102_150405.
    // *   ignore: allows the file to be with the same name.
    // *   over_write: After you create a file that uses the same name as an existing file in the cloud, the new file overwrites the existing file.
    std::shared_ptr<string> conflictPolicy_ = nullptr;
    // The ID of the user who uses the network disk.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The ID of the file. You can call the [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) operation to query the ID of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // The name of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The ID of the team space.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
