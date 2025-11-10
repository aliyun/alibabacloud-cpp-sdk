// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApiMcpServerResponseBodyUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    CreateApiMcpServerResponseBody() = default ;
    CreateApiMcpServerResponseBody(const CreateApiMcpServerResponseBody &) = default ;
    CreateApiMcpServerResponseBody(CreateApiMcpServerResponseBody &&) = default ;
    CreateApiMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerResponseBody() = default ;
    CreateApiMcpServerResponseBody& operator=(const CreateApiMcpServerResponseBody &) = default ;
    CreateApiMcpServerResponseBody& operator=(CreateApiMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->requestId_ == nullptr && return this->urls_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateApiMcpServerResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApiMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const CreateApiMcpServerResponseBodyUrls & urls() const { DARABONBA_PTR_GET_CONST(urls_, CreateApiMcpServerResponseBodyUrls) };
    inline CreateApiMcpServerResponseBodyUrls urls() { DARABONBA_PTR_GET(urls_, CreateApiMcpServerResponseBodyUrls) };
    inline CreateApiMcpServerResponseBody& setUrls(const CreateApiMcpServerResponseBodyUrls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline CreateApiMcpServerResponseBody& setUrls(CreateApiMcpServerResponseBodyUrls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateApiMcpServerResponseBodyUrls> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
