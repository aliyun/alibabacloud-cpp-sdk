// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEQAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateServiceQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ServiceQAId, serviceQAId_);
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ServiceQAId, serviceQAId_);
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
    };
    UpdateServiceQARequest() = default ;
    UpdateServiceQARequest(const UpdateServiceQARequest &) = default ;
    UpdateServiceQARequest(UpdateServiceQARequest &&) = default ;
    UpdateServiceQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceQARequest() = default ;
    UpdateServiceQARequest& operator=(const UpdateServiceQARequest &) = default ;
    UpdateServiceQARequest& operator=(UpdateServiceQARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->hotelId_ == nullptr && this->serviceQAId_ == nullptr && this->isActive_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline UpdateServiceQARequest& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateServiceQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // serviceQAId Field Functions 
    bool hasServiceQAId() const { return this->serviceQAId_ != nullptr;};
    void deleteServiceQAId() { this->serviceQAId_ = nullptr;};
    inline int64_t getServiceQAId() const { DARABONBA_PTR_GET_DEFAULT(serviceQAId_, 0L) };
    inline UpdateServiceQARequest& setServiceQAId(int64_t serviceQAId) { DARABONBA_PTR_SET_VALUE(serviceQAId_, serviceQAId) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline UpdateServiceQARequest& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


  protected:
    shared_ptr<string> answer_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<int64_t> serviceQAId_ {};
    shared_ptr<bool> isActive_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
