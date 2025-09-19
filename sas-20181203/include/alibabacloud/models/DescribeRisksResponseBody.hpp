// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRisksResponseBodyRisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Risks, risks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Risks, risks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRisksResponseBody() = default ;
    DescribeRisksResponseBody(const DescribeRisksResponseBody &) = default ;
    DescribeRisksResponseBody(DescribeRisksResponseBody &&) = default ;
    DescribeRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRisksResponseBody() = default ;
    DescribeRisksResponseBody& operator=(const DescribeRisksResponseBody &) = default ;
    DescribeRisksResponseBody& operator=(DescribeRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->risks_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // risks Field Functions 
    bool hasRisks() const { return this->risks_ != nullptr;};
    void deleteRisks() { this->risks_ = nullptr;};
    inline const vector<DescribeRisksResponseBodyRisks> & risks() const { DARABONBA_PTR_GET_CONST(risks_, vector<DescribeRisksResponseBodyRisks>) };
    inline vector<DescribeRisksResponseBodyRisks> risks() { DARABONBA_PTR_GET(risks_, vector<DescribeRisksResponseBodyRisks>) };
    inline DescribeRisksResponseBody& setRisks(const vector<DescribeRisksResponseBodyRisks> & risks) { DARABONBA_PTR_SET_VALUE(risks_, risks) };
    inline DescribeRisksResponseBody& setRisks(vector<DescribeRisksResponseBodyRisks> && risks) { DARABONBA_PTR_SET_RVALUE(risks_, risks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRisksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The baselines.
    std::shared_ptr<vector<DescribeRisksResponseBodyRisks>> risks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
