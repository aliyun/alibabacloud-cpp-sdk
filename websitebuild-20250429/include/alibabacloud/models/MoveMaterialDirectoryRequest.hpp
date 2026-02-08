// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEMATERIALDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEMATERIALDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class MoveMaterialDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveMaterialDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(ParentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(SortNum, sortNum_);
    };
    friend void from_json(const Darabonba::Json& j, MoveMaterialDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(ParentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(SortNum, sortNum_);
    };
    MoveMaterialDirectoryRequest() = default ;
    MoveMaterialDirectoryRequest(const MoveMaterialDirectoryRequest &) = default ;
    MoveMaterialDirectoryRequest(MoveMaterialDirectoryRequest &&) = default ;
    MoveMaterialDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveMaterialDirectoryRequest() = default ;
    MoveMaterialDirectoryRequest& operator=(const MoveMaterialDirectoryRequest &) = default ;
    MoveMaterialDirectoryRequest& operator=(MoveMaterialDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->directoryId_ == nullptr && this->parentDirectoryId_ == nullptr && this->sortNum_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline MoveMaterialDirectoryRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline MoveMaterialDirectoryRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string getParentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline MoveMaterialDirectoryRequest& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // sortNum Field Functions 
    bool hasSortNum() const { return this->sortNum_ != nullptr;};
    void deleteSortNum() { this->sortNum_ = nullptr;};
    inline int32_t getSortNum() const { DARABONBA_PTR_GET_DEFAULT(sortNum_, 0) };
    inline MoveMaterialDirectoryRequest& setSortNum(int32_t sortNum) { DARABONBA_PTR_SET_VALUE(sortNum_, sortNum) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // This parameter is required.
    shared_ptr<string> parentDirectoryId_ {};
    // This parameter is required.
    shared_ptr<int32_t> sortNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
