// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageContactVerificationsResponseBodyContactVerifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListMessageContactVerificationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactVerificationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactVerifications, contactVerifications_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageContactVerificationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactVerifications, contactVerifications_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMessageContactVerificationsResponseBody() = default ;
    ListMessageContactVerificationsResponseBody(const ListMessageContactVerificationsResponseBody &) = default ;
    ListMessageContactVerificationsResponseBody(ListMessageContactVerificationsResponseBody &&) = default ;
    ListMessageContactVerificationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactVerificationsResponseBody() = default ;
    ListMessageContactVerificationsResponseBody& operator=(const ListMessageContactVerificationsResponseBody &) = default ;
    ListMessageContactVerificationsResponseBody& operator=(ListMessageContactVerificationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactVerifications_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // contactVerifications Field Functions 
    bool hasContactVerifications() const { return this->contactVerifications_ != nullptr;};
    void deleteContactVerifications() { this->contactVerifications_ = nullptr;};
    inline const vector<ListMessageContactVerificationsResponseBodyContactVerifications> & contactVerifications() const { DARABONBA_PTR_GET_CONST(contactVerifications_, vector<ListMessageContactVerificationsResponseBodyContactVerifications>) };
    inline vector<ListMessageContactVerificationsResponseBodyContactVerifications> contactVerifications() { DARABONBA_PTR_GET(contactVerifications_, vector<ListMessageContactVerificationsResponseBodyContactVerifications>) };
    inline ListMessageContactVerificationsResponseBody& setContactVerifications(const vector<ListMessageContactVerificationsResponseBodyContactVerifications> & contactVerifications) { DARABONBA_PTR_SET_VALUE(contactVerifications_, contactVerifications) };
    inline ListMessageContactVerificationsResponseBody& setContactVerifications(vector<ListMessageContactVerificationsResponseBodyContactVerifications> && contactVerifications) { DARABONBA_PTR_SET_RVALUE(contactVerifications_, contactVerifications) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMessageContactVerificationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageContactVerificationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageContactVerificationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMessageContactVerificationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The record for the contact to be verified.
    std::shared_ptr<vector<ListMessageContactVerificationsResponseBodyContactVerifications>> contactVerifications_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
