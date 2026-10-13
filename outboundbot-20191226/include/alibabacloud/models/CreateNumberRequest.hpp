// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Numbers, numbers_);
      DARABONBA_PTR_TO_JSON(TrunkId, trunkId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(TrunkId, trunkId_);
    };
    CreateNumberRequest() = default ;
    CreateNumberRequest(const CreateNumberRequest &) = default ;
    CreateNumberRequest(CreateNumberRequest &&) = default ;
    CreateNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNumberRequest() = default ;
    CreateNumberRequest& operator=(const CreateNumberRequest &) = default ;
    CreateNumberRequest& operator=(CreateNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Numbers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Numbers& obj) { 
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(RateLimitCount, rateLimitCount_);
        DARABONBA_PTR_TO_JSON(RateLimitPeriod, rateLimitPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, Numbers& obj) { 
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(RateLimitCount, rateLimitCount_);
        DARABONBA_PTR_FROM_JSON(RateLimitPeriod, rateLimitPeriod_);
      };
      Numbers() = default ;
      Numbers(const Numbers &) = default ;
      Numbers(Numbers &&) = default ;
      Numbers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Numbers() = default ;
      Numbers& operator=(const Numbers &) = default ;
      Numbers& operator=(Numbers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->number_ == nullptr
        && this->rateLimitCount_ == nullptr && this->rateLimitPeriod_ == nullptr; };
      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Numbers& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // rateLimitCount Field Functions 
      bool hasRateLimitCount() const { return this->rateLimitCount_ != nullptr;};
      void deleteRateLimitCount() { this->rateLimitCount_ = nullptr;};
      inline int32_t getRateLimitCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitCount_, 0) };
      inline Numbers& setRateLimitCount(int32_t rateLimitCount) { DARABONBA_PTR_SET_VALUE(rateLimitCount_, rateLimitCount) };


      // rateLimitPeriod Field Functions 
      bool hasRateLimitPeriod() const { return this->rateLimitPeriod_ != nullptr;};
      void deleteRateLimitPeriod() { this->rateLimitPeriod_ = nullptr;};
      inline int32_t getRateLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(rateLimitPeriod_, 0) };
      inline Numbers& setRateLimitPeriod(int32_t rateLimitPeriod) { DARABONBA_PTR_SET_VALUE(rateLimitPeriod_, rateLimitPeriod) };


    protected:
      // The phone number.
      shared_ptr<string> number_ {};
      // The maximum number of requests allowed within the throttling period.
      shared_ptr<int32_t> rateLimitCount_ {};
      // The throttling period, in seconds.
      shared_ptr<int32_t> rateLimitPeriod_ {};
    };

    virtual bool empty() const override { return this->numbers_ == nullptr
        && this->trunkId_ == nullptr; };
    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline const vector<CreateNumberRequest::Numbers> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<CreateNumberRequest::Numbers>) };
    inline vector<CreateNumberRequest::Numbers> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<CreateNumberRequest::Numbers>) };
    inline CreateNumberRequest& setNumbers(const vector<CreateNumberRequest::Numbers> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
    inline CreateNumberRequest& setNumbers(vector<CreateNumberRequest::Numbers> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


    // trunkId Field Functions 
    bool hasTrunkId() const { return this->trunkId_ != nullptr;};
    void deleteTrunkId() { this->trunkId_ = nullptr;};
    inline string getTrunkId() const { DARABONBA_PTR_GET_DEFAULT(trunkId_, "") };
    inline CreateNumberRequest& setTrunkId(string trunkId) { DARABONBA_PTR_SET_VALUE(trunkId_, trunkId) };


  protected:
    // The list of phone numbers to create and associate. A maximum of 100 phone numbers can be specified in a single request.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateNumberRequest::Numbers>> numbers_ {};
    // The unique identifier of the SIP trunk.
    // 
    // This parameter is required.
    shared_ptr<string> trunkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
