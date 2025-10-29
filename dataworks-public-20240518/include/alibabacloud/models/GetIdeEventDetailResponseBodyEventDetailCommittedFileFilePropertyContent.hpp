// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILEFILEPROPERTYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILEFILEPROPERTYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
    };
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent(const GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent(GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& operator=(const GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& operator=(GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessId_ == nullptr
        && return this->currentVersion_ == nullptr && return this->dataSourceName_ == nullptr && return this->folderId_ == nullptr && return this->owner_ == nullptr && return this->parentFileId_ == nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int64_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parentFileId Field Functions 
    bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
    void deleteParentFileId() { this->parentFileId_ = nullptr;};
    inline int64_t parentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileFilePropertyContent& setParentFileId(int64_t parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


  protected:
    // The ID of the workflow to which the file belongs.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The latest version number of the file.
    std::shared_ptr<int64_t> currentVersion_ = nullptr;
    // The name of the data source with which the file is associated.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The ID of the folder to which the file belongs. You can call the [GetFolder](https://help.aliyun.com/document_detail/173952.html) operation to query the details of the file based on the folder ID.
    std::shared_ptr<string> folderId_ = nullptr;
    // The file owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the do-while node or for-each node that corresponds to the file.
    std::shared_ptr<int64_t> parentFileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
