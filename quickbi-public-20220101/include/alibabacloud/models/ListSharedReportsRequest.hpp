// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListSharedReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TreeType, treeType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TreeType, treeType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListSharedReportsRequest() = default ;
    ListSharedReportsRequest(const ListSharedReportsRequest &) = default ;
    ListSharedReportsRequest(ListSharedReportsRequest &&) = default ;
    ListSharedReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedReportsRequest() = default ;
    ListSharedReportsRequest& operator=(const ListSharedReportsRequest &) = default ;
    ListSharedReportsRequest& operator=(ListSharedReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->pageSize_ == nullptr && return this->treeType_ == nullptr && return this->userId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSharedReportsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSharedReportsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // treeType Field Functions 
    bool hasTreeType() const { return this->treeType_ != nullptr;};
    void deleteTreeType() { this->treeType_ = nullptr;};
    inline string treeType() const { DARABONBA_PTR_GET_DEFAULT(treeType_, "") };
    inline ListSharedReportsRequest& setTreeType(string treeType) { DARABONBA_PTR_SET_VALUE(treeType_, treeType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListSharedReportsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Keyword of the name of the work.
    std::shared_ptr<string> keyword_ = nullptr;
    // Query the number of rows in the work list:
    // 
    // *   Default value: 10.
    // *   Maximum value: 9999
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Query the type of the work (fill in the blank to query all types). Valid values:
    // 
    // *   DATAPRODUCT: BI portal
    // *   PAGE: Dashboard
    // *   REPORT: workbook
    std::shared_ptr<string> treeType_ = nullptr;
    // The UserID of the user to be queried in the Quick BI.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
