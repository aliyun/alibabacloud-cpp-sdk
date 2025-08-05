// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDbsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDbsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sorter, sorterShrink_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDbsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sorter, sorterShrink_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListMmsDbsShrinkRequest() = default ;
    ListMmsDbsShrinkRequest(const ListMmsDbsShrinkRequest &) = default ;
    ListMmsDbsShrinkRequest(ListMmsDbsShrinkRequest &&) = default ;
    ListMmsDbsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDbsShrinkRequest() = default ;
    ListMmsDbsShrinkRequest& operator=(const ListMmsDbsShrinkRequest &) = default ;
    ListMmsDbsShrinkRequest& operator=(ListMmsDbsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->sorterShrink_ != nullptr && this->status_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsDbsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsDbsShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsDbsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sorterShrink Field Functions 
    bool hasSorterShrink() const { return this->sorterShrink_ != nullptr;};
    void deleteSorterShrink() { this->sorterShrink_ = nullptr;};
    inline string sorterShrink() const { DARABONBA_PTR_GET_DEFAULT(sorterShrink_, "") };
    inline ListMmsDbsShrinkRequest& setSorterShrink(string sorterShrink) { DARABONBA_PTR_SET_VALUE(sorterShrink_, sorterShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsDbsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sorterShrink_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
