// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources(DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource>) };
    inline vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource>) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& setResource(const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources& setResource(vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
