// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsResourceUsageResponseBodyEnsResourceUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnsResourceUsage, ensResourceUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsResourceUsage, ensResourceUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsResourceUsageResponseBody() = default ;
    DescribeEnsResourceUsageResponseBody(const DescribeEnsResourceUsageResponseBody &) = default ;
    DescribeEnsResourceUsageResponseBody(DescribeEnsResourceUsageResponseBody &&) = default ;
    DescribeEnsResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsResourceUsageResponseBody() = default ;
    DescribeEnsResourceUsageResponseBody& operator=(const DescribeEnsResourceUsageResponseBody &) = default ;
    DescribeEnsResourceUsageResponseBody& operator=(DescribeEnsResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensResourceUsage_ != nullptr
        && this->requestId_ != nullptr; };
    // ensResourceUsage Field Functions 
    bool hasEnsResourceUsage() const { return this->ensResourceUsage_ != nullptr;};
    void deleteEnsResourceUsage() { this->ensResourceUsage_ = nullptr;};
    inline const vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage> & ensResourceUsage() const { DARABONBA_PTR_GET_CONST(ensResourceUsage_, vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage>) };
    inline vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage> ensResourceUsage() { DARABONBA_PTR_GET(ensResourceUsage_, vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage>) };
    inline DescribeEnsResourceUsageResponseBody& setEnsResourceUsage(const vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage> & ensResourceUsage) { DARABONBA_PTR_SET_VALUE(ensResourceUsage_, ensResourceUsage) };
    inline DescribeEnsResourceUsageResponseBody& setEnsResourceUsage(vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage> && ensResourceUsage) { DARABONBA_PTR_SET_RVALUE(ensResourceUsage_, ensResourceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The resource usage data.
    std::shared_ptr<vector<DescribeEnsResourceUsageResponseBodyEnsResourceUsage>> ensResourceUsage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
