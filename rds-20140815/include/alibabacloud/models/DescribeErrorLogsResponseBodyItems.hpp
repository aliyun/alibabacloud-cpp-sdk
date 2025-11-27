// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeErrorLogsResponseBodyItemsErrorLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeErrorLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorLog, errorLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorLog, errorLog_);
    };
    DescribeErrorLogsResponseBodyItems() = default ;
    DescribeErrorLogsResponseBodyItems(const DescribeErrorLogsResponseBodyItems &) = default ;
    DescribeErrorLogsResponseBodyItems(DescribeErrorLogsResponseBodyItems &&) = default ;
    DescribeErrorLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogsResponseBodyItems() = default ;
    DescribeErrorLogsResponseBodyItems& operator=(const DescribeErrorLogsResponseBodyItems &) = default ;
    DescribeErrorLogsResponseBodyItems& operator=(DescribeErrorLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorLog_ == nullptr; };
    // errorLog Field Functions 
    bool hasErrorLog() const { return this->errorLog_ != nullptr;};
    void deleteErrorLog() { this->errorLog_ = nullptr;};
    inline const vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog> & errorLog() const { DARABONBA_PTR_GET_CONST(errorLog_, vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog>) };
    inline vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog> errorLog() { DARABONBA_PTR_GET(errorLog_, vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog>) };
    inline DescribeErrorLogsResponseBodyItems& setErrorLog(const vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog> & errorLog) { DARABONBA_PTR_SET_VALUE(errorLog_, errorLog) };
    inline DescribeErrorLogsResponseBodyItems& setErrorLog(vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog> && errorLog) { DARABONBA_PTR_SET_RVALUE(errorLog_, errorLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeErrorLogsResponseBodyItemsErrorLog>> errorLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
