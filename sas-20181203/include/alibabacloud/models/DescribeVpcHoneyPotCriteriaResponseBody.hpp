// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTCRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTCRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpcHoneyPotCriteriaResponseBody() = default ;
    DescribeVpcHoneyPotCriteriaResponseBody(const DescribeVpcHoneyPotCriteriaResponseBody &) = default ;
    DescribeVpcHoneyPotCriteriaResponseBody(DescribeVpcHoneyPotCriteriaResponseBody &&) = default ;
    DescribeVpcHoneyPotCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotCriteriaResponseBody() = default ;
    DescribeVpcHoneyPotCriteriaResponseBody& operator=(const DescribeVpcHoneyPotCriteriaResponseBody &) = default ;
    DescribeVpcHoneyPotCriteriaResponseBody& operator=(DescribeVpcHoneyPotCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->criteriaList_ != nullptr
        && this->requestId_ != nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList> & criteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList>) };
    inline vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList> criteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList>) };
    inline DescribeVpcHoneyPotCriteriaResponseBody& setCriteriaList(const vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline DescribeVpcHoneyPotCriteriaResponseBody& setCriteriaList(vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcHoneyPotCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the search conditions.
    std::shared_ptr<vector<DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList>> criteriaList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
