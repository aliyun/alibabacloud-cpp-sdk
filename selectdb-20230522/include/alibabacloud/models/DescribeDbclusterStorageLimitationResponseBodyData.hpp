// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterStorageLimitationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterStorageLimitationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterStorageLimitationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
    };
    DescribeDBClusterStorageLimitationResponseBodyData() = default ;
    DescribeDBClusterStorageLimitationResponseBodyData(const DescribeDBClusterStorageLimitationResponseBodyData &) = default ;
    DescribeDBClusterStorageLimitationResponseBodyData(DescribeDBClusterStorageLimitationResponseBodyData &&) = default ;
    DescribeDBClusterStorageLimitationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterStorageLimitationResponseBodyData() = default ;
    DescribeDBClusterStorageLimitationResponseBodyData& operator=(const DescribeDBClusterStorageLimitationResponseBodyData &) = default ;
    DescribeDBClusterStorageLimitationResponseBodyData& operator=(DescribeDBClusterStorageLimitationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classCodeList_ != nullptr; };
    // classCodeList Field Functions 
    bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
    void deleteClassCodeList() { this->classCodeList_ = nullptr;};
    inline const vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList> & classCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList>) };
    inline vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList> classCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList>) };
    inline DescribeDBClusterStorageLimitationResponseBodyData& setClassCodeList(const vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
    inline DescribeDBClusterStorageLimitationResponseBodyData& setClassCodeList(vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList>> classCodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
