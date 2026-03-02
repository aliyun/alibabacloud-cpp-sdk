// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEPBCREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEPBCREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevokeReviewCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RevokePbcReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokePbcReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RevokePbcReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RevokePbcReviewRequest() = default ;
    RevokePbcReviewRequest(const RevokePbcReviewRequest &) = default ;
    RevokePbcReviewRequest(RevokePbcReviewRequest &&) = default ;
    RevokePbcReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokePbcReviewRequest() = default ;
    RevokePbcReviewRequest& operator=(const RevokePbcReviewRequest &) = default ;
    RevokePbcReviewRequest& operator=(RevokePbcReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RevokeReviewCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RevokeReviewCmd) };
    inline RevokeReviewCmd getBody() { DARABONBA_PTR_GET(body_, RevokeReviewCmd) };
    inline RevokePbcReviewRequest& setBody(const RevokeReviewCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RevokePbcReviewRequest& setBody(RevokeReviewCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<RevokeReviewCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
