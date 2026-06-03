// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSVERIFYSTATISTICRECORDSEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSVERIFYSTATISTICRECORDSEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateSmsVerifyStatisticRecordsExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsVerifyStatisticRecordsExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_ANY_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsVerifyStatisticRecordsExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_ANY_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody() = default ;
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody(const CreateSmsVerifyStatisticRecordsExportTaskResponseBody &) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody(CreateSmsVerifyStatisticRecordsExportTaskResponseBody &&) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsVerifyStatisticRecordsExportTaskResponseBody() = default ;
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody& operator=(const CreateSmsVerifyStatisticRecordsExportTaskResponseBody &) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskResponseBody& operator=(CreateSmsVerifyStatisticRecordsExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline     const Darabonba::Json & getModel() const { DARABONBA_GET(model_) };
    Darabonba::Json & getModel() { DARABONBA_GET(model_) };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setModel(const Darabonba::Json & model) { DARABONBA_SET_VALUE(model_, model) };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setModel(Darabonba::Json && model) { DARABONBA_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateSmsVerifyStatisticRecordsExportTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    Darabonba::Json model_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
