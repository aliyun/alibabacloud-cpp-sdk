// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListRecentViewReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentViewReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(OffsetDay, offsetDay_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_TO_JSON(TreeType, treeType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentViewReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(OffsetDay, offsetDay_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_FROM_JSON(TreeType, treeType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListRecentViewReportsRequest() = default ;
    ListRecentViewReportsRequest(const ListRecentViewReportsRequest &) = default ;
    ListRecentViewReportsRequest(ListRecentViewReportsRequest &&) = default ;
    ListRecentViewReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentViewReportsRequest() = default ;
    ListRecentViewReportsRequest& operator=(const ListRecentViewReportsRequest &) = default ;
    ListRecentViewReportsRequest& operator=(ListRecentViewReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->offsetDay_ != nullptr && this->pageSize_ != nullptr && this->queryMode_ != nullptr && this->treeType_ != nullptr && this->userId_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListRecentViewReportsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // offsetDay Field Functions 
    bool hasOffsetDay() const { return this->offsetDay_ != nullptr;};
    void deleteOffsetDay() { this->offsetDay_ = nullptr;};
    inline int32_t offsetDay() const { DARABONBA_PTR_GET_DEFAULT(offsetDay_, 0) };
    inline ListRecentViewReportsRequest& setOffsetDay(int32_t offsetDay) { DARABONBA_PTR_SET_VALUE(offsetDay_, offsetDay) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecentViewReportsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryMode Field Functions 
    bool hasQueryMode() const { return this->queryMode_ != nullptr;};
    void deleteQueryMode() { this->queryMode_ = nullptr;};
    inline string queryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
    inline ListRecentViewReportsRequest& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


    // treeType Field Functions 
    bool hasTreeType() const { return this->treeType_ != nullptr;};
    void deleteTreeType() { this->treeType_ = nullptr;};
    inline string treeType() const { DARABONBA_PTR_GET_DEFAULT(treeType_, "") };
    inline ListRecentViewReportsRequest& setTreeType(string treeType) { DARABONBA_PTR_SET_VALUE(treeType_, treeType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListRecentViewReportsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Keyword of the name of the work.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of days to query data in the last few days. Default value: 10.
    std::shared_ptr<int32_t> offsetDay_ = nullptr;
    // Query the number of rows in the work list:
    // 
    // *   Default value: 10.
    // *   Maximum value: 9999
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query mode. Valid values:
    // 
    // *   1: Sort by number of visits
    // *   2: Sort by Last Access Time
    std::shared_ptr<string> queryMode_ = nullptr;
    // Query the type of the work (fill in the blank to query all types). Valid values:
    // 
    // *   DATAPRODUCT: BI portal
    // *   PAGE: Dashboard
    // *   REPORT: workbook
    std::shared_ptr<string> treeType_ = nullptr;
    // The UserID of the user in the Quick BI.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
