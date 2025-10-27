// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListOperationProcessDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationProcessDetailResponseBodyProcessDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ProcessDetails, processDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ProcessDetails, processDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationProcessDetailResponseBody() = default ;
    ListOperationProcessDetailResponseBody(const ListOperationProcessDetailResponseBody &) = default ;
    ListOperationProcessDetailResponseBody(ListOperationProcessDetailResponseBody &&) = default ;
    ListOperationProcessDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessDetailResponseBody() = default ;
    ListOperationProcessDetailResponseBody& operator=(const ListOperationProcessDetailResponseBody &) = default ;
    ListOperationProcessDetailResponseBody& operator=(ListOperationProcessDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->processDetails_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOperationProcessDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOperationProcessDetailResponseBodyPageInfo) };
    inline ListOperationProcessDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOperationProcessDetailResponseBodyPageInfo) };
    inline ListOperationProcessDetailResponseBody& setPageInfo(const ListOperationProcessDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOperationProcessDetailResponseBody& setPageInfo(ListOperationProcessDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // processDetails Field Functions 
    bool hasProcessDetails() const { return this->processDetails_ != nullptr;};
    void deleteProcessDetails() { this->processDetails_ = nullptr;};
    inline const vector<ListOperationProcessDetailResponseBodyProcessDetails> & processDetails() const { DARABONBA_PTR_GET_CONST(processDetails_, vector<ListOperationProcessDetailResponseBodyProcessDetails>) };
    inline vector<ListOperationProcessDetailResponseBodyProcessDetails> processDetails() { DARABONBA_PTR_GET(processDetails_, vector<ListOperationProcessDetailResponseBodyProcessDetails>) };
    inline ListOperationProcessDetailResponseBody& setProcessDetails(const vector<ListOperationProcessDetailResponseBodyProcessDetails> & processDetails) { DARABONBA_PTR_SET_VALUE(processDetails_, processDetails) };
    inline ListOperationProcessDetailResponseBody& setProcessDetails(vector<ListOperationProcessDetailResponseBodyProcessDetails> && processDetails) { DARABONBA_PTR_SET_RVALUE(processDetails_, processDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationProcessDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListOperationProcessDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The information about the operation subtasks.
    std::shared_ptr<vector<ListOperationProcessDetailResponseBodyProcessDetails>> processDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
