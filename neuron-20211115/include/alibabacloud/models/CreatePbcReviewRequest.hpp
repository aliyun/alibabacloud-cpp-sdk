// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcReviewCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcReviewRequest() = default ;
    CreatePbcReviewRequest(const CreatePbcReviewRequest &) = default ;
    CreatePbcReviewRequest(CreatePbcReviewRequest &&) = default ;
    CreatePbcReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcReviewRequest() = default ;
    CreatePbcReviewRequest& operator=(const CreatePbcReviewRequest &) = default ;
    CreatePbcReviewRequest& operator=(CreatePbcReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcReviewCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcReviewCreateCmd) };
    inline PbcReviewCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcReviewCreateCmd) };
    inline CreatePbcReviewRequest& setBody(const PbcReviewCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcReviewRequest& setBody(PbcReviewCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcReviewCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
