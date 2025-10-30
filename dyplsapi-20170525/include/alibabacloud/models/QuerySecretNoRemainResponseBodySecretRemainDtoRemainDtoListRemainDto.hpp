// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTOREMAINDTOLISTREMAINDTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTOREMAINDTOLISTREMAINDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(City, city_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(City, city_);
    };
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO(const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO(QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO &&) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& operator=(const QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& operator=(QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->city_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


  protected:
    // The quantity of remaining phone numbers available for online purchase for the city.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // The home location of the phone numbers.
    std::shared_ptr<string> city_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
