// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORKREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORKREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ForkReviewCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateForkReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForkReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForkReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateForkReviewRequest() = default ;
    CreateForkReviewRequest(const CreateForkReviewRequest &) = default ;
    CreateForkReviewRequest(CreateForkReviewRequest &&) = default ;
    CreateForkReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForkReviewRequest() = default ;
    CreateForkReviewRequest& operator=(const CreateForkReviewRequest &) = default ;
    CreateForkReviewRequest& operator=(CreateForkReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ForkReviewCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ForkReviewCreateCmd) };
    inline ForkReviewCreateCmd getBody() { DARABONBA_PTR_GET(body_, ForkReviewCreateCmd) };
    inline CreateForkReviewRequest& setBody(const ForkReviewCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateForkReviewRequest& setBody(ForkReviewCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ForkReviewCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
