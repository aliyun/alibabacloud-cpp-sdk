// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(System, system_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(System, system_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->system_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData data() { DARABONBA_PTR_GET(data_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& setData(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& setData(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem & system() const { DARABONBA_PTR_GET_CONST(system_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem system() { DARABONBA_PTR_GET(system_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& setSystem(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem & system) { DARABONBA_PTR_SET_VALUE(system_, system) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks& setSystem(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem && system) { DARABONBA_PTR_SET_RVALUE(system_, system) };


  protected:
    // The information about the data disk.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksData> data_ = nullptr;
    // The information about the system disk.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem> system_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
