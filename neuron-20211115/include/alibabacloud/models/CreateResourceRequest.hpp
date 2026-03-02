// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateResourceRequest() = default ;
    CreateResourceRequest(const CreateResourceRequest &) = default ;
    CreateResourceRequest(CreateResourceRequest &&) = default ;
    CreateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequest() = default ;
    CreateResourceRequest& operator=(const CreateResourceRequest &) = default ;
    CreateResourceRequest& operator=(CreateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResourceCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ResourceCreateCmd) };
    inline ResourceCreateCmd getBody() { DARABONBA_PTR_GET(body_, ResourceCreateCmd) };
    inline CreateResourceRequest& setBody(const ResourceCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateResourceRequest& setBody(ResourceCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ResourceCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
