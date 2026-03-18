// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CheckInventoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInventoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInventoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CheckInventoryRequest() = default ;
    CheckInventoryRequest(const CheckInventoryRequest &) = default ;
    CheckInventoryRequest(CheckInventoryRequest &&) = default ;
    CheckInventoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInventoryRequest() = default ;
    CheckInventoryRequest& operator=(const CheckInventoryRequest &) = default ;
    CheckInventoryRequest& operator=(CheckInventoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterInfo_ == nullptr
        && this->zoneId_ == nullptr; };
    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline string getClusterInfo() const { DARABONBA_PTR_GET_DEFAULT(clusterInfo_, "") };
    inline CheckInventoryRequest& setClusterInfo(string clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CheckInventoryRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> clusterInfo_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
