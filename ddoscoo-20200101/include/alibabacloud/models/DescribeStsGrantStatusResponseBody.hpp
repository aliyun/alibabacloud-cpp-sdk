// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class StsGrant : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StsGrant& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StsGrant& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StsGrant() = default ;
      StsGrant(const StsGrant &) = default ;
      StsGrant(StsGrant &&) = default ;
      StsGrant(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StsGrant() = default ;
      StsGrant& operator=(const StsGrant &) = default ;
      StsGrant& operator=(StsGrant &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline StsGrant& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The authorization status. Valid values:
      // 
      // *   **0**: Anti-DDoS Pro or Anti-DDoS Premium is not authorized to access other cloud services.
      // *   **1**: Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stsGrant_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStsGrantStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stsGrant Field Functions 
    bool hasStsGrant() const { return this->stsGrant_ != nullptr;};
    void deleteStsGrant() { this->stsGrant_ = nullptr;};
    inline const DescribeStsGrantStatusResponseBody::StsGrant & getStsGrant() const { DARABONBA_PTR_GET_CONST(stsGrant_, DescribeStsGrantStatusResponseBody::StsGrant) };
    inline DescribeStsGrantStatusResponseBody::StsGrant getStsGrant() { DARABONBA_PTR_GET(stsGrant_, DescribeStsGrantStatusResponseBody::StsGrant) };
    inline DescribeStsGrantStatusResponseBody& setStsGrant(const DescribeStsGrantStatusResponseBody::StsGrant & stsGrant) { DARABONBA_PTR_SET_VALUE(stsGrant_, stsGrant) };
    inline DescribeStsGrantStatusResponseBody& setStsGrant(DescribeStsGrantStatusResponseBody::StsGrant && stsGrant) { DARABONBA_PTR_SET_RVALUE(stsGrant_, stsGrant) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The authorization status of Anti-DDoS Pro or Anti-DDoS Premium.
    shared_ptr<DescribeStsGrantStatusResponseBody::StsGrant> stsGrant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
