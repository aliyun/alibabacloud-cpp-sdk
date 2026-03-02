// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDITPBCINVOKEREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUDITPBCINVOKEREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AuditPbcInvokeReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuditPbcInvokeReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(approve, approve_);
    };
    friend void from_json(const Darabonba::Json& j, AuditPbcInvokeReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(approve, approve_);
    };
    AuditPbcInvokeReviewRequest() = default ;
    AuditPbcInvokeReviewRequest(const AuditPbcInvokeReviewRequest &) = default ;
    AuditPbcInvokeReviewRequest(AuditPbcInvokeReviewRequest &&) = default ;
    AuditPbcInvokeReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuditPbcInvokeReviewRequest() = default ;
    AuditPbcInvokeReviewRequest& operator=(const AuditPbcInvokeReviewRequest &) = default ;
    AuditPbcInvokeReviewRequest& operator=(AuditPbcInvokeReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approve_ == nullptr; };
    // approve Field Functions 
    bool hasApprove() const { return this->approve_ != nullptr;};
    void deleteApprove() { this->approve_ = nullptr;};
    inline bool getApprove() const { DARABONBA_PTR_GET_DEFAULT(approve_, false) };
    inline AuditPbcInvokeReviewRequest& setApprove(bool approve) { DARABONBA_PTR_SET_VALUE(approve_, approve) };


  protected:
    shared_ptr<bool> approve_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
