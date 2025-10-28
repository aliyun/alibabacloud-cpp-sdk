// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHFUNCTIONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHFUNCTIONVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishVersionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PublishFunctionVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishFunctionVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishFunctionVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishFunctionVersionRequest() = default ;
    PublishFunctionVersionRequest(const PublishFunctionVersionRequest &) = default ;
    PublishFunctionVersionRequest(PublishFunctionVersionRequest &&) = default ;
    PublishFunctionVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishFunctionVersionRequest() = default ;
    PublishFunctionVersionRequest& operator=(const PublishFunctionVersionRequest &) = default ;
    PublishFunctionVersionRequest& operator=(PublishFunctionVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishVersionInput & body() const { DARABONBA_PTR_GET_CONST(body_, PublishVersionInput) };
    inline PublishVersionInput body() { DARABONBA_PTR_GET(body_, PublishVersionInput) };
    inline PublishFunctionVersionRequest& setBody(const PublishVersionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishFunctionVersionRequest& setBody(PublishVersionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The information about the function version.
    // 
    // This parameter is required.
    std::shared_ptr<PublishVersionInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
