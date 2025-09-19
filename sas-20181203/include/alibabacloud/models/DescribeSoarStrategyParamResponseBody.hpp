// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSoarStrategyParamResponseBody() = default ;
    DescribeSoarStrategyParamResponseBody(const DescribeSoarStrategyParamResponseBody &) = default ;
    DescribeSoarStrategyParamResponseBody(DescribeSoarStrategyParamResponseBody &&) = default ;
    DescribeSoarStrategyParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyParamResponseBody() = default ;
    DescribeSoarStrategyParamResponseBody& operator=(const DescribeSoarStrategyParamResponseBody &) = default ;
    DescribeSoarStrategyParamResponseBody& operator=(DescribeSoarStrategyParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->processInfo_ != nullptr && this->requestId_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSoarStrategyParamResponseBody& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // processInfo Field Functions 
    bool hasProcessInfo() const { return this->processInfo_ != nullptr;};
    void deleteProcessInfo() { this->processInfo_ = nullptr;};
    inline string processInfo() const { DARABONBA_PTR_GET_DEFAULT(processInfo_, "") };
    inline DescribeSoarStrategyParamResponseBody& setProcessInfo(string processInfo) { DARABONBA_PTR_SET_VALUE(processInfo_, processInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategyParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parameters of the policy.
    std::shared_ptr<string> params_ = nullptr;
    // The process information of the policy.
    std::shared_ptr<string> processInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
