// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETADVANCEDMONITORSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETADVANCEDMONITORSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class SetAdvancedMonitorStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAdvancedMonitorStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAdvancedMonitorStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
    };
    SetAdvancedMonitorStateRequest() = default ;
    SetAdvancedMonitorStateRequest(const SetAdvancedMonitorStateRequest &) = default ;
    SetAdvancedMonitorStateRequest(SetAdvancedMonitorStateRequest &&) = default ;
    SetAdvancedMonitorStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAdvancedMonitorStateRequest() = default ;
    SetAdvancedMonitorStateRequest& operator=(const SetAdvancedMonitorStateRequest &) = default ;
    SetAdvancedMonitorStateRequest& operator=(SetAdvancedMonitorStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->regionId_ == nullptr && this->sagId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline SetAdvancedMonitorStateRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetAdvancedMonitorStateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline SetAdvancedMonitorStateRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


  protected:
    // Specifies whether to enable the DPI feature. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
