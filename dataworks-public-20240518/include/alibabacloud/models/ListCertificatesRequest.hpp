// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCertificatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartCreateTime, startCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartCreateTime, startCreateTime_);
    };
    ListCertificatesRequest() = default ;
    ListCertificatesRequest(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest(ListCertificatesRequest &&) = default ;
    ListCertificatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesRequest() = default ;
    ListCertificatesRequest& operator=(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest& operator=(ListCertificatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createUser_ != nullptr
        && this->endCreateTime_ != nullptr && this->name_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->projectId_ != nullptr && this->sortBy_ != nullptr && this->startCreateTime_ != nullptr; };
    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListCertificatesRequest& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int64_t endCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0L) };
    inline ListCertificatesRequest& setEndCreateTime(int64_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCertificatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListCertificatesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCertificatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCertificatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCertificatesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListCertificatesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startCreateTime Field Functions 
    bool hasStartCreateTime() const { return this->startCreateTime_ != nullptr;};
    void deleteStartCreateTime() { this->startCreateTime_ = nullptr;};
    inline int64_t startCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startCreateTime_, 0L) };
    inline ListCertificatesRequest& setStartCreateTime(int64_t startCreateTime) { DARABONBA_PTR_SET_VALUE(startCreateTime_, startCreateTime) };


  protected:
    // The ID of the user who created the certificate files.
    std::shared_ptr<string> createUser_ = nullptr;
    // The time when the certificate file was created. You can call this operation to query the files that are created before the time. Unit: milliseconds.
    std::shared_ptr<int64_t> endCreateTime_ = nullptr;
    // The name of the certificate file. Fuzzy match by file name is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The order in which you want to sort the certificate files. Valid values: Desc: descending order ASC: ascending order Default value: Asc
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the workspace to which the certificate file belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The field used to sort the certificate files. Valid values: CreateTime Id Name Default value: Id
    std::shared_ptr<string> sortBy_ = nullptr;
    // The time when the certificate file was created. You can call this operation to query the files that are created after the time. Unit: milliseconds.
    std::shared_ptr<int64_t> startCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
