// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDATADISK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
    };
    DescribeInstancesResponseBodyInstancesInstanceDataDisk() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDataDisk(const DescribeInstancesResponseBodyInstancesInstanceDataDisk &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDataDisk(DescribeInstancesResponseBodyInstancesInstanceDataDisk &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceDataDisk() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDataDisk& operator=(const DescribeInstancesResponseBodyInstancesInstanceDataDisk &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDataDisk& operator=(DescribeInstancesResponseBodyInstancesInstanceDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDisk_ != nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk>) };
    inline DescribeInstancesResponseBodyInstancesInstanceDataDisk& setDataDisk(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeInstancesResponseBodyInstancesInstanceDataDisk& setDataDisk(vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceDataDiskDataDisk>> dataDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
