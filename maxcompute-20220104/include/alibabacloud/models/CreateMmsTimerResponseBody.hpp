// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSTIMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSTIMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsTimerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsTimerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsTimerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMmsTimerResponseBody() = default ;
    CreateMmsTimerResponseBody(const CreateMmsTimerResponseBody &) = default ;
    CreateMmsTimerResponseBody(CreateMmsTimerResponseBody &&) = default ;
    CreateMmsTimerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsTimerResponseBody() = default ;
    CreateMmsTimerResponseBody& operator=(const CreateMmsTimerResponseBody &) = default ;
    CreateMmsTimerResponseBody& operator=(CreateMmsTimerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(timerId, timerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(timerId, timerId_);
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
      virtual bool empty() const override { return this->timerId_ == nullptr; };
      // timerId Field Functions 
      bool hasTimerId() const { return this->timerId_ != nullptr;};
      void deleteTimerId() { this->timerId_ = nullptr;};
      inline int64_t getTimerId() const { DARABONBA_PTR_GET_DEFAULT(timerId_, 0L) };
      inline Data& setTimerId(int64_t timerId) { DARABONBA_PTR_SET_VALUE(timerId_, timerId) };


    protected:
      // timer id
      shared_ptr<int64_t> timerId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMmsTimerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateMmsTimerResponseBody::Data) };
    inline CreateMmsTimerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateMmsTimerResponseBody::Data) };
    inline CreateMmsTimerResponseBody& setData(const CreateMmsTimerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMmsTimerResponseBody& setData(CreateMmsTimerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMmsTimerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateMmsTimerResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
