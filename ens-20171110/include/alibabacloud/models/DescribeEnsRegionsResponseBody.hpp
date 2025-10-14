// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsRegionsResponseBodyEnsRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsRegions, ensRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsRegions, ensRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsRegionsResponseBody() = default ;
    DescribeEnsRegionsResponseBody(const DescribeEnsRegionsResponseBody &) = default ;
    DescribeEnsRegionsResponseBody(DescribeEnsRegionsResponseBody &&) = default ;
    DescribeEnsRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionsResponseBody() = default ;
    DescribeEnsRegionsResponseBody& operator=(const DescribeEnsRegionsResponseBody &) = default ;
    DescribeEnsRegionsResponseBody& operator=(DescribeEnsRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->ensRegions_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsRegionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensRegions Field Functions 
    bool hasEnsRegions() const { return this->ensRegions_ != nullptr;};
    void deleteEnsRegions() { this->ensRegions_ = nullptr;};
    inline const DescribeEnsRegionsResponseBodyEnsRegions & ensRegions() const { DARABONBA_PTR_GET_CONST(ensRegions_, DescribeEnsRegionsResponseBodyEnsRegions) };
    inline DescribeEnsRegionsResponseBodyEnsRegions ensRegions() { DARABONBA_PTR_GET(ensRegions_, DescribeEnsRegionsResponseBodyEnsRegions) };
    inline DescribeEnsRegionsResponseBody& setEnsRegions(const DescribeEnsRegionsResponseBodyEnsRegions & ensRegions) { DARABONBA_PTR_SET_VALUE(ensRegions_, ensRegions) };
    inline DescribeEnsRegionsResponseBody& setEnsRegions(DescribeEnsRegionsResponseBodyEnsRegions && ensRegions) { DARABONBA_PTR_SET_RVALUE(ensRegions_, ensRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The service code. 0 is returned for a successful request. An error code is returned for a failed request.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the regions.
    std::shared_ptr<DescribeEnsRegionsResponseBodyEnsRegions> ensRegions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
