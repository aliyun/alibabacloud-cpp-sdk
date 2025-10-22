// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckSelectedDomainStatusResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSelectedDomainStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(DeadDate, deadDate_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(RegDate, regDate_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSelectedDomainStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DeadDate, deadDate_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
    };
    CheckSelectedDomainStatusResponseBodyModule() = default ;
    CheckSelectedDomainStatusResponseBodyModule(const CheckSelectedDomainStatusResponseBodyModule &) = default ;
    CheckSelectedDomainStatusResponseBodyModule(CheckSelectedDomainStatusResponseBodyModule &&) = default ;
    CheckSelectedDomainStatusResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSelectedDomainStatusResponseBodyModule() = default ;
    CheckSelectedDomainStatusResponseBodyModule& operator=(const CheckSelectedDomainStatusResponseBodyModule &) = default ;
    CheckSelectedDomainStatusResponseBodyModule& operator=(CheckSelectedDomainStatusResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deadDate_ == nullptr
        && return this->domain_ == nullptr && return this->endTime_ == nullptr && return this->premium_ == nullptr && return this->price_ == nullptr && return this->regDate_ == nullptr; };
    // deadDate Field Functions 
    bool hasDeadDate() const { return this->deadDate_ != nullptr;};
    void deleteDeadDate() { this->deadDate_ = nullptr;};
    inline int64_t deadDate() const { DARABONBA_PTR_GET_DEFAULT(deadDate_, 0L) };
    inline CheckSelectedDomainStatusResponseBodyModule& setDeadDate(int64_t deadDate) { DARABONBA_PTR_SET_VALUE(deadDate_, deadDate) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CheckSelectedDomainStatusResponseBodyModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CheckSelectedDomainStatusResponseBodyModule& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline CheckSelectedDomainStatusResponseBodyModule& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline CheckSelectedDomainStatusResponseBodyModule& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // regDate Field Functions 
    bool hasRegDate() const { return this->regDate_ != nullptr;};
    void deleteRegDate() { this->regDate_ = nullptr;};
    inline int64_t regDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, 0L) };
    inline CheckSelectedDomainStatusResponseBodyModule& setRegDate(int64_t regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


  protected:
    std::shared_ptr<int64_t> deadDate_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<bool> premium_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<int64_t> regDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
