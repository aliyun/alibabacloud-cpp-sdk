// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSTAGINGIPRESPONSEBODY_HPP_
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
  class DescribeDcdnStagingIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnStagingIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnStagingIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4s, IPV4s_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnStagingIpResponseBody() = default ;
    DescribeDcdnStagingIpResponseBody(const DescribeDcdnStagingIpResponseBody &) = default ;
    DescribeDcdnStagingIpResponseBody(DescribeDcdnStagingIpResponseBody &&) = default ;
    DescribeDcdnStagingIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnStagingIpResponseBody() = default ;
    DescribeDcdnStagingIpResponseBody& operator=(const DescribeDcdnStagingIpResponseBody &) = default ;
    DescribeDcdnStagingIpResponseBody& operator=(DescribeDcdnStagingIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IPV4s : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IPV4s& obj) { 
        DARABONBA_PTR_TO_JSON(IPV4, IPV4_);
      };
      friend void from_json(const Darabonba::Json& j, IPV4s& obj) { 
        DARABONBA_PTR_FROM_JSON(IPV4, IPV4_);
      };
      IPV4s() = default ;
      IPV4s(const IPV4s &) = default ;
      IPV4s(IPV4s &&) = default ;
      IPV4s(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IPV4s() = default ;
      IPV4s& operator=(const IPV4s &) = default ;
      IPV4s& operator=(IPV4s &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IPV4_ == nullptr; };
      // IPV4 Field Functions 
      bool hasIPV4() const { return this->IPV4_ != nullptr;};
      void deleteIPV4() { this->IPV4_ = nullptr;};
      inline const vector<string> & getIPV4() const { DARABONBA_PTR_GET_CONST(IPV4_, vector<string>) };
      inline vector<string> getIPV4() { DARABONBA_PTR_GET(IPV4_, vector<string>) };
      inline IPV4s& setIPV4(const vector<string> & IPV4) { DARABONBA_PTR_SET_VALUE(IPV4_, IPV4) };
      inline IPV4s& setIPV4(vector<string> && IPV4) { DARABONBA_PTR_SET_RVALUE(IPV4_, IPV4) };


    protected:
      shared_ptr<vector<string>> IPV4_ {};
    };

    virtual bool empty() const override { return this->IPV4s_ == nullptr
        && this->requestId_ == nullptr; };
    // IPV4s Field Functions 
    bool hasIPV4s() const { return this->IPV4s_ != nullptr;};
    void deleteIPV4s() { this->IPV4s_ = nullptr;};
    inline const DescribeDcdnStagingIpResponseBody::IPV4s & getIPV4s() const { DARABONBA_PTR_GET_CONST(IPV4s_, DescribeDcdnStagingIpResponseBody::IPV4s) };
    inline DescribeDcdnStagingIpResponseBody::IPV4s getIPV4s() { DARABONBA_PTR_GET(IPV4s_, DescribeDcdnStagingIpResponseBody::IPV4s) };
    inline DescribeDcdnStagingIpResponseBody& setIPV4s(const DescribeDcdnStagingIpResponseBody::IPV4s & iPV4s) { DARABONBA_PTR_SET_VALUE(IPV4s_, iPV4s) };
    inline DescribeDcdnStagingIpResponseBody& setIPV4s(DescribeDcdnStagingIpResponseBody::IPV4s && iPV4s) { DARABONBA_PTR_SET_RVALUE(IPV4s_, iPV4s) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnStagingIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDcdnStagingIpResponseBody::IPV4s> IPV4s_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
