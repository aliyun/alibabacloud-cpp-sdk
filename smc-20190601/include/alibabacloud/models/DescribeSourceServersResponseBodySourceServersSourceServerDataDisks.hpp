// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisks &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks(DescribeSourceServersResponseBodySourceServersSourceServerDataDisks &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisks() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisks &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDisk_ != nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& setDataDisk(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisks& setDataDisk(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk>> dataDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
