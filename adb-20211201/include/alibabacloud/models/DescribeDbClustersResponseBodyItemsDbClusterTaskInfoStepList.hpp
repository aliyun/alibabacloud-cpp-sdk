// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& obj) { 
      DARABONBA_PTR_TO_JSON(StepList, stepList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& obj) { 
      DARABONBA_PTR_FROM_JSON(StepList, stepList_);
    };
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList(const DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList(DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList &&) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& operator=(const DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& operator=(DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stepList_ == nullptr; };
    // stepList Field Functions 
    bool hasStepList() const { return this->stepList_ != nullptr;};
    void deleteStepList() { this->stepList_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList> & stepList() const { DARABONBA_PTR_GET_CONST(stepList_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList>) };
    inline vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList> stepList() { DARABONBA_PTR_GET(stepList_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList>) };
    inline DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& setStepList(const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList> & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
    inline DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepList& setStepList(vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList> && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfoStepListStepList>> stepList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
