// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertContactResponseBodyPageBeanContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertContactResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchAlertContactResponseBodyPageBean() = default ;
    SearchAlertContactResponseBodyPageBean(const SearchAlertContactResponseBodyPageBean &) = default ;
    SearchAlertContactResponseBodyPageBean(SearchAlertContactResponseBodyPageBean &&) = default ;
    SearchAlertContactResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactResponseBodyPageBean() = default ;
    SearchAlertContactResponseBodyPageBean& operator=(const SearchAlertContactResponseBodyPageBean &) = default ;
    SearchAlertContactResponseBodyPageBean& operator=(SearchAlertContactResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contacts_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::SearchAlertContactResponseBodyPageBeanContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::SearchAlertContactResponseBodyPageBeanContacts>) };
    inline vector<Models::SearchAlertContactResponseBodyPageBeanContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::SearchAlertContactResponseBodyPageBeanContacts>) };
    inline SearchAlertContactResponseBodyPageBean& setContacts(const vector<Models::SearchAlertContactResponseBodyPageBeanContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline SearchAlertContactResponseBodyPageBean& setContacts(vector<Models::SearchAlertContactResponseBodyPageBeanContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAlertContactResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAlertContactResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchAlertContactResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the alert contacts.
    std::shared_ptr<vector<Models::SearchAlertContactResponseBodyPageBeanContacts>> contacts_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
