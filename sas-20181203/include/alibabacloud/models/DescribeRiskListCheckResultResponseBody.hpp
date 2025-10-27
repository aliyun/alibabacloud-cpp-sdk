// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskListCheckResultResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskListCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskListCheckResultResponseBody() = default ;
    DescribeRiskListCheckResultResponseBody(const DescribeRiskListCheckResultResponseBody &) = default ;
    DescribeRiskListCheckResultResponseBody(DescribeRiskListCheckResultResponseBody &&) = default ;
    DescribeRiskListCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskListCheckResultResponseBody() = default ;
    DescribeRiskListCheckResultResponseBody& operator=(const DescribeRiskListCheckResultResponseBody &) = default ;
    DescribeRiskListCheckResultResponseBody& operator=(DescribeRiskListCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeRiskListCheckResultResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeRiskListCheckResultResponseBodyList>) };
    inline vector<DescribeRiskListCheckResultResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeRiskListCheckResultResponseBodyList>) };
    inline DescribeRiskListCheckResultResponseBody& setList(const vector<DescribeRiskListCheckResultResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeRiskListCheckResultResponseBody& setList(vector<DescribeRiskListCheckResultResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskListCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of risk items for each cloud service.
    std::shared_ptr<vector<DescribeRiskListCheckResultResponseBodyList>> list_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
