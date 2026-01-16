// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYERVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYERVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLayerVersionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateLayerVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayerVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayerVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateLayerVersionRequest() = default ;
    CreateLayerVersionRequest(const CreateLayerVersionRequest &) = default ;
    CreateLayerVersionRequest(CreateLayerVersionRequest &&) = default ;
    CreateLayerVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayerVersionRequest() = default ;
    CreateLayerVersionRequest& operator=(const CreateLayerVersionRequest &) = default ;
    CreateLayerVersionRequest& operator=(CreateLayerVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateLayerVersionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateLayerVersionInput) };
    inline CreateLayerVersionInput getBody() { DARABONBA_PTR_GET(body_, CreateLayerVersionInput) };
    inline CreateLayerVersionRequest& setBody(const CreateLayerVersionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateLayerVersionRequest& setBody(CreateLayerVersionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The information about layer configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateLayerVersionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
