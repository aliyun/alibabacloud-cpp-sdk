// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBuildRiskListResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeImageBuildRiskListResponseBodyDataPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBuildRiskListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBuildRiskListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBuildRiskListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
    };
    DescribeImageBuildRiskListResponseBodyData() = default ;
    DescribeImageBuildRiskListResponseBodyData(const DescribeImageBuildRiskListResponseBodyData &) = default ;
    DescribeImageBuildRiskListResponseBodyData(DescribeImageBuildRiskListResponseBodyData &&) = default ;
    DescribeImageBuildRiskListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBuildRiskListResponseBodyData() = default ;
    DescribeImageBuildRiskListResponseBodyData& operator=(const DescribeImageBuildRiskListResponseBodyData &) = default ;
    DescribeImageBuildRiskListResponseBodyData& operator=(DescribeImageBuildRiskListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeImageBuildRiskListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeImageBuildRiskListResponseBodyDataList>) };
    inline vector<Models::DescribeImageBuildRiskListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeImageBuildRiskListResponseBodyDataList>) };
    inline DescribeImageBuildRiskListResponseBodyData& setList(const vector<Models::DescribeImageBuildRiskListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeImageBuildRiskListResponseBodyData& setList(vector<Models::DescribeImageBuildRiskListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeImageBuildRiskListResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeImageBuildRiskListResponseBodyDataPageInfo) };
    inline Models::DescribeImageBuildRiskListResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeImageBuildRiskListResponseBodyDataPageInfo) };
    inline DescribeImageBuildRiskListResponseBodyData& setPageInfo(const Models::DescribeImageBuildRiskListResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBuildRiskListResponseBodyData& setPageInfo(Models::DescribeImageBuildRiskListResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The risks.
    std::shared_ptr<vector<Models::DescribeImageBuildRiskListResponseBodyDataList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::DescribeImageBuildRiskListResponseBodyDataPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
