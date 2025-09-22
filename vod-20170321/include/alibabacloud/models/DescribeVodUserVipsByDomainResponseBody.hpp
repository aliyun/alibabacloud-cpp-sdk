// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserVipsByDomainResponseBodyVips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserVipsByDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
    };
    DescribeVodUserVipsByDomainResponseBody() = default ;
    DescribeVodUserVipsByDomainResponseBody(const DescribeVodUserVipsByDomainResponseBody &) = default ;
    DescribeVodUserVipsByDomainResponseBody(DescribeVodUserVipsByDomainResponseBody &&) = default ;
    DescribeVodUserVipsByDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserVipsByDomainResponseBody() = default ;
    DescribeVodUserVipsByDomainResponseBody& operator=(const DescribeVodUserVipsByDomainResponseBody &) = default ;
    DescribeVodUserVipsByDomainResponseBody& operator=(DescribeVodUserVipsByDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->requestId_ != nullptr && this->vips_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodUserVipsByDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodUserVipsByDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const DescribeVodUserVipsByDomainResponseBodyVips & vips() const { DARABONBA_PTR_GET_CONST(vips_, DescribeVodUserVipsByDomainResponseBodyVips) };
    inline DescribeVodUserVipsByDomainResponseBodyVips vips() { DARABONBA_PTR_GET(vips_, DescribeVodUserVipsByDomainResponseBodyVips) };
    inline DescribeVodUserVipsByDomainResponseBody& setVips(const DescribeVodUserVipsByDomainResponseBodyVips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeVodUserVipsByDomainResponseBody& setVips(DescribeVodUserVipsByDomainResponseBodyVips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeVodUserVipsByDomainResponseBodyVips> vips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
