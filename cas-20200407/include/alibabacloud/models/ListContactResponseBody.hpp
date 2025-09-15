// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListContactResponseBodyContactList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactList, contactList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactList, contactList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListContactResponseBody() = default ;
    ListContactResponseBody(const ListContactResponseBody &) = default ;
    ListContactResponseBody(ListContactResponseBody &&) = default ;
    ListContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactResponseBody() = default ;
    ListContactResponseBody& operator=(const ListContactResponseBody &) = default ;
    ListContactResponseBody& operator=(ListContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactList_ != nullptr
        && this->currentPage_ != nullptr && this->keyword_ != nullptr && this->requestId_ != nullptr && this->showSize_ != nullptr && this->totalCount_ != nullptr; };
    // contactList Field Functions 
    bool hasContactList() const { return this->contactList_ != nullptr;};
    void deleteContactList() { this->contactList_ = nullptr;};
    inline const vector<ListContactResponseBodyContactList> & contactList() const { DARABONBA_PTR_GET_CONST(contactList_, vector<ListContactResponseBodyContactList>) };
    inline vector<ListContactResponseBodyContactList> contactList() { DARABONBA_PTR_GET(contactList_, vector<ListContactResponseBodyContactList>) };
    inline ListContactResponseBody& setContactList(const vector<ListContactResponseBodyContactList> & contactList) { DARABONBA_PTR_SET_VALUE(contactList_, contactList) };
    inline ListContactResponseBody& setContactList(vector<ListContactResponseBodyContactList> && contactList) { DARABONBA_PTR_SET_RVALUE(contactList_, contactList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListContactResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListContactResponseBody& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListContactResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListContactResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The contacts.
    std::shared_ptr<vector<ListContactResponseBodyContactList>> contactList_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The keyword used in the fuzzy search.
    std::shared_ptr<string> keyword_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of certificates per page. Default value: **20**.
    std::shared_ptr<int32_t> showSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
