// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceTypeRegistrationsResponseBodyRegistrations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(Registrations, registrations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(Registrations, registrations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceTypeRegistrationsResponseBody() = default ;
    ListResourceTypeRegistrationsResponseBody(const ListResourceTypeRegistrationsResponseBody &) = default ;
    ListResourceTypeRegistrationsResponseBody(ListResourceTypeRegistrationsResponseBody &&) = default ;
    ListResourceTypeRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeRegistrationsResponseBody() = default ;
    ListResourceTypeRegistrationsResponseBody& operator=(const ListResourceTypeRegistrationsResponseBody &) = default ;
    ListResourceTypeRegistrationsResponseBody& operator=(ListResourceTypeRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->registrations_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceTypeRegistrationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // registrations Field Functions 
    bool hasRegistrations() const { return this->registrations_ != nullptr;};
    void deleteRegistrations() { this->registrations_ = nullptr;};
    inline const vector<ListResourceTypeRegistrationsResponseBodyRegistrations> & registrations() const { DARABONBA_PTR_GET_CONST(registrations_, vector<ListResourceTypeRegistrationsResponseBodyRegistrations>) };
    inline vector<ListResourceTypeRegistrationsResponseBodyRegistrations> registrations() { DARABONBA_PTR_GET(registrations_, vector<ListResourceTypeRegistrationsResponseBodyRegistrations>) };
    inline ListResourceTypeRegistrationsResponseBody& setRegistrations(const vector<ListResourceTypeRegistrationsResponseBodyRegistrations> & registrations) { DARABONBA_PTR_SET_VALUE(registrations_, registrations) };
    inline ListResourceTypeRegistrationsResponseBody& setRegistrations(vector<ListResourceTypeRegistrationsResponseBodyRegistrations> && registrations) { DARABONBA_PTR_SET_RVALUE(registrations_, registrations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypeRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceTypeRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The registration records of the resource.
    std::shared_ptr<vector<ListResourceTypeRegistrationsResponseBodyRegistrations>> registrations_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of registration records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
