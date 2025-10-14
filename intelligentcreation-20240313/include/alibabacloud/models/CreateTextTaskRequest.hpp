// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextTaskCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateTextTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateTextTaskRequest() = default ;
    CreateTextTaskRequest(const CreateTextTaskRequest &) = default ;
    CreateTextTaskRequest(CreateTextTaskRequest &&) = default ;
    CreateTextTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextTaskRequest() = default ;
    CreateTextTaskRequest& operator=(const CreateTextTaskRequest &) = default ;
    CreateTextTaskRequest& operator=(CreateTextTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const TextTaskCreateCmd & body() const { DARABONBA_PTR_GET_CONST(body_, TextTaskCreateCmd) };
    inline TextTaskCreateCmd body() { DARABONBA_PTR_GET(body_, TextTaskCreateCmd) };
    inline CreateTextTaskRequest& setBody(const TextTaskCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateTextTaskRequest& setBody(TextTaskCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<TextTaskCreateCmd> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
