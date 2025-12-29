// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHHOTELMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHHOTELMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushHotelMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushHotelMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PushHotelMessageReq, pushHotelMessageReq_);
    };
    friend void from_json(const Darabonba::Json& j, PushHotelMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PushHotelMessageReq, pushHotelMessageReq_);
    };
    PushHotelMessageRequest() = default ;
    PushHotelMessageRequest(const PushHotelMessageRequest &) = default ;
    PushHotelMessageRequest(PushHotelMessageRequest &&) = default ;
    PushHotelMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushHotelMessageRequest() = default ;
    PushHotelMessageRequest& operator=(const PushHotelMessageRequest &) = default ;
    PushHotelMessageRequest& operator=(PushHotelMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushHotelMessageReq : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushHotelMessageReq& obj) { 
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(ParamMap, paramMap_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, PushHotelMessageReq& obj) { 
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(ParamMap, paramMap_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      PushHotelMessageReq() = default ;
      PushHotelMessageReq(const PushHotelMessageReq &) = default ;
      PushHotelMessageReq(PushHotelMessageReq &&) = default ;
      PushHotelMessageReq(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushHotelMessageReq() = default ;
      PushHotelMessageReq& operator=(const PushHotelMessageReq &) = default ;
      PushHotelMessageReq& operator=(PushHotelMessageReq &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->paramMap_ == nullptr && this->roomNo_ == nullptr && this->templateId_ == nullptr; };
      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline PushHotelMessageReq& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline const map<string, string> & getParamMap() const { DARABONBA_PTR_GET_CONST(paramMap_, map<string, string>) };
      inline map<string, string> getParamMap() { DARABONBA_PTR_GET(paramMap_, map<string, string>) };
      inline PushHotelMessageReq& setParamMap(const map<string, string> & paramMap) { DARABONBA_PTR_SET_VALUE(paramMap_, paramMap) };
      inline PushHotelMessageReq& setParamMap(map<string, string> && paramMap) { DARABONBA_PTR_SET_RVALUE(paramMap_, paramMap) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline PushHotelMessageReq& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline PushHotelMessageReq& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // This parameter is required.
      shared_ptr<string> hotelId_ {};
      shared_ptr<map<string, string>> paramMap_ {};
      // This parameter is required.
      shared_ptr<string> roomNo_ {};
      // This parameter is required.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->pushHotelMessageReq_ == nullptr; };
    // pushHotelMessageReq Field Functions 
    bool hasPushHotelMessageReq() const { return this->pushHotelMessageReq_ != nullptr;};
    void deletePushHotelMessageReq() { this->pushHotelMessageReq_ = nullptr;};
    inline const PushHotelMessageRequest::PushHotelMessageReq & getPushHotelMessageReq() const { DARABONBA_PTR_GET_CONST(pushHotelMessageReq_, PushHotelMessageRequest::PushHotelMessageReq) };
    inline PushHotelMessageRequest::PushHotelMessageReq getPushHotelMessageReq() { DARABONBA_PTR_GET(pushHotelMessageReq_, PushHotelMessageRequest::PushHotelMessageReq) };
    inline PushHotelMessageRequest& setPushHotelMessageReq(const PushHotelMessageRequest::PushHotelMessageReq & pushHotelMessageReq) { DARABONBA_PTR_SET_VALUE(pushHotelMessageReq_, pushHotelMessageReq) };
    inline PushHotelMessageRequest& setPushHotelMessageReq(PushHotelMessageRequest::PushHotelMessageReq && pushHotelMessageReq) { DARABONBA_PTR_SET_RVALUE(pushHotelMessageReq_, pushHotelMessageReq) };


  protected:
    // pushHotelMessageReq
    // 
    // This parameter is required.
    shared_ptr<PushHotelMessageRequest::PushHotelMessageReq> pushHotelMessageReq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
