// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMREQUESTQUERYSUBSCRIPTIONALBUMREQUESTPAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMREQUESTQUERYSUBSCRIPTIONALBUMREQUESTPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumRequestQuerySubscriptionAlbumRequestPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage() = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage(const ListSubAlbumRequestQuerySubscriptionAlbumRequestPage &) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage(ListSubAlbumRequestQuerySubscriptionAlbumRequestPage &&) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumRequestQuerySubscriptionAlbumRequestPage() = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& operator=(const ListSubAlbumRequestQuerySubscriptionAlbumRequestPage &) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& operator=(ListSubAlbumRequestQuerySubscriptionAlbumRequestPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequestPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
