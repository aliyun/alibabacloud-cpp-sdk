// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUESTVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CreateInstanceV1RequestVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceV1RequestVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceV1RequestVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceV1RequestVSwitches() = default ;
    CreateInstanceV1RequestVSwitches(const CreateInstanceV1RequestVSwitches &) = default ;
    CreateInstanceV1RequestVSwitches(CreateInstanceV1RequestVSwitches &&) = default ;
    CreateInstanceV1RequestVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceV1RequestVSwitches() = default ;
    CreateInstanceV1RequestVSwitches& operator=(const CreateInstanceV1RequestVSwitches &) = default ;
    CreateInstanceV1RequestVSwitches& operator=(CreateInstanceV1RequestVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vswId_ != nullptr
        && this->zoneId_ != nullptr; };
    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline CreateInstanceV1RequestVSwitches& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceV1RequestVSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> vswId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
