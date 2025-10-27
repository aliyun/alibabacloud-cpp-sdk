// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKBYKEYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKBYKEYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBuildRiskByKeyResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeImageBuildRiskByKeyResponseBodyDataPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBuildRiskByKeyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBuildRiskByKeyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBuildRiskByKeyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
    };
    DescribeImageBuildRiskByKeyResponseBodyData() = default ;
    DescribeImageBuildRiskByKeyResponseBodyData(const DescribeImageBuildRiskByKeyResponseBodyData &) = default ;
    DescribeImageBuildRiskByKeyResponseBodyData(DescribeImageBuildRiskByKeyResponseBodyData &&) = default ;
    DescribeImageBuildRiskByKeyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBuildRiskByKeyResponseBodyData() = default ;
    DescribeImageBuildRiskByKeyResponseBodyData& operator=(const DescribeImageBuildRiskByKeyResponseBodyData &) = default ;
    DescribeImageBuildRiskByKeyResponseBodyData& operator=(DescribeImageBuildRiskByKeyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageInfo_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList>) };
    inline vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList>) };
    inline DescribeImageBuildRiskByKeyResponseBodyData& setList(const vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeImageBuildRiskByKeyResponseBodyData& setList(vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo) };
    inline Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo) };
    inline DescribeImageBuildRiskByKeyResponseBodyData& setPageInfo(const Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBuildRiskByKeyResponseBodyData& setPageInfo(Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The risks.
    std::shared_ptr<vector<Models::DescribeImageBuildRiskByKeyResponseBodyDataList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::DescribeImageBuildRiskByKeyResponseBodyDataPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
