// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListOutboundNumbersOfUserResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundNumbersOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ProviderCode, providerCode_);
      DARABONBA_PTR_TO_JSON(ProviderDisplayName, providerDisplayName_);
      DARABONBA_PTR_TO_JSON(ProviderShortName, providerShortName_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundNumbersOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ProviderCode, providerCode_);
      DARABONBA_PTR_FROM_JSON(ProviderDisplayName, providerDisplayName_);
      DARABONBA_PTR_FROM_JSON(ProviderShortName, providerShortName_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    ListOutboundNumbersOfUserResponseBodyDataList() = default ;
    ListOutboundNumbersOfUserResponseBodyDataList(const ListOutboundNumbersOfUserResponseBodyDataList &) = default ;
    ListOutboundNumbersOfUserResponseBodyDataList(ListOutboundNumbersOfUserResponseBodyDataList &&) = default ;
    ListOutboundNumbersOfUserResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundNumbersOfUserResponseBodyDataList() = default ;
    ListOutboundNumbersOfUserResponseBodyDataList& operator=(const ListOutboundNumbersOfUserResponseBodyDataList &) = default ;
    ListOutboundNumbersOfUserResponseBodyDataList& operator=(ListOutboundNumbersOfUserResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && return this->number_ == nullptr && return this->provider_ == nullptr && return this->providerCode_ == nullptr && return this->providerDisplayName_ == nullptr && return this->providerShortName_ == nullptr
        && return this->providerType_ == nullptr && return this->province_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerCode Field Functions 
    bool hasProviderCode() const { return this->providerCode_ != nullptr;};
    void deleteProviderCode() { this->providerCode_ = nullptr;};
    inline string providerCode() const { DARABONBA_PTR_GET_DEFAULT(providerCode_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProviderCode(string providerCode) { DARABONBA_PTR_SET_VALUE(providerCode_, providerCode) };


    // providerDisplayName Field Functions 
    bool hasProviderDisplayName() const { return this->providerDisplayName_ != nullptr;};
    void deleteProviderDisplayName() { this->providerDisplayName_ = nullptr;};
    inline string providerDisplayName() const { DARABONBA_PTR_GET_DEFAULT(providerDisplayName_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProviderDisplayName(string providerDisplayName) { DARABONBA_PTR_SET_VALUE(providerDisplayName_, providerDisplayName) };


    // providerShortName Field Functions 
    bool hasProviderShortName() const { return this->providerShortName_ != nullptr;};
    void deleteProviderShortName() { this->providerShortName_ = nullptr;};
    inline string providerShortName() const { DARABONBA_PTR_GET_DEFAULT(providerShortName_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProviderShortName(string providerShortName) { DARABONBA_PTR_SET_VALUE(providerShortName_, providerShortName) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string providerType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListOutboundNumbersOfUserResponseBodyDataList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> providerCode_ = nullptr;
    std::shared_ptr<string> providerDisplayName_ = nullptr;
    std::shared_ptr<string> providerShortName_ = nullptr;
    std::shared_ptr<string> providerType_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
