// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImAuditResponseBodyImageResults.hpp>
#include <alibabacloud/models/ImAuditResponseBodyTextResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageQuotaExceed, imageQuotaExceed_);
      DARABONBA_PTR_TO_JSON(ImageResults, imageResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TextQuotaExceed, textQuotaExceed_);
      DARABONBA_PTR_TO_JSON(TextResults, textResults_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageQuotaExceed, imageQuotaExceed_);
      DARABONBA_PTR_FROM_JSON(ImageResults, imageResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TextQuotaExceed, textQuotaExceed_);
      DARABONBA_PTR_FROM_JSON(TextResults, textResults_);
    };
    ImAuditResponseBody() = default ;
    ImAuditResponseBody(const ImAuditResponseBody &) = default ;
    ImAuditResponseBody(ImAuditResponseBody &&) = default ;
    ImAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBody() = default ;
    ImAuditResponseBody& operator=(const ImAuditResponseBody &) = default ;
    ImAuditResponseBody& operator=(ImAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageQuotaExceed_ == nullptr
        && return this->imageResults_ == nullptr && return this->requestId_ == nullptr && return this->textQuotaExceed_ == nullptr && return this->textResults_ == nullptr; };
    // imageQuotaExceed Field Functions 
    bool hasImageQuotaExceed() const { return this->imageQuotaExceed_ != nullptr;};
    void deleteImageQuotaExceed() { this->imageQuotaExceed_ = nullptr;};
    inline bool imageQuotaExceed() const { DARABONBA_PTR_GET_DEFAULT(imageQuotaExceed_, false) };
    inline ImAuditResponseBody& setImageQuotaExceed(bool imageQuotaExceed) { DARABONBA_PTR_SET_VALUE(imageQuotaExceed_, imageQuotaExceed) };


    // imageResults Field Functions 
    bool hasImageResults() const { return this->imageResults_ != nullptr;};
    void deleteImageResults() { this->imageResults_ = nullptr;};
    inline const ImAuditResponseBodyImageResults & imageResults() const { DARABONBA_PTR_GET_CONST(imageResults_, ImAuditResponseBodyImageResults) };
    inline ImAuditResponseBodyImageResults imageResults() { DARABONBA_PTR_GET(imageResults_, ImAuditResponseBodyImageResults) };
    inline ImAuditResponseBody& setImageResults(const ImAuditResponseBodyImageResults & imageResults) { DARABONBA_PTR_SET_VALUE(imageResults_, imageResults) };
    inline ImAuditResponseBody& setImageResults(ImAuditResponseBodyImageResults && imageResults) { DARABONBA_PTR_SET_RVALUE(imageResults_, imageResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textQuotaExceed Field Functions 
    bool hasTextQuotaExceed() const { return this->textQuotaExceed_ != nullptr;};
    void deleteTextQuotaExceed() { this->textQuotaExceed_ = nullptr;};
    inline bool textQuotaExceed() const { DARABONBA_PTR_GET_DEFAULT(textQuotaExceed_, false) };
    inline ImAuditResponseBody& setTextQuotaExceed(bool textQuotaExceed) { DARABONBA_PTR_SET_VALUE(textQuotaExceed_, textQuotaExceed) };


    // textResults Field Functions 
    bool hasTextResults() const { return this->textResults_ != nullptr;};
    void deleteTextResults() { this->textResults_ = nullptr;};
    inline const ImAuditResponseBodyTextResults & textResults() const { DARABONBA_PTR_GET_CONST(textResults_, ImAuditResponseBodyTextResults) };
    inline ImAuditResponseBodyTextResults textResults() { DARABONBA_PTR_GET(textResults_, ImAuditResponseBodyTextResults) };
    inline ImAuditResponseBody& setTextResults(const ImAuditResponseBodyTextResults & textResults) { DARABONBA_PTR_SET_VALUE(textResults_, textResults) };
    inline ImAuditResponseBody& setTextResults(ImAuditResponseBodyTextResults && textResults) { DARABONBA_PTR_SET_RVALUE(textResults_, textResults) };


  protected:
    // Indicates whether the image moderation QPS exceeds the limit. Valid values: true and false. A value of true indicates that the QPS does not exceed the limit. A value of false indicates that the QPS exceeds the limit.
    std::shared_ptr<bool> imageQuotaExceed_ = nullptr;
    // The image moderation results. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. For more information about the parameters, see [Data returned by the ImAudit operation](https://help.aliyun.com/document_detail/268644.html).
    std::shared_ptr<ImAuditResponseBodyImageResults> imageResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the text moderation QPS exceeds the limit. Valid values: true and false.
    std::shared_ptr<bool> textQuotaExceed_ = nullptr;
    // The text moderation results. If the HTTP status code 200 is returned, the array in the returned results contains one or more elements. For more information about the parameters, see [Data returned by the ImAudit operation](https://help.aliyun.com/document_detail/268644.html).
    std::shared_ptr<ImAuditResponseBodyTextResults> textResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
