// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKSDATADISKPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKSDATADISKPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts(DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& setPart(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts& setPart(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
