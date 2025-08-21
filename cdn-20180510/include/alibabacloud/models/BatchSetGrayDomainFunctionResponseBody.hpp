// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchSetGrayDomainFunctionResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetGrayDomainFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSetGrayDomainFunctionResponseBody() = default ;
    BatchSetGrayDomainFunctionResponseBody(const BatchSetGrayDomainFunctionResponseBody &) = default ;
    BatchSetGrayDomainFunctionResponseBody(BatchSetGrayDomainFunctionResponseBody &&) = default ;
    BatchSetGrayDomainFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetGrayDomainFunctionResponseBody() = default ;
    BatchSetGrayDomainFunctionResponseBody& operator=(const BatchSetGrayDomainFunctionResponseBody &) = default ;
    BatchSetGrayDomainFunctionResponseBody& operator=(BatchSetGrayDomainFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList> & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList>) };
    inline vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList> domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList>) };
    inline BatchSetGrayDomainFunctionResponseBody& setDomainConfigList(const vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline BatchSetGrayDomainFunctionResponseBody& setDomainConfigList(vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSetGrayDomainFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<BatchSetGrayDomainFunctionResponseBodyDomainConfigList>> domainConfigList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
