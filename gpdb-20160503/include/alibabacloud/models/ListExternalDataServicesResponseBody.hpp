// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALDATASERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALDATASERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExternalDataServicesResponseBodyServiceItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListExternalDataServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalDataServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalDataServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListExternalDataServicesResponseBody() = default ;
    ListExternalDataServicesResponseBody(const ListExternalDataServicesResponseBody &) = default ;
    ListExternalDataServicesResponseBody(ListExternalDataServicesResponseBody &&) = default ;
    ListExternalDataServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalDataServicesResponseBody() = default ;
    ListExternalDataServicesResponseBody& operator=(const ListExternalDataServicesResponseBody &) = default ;
    ListExternalDataServicesResponseBody& operator=(ListExternalDataServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceItems_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExternalDataServicesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalDataServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceItems Field Functions 
    bool hasServiceItems() const { return this->serviceItems_ != nullptr;};
    void deleteServiceItems() { this->serviceItems_ = nullptr;};
    inline const vector<ListExternalDataServicesResponseBodyServiceItems> & serviceItems() const { DARABONBA_PTR_GET_CONST(serviceItems_, vector<ListExternalDataServicesResponseBodyServiceItems>) };
    inline vector<ListExternalDataServicesResponseBodyServiceItems> serviceItems() { DARABONBA_PTR_GET(serviceItems_, vector<ListExternalDataServicesResponseBodyServiceItems>) };
    inline ListExternalDataServicesResponseBody& setServiceItems(const vector<ListExternalDataServicesResponseBodyServiceItems> & serviceItems) { DARABONBA_PTR_SET_VALUE(serviceItems_, serviceItems) };
    inline ListExternalDataServicesResponseBody& setServiceItems(vector<ListExternalDataServicesResponseBodyServiceItems> && serviceItems) { DARABONBA_PTR_SET_RVALUE(serviceItems_, serviceItems) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListExternalDataServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried services.
    std::shared_ptr<vector<ListExternalDataServicesResponseBodyServiceItems>> serviceItems_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
