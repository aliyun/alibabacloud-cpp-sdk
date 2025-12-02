// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANSWERLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANSWERLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAnswerLibResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreateAnswerLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnswerLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnswerLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateAnswerLibResponseBody() = default ;
    CreateAnswerLibResponseBody(const CreateAnswerLibResponseBody &) = default ;
    CreateAnswerLibResponseBody(CreateAnswerLibResponseBody &&) = default ;
    CreateAnswerLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnswerLibResponseBody() = default ;
    CreateAnswerLibResponseBody& operator=(const CreateAnswerLibResponseBody &) = default ;
    CreateAnswerLibResponseBody& operator=(CreateAnswerLibResponseBody &&) = default ;
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
    inline CreateAnswerLibResponseBody& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAnswerLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateAnswerLibResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateAnswerLibResponseBodyResult) };
    inline CreateAnswerLibResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateAnswerLibResponseBodyResult) };
    inline CreateAnswerLibResponseBody& setResult(const CreateAnswerLibResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateAnswerLibResponseBody& setResult(CreateAnswerLibResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateAnswerLibResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateAnswerLibResponseBodyResult> result_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
