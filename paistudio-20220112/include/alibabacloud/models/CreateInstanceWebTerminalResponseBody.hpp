// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEWEBTERMINALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEWEBTERMINALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateInstanceWebTerminalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebTerminalId, webTerminalId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebTerminalId, webTerminalId_);
    };
    CreateInstanceWebTerminalResponseBody() = default ;
    CreateInstanceWebTerminalResponseBody(const CreateInstanceWebTerminalResponseBody &) = default ;
    CreateInstanceWebTerminalResponseBody(CreateInstanceWebTerminalResponseBody &&) = default ;
    CreateInstanceWebTerminalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceWebTerminalResponseBody() = default ;
    CreateInstanceWebTerminalResponseBody& operator=(const CreateInstanceWebTerminalResponseBody &) = default ;
    CreateInstanceWebTerminalResponseBody& operator=(CreateInstanceWebTerminalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->webTerminalId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceWebTerminalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webTerminalId Field Functions 
    bool hasWebTerminalId() const { return this->webTerminalId_ != nullptr;};
    void deleteWebTerminalId() { this->webTerminalId_ = nullptr;};
    inline string webTerminalId() const { DARABONBA_PTR_GET_DEFAULT(webTerminalId_, "") };
    inline CreateInstanceWebTerminalResponseBody& setWebTerminalId(string webTerminalId) { DARABONBA_PTR_SET_VALUE(webTerminalId_, webTerminalId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> webTerminalId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
