// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsedServiceResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeUsedServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsedServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsedServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    DescribeUsedServiceResponseBody() = default ;
    DescribeUsedServiceResponseBody(const DescribeUsedServiceResponseBody &) = default ;
    DescribeUsedServiceResponseBody(DescribeUsedServiceResponseBody &&) = default ;
    DescribeUsedServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsedServiceResponseBody() = default ;
    DescribeUsedServiceResponseBody& operator=(const DescribeUsedServiceResponseBody &) = default ;
    DescribeUsedServiceResponseBody& operator=(DescribeUsedServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->records_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsedServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeUsedServiceResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeUsedServiceResponseBodyRecords>) };
    inline vector<DescribeUsedServiceResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribeUsedServiceResponseBodyRecords>) };
    inline DescribeUsedServiceResponseBody& setRecords(const vector<DescribeUsedServiceResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeUsedServiceResponseBody& setRecords(vector<DescribeUsedServiceResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Record details
    std::shared_ptr<vector<DescribeUsedServiceResponseBodyRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
