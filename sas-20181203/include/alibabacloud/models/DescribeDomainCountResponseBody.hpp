// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootDomainsCount, rootDomainsCount_);
      DARABONBA_PTR_TO_JSON(SubDomainsCount, subDomainsCount_);
      DARABONBA_PTR_TO_JSON(TotalDomainsCount, totalDomainsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootDomainsCount, rootDomainsCount_);
      DARABONBA_PTR_FROM_JSON(SubDomainsCount, subDomainsCount_);
      DARABONBA_PTR_FROM_JSON(TotalDomainsCount, totalDomainsCount_);
    };
    DescribeDomainCountResponseBody() = default ;
    DescribeDomainCountResponseBody(const DescribeDomainCountResponseBody &) = default ;
    DescribeDomainCountResponseBody(DescribeDomainCountResponseBody &&) = default ;
    DescribeDomainCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCountResponseBody() = default ;
    DescribeDomainCountResponseBody& operator=(const DescribeDomainCountResponseBody &) = default ;
    DescribeDomainCountResponseBody& operator=(DescribeDomainCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rootDomainsCount_ == nullptr && return this->subDomainsCount_ == nullptr && return this->totalDomainsCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootDomainsCount Field Functions 
    bool hasRootDomainsCount() const { return this->rootDomainsCount_ != nullptr;};
    void deleteRootDomainsCount() { this->rootDomainsCount_ = nullptr;};
    inline int32_t rootDomainsCount() const { DARABONBA_PTR_GET_DEFAULT(rootDomainsCount_, 0) };
    inline DescribeDomainCountResponseBody& setRootDomainsCount(int32_t rootDomainsCount) { DARABONBA_PTR_SET_VALUE(rootDomainsCount_, rootDomainsCount) };


    // subDomainsCount Field Functions 
    bool hasSubDomainsCount() const { return this->subDomainsCount_ != nullptr;};
    void deleteSubDomainsCount() { this->subDomainsCount_ = nullptr;};
    inline int32_t subDomainsCount() const { DARABONBA_PTR_GET_DEFAULT(subDomainsCount_, 0) };
    inline DescribeDomainCountResponseBody& setSubDomainsCount(int32_t subDomainsCount) { DARABONBA_PTR_SET_VALUE(subDomainsCount_, subDomainsCount) };


    // totalDomainsCount Field Functions 
    bool hasTotalDomainsCount() const { return this->totalDomainsCount_ != nullptr;};
    void deleteTotalDomainsCount() { this->totalDomainsCount_ = nullptr;};
    inline int32_t totalDomainsCount() const { DARABONBA_PTR_GET_DEFAULT(totalDomainsCount_, 0) };
    inline DescribeDomainCountResponseBody& setTotalDomainsCount(int32_t totalDomainsCount) { DARABONBA_PTR_SET_VALUE(totalDomainsCount_, totalDomainsCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of root domains.
    std::shared_ptr<int32_t> rootDomainsCount_ = nullptr;
    // The number of subdomains.
    std::shared_ptr<int32_t> subDomainsCount_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalDomainsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
