// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDisk_ != nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& setDataDisk(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks& setDataDisk(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk>> dataDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
