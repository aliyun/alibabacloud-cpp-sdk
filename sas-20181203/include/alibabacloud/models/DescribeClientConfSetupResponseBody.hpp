// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClientConfSetupResponseBodyClientConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfSetupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfSetupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientConf, clientConf_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfSetupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientConf, clientConf_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientConfSetupResponseBody() = default ;
    DescribeClientConfSetupResponseBody(const DescribeClientConfSetupResponseBody &) = default ;
    DescribeClientConfSetupResponseBody(DescribeClientConfSetupResponseBody &&) = default ;
    DescribeClientConfSetupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfSetupResponseBody() = default ;
    DescribeClientConfSetupResponseBody& operator=(const DescribeClientConfSetupResponseBody &) = default ;
    DescribeClientConfSetupResponseBody& operator=(DescribeClientConfSetupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientConf_ == nullptr
        && return this->requestId_ == nullptr; };
    // clientConf Field Functions 
    bool hasClientConf() const { return this->clientConf_ != nullptr;};
    void deleteClientConf() { this->clientConf_ = nullptr;};
    inline const DescribeClientConfSetupResponseBodyClientConf & clientConf() const { DARABONBA_PTR_GET_CONST(clientConf_, DescribeClientConfSetupResponseBodyClientConf) };
    inline DescribeClientConfSetupResponseBodyClientConf clientConf() { DARABONBA_PTR_GET(clientConf_, DescribeClientConfSetupResponseBodyClientConf) };
    inline DescribeClientConfSetupResponseBody& setClientConf(const DescribeClientConfSetupResponseBodyClientConf & clientConf) { DARABONBA_PTR_SET_VALUE(clientConf_, clientConf) };
    inline DescribeClientConfSetupResponseBody& setClientConf(DescribeClientConfSetupResponseBodyClientConf && clientConf) { DARABONBA_PTR_SET_RVALUE(clientConf_, clientConf) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientConfSetupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the Security Center agent.
    std::shared_ptr<DescribeClientConfSetupResponseBodyClientConf> clientConf_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
