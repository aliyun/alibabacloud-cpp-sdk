// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_LOCATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class LocationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LocationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, LocationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
    };
    LocationInfo() = default ;
    LocationInfo(const LocationInfo &) = default ;
    LocationInfo(LocationInfo &&) = default ;
    LocationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LocationInfo() = default ;
    LocationInfo& operator=(const LocationInfo &) = default ;
    LocationInfo& operator=(LocationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && this->ip_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline LocationInfo& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline LocationInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    shared_ptr<string> city_ {};
    shared_ptr<string> ip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
