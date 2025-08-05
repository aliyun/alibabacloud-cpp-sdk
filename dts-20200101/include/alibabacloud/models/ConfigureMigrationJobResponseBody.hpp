// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ConfigureMigrationJobResponseBody() = default ;
    ConfigureMigrationJobResponseBody(const ConfigureMigrationJobResponseBody &) = default ;
    ConfigureMigrationJobResponseBody(ConfigureMigrationJobResponseBody &&) = default ;
    ConfigureMigrationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobResponseBody() = default ;
    ConfigureMigrationJobResponseBody& operator=(const ConfigureMigrationJobResponseBody &) = default ;
    ConfigureMigrationJobResponseBody& operator=(ConfigureMigrationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errCode_ != nullptr
        && this->errMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ConfigureMigrationJobResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ConfigureMigrationJobResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigureMigrationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ConfigureMigrationJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> errCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The start offset of incremental data migration. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> requestId_ = nullptr;
    // The SID of the Oracle database.
    // 
    // >  You must specify this parameter only if the **DestinationEndpoint.EngineName** parameter is set to **Oracle** and the **Oracle** database is deployed in a non-RAC architecture.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
