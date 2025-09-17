// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& setData(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData& setData(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
