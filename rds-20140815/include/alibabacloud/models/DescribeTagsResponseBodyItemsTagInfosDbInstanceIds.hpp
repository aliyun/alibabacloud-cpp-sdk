// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMSTAGINFOSDBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMSTAGINFOSDBINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTagsResponseBodyItemsTagInfosDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
    };
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds() = default ;
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds(const DescribeTagsResponseBodyItemsTagInfosDBInstanceIds &) = default ;
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds(DescribeTagsResponseBodyItemsTagInfosDBInstanceIds &&) = default ;
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyItemsTagInfosDBInstanceIds() = default ;
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& operator=(const DescribeTagsResponseBodyItemsTagInfosDBInstanceIds &) = default ;
    DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& operator=(DescribeTagsResponseBodyItemsTagInfosDBInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceIds_ == nullptr; };
    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline const vector<string> & DBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
    inline vector<string> DBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
    inline DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
    inline DescribeTagsResponseBodyItemsTagInfosDBInstanceIds& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


  protected:
    std::shared_ptr<vector<string>> DBInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
