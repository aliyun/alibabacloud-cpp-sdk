// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASFABRICORGANIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASFABRICORGANIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSFabricOrganizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSFabricOrganizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSFabricOrganizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListBaaSFabricOrganizationRequest() = default ;
    ListBaaSFabricOrganizationRequest(const ListBaaSFabricOrganizationRequest &) = default ;
    ListBaaSFabricOrganizationRequest(ListBaaSFabricOrganizationRequest &&) = default ;
    ListBaaSFabricOrganizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSFabricOrganizationRequest() = default ;
    ListBaaSFabricOrganizationRequest& operator=(const ListBaaSFabricOrganizationRequest &) = default ;
    ListBaaSFabricOrganizationRequest& operator=(ListBaaSFabricOrganizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSFabricChannelId_ == nullptr
        && return this->regionId_ == nullptr; };
    // baaSFabricChannelId Field Functions 
    bool hasBaaSFabricChannelId() const { return this->baaSFabricChannelId_ != nullptr;};
    void deleteBaaSFabricChannelId() { this->baaSFabricChannelId_ = nullptr;};
    inline string baaSFabricChannelId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricChannelId_, "") };
    inline ListBaaSFabricOrganizationRequest& setBaaSFabricChannelId(string baaSFabricChannelId) { DARABONBA_PTR_SET_VALUE(baaSFabricChannelId_, baaSFabricChannelId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBaaSFabricOrganizationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baaSFabricChannelId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
