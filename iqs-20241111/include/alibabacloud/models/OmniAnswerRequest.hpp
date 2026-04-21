// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OMNIANSWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OMNIANSWERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OmniSearchQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class OmniAnswerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OmniAnswerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, OmniAnswerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    OmniAnswerRequest() = default ;
    OmniAnswerRequest(const OmniAnswerRequest &) = default ;
    OmniAnswerRequest(OmniAnswerRequest &&) = default ;
    OmniAnswerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OmniAnswerRequest() = default ;
    OmniAnswerRequest& operator=(const OmniAnswerRequest &) = default ;
    OmniAnswerRequest& operator=(OmniAnswerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OmniSearchQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, OmniSearchQuery) };
    inline OmniSearchQuery getBody() { DARABONBA_PTR_GET(body_, OmniSearchQuery) };
    inline OmniAnswerRequest& setBody(const OmniSearchQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline OmniAnswerRequest& setBody(OmniSearchQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<OmniSearchQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
