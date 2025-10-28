// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAliasInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAliasRequest() = default ;
    CreateAliasRequest(const CreateAliasRequest &) = default ;
    CreateAliasRequest(CreateAliasRequest &&) = default ;
    CreateAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAliasRequest() = default ;
    CreateAliasRequest& operator=(const CreateAliasRequest &) = default ;
    CreateAliasRequest& operator=(CreateAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAliasInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateAliasInput) };
    inline CreateAliasInput body() { DARABONBA_PTR_GET(body_, CreateAliasInput) };
    inline CreateAliasRequest& setBody(const CreateAliasInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAliasRequest& setBody(CreateAliasInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request parameters for creating an alias.
    // 
    // This parameter is required.
    std::shared_ptr<CreateAliasInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
