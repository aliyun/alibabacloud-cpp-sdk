// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyScaItemResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyScaItemResponseBodyPropertyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyScaItemResponseBody() = default ;
    DescribePropertyScaItemResponseBody(const DescribePropertyScaItemResponseBody &) = default ;
    DescribePropertyScaItemResponseBody(DescribePropertyScaItemResponseBody &&) = default ;
    DescribePropertyScaItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaItemResponseBody() = default ;
    DescribePropertyScaItemResponseBody& operator=(const DescribePropertyScaItemResponseBody &) = default ;
    DescribePropertyScaItemResponseBody& operator=(DescribePropertyScaItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->propertyItems_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyScaItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyScaItemResponseBodyPageInfo) };
    inline DescribePropertyScaItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyScaItemResponseBodyPageInfo) };
    inline DescribePropertyScaItemResponseBody& setPageInfo(const DescribePropertyScaItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyScaItemResponseBody& setPageInfo(DescribePropertyScaItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<DescribePropertyScaItemResponseBodyPropertyItems> & propertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<DescribePropertyScaItemResponseBodyPropertyItems>) };
    inline vector<DescribePropertyScaItemResponseBodyPropertyItems> propertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<DescribePropertyScaItemResponseBodyPropertyItems>) };
    inline DescribePropertyScaItemResponseBody& setPropertyItems(const vector<DescribePropertyScaItemResponseBodyPropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline DescribePropertyScaItemResponseBody& setPropertyItems(vector<DescribePropertyScaItemResponseBodyPropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyScaItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyScaItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the information about middleware fingerprints.
    std::shared_ptr<vector<DescribePropertyScaItemResponseBodyPropertyItems>> propertyItems_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
