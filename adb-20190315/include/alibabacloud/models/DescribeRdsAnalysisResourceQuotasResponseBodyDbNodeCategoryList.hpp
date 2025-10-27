// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODECATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODECATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeCategory, DBNodeCategory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeCategory, DBNodeCategory_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeCategory_ == nullptr; };
    // DBNodeCategory Field Functions 
    bool hasDBNodeCategory() const { return this->DBNodeCategory_ != nullptr;};
    void deleteDBNodeCategory() { this->DBNodeCategory_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory> & DBNodeCategory() const { DARABONBA_PTR_GET_CONST(DBNodeCategory_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory> DBNodeCategory() { DARABONBA_PTR_GET(DBNodeCategory_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& setDBNodeCategory(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory> & DBNodeCategory) { DARABONBA_PTR_SET_VALUE(DBNodeCategory_, DBNodeCategory) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryList& setDBNodeCategory(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory> && DBNodeCategory) { DARABONBA_PTR_SET_RVALUE(DBNodeCategory_, DBNodeCategory) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeCategoryListDBNodeCategory>> DBNodeCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
