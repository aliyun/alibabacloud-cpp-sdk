// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCESYSTEMDISKSIZES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCESYSTEMDISKSIZES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes(const DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes(DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes &&) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& operator=(const DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& operator=(DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->systemDiskSize_ != nullptr; };
    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline const vector<string> & systemDiskSize() const { DARABONBA_PTR_GET_CONST(systemDiskSize_, vector<string>) };
    inline vector<string> systemDiskSize() { DARABONBA_PTR_GET(systemDiskSize_, vector<string>) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& setSystemDiskSize(const vector<string> & systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes& setSystemDiskSize(vector<string> && systemDiskSize) { DARABONBA_PTR_SET_RVALUE(systemDiskSize_, systemDiskSize) };


  protected:
    std::shared_ptr<vector<string>> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
