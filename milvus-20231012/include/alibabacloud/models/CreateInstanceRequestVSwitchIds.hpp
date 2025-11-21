// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTVSWITCHIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class CreateInstanceRequestVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(vswId, vswId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(vswId, vswId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    CreateInstanceRequestVSwitchIds() = default ;
    CreateInstanceRequestVSwitchIds(const CreateInstanceRequestVSwitchIds &) = default ;
    CreateInstanceRequestVSwitchIds(CreateInstanceRequestVSwitchIds &&) = default ;
    CreateInstanceRequestVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestVSwitchIds() = default ;
    CreateInstanceRequestVSwitchIds& operator=(const CreateInstanceRequestVSwitchIds &) = default ;
    CreateInstanceRequestVSwitchIds& operator=(CreateInstanceRequestVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vswId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline CreateInstanceRequestVSwitchIds& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequestVSwitchIds& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> vswId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
