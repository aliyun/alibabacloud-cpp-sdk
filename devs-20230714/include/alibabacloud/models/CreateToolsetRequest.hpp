// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOOLSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOOLSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class CreateToolsetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateToolsetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateToolsetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateToolsetRequest() = default ;
    CreateToolsetRequest(const CreateToolsetRequest &) = default ;
    CreateToolsetRequest(CreateToolsetRequest &&) = default ;
    CreateToolsetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateToolsetRequest() = default ;
    CreateToolsetRequest& operator=(const CreateToolsetRequest &) = default ;
    CreateToolsetRequest& operator=(CreateToolsetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Toolset & body() const { DARABONBA_PTR_GET_CONST(body_, Toolset) };
    inline Toolset body() { DARABONBA_PTR_GET(body_, Toolset) };
    inline CreateToolsetRequest& setBody(const Toolset & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateToolsetRequest& setBody(Toolset && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Toolset> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
