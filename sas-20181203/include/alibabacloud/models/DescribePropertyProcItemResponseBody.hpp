// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyProcItemResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyProcItemResponseBodyPropertyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyProcItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyProcItemResponseBody() = default ;
    DescribePropertyProcItemResponseBody(const DescribePropertyProcItemResponseBody &) = default ;
    DescribePropertyProcItemResponseBody(DescribePropertyProcItemResponseBody &&) = default ;
    DescribePropertyProcItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcItemResponseBody() = default ;
    DescribePropertyProcItemResponseBody& operator=(const DescribePropertyProcItemResponseBody &) = default ;
    DescribePropertyProcItemResponseBody& operator=(DescribePropertyProcItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertyItems_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyProcItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyProcItemResponseBodyPageInfo) };
    inline DescribePropertyProcItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyProcItemResponseBodyPageInfo) };
    inline DescribePropertyProcItemResponseBody& setPageInfo(const DescribePropertyProcItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyProcItemResponseBody& setPageInfo(DescribePropertyProcItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<DescribePropertyProcItemResponseBodyPropertyItems> & propertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<DescribePropertyProcItemResponseBodyPropertyItems>) };
    inline vector<DescribePropertyProcItemResponseBodyPropertyItems> propertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<DescribePropertyProcItemResponseBodyPropertyItems>) };
    inline DescribePropertyProcItemResponseBody& setPropertyItems(const vector<DescribePropertyProcItemResponseBodyPropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline DescribePropertyProcItemResponseBody& setPropertyItems(vector<DescribePropertyProcItemResponseBodyPropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyProcItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyProcItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the processes returned.
    std::shared_ptr<vector<DescribePropertyProcItemResponseBodyPropertyItems>> propertyItems_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
