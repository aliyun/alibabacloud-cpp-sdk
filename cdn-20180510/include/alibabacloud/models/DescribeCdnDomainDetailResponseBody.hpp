// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainDetailResponseBodyGetDomainDetailModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetDomainDetailModel, getDomainDetailModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetDomainDetailModel, getDomainDetailModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainDetailResponseBody() = default ;
    DescribeCdnDomainDetailResponseBody(const DescribeCdnDomainDetailResponseBody &) = default ;
    DescribeCdnDomainDetailResponseBody(DescribeCdnDomainDetailResponseBody &&) = default ;
    DescribeCdnDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainDetailResponseBody() = default ;
    DescribeCdnDomainDetailResponseBody& operator=(const DescribeCdnDomainDetailResponseBody &) = default ;
    DescribeCdnDomainDetailResponseBody& operator=(DescribeCdnDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->getDomainDetailModel_ != nullptr
        && this->requestId_ != nullptr; };
    // getDomainDetailModel Field Functions 
    bool hasGetDomainDetailModel() const { return this->getDomainDetailModel_ != nullptr;};
    void deleteGetDomainDetailModel() { this->getDomainDetailModel_ = nullptr;};
    inline const DescribeCdnDomainDetailResponseBodyGetDomainDetailModel & getDomainDetailModel() const { DARABONBA_PTR_GET_CONST(getDomainDetailModel_, DescribeCdnDomainDetailResponseBodyGetDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel getDomainDetailModel() { DARABONBA_PTR_GET(getDomainDetailModel_, DescribeCdnDomainDetailResponseBodyGetDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBody& setGetDomainDetailModel(const DescribeCdnDomainDetailResponseBodyGetDomainDetailModel & getDomainDetailModel) { DARABONBA_PTR_SET_VALUE(getDomainDetailModel_, getDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBody& setGetDomainDetailModel(DescribeCdnDomainDetailResponseBodyGetDomainDetailModel && getDomainDetailModel) { DARABONBA_PTR_SET_RVALUE(getDomainDetailModel_, getDomainDetailModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the accelerated domain name.
    std::shared_ptr<DescribeCdnDomainDetailResponseBodyGetDomainDetailModel> getDomainDetailModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
