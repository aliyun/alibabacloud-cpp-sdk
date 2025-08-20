// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListClientUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListClientUsersRequest() = default ;
    ListClientUsersRequest(const ListClientUsersRequest &) = default ;
    ListClientUsersRequest(ListClientUsersRequest &&) = default ;
    ListClientUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUsersRequest() = default ;
    ListClientUsersRequest& operator=(const ListClientUsersRequest &) = default ;
    ListClientUsersRequest& operator=(ListClientUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->departmentId_ != nullptr && this->email_ != nullptr && this->idpConfigId_ != nullptr && this->mobileNumber_ != nullptr && this->pageSize_ != nullptr
        && this->status_ != nullptr && this->username_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListClientUsersRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline ListClientUsersRequest& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListClientUsersRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline ListClientUsersRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline ListClientUsersRequest& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListClientUsersRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClientUsersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListClientUsersRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<string> mobileNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
