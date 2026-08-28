// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDSQLLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDSQLLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyForwardSqlLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardSqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardSqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyForwardSqlLogConfigResponseBody() = default ;
    ModifyForwardSqlLogConfigResponseBody(const ModifyForwardSqlLogConfigResponseBody &) = default ;
    ModifyForwardSqlLogConfigResponseBody(ModifyForwardSqlLogConfigResponseBody &&) = default ;
    ModifyForwardSqlLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardSqlLogConfigResponseBody() = default ;
    ModifyForwardSqlLogConfigResponseBody& operator=(const ModifyForwardSqlLogConfigResponseBody &) = default ;
    ModifyForwardSqlLogConfigResponseBody& operator=(ModifyForwardSqlLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Logstore, logstore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(VpcEndpoint, vpcEndpoint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(VpcEndpoint, vpcEndpoint_);
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
      virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->vpcEndpoint_ == nullptr; };
      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
      inline Data& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Data& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // vpcEndpoint Field Functions 
      bool hasVpcEndpoint() const { return this->vpcEndpoint_ != nullptr;};
      void deleteVpcEndpoint() { this->vpcEndpoint_ = nullptr;};
      inline string getVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(vpcEndpoint_, "") };
      inline Data& setVpcEndpoint(string vpcEndpoint) { DARABONBA_PTR_SET_VALUE(vpcEndpoint_, vpcEndpoint) };


    protected:
      // The LogStore name for real-time delivery to Simple Log Service.
      shared_ptr<string> logstore_ {};
      // The project.
      shared_ptr<string> project_ {};
      // The VPC endpoint of the component.
      shared_ptr<string> vpcEndpoint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyForwardSqlLogConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyForwardSqlLogConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyForwardSqlLogConfigResponseBody::Data) };
    inline ModifyForwardSqlLogConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyForwardSqlLogConfigResponseBody::Data) };
    inline ModifyForwardSqlLogConfigResponseBody& setData(const ModifyForwardSqlLogConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyForwardSqlLogConfigResponseBody& setData(ModifyForwardSqlLogConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyForwardSqlLogConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyForwardSqlLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModifyForwardSqlLogConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // ForwardSqlLogResult
    shared_ptr<ModifyForwardSqlLogConfigResponseBody::Data> data_ {};
    // The returned message.
    // 
    // > If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // * true: The request is successful.
    // * false: The request fails.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
