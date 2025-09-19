// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListOperationProcessResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationProcessResponseBodyProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationProcessResponseBody() = default ;
    ListOperationProcessResponseBody(const ListOperationProcessResponseBody &) = default ;
    ListOperationProcessResponseBody(ListOperationProcessResponseBody &&) = default ;
    ListOperationProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessResponseBody() = default ;
    ListOperationProcessResponseBody& operator=(const ListOperationProcessResponseBody &) = default ;
    ListOperationProcessResponseBody& operator=(ListOperationProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->processes_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOperationProcessResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOperationProcessResponseBodyPageInfo) };
    inline ListOperationProcessResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOperationProcessResponseBodyPageInfo) };
    inline ListOperationProcessResponseBody& setPageInfo(const ListOperationProcessResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOperationProcessResponseBody& setPageInfo(ListOperationProcessResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListOperationProcessResponseBodyProcesses> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListOperationProcessResponseBodyProcesses>) };
    inline vector<ListOperationProcessResponseBodyProcesses> processes() { DARABONBA_PTR_GET(processes_, vector<ListOperationProcessResponseBodyProcesses>) };
    inline ListOperationProcessResponseBody& setProcesses(const vector<ListOperationProcessResponseBodyProcesses> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListOperationProcessResponseBody& setProcesses(vector<ListOperationProcessResponseBodyProcesses> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListOperationProcessResponseBodyPageInfo> pageInfo_ = nullptr;
    // The information about the operation tasks.
    std::shared_ptr<vector<ListOperationProcessResponseBodyProcesses>> processes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
