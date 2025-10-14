// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDistributeTableListResponseBodyDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDistributeTableListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributeTableListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributeTableListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeDistributeTableListResponseBodyData() = default ;
    DescribeDistributeTableListResponseBodyData(const DescribeDistributeTableListResponseBodyData &) = default ;
    DescribeDistributeTableListResponseBodyData(DescribeDistributeTableListResponseBodyData &&) = default ;
    DescribeDistributeTableListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributeTableListResponseBodyData() = default ;
    DescribeDistributeTableListResponseBodyData& operator=(const DescribeDistributeTableListResponseBodyData &) = default ;
    DescribeDistributeTableListResponseBodyData& operator=(DescribeDistributeTableListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tables_ == nullptr; };
    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::DescribeDistributeTableListResponseBodyDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::DescribeDistributeTableListResponseBodyDataTables>) };
    inline vector<Models::DescribeDistributeTableListResponseBodyDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::DescribeDistributeTableListResponseBodyDataTables>) };
    inline DescribeDistributeTableListResponseBodyData& setTables(const vector<Models::DescribeDistributeTableListResponseBodyDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeDistributeTableListResponseBodyData& setTables(vector<Models::DescribeDistributeTableListResponseBodyDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<vector<Models::DescribeDistributeTableListResponseBodyDataTables>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
