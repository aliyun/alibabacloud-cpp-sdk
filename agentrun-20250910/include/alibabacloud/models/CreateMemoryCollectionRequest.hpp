// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYCOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYCOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMemoryCollectionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateMemoryCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMemoryCollectionRequest() = default ;
    CreateMemoryCollectionRequest(const CreateMemoryCollectionRequest &) = default ;
    CreateMemoryCollectionRequest(CreateMemoryCollectionRequest &&) = default ;
    CreateMemoryCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryCollectionRequest() = default ;
    CreateMemoryCollectionRequest& operator=(const CreateMemoryCollectionRequest &) = default ;
    CreateMemoryCollectionRequest& operator=(CreateMemoryCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateMemoryCollectionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateMemoryCollectionInput) };
    inline CreateMemoryCollectionInput getBody() { DARABONBA_PTR_GET(body_, CreateMemoryCollectionInput) };
    inline CreateMemoryCollectionRequest& setBody(const CreateMemoryCollectionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMemoryCollectionRequest& setBody(CreateMemoryCollectionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateMemoryCollectionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
