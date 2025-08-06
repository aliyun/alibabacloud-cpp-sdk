// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERYFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOVERYFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecoveryFileResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RecoveryFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoveryFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoveryFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RecoveryFileResponseBody() = default ;
    RecoveryFileResponseBody(const RecoveryFileResponseBody &) = default ;
    RecoveryFileResponseBody(RecoveryFileResponseBody &&) = default ;
    RecoveryFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoveryFileResponseBody() = default ;
    RecoveryFileResponseBody& operator=(const RecoveryFileResponseBody &) = default ;
    RecoveryFileResponseBody& operator=(RecoveryFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr && this->taskId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline RecoveryFileResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<RecoveryFileResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<RecoveryFileResponseBodyData>) };
    inline vector<RecoveryFileResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<RecoveryFileResponseBodyData>) };
    inline RecoveryFileResponseBody& setData(const vector<RecoveryFileResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecoveryFileResponseBody& setData(vector<RecoveryFileResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecoveryFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RecoveryFileResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The number of restored instances.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The backup file that is restored.
    std::shared_ptr<vector<RecoveryFileResponseBodyData>> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the batch task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
