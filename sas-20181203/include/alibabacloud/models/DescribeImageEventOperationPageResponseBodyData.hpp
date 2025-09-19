// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageEventOperationPageResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeImageEventOperationPageResponseBodyDataPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
    };
    DescribeImageEventOperationPageResponseBodyData() = default ;
    DescribeImageEventOperationPageResponseBodyData(const DescribeImageEventOperationPageResponseBodyData &) = default ;
    DescribeImageEventOperationPageResponseBodyData(DescribeImageEventOperationPageResponseBodyData &&) = default ;
    DescribeImageEventOperationPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationPageResponseBodyData() = default ;
    DescribeImageEventOperationPageResponseBodyData& operator=(const DescribeImageEventOperationPageResponseBodyData &) = default ;
    DescribeImageEventOperationPageResponseBodyData& operator=(DescribeImageEventOperationPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeImageEventOperationPageResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeImageEventOperationPageResponseBodyDataList>) };
    inline vector<Models::DescribeImageEventOperationPageResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeImageEventOperationPageResponseBodyDataList>) };
    inline DescribeImageEventOperationPageResponseBodyData& setList(const vector<Models::DescribeImageEventOperationPageResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeImageEventOperationPageResponseBodyData& setList(vector<Models::DescribeImageEventOperationPageResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeImageEventOperationPageResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeImageEventOperationPageResponseBodyDataPageInfo) };
    inline Models::DescribeImageEventOperationPageResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeImageEventOperationPageResponseBodyDataPageInfo) };
    inline DescribeImageEventOperationPageResponseBodyData& setPageInfo(const Models::DescribeImageEventOperationPageResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageEventOperationPageResponseBodyData& setPageInfo(Models::DescribeImageEventOperationPageResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The alert handling rules.
    std::shared_ptr<vector<Models::DescribeImageEventOperationPageResponseBodyDataList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<Models::DescribeImageEventOperationPageResponseBodyDataPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
