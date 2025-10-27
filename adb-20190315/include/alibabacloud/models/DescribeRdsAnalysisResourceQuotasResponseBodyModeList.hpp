// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYMODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYMODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyModeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyModeList& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyModeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList(const DescribeRdsAnalysisResourceQuotasResponseBodyModeList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList(DescribeRdsAnalysisResourceQuotasResponseBodyModeList &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyModeList() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyModeList &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyModeList& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyModeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode> & mode() const { DARABONBA_PTR_GET_CONST(mode_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode>) };
    inline vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode> mode() { DARABONBA_PTR_GET(mode_, vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode>) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyModeList& setMode(const vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode> & mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyModeList& setMode(vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode> && mode) { DARABONBA_PTR_SET_RVALUE(mode_, mode) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsAnalysisResourceQuotasResponseBodyModeListMode>> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
