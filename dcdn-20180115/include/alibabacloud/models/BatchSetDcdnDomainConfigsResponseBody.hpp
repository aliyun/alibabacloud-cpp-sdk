// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchSetDcdnDomainConfigsResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchSetDcdnDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSetDcdnDomainConfigsResponseBody() = default ;
    BatchSetDcdnDomainConfigsResponseBody(const BatchSetDcdnDomainConfigsResponseBody &) = default ;
    BatchSetDcdnDomainConfigsResponseBody(BatchSetDcdnDomainConfigsResponseBody &&) = default ;
    BatchSetDcdnDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDcdnDomainConfigsResponseBody() = default ;
    BatchSetDcdnDomainConfigsResponseBody& operator=(const BatchSetDcdnDomainConfigsResponseBody &) = default ;
    BatchSetDcdnDomainConfigsResponseBody& operator=(BatchSetDcdnDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const BatchSetDcdnDomainConfigsResponseBodyDomainConfigList & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, BatchSetDcdnDomainConfigsResponseBodyDomainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBodyDomainConfigList domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, BatchSetDcdnDomainConfigsResponseBodyDomainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBody& setDomainConfigList(const BatchSetDcdnDomainConfigsResponseBodyDomainConfigList & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBody& setDomainConfigList(BatchSetDcdnDomainConfigsResponseBodyDomainConfigList && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSetDcdnDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of domain configurations.
    std::shared_ptr<BatchSetDcdnDomainConfigsResponseBodyDomainConfigList> domainConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
