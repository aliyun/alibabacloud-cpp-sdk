// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserVipsByDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
    };
    DescribeDcdnUserVipsByDomainResponseBody() = default ;
    DescribeDcdnUserVipsByDomainResponseBody(const DescribeDcdnUserVipsByDomainResponseBody &) = default ;
    DescribeDcdnUserVipsByDomainResponseBody(DescribeDcdnUserVipsByDomainResponseBody &&) = default ;
    DescribeDcdnUserVipsByDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserVipsByDomainResponseBody() = default ;
    DescribeDcdnUserVipsByDomainResponseBody& operator=(const DescribeDcdnUserVipsByDomainResponseBody &) = default ;
    DescribeDcdnUserVipsByDomainResponseBody& operator=(DescribeDcdnUserVipsByDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vips& obj) { 
        DARABONBA_PTR_TO_JSON(Vip, vip_);
      };
      friend void from_json(const Darabonba::Json& j, Vips& obj) { 
        DARABONBA_PTR_FROM_JSON(Vip, vip_);
      };
      Vips() = default ;
      Vips(const Vips &) = default ;
      Vips(Vips &&) = default ;
      Vips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vips() = default ;
      Vips& operator=(const Vips &) = default ;
      Vips& operator=(Vips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vip_ == nullptr; };
      // vip Field Functions 
      bool hasVip() const { return this->vip_ != nullptr;};
      void deleteVip() { this->vip_ = nullptr;};
      inline const vector<string> & getVip() const { DARABONBA_PTR_GET_CONST(vip_, vector<string>) };
      inline vector<string> getVip() { DARABONBA_PTR_GET(vip_, vector<string>) };
      inline Vips& setVip(const vector<string> & vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };
      inline Vips& setVip(vector<string> && vip) { DARABONBA_PTR_SET_RVALUE(vip_, vip) };


    protected:
      shared_ptr<vector<string>> vip_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->requestId_ == nullptr && this->vips_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserVipsByDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserVipsByDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const DescribeDcdnUserVipsByDomainResponseBody::Vips & getVips() const { DARABONBA_PTR_GET_CONST(vips_, DescribeDcdnUserVipsByDomainResponseBody::Vips) };
    inline DescribeDcdnUserVipsByDomainResponseBody::Vips getVips() { DARABONBA_PTR_GET(vips_, DescribeDcdnUserVipsByDomainResponseBody::Vips) };
    inline DescribeDcdnUserVipsByDomainResponseBody& setVips(const DescribeDcdnUserVipsByDomainResponseBody::Vips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeDcdnUserVipsByDomainResponseBody& setVips(DescribeDcdnUserVipsByDomainResponseBody::Vips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


  protected:
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of VIPs.
    shared_ptr<DescribeDcdnUserVipsByDomainResponseBody::Vips> vips_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
