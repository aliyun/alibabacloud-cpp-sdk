// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEntitiesResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListEntitiesResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListEntitiesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListEntitiesResponseBodyData() = default ;
    ListEntitiesResponseBodyData(const ListEntitiesResponseBodyData &) = default ;
    ListEntitiesResponseBodyData(ListEntitiesResponseBodyData &&) = default ;
    ListEntitiesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesResponseBodyData() = default ;
    ListEntitiesResponseBodyData& operator=(const ListEntitiesResponseBodyData &) = default ;
    ListEntitiesResponseBodyData& operator=(ListEntitiesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListEntitiesResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListEntitiesResponseBodyDataPageInfo) };
    inline Models::ListEntitiesResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListEntitiesResponseBodyDataPageInfo) };
    inline ListEntitiesResponseBodyData& setPageInfo(const Models::ListEntitiesResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListEntitiesResponseBodyData& setPageInfo(Models::ListEntitiesResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListEntitiesResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListEntitiesResponseBodyDataResponseData>) };
    inline vector<Models::ListEntitiesResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListEntitiesResponseBodyDataResponseData>) };
    inline ListEntitiesResponseBodyData& setResponseData(const vector<Models::ListEntitiesResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListEntitiesResponseBodyData& setResponseData(vector<Models::ListEntitiesResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    std::shared_ptr<Models::ListEntitiesResponseBodyDataPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<vector<Models::ListEntitiesResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
