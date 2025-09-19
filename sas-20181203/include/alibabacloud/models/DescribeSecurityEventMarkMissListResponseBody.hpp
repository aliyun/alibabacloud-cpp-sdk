// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventMarkMissListResponseBodyList.hpp>
#include <alibabacloud/models/DescribeSecurityEventMarkMissListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventMarkMissListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityEventMarkMissListResponseBody() = default ;
    DescribeSecurityEventMarkMissListResponseBody(const DescribeSecurityEventMarkMissListResponseBody &) = default ;
    DescribeSecurityEventMarkMissListResponseBody(DescribeSecurityEventMarkMissListResponseBody &&) = default ;
    DescribeSecurityEventMarkMissListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventMarkMissListResponseBody() = default ;
    DescribeSecurityEventMarkMissListResponseBody& operator=(const DescribeSecurityEventMarkMissListResponseBody &) = default ;
    DescribeSecurityEventMarkMissListResponseBody& operator=(DescribeSecurityEventMarkMissListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeSecurityEventMarkMissListResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeSecurityEventMarkMissListResponseBodyList>) };
    inline vector<DescribeSecurityEventMarkMissListResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeSecurityEventMarkMissListResponseBodyList>) };
    inline DescribeSecurityEventMarkMissListResponseBody& setList(const vector<DescribeSecurityEventMarkMissListResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeSecurityEventMarkMissListResponseBody& setList(vector<DescribeSecurityEventMarkMissListResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSecurityEventMarkMissListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSecurityEventMarkMissListResponseBodyPageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSecurityEventMarkMissListResponseBodyPageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBody& setPageInfo(const DescribeSecurityEventMarkMissListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBody& setPageInfo(DescribeSecurityEventMarkMissListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventMarkMissListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the rule.
    std::shared_ptr<vector<DescribeSecurityEventMarkMissListResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeSecurityEventMarkMissListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
