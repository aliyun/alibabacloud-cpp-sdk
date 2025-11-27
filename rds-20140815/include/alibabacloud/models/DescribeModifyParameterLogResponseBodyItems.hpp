// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModifyParameterLogResponseBodyItemsParameterChangeLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyParameterLogResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterChangeLog, parameterChangeLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterChangeLog, parameterChangeLog_);
    };
    DescribeModifyParameterLogResponseBodyItems() = default ;
    DescribeModifyParameterLogResponseBodyItems(const DescribeModifyParameterLogResponseBodyItems &) = default ;
    DescribeModifyParameterLogResponseBodyItems(DescribeModifyParameterLogResponseBodyItems &&) = default ;
    DescribeModifyParameterLogResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBodyItems() = default ;
    DescribeModifyParameterLogResponseBodyItems& operator=(const DescribeModifyParameterLogResponseBodyItems &) = default ;
    DescribeModifyParameterLogResponseBodyItems& operator=(DescribeModifyParameterLogResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterChangeLog_ == nullptr; };
    // parameterChangeLog Field Functions 
    bool hasParameterChangeLog() const { return this->parameterChangeLog_ != nullptr;};
    void deleteParameterChangeLog() { this->parameterChangeLog_ = nullptr;};
    inline const vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog> & parameterChangeLog() const { DARABONBA_PTR_GET_CONST(parameterChangeLog_, vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog>) };
    inline vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog> parameterChangeLog() { DARABONBA_PTR_GET(parameterChangeLog_, vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog>) };
    inline DescribeModifyParameterLogResponseBodyItems& setParameterChangeLog(const vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog> & parameterChangeLog) { DARABONBA_PTR_SET_VALUE(parameterChangeLog_, parameterChangeLog) };
    inline DescribeModifyParameterLogResponseBodyItems& setParameterChangeLog(vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog> && parameterChangeLog) { DARABONBA_PTR_SET_RVALUE(parameterChangeLog_, parameterChangeLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeModifyParameterLogResponseBodyItemsParameterChangeLog>> parameterChangeLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
