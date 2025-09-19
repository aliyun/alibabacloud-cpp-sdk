// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTESTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTESTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAttestorsResponseBodyAttestors.hpp>
#include <alibabacloud/models/DescribeAttestorsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAttestorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttestorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attestors, attestors_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttestorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attestors, attestors_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAttestorsResponseBody() = default ;
    DescribeAttestorsResponseBody(const DescribeAttestorsResponseBody &) = default ;
    DescribeAttestorsResponseBody(DescribeAttestorsResponseBody &&) = default ;
    DescribeAttestorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttestorsResponseBody() = default ;
    DescribeAttestorsResponseBody& operator=(const DescribeAttestorsResponseBody &) = default ;
    DescribeAttestorsResponseBody& operator=(DescribeAttestorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attestors_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // attestors Field Functions 
    bool hasAttestors() const { return this->attestors_ != nullptr;};
    void deleteAttestors() { this->attestors_ = nullptr;};
    inline const vector<DescribeAttestorsResponseBodyAttestors> & attestors() const { DARABONBA_PTR_GET_CONST(attestors_, vector<DescribeAttestorsResponseBodyAttestors>) };
    inline vector<DescribeAttestorsResponseBodyAttestors> attestors() { DARABONBA_PTR_GET(attestors_, vector<DescribeAttestorsResponseBodyAttestors>) };
    inline DescribeAttestorsResponseBody& setAttestors(const vector<DescribeAttestorsResponseBodyAttestors> & attestors) { DARABONBA_PTR_SET_VALUE(attestors_, attestors) };
    inline DescribeAttestorsResponseBody& setAttestors(vector<DescribeAttestorsResponseBodyAttestors> && attestors) { DARABONBA_PTR_SET_RVALUE(attestors_, attestors) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAttestorsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAttestorsResponseBodyPageInfo) };
    inline DescribeAttestorsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAttestorsResponseBodyPageInfo) };
    inline DescribeAttestorsResponseBody& setPageInfo(const DescribeAttestorsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAttestorsResponseBody& setPageInfo(DescribeAttestorsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttestorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The witnesses.
    std::shared_ptr<vector<DescribeAttestorsResponseBodyAttestors>> attestors_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeAttestorsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
