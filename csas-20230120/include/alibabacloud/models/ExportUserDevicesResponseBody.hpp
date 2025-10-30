// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTUSERDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTUSERDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ExportUserDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignedUrl, signedUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ExportUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignedUrl, signedUrl_);
    };
    ExportUserDevicesResponseBody() = default ;
    ExportUserDevicesResponseBody(const ExportUserDevicesResponseBody &) = default ;
    ExportUserDevicesResponseBody(ExportUserDevicesResponseBody &&) = default ;
    ExportUserDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportUserDevicesResponseBody() = default ;
    ExportUserDevicesResponseBody& operator=(const ExportUserDevicesResponseBody &) = default ;
    ExportUserDevicesResponseBody& operator=(ExportUserDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->signedUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportUserDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signedUrl Field Functions 
    bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
    void deleteSignedUrl() { this->signedUrl_ = nullptr;};
    inline string signedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
    inline ExportUserDevicesResponseBody& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> signedUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
