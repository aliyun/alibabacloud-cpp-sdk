// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetDestinationCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDestinationCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDestinationCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDestinationCidrBlockRequest() = default ;
    GetDestinationCidrBlockRequest(const GetDestinationCidrBlockRequest &) = default ;
    GetDestinationCidrBlockRequest(GetDestinationCidrBlockRequest &&) = default ;
    GetDestinationCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDestinationCidrBlockRequest() = default ;
    GetDestinationCidrBlockRequest& operator=(const GetDestinationCidrBlockRequest &) = default ;
    GetDestinationCidrBlockRequest& operator=(GetDestinationCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDestinationCidrBlockRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDestinationCidrBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Region ID
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
