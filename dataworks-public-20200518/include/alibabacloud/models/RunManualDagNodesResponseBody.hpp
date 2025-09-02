// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMANUALDAGNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNMANUALDAGNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RunManualDagNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunManualDagNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunManualDagNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunManualDagNodesResponseBody() = default ;
    RunManualDagNodesResponseBody(const RunManualDagNodesResponseBody &) = default ;
    RunManualDagNodesResponseBody(RunManualDagNodesResponseBody &&) = default ;
    RunManualDagNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunManualDagNodesResponseBody() = default ;
    RunManualDagNodesResponseBody& operator=(const RunManualDagNodesResponseBody &) = default ;
    RunManualDagNodesResponseBody& operator=(RunManualDagNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->requestId_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline RunManualDagNodesResponseBody& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunManualDagNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the DAG for the manually triggered workflow. You can call an operation with this parameter as a request parameter to query the details and states of the nodes in the manually triggered workflow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
