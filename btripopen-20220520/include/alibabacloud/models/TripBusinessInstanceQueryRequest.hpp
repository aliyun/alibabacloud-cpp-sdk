// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPBUSINESSINSTANCEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIPBUSINESSINSTANCEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripBusinessInstanceQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripBusinessInstanceQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_TO_JSON(third_business_id, thirdBusinessId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, TripBusinessInstanceQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_FROM_JSON(third_business_id, thirdBusinessId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    TripBusinessInstanceQueryRequest() = default ;
    TripBusinessInstanceQueryRequest(const TripBusinessInstanceQueryRequest &) = default ;
    TripBusinessInstanceQueryRequest(TripBusinessInstanceQueryRequest &&) = default ;
    TripBusinessInstanceQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripBusinessInstanceQueryRequest() = default ;
    TripBusinessInstanceQueryRequest& operator=(const TripBusinessInstanceQueryRequest &) = default ;
    TripBusinessInstanceQueryRequest& operator=(TripBusinessInstanceQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessInstanceId_ != nullptr
        && this->thirdBusinessId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // businessInstanceId Field Functions 
    bool hasBusinessInstanceId() const { return this->businessInstanceId_ != nullptr;};
    void deleteBusinessInstanceId() { this->businessInstanceId_ = nullptr;};
    inline string businessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(businessInstanceId_, "") };
    inline TripBusinessInstanceQueryRequest& setBusinessInstanceId(string businessInstanceId) { DARABONBA_PTR_SET_VALUE(businessInstanceId_, businessInstanceId) };


    // thirdBusinessId Field Functions 
    bool hasThirdBusinessId() const { return this->thirdBusinessId_ != nullptr;};
    void deleteThirdBusinessId() { this->thirdBusinessId_ = nullptr;};
    inline string thirdBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdBusinessId_, "") };
    inline TripBusinessInstanceQueryRequest& setThirdBusinessId(string thirdBusinessId) { DARABONBA_PTR_SET_VALUE(thirdBusinessId_, thirdBusinessId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TripBusinessInstanceQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline TripBusinessInstanceQueryRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> businessInstanceId_ = nullptr;
    std::shared_ptr<string> thirdBusinessId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
