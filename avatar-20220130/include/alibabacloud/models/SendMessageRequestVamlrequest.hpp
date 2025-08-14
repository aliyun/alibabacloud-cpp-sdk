// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUESTVAMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUESTVAMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendMessageRequestVAMLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequestVAMLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Vaml, vaml_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequestVAMLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Vaml, vaml_);
    };
    SendMessageRequestVAMLRequest() = default ;
    SendMessageRequestVAMLRequest(const SendMessageRequestVAMLRequest &) = default ;
    SendMessageRequestVAMLRequest(SendMessageRequestVAMLRequest &&) = default ;
    SendMessageRequestVAMLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequestVAMLRequest() = default ;
    SendMessageRequestVAMLRequest& operator=(const SendMessageRequestVAMLRequest &) = default ;
    SendMessageRequestVAMLRequest& operator=(SendMessageRequestVAMLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->vaml_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendMessageRequestVAMLRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // vaml Field Functions 
    bool hasVaml() const { return this->vaml_ != nullptr;};
    void deleteVaml() { this->vaml_ = nullptr;};
    inline string vaml() const { DARABONBA_PTR_GET_DEFAULT(vaml_, "") };
    inline SendMessageRequestVAMLRequest& setVaml(string vaml) { DARABONBA_PTR_SET_VALUE(vaml_, vaml) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> vaml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
