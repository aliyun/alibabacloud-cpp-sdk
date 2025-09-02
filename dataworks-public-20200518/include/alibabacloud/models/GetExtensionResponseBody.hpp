// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExtensionResponseBodyExtension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetExtensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExtensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExtensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExtensionResponseBody() = default ;
    GetExtensionResponseBody(const GetExtensionResponseBody &) = default ;
    GetExtensionResponseBody(GetExtensionResponseBody &&) = default ;
    GetExtensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExtensionResponseBody() = default ;
    GetExtensionResponseBody& operator=(const GetExtensionResponseBody &) = default ;
    GetExtensionResponseBody& operator=(GetExtensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extension_ != nullptr
        && this->requestId_ != nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const GetExtensionResponseBodyExtension & extension() const { DARABONBA_PTR_GET_CONST(extension_, GetExtensionResponseBodyExtension) };
    inline GetExtensionResponseBodyExtension extension() { DARABONBA_PTR_GET(extension_, GetExtensionResponseBodyExtension) };
    inline GetExtensionResponseBody& setExtension(const GetExtensionResponseBodyExtension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline GetExtensionResponseBody& setExtension(GetExtensionResponseBodyExtension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExtensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the extension.
    std::shared_ptr<GetExtensionResponseBodyExtension> extension_ = nullptr;
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
