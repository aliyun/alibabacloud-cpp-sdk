// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDITFORKREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUDITFORKREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ForkReviewAuditCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AuditForkReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuditForkReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AuditForkReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AuditForkReviewRequest() = default ;
    AuditForkReviewRequest(const AuditForkReviewRequest &) = default ;
    AuditForkReviewRequest(AuditForkReviewRequest &&) = default ;
    AuditForkReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuditForkReviewRequest() = default ;
    AuditForkReviewRequest& operator=(const AuditForkReviewRequest &) = default ;
    AuditForkReviewRequest& operator=(AuditForkReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ForkReviewAuditCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ForkReviewAuditCmd) };
    inline ForkReviewAuditCmd getBody() { DARABONBA_PTR_GET(body_, ForkReviewAuditCmd) };
    inline AuditForkReviewRequest& setBody(const ForkReviewAuditCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AuditForkReviewRequest& setBody(ForkReviewAuditCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ForkReviewAuditCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
