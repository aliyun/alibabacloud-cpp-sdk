// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCATION_HPP_
#define ALIBABACLOUD_MODELS_LOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Location : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Location& obj) { 
      DARABONBA_PTR_TO_JSON(LocationType, locationType_);
      DARABONBA_ANY_TO_JSON(LocationValue, locationValue_);
    };
    friend void from_json(const Darabonba::Json& j, Location& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationType, locationType_);
      DARABONBA_ANY_FROM_JSON(LocationValue, locationValue_);
    };
    Location() = default ;
    Location(const Location &) = default ;
    Location(Location &&) = default ;
    Location(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Location() = default ;
    Location& operator=(const Location &) = default ;
    Location& operator=(Location &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locationType_ == nullptr
        && return this->locationValue_ == nullptr; };
    // locationType Field Functions 
    bool hasLocationType() const { return this->locationType_ != nullptr;};
    void deleteLocationType() { this->locationType_ = nullptr;};
    inline string locationType() const { DARABONBA_PTR_GET_DEFAULT(locationType_, "") };
    inline Location& setLocationType(string locationType) { DARABONBA_PTR_SET_VALUE(locationType_, locationType) };


    // locationValue Field Functions 
    bool hasLocationValue() const { return this->locationValue_ != nullptr;};
    void deleteLocationValue() { this->locationValue_ = nullptr;};
    inline     const Darabonba::Json & locationValue() const { DARABONBA_GET(locationValue_) };
    Darabonba::Json & locationValue() { DARABONBA_GET(locationValue_) };
    inline Location& setLocationValue(const Darabonba::Json & locationValue) { DARABONBA_SET_VALUE(locationValue_, locationValue) };
    inline Location& setLocationValue(Darabonba::Json & locationValue) { DARABONBA_SET_RVALUE(locationValue_, locationValue) };


  protected:
    std::shared_ptr<string> locationType_ = nullptr;
    Darabonba::Json locationValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
