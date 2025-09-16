// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPAUSEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPAUSEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BodyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyPausePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPausePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPausePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyPausePolicyRequest() = default ;
    ModifyPausePolicyRequest(const ModifyPausePolicyRequest &) = default ;
    ModifyPausePolicyRequest(ModifyPausePolicyRequest &&) = default ;
    ModifyPausePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPausePolicyRequest() = default ;
    ModifyPausePolicyRequest& operator=(const ModifyPausePolicyRequest &) = default ;
    ModifyPausePolicyRequest& operator=(ModifyPausePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const map<string, BodyValue> & body() const { DARABONBA_PTR_GET_CONST(body_, map<string, BodyValue>) };
    inline map<string, BodyValue> body() { DARABONBA_PTR_GET(body_, map<string, BodyValue>) };
    inline ModifyPausePolicyRequest& setBody(const map<string, BodyValue> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyPausePolicyRequest& setBody(map<string, BodyValue> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<map<string, BodyValue>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
