// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ValidateModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(moduleValidationId, moduleValidationId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(moduleValidationId, moduleValidationId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ValidateModuleResponseBody() = default ;
    ValidateModuleResponseBody(const ValidateModuleResponseBody &) = default ;
    ValidateModuleResponseBody(ValidateModuleResponseBody &&) = default ;
    ValidateModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateModuleResponseBody() = default ;
    ValidateModuleResponseBody& operator=(const ValidateModuleResponseBody &) = default ;
    ValidateModuleResponseBody& operator=(ValidateModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->moduleValidationId_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ValidateModuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moduleValidationId Field Functions 
    bool hasModuleValidationId() const { return this->moduleValidationId_ != nullptr;};
    void deleteModuleValidationId() { this->moduleValidationId_ = nullptr;};
    inline string moduleValidationId() const { DARABONBA_PTR_GET_DEFAULT(moduleValidationId_, "") };
    inline ValidateModuleResponseBody& setModuleValidationId(string moduleValidationId) { DARABONBA_PTR_SET_VALUE(moduleValidationId_, moduleValidationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ValidateModuleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> moduleValidationId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
