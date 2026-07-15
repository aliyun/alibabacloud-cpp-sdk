// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(biz_type, bizType_);
      DARABONBA_PTR_TO_JSON(depart_date, departDate_);
      DARABONBA_PTR_TO_JSON(from_city, fromCity_);
      DARABONBA_PTR_TO_JSON(leave_date, leaveDate_);
      DARABONBA_PTR_TO_JSON(to_city, toCity_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(biz_type, bizType_);
      DARABONBA_PTR_FROM_JSON(depart_date, departDate_);
      DARABONBA_PTR_FROM_JSON(from_city, fromCity_);
      DARABONBA_PTR_FROM_JSON(leave_date, leaveDate_);
      DARABONBA_PTR_FROM_JSON(to_city, toCity_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    EstimatedPriceQueryV2Request() = default ;
    EstimatedPriceQueryV2Request(const EstimatedPriceQueryV2Request &) = default ;
    EstimatedPriceQueryV2Request(EstimatedPriceQueryV2Request &&) = default ;
    EstimatedPriceQueryV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryV2Request() = default ;
    EstimatedPriceQueryV2Request& operator=(const EstimatedPriceQueryV2Request &) = default ;
    EstimatedPriceQueryV2Request& operator=(EstimatedPriceQueryV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->departDate_ == nullptr && this->fromCity_ == nullptr && this->leaveDate_ == nullptr && this->toCity_ == nullptr && this->userId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline EstimatedPriceQueryV2Request& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // departDate Field Functions 
    bool hasDepartDate() const { return this->departDate_ != nullptr;};
    void deleteDepartDate() { this->departDate_ = nullptr;};
    inline string getDepartDate() const { DARABONBA_PTR_GET_DEFAULT(departDate_, "") };
    inline EstimatedPriceQueryV2Request& setDepartDate(string departDate) { DARABONBA_PTR_SET_VALUE(departDate_, departDate) };


    // fromCity Field Functions 
    bool hasFromCity() const { return this->fromCity_ != nullptr;};
    void deleteFromCity() { this->fromCity_ = nullptr;};
    inline string getFromCity() const { DARABONBA_PTR_GET_DEFAULT(fromCity_, "") };
    inline EstimatedPriceQueryV2Request& setFromCity(string fromCity) { DARABONBA_PTR_SET_VALUE(fromCity_, fromCity) };


    // leaveDate Field Functions 
    bool hasLeaveDate() const { return this->leaveDate_ != nullptr;};
    void deleteLeaveDate() { this->leaveDate_ = nullptr;};
    inline string getLeaveDate() const { DARABONBA_PTR_GET_DEFAULT(leaveDate_, "") };
    inline EstimatedPriceQueryV2Request& setLeaveDate(string leaveDate) { DARABONBA_PTR_SET_VALUE(leaveDate_, leaveDate) };


    // toCity Field Functions 
    bool hasToCity() const { return this->toCity_ != nullptr;};
    void deleteToCity() { this->toCity_ = nullptr;};
    inline string getToCity() const { DARABONBA_PTR_GET_DEFAULT(toCity_, "") };
    inline EstimatedPriceQueryV2Request& setToCity(string toCity) { DARABONBA_PTR_SET_VALUE(toCity_, toCity) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EstimatedPriceQueryV2Request& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<string> departDate_ {};
    // This parameter is required.
    shared_ptr<string> fromCity_ {};
    // This parameter is required.
    shared_ptr<string> leaveDate_ {};
    // This parameter is required.
    shared_ptr<string> toCity_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
