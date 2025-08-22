// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    GetSyntheticTaskDetailResponseBody() = default ;
    GetSyntheticTaskDetailResponseBody(const GetSyntheticTaskDetailResponseBody &) = default ;
    GetSyntheticTaskDetailResponseBody(GetSyntheticTaskDetailResponseBody &&) = default ;
    GetSyntheticTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBody() = default ;
    GetSyntheticTaskDetailResponseBody& operator=(const GetSyntheticTaskDetailResponseBody &) = default ;
    GetSyntheticTaskDetailResponseBody& operator=(GetSyntheticTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskDetail_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const GetSyntheticTaskDetailResponseBodyTaskDetail & taskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, GetSyntheticTaskDetailResponseBodyTaskDetail) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail taskDetail() { DARABONBA_PTR_GET(taskDetail_, GetSyntheticTaskDetailResponseBodyTaskDetail) };
    inline GetSyntheticTaskDetailResponseBody& setTaskDetail(const GetSyntheticTaskDetailResponseBodyTaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline GetSyntheticTaskDetailResponseBody& setTaskDetail(GetSyntheticTaskDetailResponseBodyTaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the task.
    std::shared_ptr<GetSyntheticTaskDetailResponseBodyTaskDetail> taskDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
