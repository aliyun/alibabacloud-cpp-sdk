// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalProcessesResponseBodyProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApprovalProcessesResponseBody() = default ;
    ListApprovalProcessesResponseBody(const ListApprovalProcessesResponseBody &) = default ;
    ListApprovalProcessesResponseBody(ListApprovalProcessesResponseBody &&) = default ;
    ListApprovalProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesResponseBody() = default ;
    ListApprovalProcessesResponseBody& operator=(const ListApprovalProcessesResponseBody &) = default ;
    ListApprovalProcessesResponseBody& operator=(ListApprovalProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processes_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListApprovalProcessesResponseBodyProcesses> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListApprovalProcessesResponseBodyProcesses>) };
    inline vector<ListApprovalProcessesResponseBodyProcesses> processes() { DARABONBA_PTR_GET(processes_, vector<ListApprovalProcessesResponseBodyProcesses>) };
    inline ListApprovalProcessesResponseBody& setProcesses(const vector<ListApprovalProcessesResponseBodyProcesses> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListApprovalProcessesResponseBody& setProcesses(vector<ListApprovalProcessesResponseBodyProcesses> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListApprovalProcessesResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListApprovalProcessesResponseBodyProcesses>> processes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
