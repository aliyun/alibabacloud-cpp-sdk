// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomBlockInstancesResponseBodyInstanceList.hpp>
#include <alibabacloud/models/DescribeCustomBlockInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomBlockInstancesResponseBody() = default ;
    DescribeCustomBlockInstancesResponseBody(const DescribeCustomBlockInstancesResponseBody &) = default ;
    DescribeCustomBlockInstancesResponseBody(DescribeCustomBlockInstancesResponseBody &&) = default ;
    DescribeCustomBlockInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockInstancesResponseBody() = default ;
    DescribeCustomBlockInstancesResponseBody& operator=(const DescribeCustomBlockInstancesResponseBody &) = default ;
    DescribeCustomBlockInstancesResponseBody& operator=(DescribeCustomBlockInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeCustomBlockInstancesResponseBodyInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeCustomBlockInstancesResponseBodyInstanceList>) };
    inline vector<DescribeCustomBlockInstancesResponseBodyInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeCustomBlockInstancesResponseBodyInstanceList>) };
    inline DescribeCustomBlockInstancesResponseBody& setInstanceList(const vector<DescribeCustomBlockInstancesResponseBodyInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeCustomBlockInstancesResponseBody& setInstanceList(vector<DescribeCustomBlockInstancesResponseBodyInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCustomBlockInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCustomBlockInstancesResponseBodyPageInfo) };
    inline DescribeCustomBlockInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCustomBlockInstancesResponseBodyPageInfo) };
    inline DescribeCustomBlockInstancesResponseBody& setPageInfo(const DescribeCustomBlockInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCustomBlockInstancesResponseBody& setPageInfo(DescribeCustomBlockInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomBlockInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The server ID.
    std::shared_ptr<vector<DescribeCustomBlockInstancesResponseBodyInstanceList>> instanceList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeCustomBlockInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
