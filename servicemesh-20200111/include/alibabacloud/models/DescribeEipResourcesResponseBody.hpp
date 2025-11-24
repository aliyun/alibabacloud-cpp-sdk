// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipResourcesResponseBodyEipList.hpp>
#include <alibabacloud/models/DescribeEipResourcesResponseBodyPageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeEipResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipList, eipList_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipList, eipList_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEipResourcesResponseBody() = default ;
    DescribeEipResourcesResponseBody(const DescribeEipResourcesResponseBody &) = default ;
    DescribeEipResourcesResponseBody(DescribeEipResourcesResponseBody &&) = default ;
    DescribeEipResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipResourcesResponseBody() = default ;
    DescribeEipResourcesResponseBody& operator=(const DescribeEipResourcesResponseBody &) = default ;
    DescribeEipResourcesResponseBody& operator=(DescribeEipResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipList_ == nullptr
        && return this->pageResult_ == nullptr && return this->requestId_ == nullptr; };
    // eipList Field Functions 
    bool hasEipList() const { return this->eipList_ != nullptr;};
    void deleteEipList() { this->eipList_ = nullptr;};
    inline const vector<DescribeEipResourcesResponseBodyEipList> & eipList() const { DARABONBA_PTR_GET_CONST(eipList_, vector<DescribeEipResourcesResponseBodyEipList>) };
    inline vector<DescribeEipResourcesResponseBodyEipList> eipList() { DARABONBA_PTR_GET(eipList_, vector<DescribeEipResourcesResponseBodyEipList>) };
    inline DescribeEipResourcesResponseBody& setEipList(const vector<DescribeEipResourcesResponseBodyEipList> & eipList) { DARABONBA_PTR_SET_VALUE(eipList_, eipList) };
    inline DescribeEipResourcesResponseBody& setEipList(vector<DescribeEipResourcesResponseBodyEipList> && eipList) { DARABONBA_PTR_SET_RVALUE(eipList_, eipList) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const DescribeEipResourcesResponseBodyPageResult & pageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, DescribeEipResourcesResponseBodyPageResult) };
    inline DescribeEipResourcesResponseBodyPageResult pageResult() { DARABONBA_PTR_GET(pageResult_, DescribeEipResourcesResponseBodyPageResult) };
    inline DescribeEipResourcesResponseBody& setPageResult(const DescribeEipResourcesResponseBodyPageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline DescribeEipResourcesResponseBody& setPageResult(DescribeEipResourcesResponseBodyPageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The EIPs.
    std::shared_ptr<vector<DescribeEipResourcesResponseBodyEipList>> eipList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeEipResourcesResponseBodyPageResult> pageResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
