// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBSYSTEMDISKPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBSYSTEMDISKPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDiskPart, systemDiskPart_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDiskPart, systemDiskPart_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->systemDiskPart_ != nullptr; };
    // systemDiskPart Field Functions 
    bool hasSystemDiskPart() const { return this->systemDiskPart_ != nullptr;};
    void deleteSystemDiskPart() { this->systemDiskPart_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart> & systemDiskPart() const { DARABONBA_PTR_GET_CONST(systemDiskPart_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart> systemDiskPart() { DARABONBA_PTR_GET(systemDiskPart_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& setSystemDiskPart(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart> & systemDiskPart) { DARABONBA_PTR_SET_VALUE(systemDiskPart_, systemDiskPart) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts& setSystemDiskPart(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart> && systemDiskPart) { DARABONBA_PTR_SET_RVALUE(systemDiskPart_, systemDiskPart) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart>> systemDiskPart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
