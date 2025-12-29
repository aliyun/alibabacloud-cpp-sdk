// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDITHOTELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUDITHOTELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AuditHotelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuditHotelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditHotelReq, auditHotelReqShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AuditHotelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditHotelReq, auditHotelReqShrink_);
    };
    AuditHotelShrinkRequest() = default ;
    AuditHotelShrinkRequest(const AuditHotelShrinkRequest &) = default ;
    AuditHotelShrinkRequest(AuditHotelShrinkRequest &&) = default ;
    AuditHotelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuditHotelShrinkRequest() = default ;
    AuditHotelShrinkRequest& operator=(const AuditHotelShrinkRequest &) = default ;
    AuditHotelShrinkRequest& operator=(AuditHotelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditHotelReqShrink_ == nullptr; };
    // auditHotelReqShrink Field Functions 
    bool hasAuditHotelReqShrink() const { return this->auditHotelReqShrink_ != nullptr;};
    void deleteAuditHotelReqShrink() { this->auditHotelReqShrink_ = nullptr;};
    inline string getAuditHotelReqShrink() const { DARABONBA_PTR_GET_DEFAULT(auditHotelReqShrink_, "") };
    inline AuditHotelShrinkRequest& setAuditHotelReqShrink(string auditHotelReqShrink) { DARABONBA_PTR_SET_VALUE(auditHotelReqShrink_, auditHotelReqShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> auditHotelReqShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
