// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCINVOKEREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCINVOKEREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcInvokeReviewCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcInvokeReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcInvokeReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcInvokeReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcInvokeReviewRequest() = default ;
    CreatePbcInvokeReviewRequest(const CreatePbcInvokeReviewRequest &) = default ;
    CreatePbcInvokeReviewRequest(CreatePbcInvokeReviewRequest &&) = default ;
    CreatePbcInvokeReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcInvokeReviewRequest() = default ;
    CreatePbcInvokeReviewRequest& operator=(const CreatePbcInvokeReviewRequest &) = default ;
    CreatePbcInvokeReviewRequest& operator=(CreatePbcInvokeReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcInvokeReviewCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcInvokeReviewCreateCmd) };
    inline PbcInvokeReviewCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcInvokeReviewCreateCmd) };
    inline CreatePbcInvokeReviewRequest& setBody(const PbcInvokeReviewCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcInvokeReviewRequest& setBody(PbcInvokeReviewCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcInvokeReviewCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
