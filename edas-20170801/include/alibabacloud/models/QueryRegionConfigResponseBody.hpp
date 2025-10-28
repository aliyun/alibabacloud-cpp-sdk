// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRegionConfigResponseBodyRegionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryRegionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionConfig, regionConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionConfig, regionConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryRegionConfigResponseBody() = default ;
    QueryRegionConfigResponseBody(const QueryRegionConfigResponseBody &) = default ;
    QueryRegionConfigResponseBody(QueryRegionConfigResponseBody &&) = default ;
    QueryRegionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegionConfigResponseBody() = default ;
    QueryRegionConfigResponseBody& operator=(const QueryRegionConfigResponseBody &) = default ;
    QueryRegionConfigResponseBody& operator=(QueryRegionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->regionConfig_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryRegionConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRegionConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionConfig Field Functions 
    bool hasRegionConfig() const { return this->regionConfig_ != nullptr;};
    void deleteRegionConfig() { this->regionConfig_ = nullptr;};
    inline const QueryRegionConfigResponseBodyRegionConfig & regionConfig() const { DARABONBA_PTR_GET_CONST(regionConfig_, QueryRegionConfigResponseBodyRegionConfig) };
    inline QueryRegionConfigResponseBodyRegionConfig regionConfig() { DARABONBA_PTR_GET(regionConfig_, QueryRegionConfigResponseBodyRegionConfig) };
    inline QueryRegionConfigResponseBody& setRegionConfig(const QueryRegionConfigResponseBodyRegionConfig & regionConfig) { DARABONBA_PTR_SET_VALUE(regionConfig_, regionConfig) };
    inline QueryRegionConfigResponseBody& setRegionConfig(QueryRegionConfigResponseBodyRegionConfig && regionConfig) { DARABONBA_PTR_SET_RVALUE(regionConfig_, regionConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRegionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The information about region configurations.
    std::shared_ptr<QueryRegionConfigResponseBodyRegionConfig> regionConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
