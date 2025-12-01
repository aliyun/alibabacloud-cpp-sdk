// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreRangeInfoResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreRangeInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBSRecoverRange, DBSRecoverRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreRangeInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBSRecoverRange, DBSRecoverRange_);
    };
    DescribeRestoreRangeInfoResponseBodyItems() = default ;
    DescribeRestoreRangeInfoResponseBodyItems(const DescribeRestoreRangeInfoResponseBodyItems &) = default ;
    DescribeRestoreRangeInfoResponseBodyItems(DescribeRestoreRangeInfoResponseBodyItems &&) = default ;
    DescribeRestoreRangeInfoResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreRangeInfoResponseBodyItems() = default ;
    DescribeRestoreRangeInfoResponseBodyItems& operator=(const DescribeRestoreRangeInfoResponseBodyItems &) = default ;
    DescribeRestoreRangeInfoResponseBodyItems& operator=(DescribeRestoreRangeInfoResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBSRecoverRange_ == nullptr; };
    // DBSRecoverRange Field Functions 
    bool hasDBSRecoverRange() const { return this->DBSRecoverRange_ != nullptr;};
    void deleteDBSRecoverRange() { this->DBSRecoverRange_ = nullptr;};
    inline const vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange> & DBSRecoverRange() const { DARABONBA_PTR_GET_CONST(DBSRecoverRange_, vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange>) };
    inline vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange> DBSRecoverRange() { DARABONBA_PTR_GET(DBSRecoverRange_, vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange>) };
    inline DescribeRestoreRangeInfoResponseBodyItems& setDBSRecoverRange(const vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange> & DBSRecoverRange) { DARABONBA_PTR_SET_VALUE(DBSRecoverRange_, DBSRecoverRange) };
    inline DescribeRestoreRangeInfoResponseBodyItems& setDBSRecoverRange(vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange> && DBSRecoverRange) { DARABONBA_PTR_SET_RVALUE(DBSRecoverRange_, DBSRecoverRange) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange>> DBSRecoverRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
