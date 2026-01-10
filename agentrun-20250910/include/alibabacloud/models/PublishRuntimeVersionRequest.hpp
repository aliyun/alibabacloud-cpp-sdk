// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHRUNTIMEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHRUNTIMEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishRuntimeVersionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class PublishRuntimeVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRuntimeVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRuntimeVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishRuntimeVersionRequest() = default ;
    PublishRuntimeVersionRequest(const PublishRuntimeVersionRequest &) = default ;
    PublishRuntimeVersionRequest(PublishRuntimeVersionRequest &&) = default ;
    PublishRuntimeVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRuntimeVersionRequest() = default ;
    PublishRuntimeVersionRequest& operator=(const PublishRuntimeVersionRequest &) = default ;
    PublishRuntimeVersionRequest& operator=(PublishRuntimeVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishRuntimeVersionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, PublishRuntimeVersionInput) };
    inline PublishRuntimeVersionInput getBody() { DARABONBA_PTR_GET(body_, PublishRuntimeVersionInput) };
    inline PublishRuntimeVersionRequest& setBody(const PublishRuntimeVersionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishRuntimeVersionRequest& setBody(PublishRuntimeVersionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PublishRuntimeVersionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
