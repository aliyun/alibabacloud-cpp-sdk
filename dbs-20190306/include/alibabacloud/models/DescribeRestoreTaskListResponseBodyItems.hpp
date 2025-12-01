// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreTaskListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreTaskListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(RestoreTaskDetail, restoreTaskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreTaskListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(RestoreTaskDetail, restoreTaskDetail_);
    };
    DescribeRestoreTaskListResponseBodyItems() = default ;
    DescribeRestoreTaskListResponseBodyItems(const DescribeRestoreTaskListResponseBodyItems &) = default ;
    DescribeRestoreTaskListResponseBodyItems(DescribeRestoreTaskListResponseBodyItems &&) = default ;
    DescribeRestoreTaskListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreTaskListResponseBodyItems() = default ;
    DescribeRestoreTaskListResponseBodyItems& operator=(const DescribeRestoreTaskListResponseBodyItems &) = default ;
    DescribeRestoreTaskListResponseBodyItems& operator=(DescribeRestoreTaskListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restoreTaskDetail_ == nullptr; };
    // restoreTaskDetail Field Functions 
    bool hasRestoreTaskDetail() const { return this->restoreTaskDetail_ != nullptr;};
    void deleteRestoreTaskDetail() { this->restoreTaskDetail_ = nullptr;};
    inline const vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail> & restoreTaskDetail() const { DARABONBA_PTR_GET_CONST(restoreTaskDetail_, vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail>) };
    inline vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail> restoreTaskDetail() { DARABONBA_PTR_GET(restoreTaskDetail_, vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail>) };
    inline DescribeRestoreTaskListResponseBodyItems& setRestoreTaskDetail(const vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail> & restoreTaskDetail) { DARABONBA_PTR_SET_VALUE(restoreTaskDetail_, restoreTaskDetail) };
    inline DescribeRestoreTaskListResponseBodyItems& setRestoreTaskDetail(vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail> && restoreTaskDetail) { DARABONBA_PTR_SET_RVALUE(restoreTaskDetail_, restoreTaskDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail>> restoreTaskDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
