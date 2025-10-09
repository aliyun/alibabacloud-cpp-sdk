// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskInstancesResponseBodyPagingInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTaskInstancesResponseBody() = default ;
    ListTaskInstancesResponseBody(const ListTaskInstancesResponseBody &) = default ;
    ListTaskInstancesResponseBody(ListTaskInstancesResponseBody &&) = default ;
    ListTaskInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstancesResponseBody() = default ;
    ListTaskInstancesResponseBody& operator=(const ListTaskInstancesResponseBody &) = default ;
    ListTaskInstancesResponseBody& operator=(ListTaskInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pagingInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListTaskInstancesResponseBodyPagingInfo & pagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListTaskInstancesResponseBodyPagingInfo) };
    inline ListTaskInstancesResponseBodyPagingInfo pagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListTaskInstancesResponseBodyPagingInfo) };
    inline ListTaskInstancesResponseBody& setPagingInfo(const ListTaskInstancesResponseBodyPagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListTaskInstancesResponseBody& setPagingInfo(ListTaskInstancesResponseBodyPagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination details.
    std::shared_ptr<ListTaskInstancesResponseBodyPagingInfo> pagingInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
