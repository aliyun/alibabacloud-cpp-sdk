// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEILLUSTRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEILLUSTRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IllustrationTaskCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateIllustrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIllustrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIllustrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateIllustrationTaskRequest() = default ;
    CreateIllustrationTaskRequest(const CreateIllustrationTaskRequest &) = default ;
    CreateIllustrationTaskRequest(CreateIllustrationTaskRequest &&) = default ;
    CreateIllustrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIllustrationTaskRequest() = default ;
    CreateIllustrationTaskRequest& operator=(const CreateIllustrationTaskRequest &) = default ;
    CreateIllustrationTaskRequest& operator=(CreateIllustrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const IllustrationTaskCreateCmd & body() const { DARABONBA_PTR_GET_CONST(body_, IllustrationTaskCreateCmd) };
    inline IllustrationTaskCreateCmd body() { DARABONBA_PTR_GET(body_, IllustrationTaskCreateCmd) };
    inline CreateIllustrationTaskRequest& setBody(const IllustrationTaskCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateIllustrationTaskRequest& setBody(IllustrationTaskCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<IllustrationTaskCreateCmd> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
