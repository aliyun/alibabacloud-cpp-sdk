// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODY_HPP_
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
  class GetK8sAppPrecheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sAppPrecheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sAppPrecheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetK8sAppPrecheckResultResponseBody() = default ;
    GetK8sAppPrecheckResultResponseBody(const GetK8sAppPrecheckResultResponseBody &) = default ;
    GetK8sAppPrecheckResultResponseBody(GetK8sAppPrecheckResultResponseBody &&) = default ;
    GetK8sAppPrecheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sAppPrecheckResultResponseBody() = default ;
    GetK8sAppPrecheckResultResponseBody& operator=(const GetK8sAppPrecheckResultResponseBody &) = default ;
    GetK8sAppPrecheckResultResponseBody& operator=(GetK8sAppPrecheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobResults, jobResults_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobResults, jobResults_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class JobResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobResults& obj) { 
          DARABONBA_PTR_TO_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pass, pass_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, JobResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pass, pass_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        JobResults() = default ;
        JobResults(const JobResults &) = default ;
        JobResults(JobResults &&) = default ;
        JobResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobResults() = default ;
        JobResults& operator=(const JobResults &) = default ;
        JobResults& operator=(JobResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interrupted_ == nullptr
        && this->name_ == nullptr && this->pass_ == nullptr && this->reason_ == nullptr; };
        // interrupted Field Functions 
        bool hasInterrupted() const { return this->interrupted_ != nullptr;};
        void deleteInterrupted() { this->interrupted_ = nullptr;};
        inline bool getInterrupted() const { DARABONBA_PTR_GET_DEFAULT(interrupted_, false) };
        inline JobResults& setInterrupted(bool interrupted) { DARABONBA_PTR_SET_VALUE(interrupted_, interrupted) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline JobResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pass Field Functions 
        bool hasPass() const { return this->pass_ != nullptr;};
        void deletePass() { this->pass_ = nullptr;};
        inline bool getPass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
        inline JobResults& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline JobResults& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // Specifies whether the precheck of the item was interrupted:
        // 
        // - true: The precheck of the item was interrupted.
        // 
        // - false: The precheck of the item was not interrupted.
        shared_ptr<bool> interrupted_ {};
        // The name of the precheck item.
        shared_ptr<string> name_ {};
        // Indicates whether the precheck item passed the precheck:
        // 
        // - true: The precheck item passed the precheck.
        // 
        // - false: The precheck item failed the precheck.
        shared_ptr<bool> pass_ {};
        // The reason why the precheck item failed the precheck or the precheck of the item was interrupted. This parameter is left empty when the application passed the precheck.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->jobResults_ == nullptr
        && this->reason_ == nullptr && this->status_ == nullptr; };
      // jobResults Field Functions 
      bool hasJobResults() const { return this->jobResults_ != nullptr;};
      void deleteJobResults() { this->jobResults_ = nullptr;};
      inline const vector<Data::JobResults> & getJobResults() const { DARABONBA_PTR_GET_CONST(jobResults_, vector<Data::JobResults>) };
      inline vector<Data::JobResults> getJobResults() { DARABONBA_PTR_GET(jobResults_, vector<Data::JobResults>) };
      inline Data& setJobResults(const vector<Data::JobResults> & jobResults) { DARABONBA_PTR_SET_VALUE(jobResults_, jobResults) };
      inline Data& setJobResults(vector<Data::JobResults> && jobResults) { DARABONBA_PTR_SET_RVALUE(jobResults_, jobResults) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The precheck result for the application change.
      shared_ptr<vector<Data::JobResults>> jobResults_ {};
      // The reason why the application failed the precheck. This parameter is left empty when the application passed the precheck.
      shared_ptr<string> reason_ {};
      // The precheck state for the application change. Valid values:
      // 
      // - checking: The application is being prechecked.
      // 
      // - pass: The application passed the precheck.
      // 
      // - failed: The application failed the precheck.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetK8sAppPrecheckResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetK8sAppPrecheckResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetK8sAppPrecheckResultResponseBody::Data) };
    inline GetK8sAppPrecheckResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetK8sAppPrecheckResultResponseBody::Data) };
    inline GetK8sAppPrecheckResultResponseBody& setData(const GetK8sAppPrecheckResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetK8sAppPrecheckResultResponseBody& setData(GetK8sAppPrecheckResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetK8sAppPrecheckResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetK8sAppPrecheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data that is returned.
    shared_ptr<GetK8sAppPrecheckResultResponseBody::Data> data_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
