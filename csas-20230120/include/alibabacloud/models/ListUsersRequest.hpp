// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(FuzzyUsername, fuzzyUsername_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PreciseUsername, preciseUsername_);
      DARABONBA_PTR_TO_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(FuzzyUsername, fuzzyUsername_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PreciseUsername, preciseUsername_);
      DARABONBA_PTR_FROM_JSON(SaseUserIds, saseUserIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListUsersRequest() = default ;
    ListUsersRequest(const ListUsersRequest &) = default ;
    ListUsersRequest(ListUsersRequest &&) = default ;
    ListUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersRequest() = default ;
    ListUsersRequest& operator=(const ListUsersRequest &) = default ;
    ListUsersRequest& operator=(ListUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->department_ != nullptr && this->fuzzyUsername_ != nullptr && this->pageSize_ != nullptr && this->preciseUsername_ != nullptr && this->saseUserIds_ != nullptr
        && this->status_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUsersRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListUsersRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // fuzzyUsername Field Functions 
    bool hasFuzzyUsername() const { return this->fuzzyUsername_ != nullptr;};
    void deleteFuzzyUsername() { this->fuzzyUsername_ = nullptr;};
    inline string fuzzyUsername() const { DARABONBA_PTR_GET_DEFAULT(fuzzyUsername_, "") };
    inline ListUsersRequest& setFuzzyUsername(string fuzzyUsername) { DARABONBA_PTR_SET_VALUE(fuzzyUsername_, fuzzyUsername) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUsersRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // preciseUsername Field Functions 
    bool hasPreciseUsername() const { return this->preciseUsername_ != nullptr;};
    void deletePreciseUsername() { this->preciseUsername_ = nullptr;};
    inline string preciseUsername() const { DARABONBA_PTR_GET_DEFAULT(preciseUsername_, "") };
    inline ListUsersRequest& setPreciseUsername(string preciseUsername) { DARABONBA_PTR_SET_VALUE(preciseUsername_, preciseUsername) };


    // saseUserIds Field Functions 
    bool hasSaseUserIds() const { return this->saseUserIds_ != nullptr;};
    void deleteSaseUserIds() { this->saseUserIds_ = nullptr;};
    inline const vector<string> & saseUserIds() const { DARABONBA_PTR_GET_CONST(saseUserIds_, vector<string>) };
    inline vector<string> saseUserIds() { DARABONBA_PTR_GET(saseUserIds_, vector<string>) };
    inline ListUsersRequest& setSaseUserIds(const vector<string> & saseUserIds) { DARABONBA_PTR_SET_VALUE(saseUserIds_, saseUserIds) };
    inline ListUsersRequest& setSaseUserIds(vector<string> && saseUserIds) { DARABONBA_PTR_SET_RVALUE(saseUserIds_, saseUserIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUsersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> fuzzyUsername_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> preciseUsername_ = nullptr;
    std::shared_ptr<vector<string>> saseUserIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
