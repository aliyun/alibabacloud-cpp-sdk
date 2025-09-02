// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServiceGroupsResponseBodyGroupPagingResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupPagingResult, groupPagingResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupPagingResult, groupPagingResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataServiceGroupsResponseBody() = default ;
    ListDataServiceGroupsResponseBody(const ListDataServiceGroupsResponseBody &) = default ;
    ListDataServiceGroupsResponseBody(ListDataServiceGroupsResponseBody &&) = default ;
    ListDataServiceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceGroupsResponseBody() = default ;
    ListDataServiceGroupsResponseBody& operator=(const ListDataServiceGroupsResponseBody &) = default ;
    ListDataServiceGroupsResponseBody& operator=(ListDataServiceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupPagingResult_ != nullptr
        && this->requestId_ != nullptr; };
    // groupPagingResult Field Functions 
    bool hasGroupPagingResult() const { return this->groupPagingResult_ != nullptr;};
    void deleteGroupPagingResult() { this->groupPagingResult_ = nullptr;};
    inline const ListDataServiceGroupsResponseBodyGroupPagingResult & groupPagingResult() const { DARABONBA_PTR_GET_CONST(groupPagingResult_, ListDataServiceGroupsResponseBodyGroupPagingResult) };
    inline ListDataServiceGroupsResponseBodyGroupPagingResult groupPagingResult() { DARABONBA_PTR_GET(groupPagingResult_, ListDataServiceGroupsResponseBodyGroupPagingResult) };
    inline ListDataServiceGroupsResponseBody& setGroupPagingResult(const ListDataServiceGroupsResponseBodyGroupPagingResult & groupPagingResult) { DARABONBA_PTR_SET_VALUE(groupPagingResult_, groupPagingResult) };
    inline ListDataServiceGroupsResponseBody& setGroupPagingResult(ListDataServiceGroupsResponseBodyGroupPagingResult && groupPagingResult) { DARABONBA_PTR_SET_RVALUE(groupPagingResult_, groupPagingResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paging result for the business processes.
    std::shared_ptr<ListDataServiceGroupsResponseBodyGroupPagingResult> groupPagingResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
