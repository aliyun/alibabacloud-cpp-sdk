// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTBSERVICEPROVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTBSERVICEPROVIDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListSTBServiceProvidersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSTBServiceProvidersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, ListSTBServiceProvidersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    ListSTBServiceProvidersRequest() = default ;
    ListSTBServiceProvidersRequest(const ListSTBServiceProvidersRequest &) = default ;
    ListSTBServiceProvidersRequest(ListSTBServiceProvidersRequest &&) = default ;
    ListSTBServiceProvidersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSTBServiceProvidersRequest() = default ;
    ListSTBServiceProvidersRequest& operator=(const ListSTBServiceProvidersRequest &) = default ;
    ListSTBServiceProvidersRequest& operator=(ListSTBServiceProvidersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && this->province_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListSTBServiceProvidersRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListSTBServiceProvidersRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    // This parameter is required.
    shared_ptr<string> city_ {};
    // This parameter is required.
    shared_ptr<string> province_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
