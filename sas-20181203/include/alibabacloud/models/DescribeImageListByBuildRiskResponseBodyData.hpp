// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageListByBuildRiskResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeImageListByBuildRiskResponseBodyDataPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListByBuildRiskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListByBuildRiskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListByBuildRiskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
    };
    DescribeImageListByBuildRiskResponseBodyData() = default ;
    DescribeImageListByBuildRiskResponseBodyData(const DescribeImageListByBuildRiskResponseBodyData &) = default ;
    DescribeImageListByBuildRiskResponseBodyData(DescribeImageListByBuildRiskResponseBodyData &&) = default ;
    DescribeImageListByBuildRiskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListByBuildRiskResponseBodyData() = default ;
    DescribeImageListByBuildRiskResponseBodyData& operator=(const DescribeImageListByBuildRiskResponseBodyData &) = default ;
    DescribeImageListByBuildRiskResponseBodyData& operator=(DescribeImageListByBuildRiskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeImageListByBuildRiskResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeImageListByBuildRiskResponseBodyDataList>) };
    inline vector<Models::DescribeImageListByBuildRiskResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeImageListByBuildRiskResponseBodyDataList>) };
    inline DescribeImageListByBuildRiskResponseBodyData& setList(const vector<Models::DescribeImageListByBuildRiskResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeImageListByBuildRiskResponseBodyData& setList(vector<Models::DescribeImageListByBuildRiskResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo) };
    inline Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo) };
    inline DescribeImageListByBuildRiskResponseBodyData& setPageInfo(const Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageListByBuildRiskResponseBodyData& setPageInfo(Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The images.
    std::shared_ptr<vector<Models::DescribeImageListByBuildRiskResponseBodyDataList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::DescribeImageListByBuildRiskResponseBodyDataPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
