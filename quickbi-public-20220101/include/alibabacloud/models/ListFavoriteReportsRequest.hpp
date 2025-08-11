// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListFavoriteReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFavoriteReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TreeType, treeType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFavoriteReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TreeType, treeType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListFavoriteReportsRequest() = default ;
    ListFavoriteReportsRequest(const ListFavoriteReportsRequest &) = default ;
    ListFavoriteReportsRequest(ListFavoriteReportsRequest &&) = default ;
    ListFavoriteReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFavoriteReportsRequest() = default ;
    ListFavoriteReportsRequest& operator=(const ListFavoriteReportsRequest &) = default ;
    ListFavoriteReportsRequest& operator=(ListFavoriteReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->pageSize_ != nullptr && this->treeType_ != nullptr && this->userId_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListFavoriteReportsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFavoriteReportsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // treeType Field Functions 
    bool hasTreeType() const { return this->treeType_ != nullptr;};
    void deleteTreeType() { this->treeType_ = nullptr;};
    inline string treeType() const { DARABONBA_PTR_GET_DEFAULT(treeType_, "") };
    inline ListFavoriteReportsRequest& setTreeType(string treeType) { DARABONBA_PTR_SET_VALUE(treeType_, treeType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListFavoriteReportsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Keyword of the work name.
    std::shared_ptr<string> keyword_ = nullptr;
    // Number of rows in the work list to be queried:
    // Default value: 10
    // Maximum value: 9999
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Type of the work to be queried (leave blank to query all types). Value range:
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    std::shared_ptr<string> treeType_ = nullptr;
    // The UserID of the user in Quick BI to be queried.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
