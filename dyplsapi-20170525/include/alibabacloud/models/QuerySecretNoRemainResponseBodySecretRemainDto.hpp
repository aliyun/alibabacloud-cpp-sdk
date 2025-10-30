// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODYSECRETREMAINDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainResponseBodySecretRemainDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainResponseBodySecretRemainDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(RemainDTOList, remainDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainResponseBodySecretRemainDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(RemainDTOList, remainDTOList_);
    };
    QuerySecretNoRemainResponseBodySecretRemainDTO() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTO(const QuerySecretNoRemainResponseBodySecretRemainDTO &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTO(QuerySecretNoRemainResponseBodySecretRemainDTO &&) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainResponseBodySecretRemainDTO() = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTO& operator=(const QuerySecretNoRemainResponseBodySecretRemainDTO &) = default ;
    QuerySecretNoRemainResponseBodySecretRemainDTO& operator=(QuerySecretNoRemainResponseBodySecretRemainDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->city_ == nullptr && return this->remainDTOList_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTO& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QuerySecretNoRemainResponseBodySecretRemainDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // remainDTOList Field Functions 
    bool hasRemainDTOList() const { return this->remainDTOList_ != nullptr;};
    void deleteRemainDTOList() { this->remainDTOList_ = nullptr;};
    inline const Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList & remainDTOList() const { DARABONBA_PTR_GET_CONST(remainDTOList_, Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList) };
    inline Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList remainDTOList() { DARABONBA_PTR_GET(remainDTOList_, Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTO& setRemainDTOList(const Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList & remainDTOList) { DARABONBA_PTR_SET_VALUE(remainDTOList_, remainDTOList) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTO& setRemainDTOList(Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList && remainDTOList) { DARABONBA_PTR_SET_RVALUE(remainDTOList_, remainDTOList) };


  protected:
    // The quantity of remaining phone numbers available for online purchase.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // The home location of the phone numbers.
    std::shared_ptr<string> city_ = nullptr;
    // The information about remaining phone numbers available for online purchase.
    std::shared_ptr<Models::QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList> remainDTOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
