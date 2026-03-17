// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCEDMONITORSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCEDMONITORSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GetAdvancedMonitorStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvancedMonitorStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvancedMonitorStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
    };
    GetAdvancedMonitorStateRequest() = default ;
    GetAdvancedMonitorStateRequest(const GetAdvancedMonitorStateRequest &) = default ;
    GetAdvancedMonitorStateRequest(GetAdvancedMonitorStateRequest &&) = default ;
    GetAdvancedMonitorStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvancedMonitorStateRequest() = default ;
    GetAdvancedMonitorStateRequest& operator=(const GetAdvancedMonitorStateRequest &) = default ;
    GetAdvancedMonitorStateRequest& operator=(GetAdvancedMonitorStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sagId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAdvancedMonitorStateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline GetAdvancedMonitorStateRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


  protected:
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
