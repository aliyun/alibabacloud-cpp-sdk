// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERPLINSPECTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERPLINSPECTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateRplInspectionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRplInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRplInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateRplInspectionTaskResponseBody() = default ;
    CreateRplInspectionTaskResponseBody(const CreateRplInspectionTaskResponseBody &) = default ;
    CreateRplInspectionTaskResponseBody(CreateRplInspectionTaskResponseBody &&) = default ;
    CreateRplInspectionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRplInspectionTaskResponseBody() = default ;
    CreateRplInspectionTaskResponseBody& operator=(const CreateRplInspectionTaskResponseBody &) = default ;
    CreateRplInspectionTaskResponseBody& operator=(CreateRplInspectionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->slinkTaskId_ == nullptr; };
      // slinkTaskId Field Functions 
      bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
      void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
      inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
      inline Data& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    protected:
      shared_ptr<string> slinkTaskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateRplInspectionTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateRplInspectionTaskResponseBody::Data) };
    inline CreateRplInspectionTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateRplInspectionTaskResponseBody::Data) };
    inline CreateRplInspectionTaskResponseBody& setData(const CreateRplInspectionTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRplInspectionTaskResponseBody& setData(CreateRplInspectionTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateRplInspectionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRplInspectionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateRplInspectionTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CreateRplInspectionTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
