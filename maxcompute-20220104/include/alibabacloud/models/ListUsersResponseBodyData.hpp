// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyDataUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(users, users_);
    };
    ListUsersResponseBodyData() = default ;
    ListUsersResponseBodyData(const ListUsersResponseBodyData &) = default ;
    ListUsersResponseBodyData(ListUsersResponseBodyData &&) = default ;
    ListUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyData() = default ;
    ListUsersResponseBodyData& operator=(const ListUsersResponseBodyData &) = default ;
    ListUsersResponseBodyData& operator=(ListUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->totalCount_ != nullptr && this->users_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUsersResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUsersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUsersResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyDataUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Models::ListUsersResponseBodyDataUsers>) };
    inline vector<Models::ListUsersResponseBodyDataUsers> users() { DARABONBA_PTR_GET(users_, vector<Models::ListUsersResponseBodyDataUsers>) };
    inline ListUsersResponseBodyData& setUsers(const vector<Models::ListUsersResponseBodyDataUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBodyData& setUsers(vector<Models::ListUsersResponseBodyDataUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The users.
    std::shared_ptr<vector<Models::ListUsersResponseBodyDataUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
