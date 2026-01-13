// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRAFFICCONTROLTASKCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRAFFICCONTROLTASKCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GenerateTrafficControlTaskCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTrafficControlTaskCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(PreNeedConfig, preNeedConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTrafficControlTaskCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(PreNeedConfig, preNeedConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateTrafficControlTaskCodeResponseBody() = default ;
    GenerateTrafficControlTaskCodeResponseBody(const GenerateTrafficControlTaskCodeResponseBody &) = default ;
    GenerateTrafficControlTaskCodeResponseBody(GenerateTrafficControlTaskCodeResponseBody &&) = default ;
    GenerateTrafficControlTaskCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTrafficControlTaskCodeResponseBody() = default ;
    GenerateTrafficControlTaskCodeResponseBody& operator=(const GenerateTrafficControlTaskCodeResponseBody &) = default ;
    GenerateTrafficControlTaskCodeResponseBody& operator=(GenerateTrafficControlTaskCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->preNeedConfig_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateTrafficControlTaskCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // preNeedConfig Field Functions 
    bool hasPreNeedConfig() const { return this->preNeedConfig_ != nullptr;};
    void deletePreNeedConfig() { this->preNeedConfig_ = nullptr;};
    inline bool getPreNeedConfig() const { DARABONBA_PTR_GET_DEFAULT(preNeedConfig_, false) };
    inline GenerateTrafficControlTaskCodeResponseBody& setPreNeedConfig(bool preNeedConfig) { DARABONBA_PTR_SET_VALUE(preNeedConfig_, preNeedConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTrafficControlTaskCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<bool> preNeedConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
