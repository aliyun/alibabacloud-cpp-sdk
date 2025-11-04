// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTENTANALYZECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTENTANALYZECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetContentAnalyzeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContentAnalyzeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContentAnalyzeConfig, contentAnalyzeConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContentAnalyzeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentAnalyzeConfig, contentAnalyzeConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetContentAnalyzeConfigResponseBody() = default ;
    GetContentAnalyzeConfigResponseBody(const GetContentAnalyzeConfigResponseBody &) = default ;
    GetContentAnalyzeConfigResponseBody(GetContentAnalyzeConfigResponseBody &&) = default ;
    GetContentAnalyzeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContentAnalyzeConfigResponseBody() = default ;
    GetContentAnalyzeConfigResponseBody& operator=(const GetContentAnalyzeConfigResponseBody &) = default ;
    GetContentAnalyzeConfigResponseBody& operator=(GetContentAnalyzeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentAnalyzeConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // contentAnalyzeConfig Field Functions 
    bool hasContentAnalyzeConfig() const { return this->contentAnalyzeConfig_ != nullptr;};
    void deleteContentAnalyzeConfig() { this->contentAnalyzeConfig_ = nullptr;};
    inline const GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig & contentAnalyzeConfig() const { DARABONBA_PTR_GET_CONST(contentAnalyzeConfig_, GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig contentAnalyzeConfig() { DARABONBA_PTR_GET(contentAnalyzeConfig_, GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBody& setContentAnalyzeConfig(const GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig & contentAnalyzeConfig) { DARABONBA_PTR_SET_VALUE(contentAnalyzeConfig_, contentAnalyzeConfig) };
    inline GetContentAnalyzeConfigResponseBody& setContentAnalyzeConfig(GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig && contentAnalyzeConfig) { DARABONBA_PTR_SET_RVALUE(contentAnalyzeConfig_, contentAnalyzeConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContentAnalyzeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetContentAnalyzeConfigResponseBodyContentAnalyzeConfig> contentAnalyzeConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
