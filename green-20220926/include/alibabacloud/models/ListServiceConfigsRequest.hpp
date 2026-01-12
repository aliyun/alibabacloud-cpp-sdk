// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UseStatus, useStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UseStatus, useStatus_);
    };
    ListServiceConfigsRequest() = default ;
    ListServiceConfigsRequest(const ListServiceConfigsRequest &) = default ;
    ListServiceConfigsRequest(ListServiceConfigsRequest &&) = default ;
    ListServiceConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsRequest() = default ;
    ListServiceConfigsRequest& operator=(const ListServiceConfigsRequest &) = default ;
    ListServiceConfigsRequest& operator=(ListServiceConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->useStatus_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline ListServiceConfigsRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServiceConfigsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // useStatus Field Functions 
    bool hasUseStatus() const { return this->useStatus_ != nullptr;};
    void deleteUseStatus() { this->useStatus_ = nullptr;};
    inline string getUseStatus() const { DARABONBA_PTR_GET_DEFAULT(useStatus_, "") };
    inline ListServiceConfigsRequest& setUseStatus(string useStatus) { DARABONBA_PTR_SET_VALUE(useStatus_, useStatus) };


  protected:
    // Category.
    shared_ptr<string> classify_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Resource type.
    shared_ptr<string> resourceType_ {};
    // Usage status.
    shared_ptr<string> useStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
