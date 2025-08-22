// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSyntheticTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSyntheticTaskResponseBody() = default ;
    CreateSyntheticTaskResponseBody(const CreateSyntheticTaskResponseBody &) = default ;
    CreateSyntheticTaskResponseBody(CreateSyntheticTaskResponseBody &&) = default ;
    CreateSyntheticTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskResponseBody() = default ;
    CreateSyntheticTaskResponseBody& operator=(const CreateSyntheticTaskResponseBody &) = default ;
    CreateSyntheticTaskResponseBody& operator=(CreateSyntheticTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->msg_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSyntheticTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSyntheticTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateSyntheticTaskResponseBodyData) };
    inline CreateSyntheticTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateSyntheticTaskResponseBodyData) };
    inline CreateSyntheticTaskResponseBody& setData(const CreateSyntheticTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSyntheticTaskResponseBody& setData(CreateSyntheticTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CreateSyntheticTaskResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSyntheticTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code returned.
    // 
    // *   1001: The request was successful.
    // *   1002: The request failed.
    // *   1003: Parameter errors occurred.
    // *   1004: Authentication failed.
    // *   1006: The task does not exist.
    // *   1099: Internal errors occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the synthetic monitoring task.
    std::shared_ptr<CreateSyntheticTaskResponseBodyData> data_ = nullptr;
    // The message that is returned when the task failed to be created.
    std::shared_ptr<string> msg_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
