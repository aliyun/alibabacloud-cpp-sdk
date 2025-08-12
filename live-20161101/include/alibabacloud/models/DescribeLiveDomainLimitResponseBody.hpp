// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainLimitResponseBodyLiveDomainLimitList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDomainLimitList, liveDomainLimitList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDomainLimitList, liveDomainLimitList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainLimitResponseBody() = default ;
    DescribeLiveDomainLimitResponseBody(const DescribeLiveDomainLimitResponseBody &) = default ;
    DescribeLiveDomainLimitResponseBody(DescribeLiveDomainLimitResponseBody &&) = default ;
    DescribeLiveDomainLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLimitResponseBody() = default ;
    DescribeLiveDomainLimitResponseBody& operator=(const DescribeLiveDomainLimitResponseBody &) = default ;
    DescribeLiveDomainLimitResponseBody& operator=(DescribeLiveDomainLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveDomainLimitList_ != nullptr
        && this->requestId_ != nullptr; };
    // liveDomainLimitList Field Functions 
    bool hasLiveDomainLimitList() const { return this->liveDomainLimitList_ != nullptr;};
    void deleteLiveDomainLimitList() { this->liveDomainLimitList_ = nullptr;};
    inline const DescribeLiveDomainLimitResponseBodyLiveDomainLimitList & liveDomainLimitList() const { DARABONBA_PTR_GET_CONST(liveDomainLimitList_, DescribeLiveDomainLimitResponseBodyLiveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBodyLiveDomainLimitList liveDomainLimitList() { DARABONBA_PTR_GET(liveDomainLimitList_, DescribeLiveDomainLimitResponseBodyLiveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBody& setLiveDomainLimitList(const DescribeLiveDomainLimitResponseBodyLiveDomainLimitList & liveDomainLimitList) { DARABONBA_PTR_SET_VALUE(liveDomainLimitList_, liveDomainLimitList) };
    inline DescribeLiveDomainLimitResponseBody& setLiveDomainLimitList(DescribeLiveDomainLimitResponseBodyLiveDomainLimitList && liveDomainLimitList) { DARABONBA_PTR_SET_RVALUE(liveDomainLimitList_, liveDomainLimitList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The limits.
    std::shared_ptr<DescribeLiveDomainLimitResponseBodyLiveDomainLimitList> liveDomainLimitList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
