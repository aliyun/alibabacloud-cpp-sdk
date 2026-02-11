// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateRetcodeAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
    };
    CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody(CreateRetcodeAppResponseBody &&) = default ;
    CreateRetcodeAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody& operator=(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody& operator=(CreateRetcodeAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetcodeAppDataBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetcodeAppDataBean& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
      };
      friend void from_json(const Darabonba::Json& j, RetcodeAppDataBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
      };
      RetcodeAppDataBean() = default ;
      RetcodeAppDataBean(const RetcodeAppDataBean &) = default ;
      RetcodeAppDataBean(RetcodeAppDataBean &&) = default ;
      RetcodeAppDataBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetcodeAppDataBean() = default ;
      RetcodeAppDataBean& operator=(const RetcodeAppDataBean &) = default ;
      RetcodeAppDataBean& operator=(RetcodeAppDataBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->pid_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline RetcodeAppDataBean& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline RetcodeAppDataBean& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    protected:
      shared_ptr<int64_t> appId_ {};
      shared_ptr<string> pid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->retcodeAppDataBean_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRetcodeAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeAppDataBean Field Functions 
    bool hasRetcodeAppDataBean() const { return this->retcodeAppDataBean_ != nullptr;};
    void deleteRetcodeAppDataBean() { this->retcodeAppDataBean_ = nullptr;};
    inline const CreateRetcodeAppResponseBody::RetcodeAppDataBean & getRetcodeAppDataBean() const { DARABONBA_PTR_GET_CONST(retcodeAppDataBean_, CreateRetcodeAppResponseBody::RetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody::RetcodeAppDataBean getRetcodeAppDataBean() { DARABONBA_PTR_GET(retcodeAppDataBean_, CreateRetcodeAppResponseBody::RetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(const CreateRetcodeAppResponseBody::RetcodeAppDataBean & retcodeAppDataBean) { DARABONBA_PTR_SET_VALUE(retcodeAppDataBean_, retcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(CreateRetcodeAppResponseBody::RetcodeAppDataBean && retcodeAppDataBean) { DARABONBA_PTR_SET_RVALUE(retcodeAppDataBean_, retcodeAppDataBean) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateRetcodeAppResponseBody::RetcodeAppDataBean> retcodeAppDataBean_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
