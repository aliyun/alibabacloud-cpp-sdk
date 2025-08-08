// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class CreateArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateArtifactRequest() = default ;
    CreateArtifactRequest(const CreateArtifactRequest &) = default ;
    CreateArtifactRequest(CreateArtifactRequest &&) = default ;
    CreateArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactRequest() = default ;
    CreateArtifactRequest& operator=(const CreateArtifactRequest &) = default ;
    CreateArtifactRequest& operator=(CreateArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Artifact & body() const { DARABONBA_PTR_GET_CONST(body_, Artifact) };
    inline Artifact body() { DARABONBA_PTR_GET(body_, Artifact) };
    inline CreateArtifactRequest& setBody(const Artifact & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateArtifactRequest& setBody(Artifact && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Artifact> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
