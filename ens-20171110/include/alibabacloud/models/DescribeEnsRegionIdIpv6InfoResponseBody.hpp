// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdIpv6InfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdIpv6InfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportIpv6Info, supportIpv6Info_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdIpv6InfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportIpv6Info, supportIpv6Info_);
    };
    DescribeEnsRegionIdIpv6InfoResponseBody() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(const DescribeEnsRegionIdIpv6InfoResponseBody &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(DescribeEnsRegionIdIpv6InfoResponseBody &&) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdIpv6InfoResponseBody() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody& operator=(const DescribeEnsRegionIdIpv6InfoResponseBody &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody& operator=(DescribeEnsRegionIdIpv6InfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportIpv6Info : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportIpv6Info& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
      };
      friend void from_json(const Darabonba::Json& j, SupportIpv6Info& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
      };
      SupportIpv6Info() = default ;
      SupportIpv6Info(const SupportIpv6Info &) = default ;
      SupportIpv6Info(SupportIpv6Info &&) = default ;
      SupportIpv6Info(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportIpv6Info() = default ;
      SupportIpv6Info& operator=(const SupportIpv6Info &) = default ;
      SupportIpv6Info& operator=(SupportIpv6Info &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->supportIpv6_ == nullptr; };
      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline SupportIpv6Info& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // supportIpv6 Field Functions 
      bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
      void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
      inline bool getSupportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
      inline SupportIpv6Info& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


    protected:
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // Specifies whether IPv6 is supported. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> supportIpv6_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->supportIpv6Info_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportIpv6Info Field Functions 
    bool hasSupportIpv6Info() const { return this->supportIpv6Info_ != nullptr;};
    void deleteSupportIpv6Info() { this->supportIpv6Info_ = nullptr;};
    inline const DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info & getSupportIpv6Info() const { DARABONBA_PTR_GET_CONST(supportIpv6Info_, DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info getSupportIpv6Info() { DARABONBA_PTR_GET(supportIpv6Info_, DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setSupportIpv6Info(const DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info & supportIpv6Info) { DARABONBA_PTR_SET_VALUE(supportIpv6Info_, supportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setSupportIpv6Info(DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info && supportIpv6Info) { DARABONBA_PTR_SET_RVALUE(supportIpv6Info_, supportIpv6Info) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // IPv6 support information.
    shared_ptr<DescribeEnsRegionIdIpv6InfoResponseBody::SupportIpv6Info> supportIpv6Info_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
