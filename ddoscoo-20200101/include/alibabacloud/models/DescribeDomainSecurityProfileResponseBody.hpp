// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSecurityProfileResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainSecurityProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecurityProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecurityProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeDomainSecurityProfileResponseBody() = default ;
    DescribeDomainSecurityProfileResponseBody(const DescribeDomainSecurityProfileResponseBody &) = default ;
    DescribeDomainSecurityProfileResponseBody(DescribeDomainSecurityProfileResponseBody &&) = default ;
    DescribeDomainSecurityProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecurityProfileResponseBody() = default ;
    DescribeDomainSecurityProfileResponseBody& operator=(const DescribeDomainSecurityProfileResponseBody &) = default ;
    DescribeDomainSecurityProfileResponseBody& operator=(DescribeDomainSecurityProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecurityProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeDomainSecurityProfileResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeDomainSecurityProfileResponseBodyResult>) };
    inline vector<DescribeDomainSecurityProfileResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<DescribeDomainSecurityProfileResponseBodyResult>) };
    inline DescribeDomainSecurityProfileResponseBody& setResult(const vector<DescribeDomainSecurityProfileResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDomainSecurityProfileResponseBody& setResult(vector<DescribeDomainSecurityProfileResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned results.
    std::shared_ptr<vector<DescribeDomainSecurityProfileResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
