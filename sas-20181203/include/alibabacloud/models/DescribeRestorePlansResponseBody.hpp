// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestorePlansResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestorePlansResponseBodyRestorePlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestorePlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestorePlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestorePlans, restorePlans_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestorePlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestorePlans, restorePlans_);
    };
    DescribeRestorePlansResponseBody() = default ;
    DescribeRestorePlansResponseBody(const DescribeRestorePlansResponseBody &) = default ;
    DescribeRestorePlansResponseBody(DescribeRestorePlansResponseBody &&) = default ;
    DescribeRestorePlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestorePlansResponseBody() = default ;
    DescribeRestorePlansResponseBody& operator=(const DescribeRestorePlansResponseBody &) = default ;
    DescribeRestorePlansResponseBody& operator=(DescribeRestorePlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->restorePlans_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeRestorePlansResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeRestorePlansResponseBodyPageInfo) };
    inline DescribeRestorePlansResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeRestorePlansResponseBodyPageInfo) };
    inline DescribeRestorePlansResponseBody& setPageInfo(const DescribeRestorePlansResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeRestorePlansResponseBody& setPageInfo(DescribeRestorePlansResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestorePlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restorePlans Field Functions 
    bool hasRestorePlans() const { return this->restorePlans_ != nullptr;};
    void deleteRestorePlans() { this->restorePlans_ = nullptr;};
    inline const vector<DescribeRestorePlansResponseBodyRestorePlans> & restorePlans() const { DARABONBA_PTR_GET_CONST(restorePlans_, vector<DescribeRestorePlansResponseBodyRestorePlans>) };
    inline vector<DescribeRestorePlansResponseBodyRestorePlans> restorePlans() { DARABONBA_PTR_GET(restorePlans_, vector<DescribeRestorePlansResponseBodyRestorePlans>) };
    inline DescribeRestorePlansResponseBody& setRestorePlans(const vector<DescribeRestorePlansResponseBodyRestorePlans> & restorePlans) { DARABONBA_PTR_SET_VALUE(restorePlans_, restorePlans) };
    inline DescribeRestorePlansResponseBody& setRestorePlans(vector<DescribeRestorePlansResponseBodyRestorePlans> && restorePlans) { DARABONBA_PTR_SET_RVALUE(restorePlans_, restorePlans) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeRestorePlansResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the restoration tasks.
    std::shared_ptr<vector<DescribeRestorePlansResponseBodyRestorePlans>> restorePlans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
