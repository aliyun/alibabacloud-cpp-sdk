// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePropertyUserItemResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribePropertyUserItemResponseBodyPropertyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PropertyItems, propertyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyUserItemResponseBody() = default ;
    DescribePropertyUserItemResponseBody(const DescribePropertyUserItemResponseBody &) = default ;
    DescribePropertyUserItemResponseBody(DescribePropertyUserItemResponseBody &&) = default ;
    DescribePropertyUserItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserItemResponseBody() = default ;
    DescribePropertyUserItemResponseBody& operator=(const DescribePropertyUserItemResponseBody &) = default ;
    DescribePropertyUserItemResponseBody& operator=(DescribePropertyUserItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->propertyItems_ != nullptr && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyUserItemResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyUserItemResponseBodyPageInfo) };
    inline DescribePropertyUserItemResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyUserItemResponseBodyPageInfo) };
    inline DescribePropertyUserItemResponseBody& setPageInfo(const DescribePropertyUserItemResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyUserItemResponseBody& setPageInfo(DescribePropertyUserItemResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertyItems Field Functions 
    bool hasPropertyItems() const { return this->propertyItems_ != nullptr;};
    void deletePropertyItems() { this->propertyItems_ = nullptr;};
    inline const vector<DescribePropertyUserItemResponseBodyPropertyItems> & propertyItems() const { DARABONBA_PTR_GET_CONST(propertyItems_, vector<DescribePropertyUserItemResponseBodyPropertyItems>) };
    inline vector<DescribePropertyUserItemResponseBodyPropertyItems> propertyItems() { DARABONBA_PTR_GET(propertyItems_, vector<DescribePropertyUserItemResponseBodyPropertyItems>) };
    inline DescribePropertyUserItemResponseBody& setPropertyItems(const vector<DescribePropertyUserItemResponseBodyPropertyItems> & propertyItems) { DARABONBA_PTR_SET_VALUE(propertyItems_, propertyItems) };
    inline DescribePropertyUserItemResponseBody& setPropertyItems(vector<DescribePropertyUserItemResponseBodyPropertyItems> && propertyItems) { DARABONBA_PTR_SET_RVALUE(propertyItems_, propertyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyUserItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribePropertyUserItemResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the account information returned.
    std::shared_ptr<vector<DescribePropertyUserItemResponseBodyPropertyItems>> propertyItems_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
