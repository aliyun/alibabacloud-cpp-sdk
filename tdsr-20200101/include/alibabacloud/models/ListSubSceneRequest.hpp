// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class ListSubSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ShowLayoutData, showLayoutData_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ShowLayoutData, showLayoutData_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
    };
    ListSubSceneRequest() = default ;
    ListSubSceneRequest(const ListSubSceneRequest &) = default ;
    ListSubSceneRequest(ListSubSceneRequest &&) = default ;
    ListSubSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubSceneRequest() = default ;
    ListSubSceneRequest& operator=(const ListSubSceneRequest &) = default ;
    ListSubSceneRequest& operator=(ListSubSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->sceneId_ == nullptr && return this->showLayoutData_ == nullptr && return this->sortField_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListSubSceneRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSubSceneRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListSubSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // showLayoutData Field Functions 
    bool hasShowLayoutData() const { return this->showLayoutData_ != nullptr;};
    void deleteShowLayoutData() { this->showLayoutData_ = nullptr;};
    inline bool showLayoutData() const { DARABONBA_PTR_GET_DEFAULT(showLayoutData_, false) };
    inline ListSubSceneRequest& setShowLayoutData(bool showLayoutData) { DARABONBA_PTR_SET_VALUE(showLayoutData_, showLayoutData) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListSubSceneRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<bool> showLayoutData_ = nullptr;
    std::shared_ptr<string> sortField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
