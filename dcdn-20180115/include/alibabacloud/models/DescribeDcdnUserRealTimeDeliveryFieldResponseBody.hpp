// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserRealTimeDeliveryFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody(const DescribeDcdnUserRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody(DescribeDcdnUserRealTimeDeliveryFieldResponseBody &&) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody& operator=(const DescribeDcdnUserRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBody& operator=(DescribeDcdnUserRealTimeDeliveryFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent) };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent content() { DARABONBA_PTR_GET(content_, DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent) };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBody& setContent(const DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBody& setContent(DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
