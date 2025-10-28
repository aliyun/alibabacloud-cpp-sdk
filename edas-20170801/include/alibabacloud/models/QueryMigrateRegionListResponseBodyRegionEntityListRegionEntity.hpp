// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODYREGIONENTITYLISTREGIONENTITY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODYREGIONENTITYLISTREGIONENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& obj) { 
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity() = default ;
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity(const QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity &) = default ;
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity(QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity &&) = default ;
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity() = default ;
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& operator=(const QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity &) = default ;
    QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& operator=(QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionName_ == nullptr
        && return this->regionNo_ == nullptr; };
    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline QueryMigrateRegionListResponseBodyRegionEntityListRegionEntity& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // The name of the namespace.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
