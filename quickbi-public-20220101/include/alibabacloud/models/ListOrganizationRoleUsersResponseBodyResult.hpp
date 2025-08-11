// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrganizationRoleUsersResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRoleUsersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRoleUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRoleUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListOrganizationRoleUsersResponseBodyResult() = default ;
    ListOrganizationRoleUsersResponseBodyResult(const ListOrganizationRoleUsersResponseBodyResult &) = default ;
    ListOrganizationRoleUsersResponseBodyResult(ListOrganizationRoleUsersResponseBodyResult &&) = default ;
    ListOrganizationRoleUsersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRoleUsersResponseBodyResult() = default ;
    ListOrganizationRoleUsersResponseBodyResult& operator=(const ListOrganizationRoleUsersResponseBodyResult &) = default ;
    ListOrganizationRoleUsersResponseBodyResult& operator=(ListOrganizationRoleUsersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalNum_ != nullptr && this->totalPages_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListOrganizationRoleUsersResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListOrganizationRoleUsersResponseBodyResultData>) };
    inline vector<Models::ListOrganizationRoleUsersResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListOrganizationRoleUsersResponseBodyResultData>) };
    inline ListOrganizationRoleUsersResponseBodyResult& setData(const vector<Models::ListOrganizationRoleUsersResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOrganizationRoleUsersResponseBodyResult& setData(vector<Models::ListOrganizationRoleUsersResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListOrganizationRoleUsersResponseBodyResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationRoleUsersResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListOrganizationRoleUsersResponseBodyResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListOrganizationRoleUsersResponseBodyResult& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // User list.
    std::shared_ptr<vector<Models::ListOrganizationRoleUsersResponseBodyResultData>> data_ = nullptr;
    // Page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Number of items per page as set in the request.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Total number of items.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
