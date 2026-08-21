// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMORGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMORGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateCustomOrgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomOrgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(corpName, corpName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(platformType, platformType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomOrgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(corpName, corpName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(platformType, platformType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateCustomOrgResponseBody() = default ;
    CreateCustomOrgResponseBody(const CreateCustomOrgResponseBody &) = default ;
    CreateCustomOrgResponseBody(CreateCustomOrgResponseBody &&) = default ;
    CreateCustomOrgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomOrgResponseBody() = default ;
    CreateCustomOrgResponseBody& operator=(const CreateCustomOrgResponseBody &) = default ;
    CreateCustomOrgResponseBody& operator=(CreateCustomOrgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->corpId_ == nullptr && this->corpName_ == nullptr && this->message_ == nullptr && this->platformType_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCustomOrgResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CreateCustomOrgResponseBody& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CreateCustomOrgResponseBody& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCustomOrgResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline CreateCustomOrgResponseBody& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomOrgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The enterprise ID.
    shared_ptr<string> corpId_ {};
    // The organization name.
    shared_ptr<string> corpName_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The platform type.
    shared_ptr<string> platformType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
