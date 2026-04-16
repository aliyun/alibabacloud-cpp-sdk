// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAZONESUPPORTCOMPACTIONSERVICEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAZONESUPPORTCOMPACTIONSERVICEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DataZoneSupportCompactionServiceValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataZoneSupportCompactionServiceValue& obj) { 
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(resourceLevel, resourceLevel_);
      DARABONBA_PTR_TO_JSON(recommended, recommended_);
    };
    friend void from_json(const Darabonba::Json& j, DataZoneSupportCompactionServiceValue& obj) { 
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(resourceLevel, resourceLevel_);
      DARABONBA_PTR_FROM_JSON(recommended, recommended_);
    };
    DataZoneSupportCompactionServiceValue() = default ;
    DataZoneSupportCompactionServiceValue(const DataZoneSupportCompactionServiceValue &) = default ;
    DataZoneSupportCompactionServiceValue(DataZoneSupportCompactionServiceValue &&) = default ;
    DataZoneSupportCompactionServiceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataZoneSupportCompactionServiceValue() = default ;
    DataZoneSupportCompactionServiceValue& operator=(const DataZoneSupportCompactionServiceValue &) = default ;
    DataZoneSupportCompactionServiceValue& operator=(DataZoneSupportCompactionServiceValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr
        && this->resourceLevel_ == nullptr && this->recommended_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DataZoneSupportCompactionServiceValue& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string getResourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline DataZoneSupportCompactionServiceValue& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // recommended Field Functions 
    bool hasRecommended() const { return this->recommended_ != nullptr;};
    void deleteRecommended() { this->recommended_ = nullptr;};
    inline bool getRecommended() const { DARABONBA_PTR_GET_DEFAULT(recommended_, false) };
    inline DataZoneSupportCompactionServiceValue& setRecommended(bool recommended) { DARABONBA_PTR_SET_VALUE(recommended_, recommended) };


  protected:
    shared_ptr<string> zoneId_ {};
    shared_ptr<string> resourceLevel_ {};
    shared_ptr<bool> recommended_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
