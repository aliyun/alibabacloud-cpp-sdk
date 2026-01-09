// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class ValidateKnowLedgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateKnowLedgeRequest() = default ;
    ValidateKnowLedgeRequest(const ValidateKnowLedgeRequest &) = default ;
    ValidateKnowLedgeRequest(ValidateKnowLedgeRequest &&) = default ;
    ValidateKnowLedgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateKnowLedgeRequest() = default ;
    ValidateKnowLedgeRequest& operator=(const ValidateKnowLedgeRequest &) = default ;
    ValidateKnowLedgeRequest& operator=(ValidateKnowLedgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<string> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<string>) };
    inline vector<string> getBody() { DARABONBA_PTR_GET(body_, vector<string>) };
    inline ValidateKnowLedgeRequest& setBody(const vector<string> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateKnowLedgeRequest& setBody(vector<string> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<vector<string>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
