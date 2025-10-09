// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTaskInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDownstreamTaskInstancesResponseBody() = default ;
    ListDownstreamTaskInstancesResponseBody(const ListDownstreamTaskInstancesResponseBody &) = default ;
    ListDownstreamTaskInstancesResponseBody(ListDownstreamTaskInstancesResponseBody &&) = default ;
    ListDownstreamTaskInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTaskInstancesResponseBody() = default ;
    ListDownstreamTaskInstancesResponseBody& operator=(const ListDownstreamTaskInstancesResponseBody &) = default ;
    ListDownstreamTaskInstancesResponseBody& operator=(ListDownstreamTaskInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pagingInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDownstreamTaskInstancesResponseBodyPagingInfo & pagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDownstreamTaskInstancesResponseBodyPagingInfo) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo pagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDownstreamTaskInstancesResponseBodyPagingInfo) };
    inline ListDownstreamTaskInstancesResponseBody& setPagingInfo(const ListDownstreamTaskInstancesResponseBodyPagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDownstreamTaskInstancesResponseBody& setPagingInfo(ListDownstreamTaskInstancesResponseBodyPagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDownstreamTaskInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListDownstreamTaskInstancesResponseBodyPagingInfo> pagingInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
