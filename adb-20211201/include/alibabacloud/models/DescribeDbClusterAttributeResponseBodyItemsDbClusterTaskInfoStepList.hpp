// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& obj) { 
      DARABONBA_PTR_TO_JSON(StepList, stepList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& obj) { 
      DARABONBA_PTR_FROM_JSON(StepList, stepList_);
    };
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList &&) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& operator=(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& operator=(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stepList_ == nullptr; };
    // stepList Field Functions 
    bool hasStepList() const { return this->stepList_ != nullptr;};
    void deleteStepList() { this->stepList_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList> & stepList() const { DARABONBA_PTR_GET_CONST(stepList_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList>) };
    inline vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList> stepList() { DARABONBA_PTR_GET(stepList_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList>) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& setStepList(const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList> & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList& setStepList(vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList> && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList>> stepList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
