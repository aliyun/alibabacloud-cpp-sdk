// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETCDNDOMAINCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchSetCdnDomainConfigResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetCdnDomainConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetCdnDomainConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetCdnDomainConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSetCdnDomainConfigResponseBody() = default ;
    BatchSetCdnDomainConfigResponseBody(const BatchSetCdnDomainConfigResponseBody &) = default ;
    BatchSetCdnDomainConfigResponseBody(BatchSetCdnDomainConfigResponseBody &&) = default ;
    BatchSetCdnDomainConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetCdnDomainConfigResponseBody() = default ;
    BatchSetCdnDomainConfigResponseBody& operator=(const BatchSetCdnDomainConfigResponseBody &) = default ;
    BatchSetCdnDomainConfigResponseBody& operator=(BatchSetCdnDomainConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const BatchSetCdnDomainConfigResponseBodyDomainConfigList & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, BatchSetCdnDomainConfigResponseBodyDomainConfigList) };
    inline BatchSetCdnDomainConfigResponseBodyDomainConfigList domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, BatchSetCdnDomainConfigResponseBodyDomainConfigList) };
    inline BatchSetCdnDomainConfigResponseBody& setDomainConfigList(const BatchSetCdnDomainConfigResponseBodyDomainConfigList & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline BatchSetCdnDomainConfigResponseBody& setDomainConfigList(BatchSetCdnDomainConfigResponseBodyDomainConfigList && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSetCdnDomainConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of domain configurations.
    std::shared_ptr<BatchSetCdnDomainConfigResponseBodyDomainConfigList> domainConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
