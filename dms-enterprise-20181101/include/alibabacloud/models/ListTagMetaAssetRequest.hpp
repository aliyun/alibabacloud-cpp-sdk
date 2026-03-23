// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGMETAASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGMETAASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTagMetaAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagMetaAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetaParentId, metaParentId_);
      DARABONBA_PTR_TO_JSON(MetaType, metaType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagMetaAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaParentId, metaParentId_);
      DARABONBA_PTR_FROM_JSON(MetaType, metaType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListTagMetaAssetRequest() = default ;
    ListTagMetaAssetRequest(const ListTagMetaAssetRequest &) = default ;
    ListTagMetaAssetRequest(ListTagMetaAssetRequest &&) = default ;
    ListTagMetaAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagMetaAssetRequest() = default ;
    ListTagMetaAssetRequest& operator=(const ListTagMetaAssetRequest &) = default ;
    ListTagMetaAssetRequest& operator=(ListTagMetaAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaParentId_ == nullptr
        && this->metaType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchKey_ == nullptr && this->tagName_ == nullptr
        && this->tid_ == nullptr; };
    // metaParentId Field Functions 
    bool hasMetaParentId() const { return this->metaParentId_ != nullptr;};
    void deleteMetaParentId() { this->metaParentId_ = nullptr;};
    inline string getMetaParentId() const { DARABONBA_PTR_GET_DEFAULT(metaParentId_, "") };
    inline ListTagMetaAssetRequest& setMetaParentId(string metaParentId) { DARABONBA_PTR_SET_VALUE(metaParentId_, metaParentId) };


    // metaType Field Functions 
    bool hasMetaType() const { return this->metaType_ != nullptr;};
    void deleteMetaType() { this->metaType_ = nullptr;};
    inline string getMetaType() const { DARABONBA_PTR_GET_DEFAULT(metaType_, "") };
    inline ListTagMetaAssetRequest& setMetaType(string metaType) { DARABONBA_PTR_SET_VALUE(metaType_, metaType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTagMetaAssetRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagMetaAssetRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListTagMetaAssetRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListTagMetaAssetRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTagMetaAssetRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    shared_ptr<string> metaParentId_ {};
    // This parameter is required.
    shared_ptr<string> metaType_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> searchKey_ {};
    // This parameter is required.
    shared_ptr<string> tagName_ {};
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
