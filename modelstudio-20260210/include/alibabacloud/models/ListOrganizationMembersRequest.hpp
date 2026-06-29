// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListOrganizationMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HasSeat, hasSeat_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HasSeat, hasSeat_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListOrganizationMembersRequest() = default ;
    ListOrganizationMembersRequest(const ListOrganizationMembersRequest &) = default ;
    ListOrganizationMembersRequest(ListOrganizationMembersRequest &&) = default ;
    ListOrganizationMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationMembersRequest() = default ;
    ListOrganizationMembersRequest& operator=(const ListOrganizationMembersRequest &) = default ;
    ListOrganizationMembersRequest& operator=(ListOrganizationMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasSeat_ == nullptr
        && this->name_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // hasSeat Field Functions 
    bool hasHasSeat() const { return this->hasSeat_ != nullptr;};
    void deleteHasSeat() { this->hasSeat_ = nullptr;};
    inline bool getHasSeat() const { DARABONBA_PTR_GET_DEFAULT(hasSeat_, false) };
    inline ListOrganizationMembersRequest& setHasSeat(bool hasSeat) { DARABONBA_PTR_SET_VALUE(hasSeat_, hasSeat) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOrganizationMembersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListOrganizationMembersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationMembersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOrganizationMembersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to filter by seat assignment.
    shared_ptr<bool> hasSeat_ {};
    // Fuzzy filter by member name. Matches accountName or email and is case-insensitive.
    shared_ptr<string> name_ {};
    // The page number, starting from 1. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by member status, such as ACTIVE or FROZEN. Set to null to disable filtering.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
