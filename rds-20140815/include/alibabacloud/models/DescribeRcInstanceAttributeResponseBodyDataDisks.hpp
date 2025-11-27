// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYDATADISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
    };
    DescribeRCInstanceAttributeResponseBodyDataDisks() = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisks(const DescribeRCInstanceAttributeResponseBodyDataDisks &) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisks(DescribeRCInstanceAttributeResponseBodyDataDisks &&) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyDataDisks() = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisks& operator=(const DescribeRCInstanceAttributeResponseBodyDataDisks &) = default ;
    DescribeRCInstanceAttributeResponseBodyDataDisks& operator=(DescribeRCInstanceAttributeResponseBodyDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDisk_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk>) };
    inline vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk>) };
    inline DescribeRCInstanceAttributeResponseBodyDataDisks& setDataDisk(const vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeRCInstanceAttributeResponseBodyDataDisks& setDataDisk(vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCInstanceAttributeResponseBodyDataDisksDataDisk>> dataDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
