// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStsGrantStatusResponseBodyStsGrant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeStsGrantStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStsGrantStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StsGrant, stsGrant_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStsGrantStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StsGrant, stsGrant_);
    };
    DescribeStsGrantStatusResponseBody() = default ;
    DescribeStsGrantStatusResponseBody(const DescribeStsGrantStatusResponseBody &) = default ;
    DescribeStsGrantStatusResponseBody(DescribeStsGrantStatusResponseBody &&) = default ;
    DescribeStsGrantStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStsGrantStatusResponseBody() = default ;
    DescribeStsGrantStatusResponseBody& operator=(const DescribeStsGrantStatusResponseBody &) = default ;
    DescribeStsGrantStatusResponseBody& operator=(DescribeStsGrantStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stsGrant_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStsGrantStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stsGrant Field Functions 
    bool hasStsGrant() const { return this->stsGrant_ != nullptr;};
    void deleteStsGrant() { this->stsGrant_ = nullptr;};
    inline const DescribeStsGrantStatusResponseBodyStsGrant & stsGrant() const { DARABONBA_PTR_GET_CONST(stsGrant_, DescribeStsGrantStatusResponseBodyStsGrant) };
    inline DescribeStsGrantStatusResponseBodyStsGrant stsGrant() { DARABONBA_PTR_GET(stsGrant_, DescribeStsGrantStatusResponseBodyStsGrant) };
    inline DescribeStsGrantStatusResponseBody& setStsGrant(const DescribeStsGrantStatusResponseBodyStsGrant & stsGrant) { DARABONBA_PTR_SET_VALUE(stsGrant_, stsGrant) };
    inline DescribeStsGrantStatusResponseBody& setStsGrant(DescribeStsGrantStatusResponseBodyStsGrant && stsGrant) { DARABONBA_PTR_SET_RVALUE(stsGrant_, stsGrant) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The authorization status of Anti-DDoS Pro or Anti-DDoS Premium.
    std::shared_ptr<DescribeStsGrantStatusResponseBodyStsGrant> stsGrant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
