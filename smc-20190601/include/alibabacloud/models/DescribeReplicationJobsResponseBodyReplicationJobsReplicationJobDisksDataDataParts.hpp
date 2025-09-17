// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATADATAPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATADATAPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& setPart(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataParts& setPart(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
