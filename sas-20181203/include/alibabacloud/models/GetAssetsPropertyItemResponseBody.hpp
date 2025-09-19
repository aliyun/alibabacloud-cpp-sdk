// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssetsPropertyItemResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetAssetsPropertyItemResponseBodyPropertyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetsPropertyItemResponseBody() = default ;
    GetAssetsPropertyItemResponseBody(const GetAssetsPropertyItemResponseBody &) = default ;
    GetAssetsPropertyItemResponseBody(GetAssetsPropertyItemResponseBody &&) = default ;
    GetAssetsPropertyItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyItemResponseBody() = default ;
    GetAssetsPropertyItemResponseBody& operator=(const GetAssetsPropertyItemResponseBody &) = default ;
    GetAssetsPropertyItemResponseBody& operator=(GetAssetsPropertyItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertyItems_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetAssetsPropertyItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetAssetsPropertyItemResponseBodyPageInfo) };
    inline GetAssetsPropertyItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetAssetsPropertyItemResponseBodyPageInfo) };
    inline GetAssetsPropertyItemResponseBody& setPageInfo(const GetAssetsPropertyItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetAssetsPropertyItemResponseBody& setPageInfo(GetAssetsPropertyItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<GetAssetsPropertyItemResponseBodyPropertyItems> & propertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<GetAssetsPropertyItemResponseBodyPropertyItems>) };
    inline vector<GetAssetsPropertyItemResponseBodyPropertyItems> propertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<GetAssetsPropertyItemResponseBodyPropertyItems>) };
    inline GetAssetsPropertyItemResponseBody& setPropertyItems(const vector<GetAssetsPropertyItemResponseBodyPropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline GetAssetsPropertyItemResponseBody& setPropertyItems(vector<GetAssetsPropertyItemResponseBodyPropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetsPropertyItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<GetAssetsPropertyItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the aggregation information about asset fingerprints.
    std::shared_ptr<vector<GetAssetsPropertyItemResponseBodyPropertyItems>> propertyItems_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
