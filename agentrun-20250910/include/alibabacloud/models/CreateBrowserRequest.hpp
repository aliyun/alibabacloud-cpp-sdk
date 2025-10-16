// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROWSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROWSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBrowserInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateBrowserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBrowserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBrowserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateBrowserRequest() = default ;
    CreateBrowserRequest(const CreateBrowserRequest &) = default ;
    CreateBrowserRequest(CreateBrowserRequest &&) = default ;
    CreateBrowserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBrowserRequest() = default ;
    CreateBrowserRequest& operator=(const CreateBrowserRequest &) = default ;
    CreateBrowserRequest& operator=(CreateBrowserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateBrowserInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateBrowserInput) };
    inline CreateBrowserInput body() { DARABONBA_PTR_GET(body_, CreateBrowserInput) };
    inline CreateBrowserRequest& setBody(const CreateBrowserInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateBrowserRequest& setBody(CreateBrowserInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateBrowserInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
