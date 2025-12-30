// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushDomainsResponseBody() = default ;
    PushDomainsResponseBody(const PushDomainsResponseBody &) = default ;
    PushDomainsResponseBody(PushDomainsResponseBody &&) = default ;
    PushDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsResponseBody() = default ;
    PushDomainsResponseBody& operator=(const PushDomainsResponseBody &) = default ;
    PushDomainsResponseBody& operator=(PushDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(FailedResults, failedResults_);
        DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
        DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(SuccessDomains, successDomains_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedResults, failedResults_);
        DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
        DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(SuccessDomains, successDomains_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedResults& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        };
        friend void from_json(const Darabonba::Json& j, FailedResults& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        };
        FailedResults() = default ;
        FailedResults(const FailedResults &) = default ;
        FailedResults(FailedResults &&) = default ;
        FailedResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedResults() = default ;
        FailedResults& operator=(const FailedResults &) = default ;
        FailedResults& operator=(FailedResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline FailedResults& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline FailedResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline FailedResults& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMsg_ {};
      };

      virtual bool empty() const override { return this->failedResults_ == nullptr
        && this->outBizId_ == nullptr && this->pushNo_ == nullptr && this->success_ == nullptr && this->successDomains_ == nullptr; };
      // failedResults Field Functions 
      bool hasFailedResults() const { return this->failedResults_ != nullptr;};
      void deleteFailedResults() { this->failedResults_ = nullptr;};
      inline const vector<Module::FailedResults> & getFailedResults() const { DARABONBA_PTR_GET_CONST(failedResults_, vector<Module::FailedResults>) };
      inline vector<Module::FailedResults> getFailedResults() { DARABONBA_PTR_GET(failedResults_, vector<Module::FailedResults>) };
      inline Module& setFailedResults(const vector<Module::FailedResults> & failedResults) { DARABONBA_PTR_SET_VALUE(failedResults_, failedResults) };
      inline Module& setFailedResults(vector<Module::FailedResults> && failedResults) { DARABONBA_PTR_SET_RVALUE(failedResults_, failedResults) };


      // outBizId Field Functions 
      bool hasOutBizId() const { return this->outBizId_ != nullptr;};
      void deleteOutBizId() { this->outBizId_ = nullptr;};
      inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
      inline Module& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


      // pushNo Field Functions 
      bool hasPushNo() const { return this->pushNo_ != nullptr;};
      void deletePushNo() { this->pushNo_ = nullptr;};
      inline string getPushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
      inline Module& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Module& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // successDomains Field Functions 
      bool hasSuccessDomains() const { return this->successDomains_ != nullptr;};
      void deleteSuccessDomains() { this->successDomains_ = nullptr;};
      inline const vector<string> & getSuccessDomains() const { DARABONBA_PTR_GET_CONST(successDomains_, vector<string>) };
      inline vector<string> getSuccessDomains() { DARABONBA_PTR_GET(successDomains_, vector<string>) };
      inline Module& setSuccessDomains(const vector<string> & successDomains) { DARABONBA_PTR_SET_VALUE(successDomains_, successDomains) };
      inline Module& setSuccessDomains(vector<string> && successDomains) { DARABONBA_PTR_SET_RVALUE(successDomains_, successDomains) };


    protected:
      shared_ptr<vector<Module::FailedResults>> failedResults_ {};
      shared_ptr<string> outBizId_ {};
      shared_ptr<string> pushNo_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<vector<string>> successDomains_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const PushDomainsResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, PushDomainsResponseBody::Module) };
    inline PushDomainsResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, PushDomainsResponseBody::Module) };
    inline PushDomainsResponseBody& setModule(const PushDomainsResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline PushDomainsResponseBody& setModule(PushDomainsResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<PushDomainsResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
