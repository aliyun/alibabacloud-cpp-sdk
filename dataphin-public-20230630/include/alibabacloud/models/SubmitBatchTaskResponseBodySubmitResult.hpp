// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKRESPONSEBODYSUBMITRESULT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKRESPONSEBODYSUBMITRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskResponseBodySubmitResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskResponseBodySubmitResult& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskResponseBodySubmitResult& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
    };
    SubmitBatchTaskResponseBodySubmitResult() = default ;
    SubmitBatchTaskResponseBodySubmitResult(const SubmitBatchTaskResponseBodySubmitResult &) = default ;
    SubmitBatchTaskResponseBodySubmitResult(SubmitBatchTaskResponseBodySubmitResult &&) = default ;
    SubmitBatchTaskResponseBodySubmitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskResponseBodySubmitResult() = default ;
    SubmitBatchTaskResponseBodySubmitResult& operator=(const SubmitBatchTaskResponseBodySubmitResult &) = default ;
    SubmitBatchTaskResponseBodySubmitResult& operator=(SubmitBatchTaskResponseBodySubmitResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->submitId_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline SubmitBatchTaskResponseBodySubmitResult& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // submitId Field Functions 
    bool hasSubmitId() const { return this->submitId_ != nullptr;};
    void deleteSubmitId() { this->submitId_ = nullptr;};
    inline int64_t submitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
    inline SubmitBatchTaskResponseBodySubmitResult& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


  protected:
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> submitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
