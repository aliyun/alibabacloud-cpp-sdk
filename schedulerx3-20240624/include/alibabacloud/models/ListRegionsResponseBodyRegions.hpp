// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListRegionsResponseBodyRegions() = default ;
    ListRegionsResponseBodyRegions(const ListRegionsResponseBodyRegions &) = default ;
    ListRegionsResponseBodyRegions(ListRegionsResponseBodyRegions &&) = default ;
    ListRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsResponseBodyRegions() = default ;
    ListRegionsResponseBodyRegions& operator=(const ListRegionsResponseBodyRegions &) = default ;
    ListRegionsResponseBodyRegions& operator=(ListRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->regionEndpoint_ == nullptr && return this->regionId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListRegionsResponseBodyRegions& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline ListRegionsResponseBodyRegions& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRegionsResponseBodyRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> localName_ = nullptr;
    // endpoint
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
