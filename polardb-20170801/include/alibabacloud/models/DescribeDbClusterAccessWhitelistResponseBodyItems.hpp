// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAccessWhitelistResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhitelistResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArray, DBClusterIPArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhitelistResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArray, DBClusterIPArray_);
    };
    DescribeDBClusterAccessWhitelistResponseBodyItems() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItems(const DescribeDBClusterAccessWhitelistResponseBodyItems &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItems(DescribeDBClusterAccessWhitelistResponseBodyItems &&) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhitelistResponseBodyItems() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItems& operator=(const DescribeDBClusterAccessWhitelistResponseBodyItems &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItems& operator=(DescribeDBClusterAccessWhitelistResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterIPArray_ == nullptr; };
    // DBClusterIPArray Field Functions 
    bool hasDBClusterIPArray() const { return this->DBClusterIPArray_ != nullptr;};
    void deleteDBClusterIPArray() { this->DBClusterIPArray_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray> & DBClusterIPArray() const { DARABONBA_PTR_GET_CONST(DBClusterIPArray_, vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray>) };
    inline vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray> DBClusterIPArray() { DARABONBA_PTR_GET(DBClusterIPArray_, vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray>) };
    inline DescribeDBClusterAccessWhitelistResponseBodyItems& setDBClusterIPArray(const vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray> & DBClusterIPArray) { DARABONBA_PTR_SET_VALUE(DBClusterIPArray_, DBClusterIPArray) };
    inline DescribeDBClusterAccessWhitelistResponseBodyItems& setDBClusterIPArray(vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray> && DBClusterIPArray) { DARABONBA_PTR_SET_RVALUE(DBClusterIPArray_, DBClusterIPArray) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray>> DBClusterIPArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
