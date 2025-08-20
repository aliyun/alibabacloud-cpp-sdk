// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDynamicDisposalProcessesResponseBodyDisposalProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicDisposalProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DisposalProcesses, disposalProcesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DisposalProcesses, disposalProcesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDynamicDisposalProcessesResponseBody() = default ;
    ListDynamicDisposalProcessesResponseBody(const ListDynamicDisposalProcessesResponseBody &) = default ;
    ListDynamicDisposalProcessesResponseBody(ListDynamicDisposalProcessesResponseBody &&) = default ;
    ListDynamicDisposalProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesResponseBody() = default ;
    ListDynamicDisposalProcessesResponseBody& operator=(const ListDynamicDisposalProcessesResponseBody &) = default ;
    ListDynamicDisposalProcessesResponseBody& operator=(ListDynamicDisposalProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disposalProcesses_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // disposalProcesses Field Functions 
    bool hasDisposalProcesses() const { return this->disposalProcesses_ != nullptr;};
    void deleteDisposalProcesses() { this->disposalProcesses_ = nullptr;};
    inline const vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses> & disposalProcesses() const { DARABONBA_PTR_GET_CONST(disposalProcesses_, vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses>) };
    inline vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses> disposalProcesses() { DARABONBA_PTR_GET(disposalProcesses_, vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses>) };
    inline ListDynamicDisposalProcessesResponseBody& setDisposalProcesses(const vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses> & disposalProcesses) { DARABONBA_PTR_SET_VALUE(disposalProcesses_, disposalProcesses) };
    inline ListDynamicDisposalProcessesResponseBody& setDisposalProcesses(vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses> && disposalProcesses) { DARABONBA_PTR_SET_RVALUE(disposalProcesses_, disposalProcesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicDisposalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDynamicDisposalProcessesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // List of disposal processes.
    std::shared_ptr<vector<ListDynamicDisposalProcessesResponseBodyDisposalProcesses>> disposalProcesses_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of dynamic disposal processes.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
