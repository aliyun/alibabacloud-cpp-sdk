// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAutomateResponseConfigsResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListAutomateResponseConfigsResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAutomateResponseConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutomateResponseConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutomateResponseConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListAutomateResponseConfigsResponseBodyData() = default ;
    ListAutomateResponseConfigsResponseBodyData(const ListAutomateResponseConfigsResponseBodyData &) = default ;
    ListAutomateResponseConfigsResponseBodyData(ListAutomateResponseConfigsResponseBodyData &&) = default ;
    ListAutomateResponseConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutomateResponseConfigsResponseBodyData() = default ;
    ListAutomateResponseConfigsResponseBodyData& operator=(const ListAutomateResponseConfigsResponseBodyData &) = default ;
    ListAutomateResponseConfigsResponseBodyData& operator=(ListAutomateResponseConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListAutomateResponseConfigsResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListAutomateResponseConfigsResponseBodyDataPageInfo) };
    inline Models::ListAutomateResponseConfigsResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListAutomateResponseConfigsResponseBodyDataPageInfo) };
    inline ListAutomateResponseConfigsResponseBodyData& setPageInfo(const Models::ListAutomateResponseConfigsResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAutomateResponseConfigsResponseBodyData& setPageInfo(Models::ListAutomateResponseConfigsResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData>) };
    inline vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData>) };
    inline ListAutomateResponseConfigsResponseBodyData& setResponseData(const vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListAutomateResponseConfigsResponseBodyData& setResponseData(vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::ListAutomateResponseConfigsResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::ListAutomateResponseConfigsResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
