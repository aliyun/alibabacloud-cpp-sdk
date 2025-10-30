// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStreamingDataServicesResponseBodyServiceItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceItems, serviceItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingDataServicesResponseBody() = default ;
    ListStreamingDataServicesResponseBody(const ListStreamingDataServicesResponseBody &) = default ;
    ListStreamingDataServicesResponseBody(ListStreamingDataServicesResponseBody &&) = default ;
    ListStreamingDataServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataServicesResponseBody() = default ;
    ListStreamingDataServicesResponseBody& operator=(const ListStreamingDataServicesResponseBody &) = default ;
    ListStreamingDataServicesResponseBody& operator=(ListStreamingDataServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceItems_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingDataServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceItems Field Functions 
    bool hasServiceItems() const { return this->serviceItems_ != nullptr;};
    void deleteServiceItems() { this->serviceItems_ = nullptr;};
    inline const vector<ListStreamingDataServicesResponseBodyServiceItems> & serviceItems() const { DARABONBA_PTR_GET_CONST(serviceItems_, vector<ListStreamingDataServicesResponseBodyServiceItems>) };
    inline vector<ListStreamingDataServicesResponseBodyServiceItems> serviceItems() { DARABONBA_PTR_GET(serviceItems_, vector<ListStreamingDataServicesResponseBodyServiceItems>) };
    inline ListStreamingDataServicesResponseBody& setServiceItems(const vector<ListStreamingDataServicesResponseBodyServiceItems> & serviceItems) { DARABONBA_PTR_SET_VALUE(serviceItems_, serviceItems) };
    inline ListStreamingDataServicesResponseBody& setServiceItems(vector<ListStreamingDataServicesResponseBodyServiceItems> && serviceItems) { DARABONBA_PTR_SET_RVALUE(serviceItems_, serviceItems) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingDataServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns real-time data service items
    std::shared_ptr<vector<ListStreamingDataServicesResponseBodyServiceItems>> serviceItems_ = nullptr;
    // Total record count.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
