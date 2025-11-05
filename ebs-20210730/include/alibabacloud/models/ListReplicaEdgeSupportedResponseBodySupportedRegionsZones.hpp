// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODYSUPPORTEDREGIONSZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODYSUPPORTEDREGIONSZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReplicaEdgeSupportedResponseBodySupportedRegionsZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReplicaEdgeSupportedResponseBodySupportedRegionsZones& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListReplicaEdgeSupportedResponseBodySupportedRegionsZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones() = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones(const ListReplicaEdgeSupportedResponseBodySupportedRegionsZones &) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones(ListReplicaEdgeSupportedResponseBodySupportedRegionsZones &&) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReplicaEdgeSupportedResponseBodySupportedRegionsZones() = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones& operator=(const ListReplicaEdgeSupportedResponseBodySupportedRegionsZones &) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegionsZones& operator=(ListReplicaEdgeSupportedResponseBodySupportedRegionsZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListReplicaEdgeSupportedResponseBodySupportedRegionsZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
