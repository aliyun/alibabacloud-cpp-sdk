// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYENGINEVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYENGINEVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList(const DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList(DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineVersion_ != nullptr; };
    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion> & engineVersion() const { DARABONBA_PTR_GET_CONST(engineVersion_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion> engineVersion() { DARABONBA_PTR_GET(engineVersion_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& setEngineVersion(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion> & engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionList& setEngineVersion(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion> && engineVersion) { DARABONBA_PTR_SET_RVALUE(engineVersion_, engineVersion) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyEngineVersionListEngineVersion>> engineVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
