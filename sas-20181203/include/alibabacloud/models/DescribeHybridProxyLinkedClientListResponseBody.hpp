// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLINKEDCLIENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYLINKEDCLIENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridProxyLinkedClientListResponseBodyList.hpp>
#include <alibabacloud/models/DescribeHybridProxyLinkedClientListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyLinkedClientListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyLinkedClientListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyLinkedClientListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyLinkedClientListResponseBody() = default ;
    DescribeHybridProxyLinkedClientListResponseBody(const DescribeHybridProxyLinkedClientListResponseBody &) = default ;
    DescribeHybridProxyLinkedClientListResponseBody(DescribeHybridProxyLinkedClientListResponseBody &&) = default ;
    DescribeHybridProxyLinkedClientListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyLinkedClientListResponseBody() = default ;
    DescribeHybridProxyLinkedClientListResponseBody& operator=(const DescribeHybridProxyLinkedClientListResponseBody &) = default ;
    DescribeHybridProxyLinkedClientListResponseBody& operator=(DescribeHybridProxyLinkedClientListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeHybridProxyLinkedClientListResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeHybridProxyLinkedClientListResponseBodyList>) };
    inline vector<DescribeHybridProxyLinkedClientListResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeHybridProxyLinkedClientListResponseBodyList>) };
    inline DescribeHybridProxyLinkedClientListResponseBody& setList(const vector<DescribeHybridProxyLinkedClientListResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeHybridProxyLinkedClientListResponseBody& setList(vector<DescribeHybridProxyLinkedClientListResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeHybridProxyLinkedClientListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeHybridProxyLinkedClientListResponseBodyPageInfo) };
    inline DescribeHybridProxyLinkedClientListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeHybridProxyLinkedClientListResponseBodyPageInfo) };
    inline DescribeHybridProxyLinkedClientListResponseBody& setPageInfo(const DescribeHybridProxyLinkedClientListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeHybridProxyLinkedClientListResponseBody& setPageInfo(DescribeHybridProxyLinkedClientListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyLinkedClientListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<vector<DescribeHybridProxyLinkedClientListResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeHybridProxyLinkedClientListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
