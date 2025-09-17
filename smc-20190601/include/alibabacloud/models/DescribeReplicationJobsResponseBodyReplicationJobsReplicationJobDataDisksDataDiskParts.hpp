// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKSDATADISKPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKSDATADISKPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& setPart(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts& setPart(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
