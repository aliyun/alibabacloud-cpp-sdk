// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADINSERTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAdInsertionResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAdInsertionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdInsertionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAdInsertionResponseBody() = default ;
    GetAdInsertionResponseBody(const GetAdInsertionResponseBody &) = default ;
    GetAdInsertionResponseBody(GetAdInsertionResponseBody &&) = default ;
    GetAdInsertionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdInsertionResponseBody() = default ;
    GetAdInsertionResponseBody& operator=(const GetAdInsertionResponseBody &) = default ;
    GetAdInsertionResponseBody& operator=(GetAdInsertionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->requestId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetAdInsertionResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, GetAdInsertionResponseBodyConfig) };
    inline GetAdInsertionResponseBodyConfig config() { DARABONBA_PTR_GET(config_, GetAdInsertionResponseBodyConfig) };
    inline GetAdInsertionResponseBody& setConfig(const GetAdInsertionResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetAdInsertionResponseBody& setConfig(GetAdInsertionResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdInsertionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ad insertion configuration.
    std::shared_ptr<GetAdInsertionResponseBodyConfig> config_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
