// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODECLASSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYDBNODECLASSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeClass_ == nullptr; };
    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass> & DBNodeClass() const { DARABONBA_PTR_GET_CONST(DBNodeClass_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass> DBNodeClass() { DARABONBA_PTR_GET(DBNodeClass_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& setDBNodeClass(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass> & DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassList& setDBNodeClass(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass> && DBNodeClass) { DARABONBA_PTR_SET_RVALUE(DBNodeClass_, DBNodeClass) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyDBNodeClassListDBNodeClass>> DBNodeClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
