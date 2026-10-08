// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class StartK8sAppPrecheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartK8sAppPrecheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartK8sAppPrecheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartK8sAppPrecheckResponseBody() = default ;
    StartK8sAppPrecheckResponseBody(const StartK8sAppPrecheckResponseBody &) = default ;
    StartK8sAppPrecheckResponseBody(StartK8sAppPrecheckResponseBody &&) = default ;
    StartK8sAppPrecheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartK8sAppPrecheckResponseBody() = default ;
    StartK8sAppPrecheckResponseBody& operator=(const StartK8sAppPrecheckResponseBody &) = default ;
    StartK8sAppPrecheckResponseBody& operator=(StartK8sAppPrecheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
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
      virtual bool empty() const override { return this->jobs_ == nullptr; };
      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<string> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<string>) };
      inline vector<string> getJobs() { DARABONBA_PTR_GET(jobs_, vector<string>) };
      inline Data& setJobs(const vector<string> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Data& setJobs(vector<string> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    protected:
      // The jobs and the details about the jobs.
      shared_ptr<vector<string>> jobs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline StartK8sAppPrecheckResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartK8sAppPrecheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StartK8sAppPrecheckResponseBody::Data) };
    inline StartK8sAppPrecheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StartK8sAppPrecheckResponseBody::Data) };
    inline StartK8sAppPrecheckResponseBody& setData(const StartK8sAppPrecheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartK8sAppPrecheckResponseBody& setData(StartK8sAppPrecheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartK8sAppPrecheckResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartK8sAppPrecheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<StartK8sAppPrecheckResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
