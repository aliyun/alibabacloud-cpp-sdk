// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSEDPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSEDPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainUsedPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsedPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsedPorts, usedPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsedPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsedPorts, usedPorts_);
    };
    DescribeDomainUsedPortsResponseBody() = default ;
    DescribeDomainUsedPortsResponseBody(const DescribeDomainUsedPortsResponseBody &) = default ;
    DescribeDomainUsedPortsResponseBody(DescribeDomainUsedPortsResponseBody &&) = default ;
    DescribeDomainUsedPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsedPortsResponseBody() = default ;
    DescribeDomainUsedPortsResponseBody& operator=(const DescribeDomainUsedPortsResponseBody &) = default ;
    DescribeDomainUsedPortsResponseBody& operator=(DescribeDomainUsedPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usedPorts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainUsedPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usedPorts Field Functions 
    bool hasUsedPorts() const { return this->usedPorts_ != nullptr;};
    void deleteUsedPorts() { this->usedPorts_ = nullptr;};
    inline const vector<int32_t> & getUsedPorts() const { DARABONBA_PTR_GET_CONST(usedPorts_, vector<int32_t>) };
    inline vector<int32_t> getUsedPorts() { DARABONBA_PTR_GET(usedPorts_, vector<int32_t>) };
    inline DescribeDomainUsedPortsResponseBody& setUsedPorts(const vector<int32_t> & usedPorts) { DARABONBA_PTR_SET_VALUE(usedPorts_, usedPorts) };
    inline DescribeDomainUsedPortsResponseBody& setUsedPorts(vector<int32_t> && usedPorts) { DARABONBA_PTR_SET_RVALUE(usedPorts_, usedPorts) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<int32_t>> usedPorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
