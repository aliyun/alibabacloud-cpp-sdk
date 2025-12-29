// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDITHOTELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUDITHOTELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AuditHotelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuditHotelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditHotelReq, auditHotelReq_);
    };
    friend void from_json(const Darabonba::Json& j, AuditHotelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditHotelReq, auditHotelReq_);
    };
    AuditHotelRequest() = default ;
    AuditHotelRequest(const AuditHotelRequest &) = default ;
    AuditHotelRequest(AuditHotelRequest &&) = default ;
    AuditHotelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuditHotelRequest() = default ;
    AuditHotelRequest& operator=(const AuditHotelRequest &) = default ;
    AuditHotelRequest& operator=(AuditHotelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuditHotelReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuditHotelReq& obj) { 
        DARABONBA_PTR_TO_JSON(AuditOpinion, auditOpinion_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AuditHotelReq& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditOpinion, auditOpinion_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AuditHotelReq() = default ;
      AuditHotelReq(const AuditHotelReq &) = default ;
      AuditHotelReq(AuditHotelReq &&) = default ;
      AuditHotelReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuditHotelReq() = default ;
      AuditHotelReq& operator=(const AuditHotelReq &) = default ;
      AuditHotelReq& operator=(AuditHotelReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditOpinion_ == nullptr
        && this->hotelId_ == nullptr && this->status_ == nullptr; };
      // auditOpinion Field Functions 
      bool hasAuditOpinion() const { return this->auditOpinion_ != nullptr;};
      void deleteAuditOpinion() { this->auditOpinion_ = nullptr;};
      inline string getAuditOpinion() const { DARABONBA_PTR_GET_DEFAULT(auditOpinion_, "") };
      inline AuditHotelReq& setAuditOpinion(string auditOpinion) { DARABONBA_PTR_SET_VALUE(auditOpinion_, auditOpinion) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline AuditHotelReq& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AuditHotelReq& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> auditOpinion_ {};
      // This parameter is required.
      shared_ptr<string> hotelId_ {};
      // This parameter is required.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->auditHotelReq_ == nullptr; };
    // auditHotelReq Field Functions 
    bool hasAuditHotelReq() const { return this->auditHotelReq_ != nullptr;};
    void deleteAuditHotelReq() { this->auditHotelReq_ = nullptr;};
    inline const AuditHotelRequest::AuditHotelReq & getAuditHotelReq() const { DARABONBA_PTR_GET_CONST(auditHotelReq_, AuditHotelRequest::AuditHotelReq) };
    inline AuditHotelRequest::AuditHotelReq getAuditHotelReq() { DARABONBA_PTR_GET(auditHotelReq_, AuditHotelRequest::AuditHotelReq) };
    inline AuditHotelRequest& setAuditHotelReq(const AuditHotelRequest::AuditHotelReq & auditHotelReq) { DARABONBA_PTR_SET_VALUE(auditHotelReq_, auditHotelReq) };
    inline AuditHotelRequest& setAuditHotelReq(AuditHotelRequest::AuditHotelReq && auditHotelReq) { DARABONBA_PTR_SET_RVALUE(auditHotelReq_, auditHotelReq) };


  protected:
    // This parameter is required.
    shared_ptr<AuditHotelRequest::AuditHotelReq> auditHotelReq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
