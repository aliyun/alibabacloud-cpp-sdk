// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyTypeScaItemResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyTypeScaItemResponseBodyPropertyTypeItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyTypeScaItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyTypeScaItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyTypeItems, propertyTypeItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyTypeScaItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyTypeItems, propertyTypeItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyTypeScaItemResponseBody() = default ;
    DescribePropertyTypeScaItemResponseBody(const DescribePropertyTypeScaItemResponseBody &) = default ;
    DescribePropertyTypeScaItemResponseBody(DescribePropertyTypeScaItemResponseBody &&) = default ;
    DescribePropertyTypeScaItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyTypeScaItemResponseBody() = default ;
    DescribePropertyTypeScaItemResponseBody& operator=(const DescribePropertyTypeScaItemResponseBody &) = default ;
    DescribePropertyTypeScaItemResponseBody& operator=(DescribePropertyTypeScaItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->propertyTypeItems_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyTypeScaItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyTypeScaItemResponseBodyPageInfo) };
    inline DescribePropertyTypeScaItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyTypeScaItemResponseBodyPageInfo) };
    inline DescribePropertyTypeScaItemResponseBody& setPageInfo(const DescribePropertyTypeScaItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyTypeScaItemResponseBody& setPageInfo(DescribePropertyTypeScaItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyTypeItems Field Functions 
    bool hasPropertyTypeItems() const { return this->propertyTypeItems_ != nullptr;};
    void deletePropertyTypeItems() { this->propertyTypeItems_ = nullptr;};
    inline const vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems> & propertyTypeItems() const { DARABONBA_PTR_GET_CONST(propertyTypeItems_, vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems>) };
    inline vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems> propertyTypeItems() { DARABONBA_PTR_GET(propertyTypeItems_, vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems>) };
    inline DescribePropertyTypeScaItemResponseBody& setPropertyTypeItems(const vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems> & propertyTypeItems) { DARABONBA_PTR_SET_VALUE(propertyTypeItems_, propertyTypeItems) };
    inline DescribePropertyTypeScaItemResponseBody& setPropertyTypeItems(vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems> && propertyTypeItems) { DARABONBA_PTR_SET_RVALUE(propertyTypeItems_, propertyTypeItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyTypeScaItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyTypeScaItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the middleware types.
    std::shared_ptr<vector<DescribePropertyTypeScaItemResponseBodyPropertyTypeItems>> propertyTypeItems_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
