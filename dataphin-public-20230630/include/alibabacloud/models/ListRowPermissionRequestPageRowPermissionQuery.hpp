// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUESTPAGEROWPERMISSIONQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUESTPAGEROWPERMISSIONQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionRequestPageRowPermissionQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionRequestPageRowPermissionQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionRequestPageRowPermissionQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListRowPermissionRequestPageRowPermissionQuery() = default ;
    ListRowPermissionRequestPageRowPermissionQuery(const ListRowPermissionRequestPageRowPermissionQuery &) = default ;
    ListRowPermissionRequestPageRowPermissionQuery(ListRowPermissionRequestPageRowPermissionQuery &&) = default ;
    ListRowPermissionRequestPageRowPermissionQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionRequestPageRowPermissionQuery() = default ;
    ListRowPermissionRequestPageRowPermissionQuery& operator=(const ListRowPermissionRequestPageRowPermissionQuery &) = default ;
    ListRowPermissionRequestPageRowPermissionQuery& operator=(ListRowPermissionRequestPageRowPermissionQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListRowPermissionRequestPageRowPermissionQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListRowPermissionRequestPageRowPermissionQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRowPermissionRequestPageRowPermissionQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
