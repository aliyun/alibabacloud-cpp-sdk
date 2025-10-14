// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEAICOACHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchCreateAICoachTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateAICoachTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateAICoachTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
    };
    BatchCreateAICoachTaskResponseBody() = default ;
    BatchCreateAICoachTaskResponseBody(const BatchCreateAICoachTaskResponseBody &) = default ;
    BatchCreateAICoachTaskResponseBody(BatchCreateAICoachTaskResponseBody &&) = default ;
    BatchCreateAICoachTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateAICoachTaskResponseBody() = default ;
    BatchCreateAICoachTaskResponseBody& operator=(const BatchCreateAICoachTaskResponseBody &) = default ;
    BatchCreateAICoachTaskResponseBody& operator=(BatchCreateAICoachTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateAICoachTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline BatchCreateAICoachTaskResponseBody& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline BatchCreateAICoachTaskResponseBody& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
