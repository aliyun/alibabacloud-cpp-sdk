// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANSWERSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDANSWERSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddAnswerSampleResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddAnswerSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAnswerSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAnswerSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AddAnswerSampleResponseBody() = default ;
    AddAnswerSampleResponseBody(const AddAnswerSampleResponseBody &) = default ;
    AddAnswerSampleResponseBody(AddAnswerSampleResponseBody &&) = default ;
    AddAnswerSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAnswerSampleResponseBody() = default ;
    AddAnswerSampleResponseBody& operator=(const AddAnswerSampleResponseBody &) = default ;
    AddAnswerSampleResponseBody& operator=(AddAnswerSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->taskId_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline AddAnswerSampleResponseBody& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAnswerSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddAnswerSampleResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, AddAnswerSampleResponseBodyResult) };
    inline AddAnswerSampleResponseBodyResult result() { DARABONBA_PTR_GET(result_, AddAnswerSampleResponseBodyResult) };
    inline AddAnswerSampleResponseBody& setResult(const AddAnswerSampleResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddAnswerSampleResponseBody& setResult(AddAnswerSampleResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AddAnswerSampleResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<AddAnswerSampleResponseBodyResult> result_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
