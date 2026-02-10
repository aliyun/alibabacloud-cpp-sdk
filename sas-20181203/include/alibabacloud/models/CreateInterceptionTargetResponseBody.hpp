// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTERCEPTIONTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTERCEPTIONTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateInterceptionTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInterceptionTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInterceptionTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateInterceptionTargetResponseBody() = default ;
    CreateInterceptionTargetResponseBody(const CreateInterceptionTargetResponseBody &) = default ;
    CreateInterceptionTargetResponseBody(CreateInterceptionTargetResponseBody &&) = default ;
    CreateInterceptionTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInterceptionTargetResponseBody() = default ;
    CreateInterceptionTargetResponseBody& operator=(const CreateInterceptionTargetResponseBody &) = default ;
    CreateInterceptionTargetResponseBody& operator=(CreateInterceptionTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInterceptionTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline CreateInterceptionTargetResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response parameters.
    shared_ptr<bool> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
