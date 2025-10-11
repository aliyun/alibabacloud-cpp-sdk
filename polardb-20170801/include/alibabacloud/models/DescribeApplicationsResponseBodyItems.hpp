// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationsResponseBodyItemsApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
    };
    DescribeApplicationsResponseBodyItems() = default ;
    DescribeApplicationsResponseBodyItems(const DescribeApplicationsResponseBodyItems &) = default ;
    DescribeApplicationsResponseBodyItems(DescribeApplicationsResponseBodyItems &&) = default ;
    DescribeApplicationsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationsResponseBodyItems() = default ;
    DescribeApplicationsResponseBodyItems& operator=(const DescribeApplicationsResponseBodyItems &) = default ;
    DescribeApplicationsResponseBodyItems& operator=(DescribeApplicationsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::DescribeApplicationsResponseBodyItemsApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::DescribeApplicationsResponseBodyItemsApplications>) };
    inline vector<Models::DescribeApplicationsResponseBodyItemsApplications> applications() { DARABONBA_PTR_GET(applications_, vector<Models::DescribeApplicationsResponseBodyItemsApplications>) };
    inline DescribeApplicationsResponseBodyItems& setApplications(const vector<Models::DescribeApplicationsResponseBodyItemsApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline DescribeApplicationsResponseBodyItems& setApplications(vector<Models::DescribeApplicationsResponseBodyItemsApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


  protected:
    std::shared_ptr<vector<Models::DescribeApplicationsResponseBodyItemsApplications>> applications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
