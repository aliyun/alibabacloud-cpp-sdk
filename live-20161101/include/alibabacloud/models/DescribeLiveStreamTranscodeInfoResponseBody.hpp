// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTranscodeList, domainTranscodeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTranscodeList, domainTranscodeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamTranscodeInfoResponseBody() = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(const DescribeLiveStreamTranscodeInfoResponseBody &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(DescribeLiveStreamTranscodeInfoResponseBody &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBody() = default ;
    DescribeLiveStreamTranscodeInfoResponseBody& operator=(const DescribeLiveStreamTranscodeInfoResponseBody &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody& operator=(DescribeLiveStreamTranscodeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainTranscodeList_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainTranscodeList Field Functions 
    bool hasDomainTranscodeList() const { return this->domainTranscodeList_ != nullptr;};
    void deleteDomainTranscodeList() { this->domainTranscodeList_ = nullptr;};
    inline const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList & domainTranscodeList() const { DARABONBA_PTR_GET_CONST(domainTranscodeList_, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList domainTranscodeList() { DARABONBA_PTR_GET(domainTranscodeList_, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setDomainTranscodeList(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList & domainTranscodeList) { DARABONBA_PTR_SET_VALUE(domainTranscodeList_, domainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setDomainTranscodeList(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList && domainTranscodeList) { DARABONBA_PTR_SET_RVALUE(domainTranscodeList_, domainTranscodeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The transcoding configurations.
    std::shared_ptr<DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList> domainTranscodeList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
