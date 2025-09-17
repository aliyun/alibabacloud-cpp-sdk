// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEMPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEMPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& setPart(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts& setPart(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
