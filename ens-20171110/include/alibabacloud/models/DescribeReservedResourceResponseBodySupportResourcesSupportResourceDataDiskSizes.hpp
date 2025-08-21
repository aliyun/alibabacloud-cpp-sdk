// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEDATADISKSIZES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEDATADISKSIZES_HPP_
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
  class DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
    };
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes(const DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes(DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes &&) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& operator=(const DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& operator=(DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskSize_ != nullptr; };
    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline const vector<string> & dataDiskSize() const { DARABONBA_PTR_GET_CONST(dataDiskSize_, vector<string>) };
    inline vector<string> dataDiskSize() { DARABONBA_PTR_GET(dataDiskSize_, vector<string>) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& setDataDiskSize(const vector<string> & dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes& setDataDiskSize(vector<string> && dataDiskSize) { DARABONBA_PTR_SET_RVALUE(dataDiskSize_, dataDiskSize) };


  protected:
    std::shared_ptr<vector<string>> dataDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
