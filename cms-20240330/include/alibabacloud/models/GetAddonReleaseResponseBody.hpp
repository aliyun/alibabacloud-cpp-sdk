// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRELEASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAddonReleaseResponseBodyRelease.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonReleaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(release, release_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(release, release_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAddonReleaseResponseBody() = default ;
    GetAddonReleaseResponseBody(const GetAddonReleaseResponseBody &) = default ;
    GetAddonReleaseResponseBody(GetAddonReleaseResponseBody &&) = default ;
    GetAddonReleaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonReleaseResponseBody() = default ;
    GetAddonReleaseResponseBody& operator=(const GetAddonReleaseResponseBody &) = default ;
    GetAddonReleaseResponseBody& operator=(GetAddonReleaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->release_ == nullptr && return this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetAddonReleaseResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline const GetAddonReleaseResponseBodyRelease & release() const { DARABONBA_PTR_GET_CONST(release_, GetAddonReleaseResponseBodyRelease) };
    inline GetAddonReleaseResponseBodyRelease release() { DARABONBA_PTR_GET(release_, GetAddonReleaseResponseBodyRelease) };
    inline GetAddonReleaseResponseBody& setRelease(const GetAddonReleaseResponseBodyRelease & release) { DARABONBA_PTR_SET_VALUE(release_, release) };
    inline GetAddonReleaseResponseBody& setRelease(GetAddonReleaseResponseBodyRelease && release) { DARABONBA_PTR_SET_RVALUE(release_, release) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonReleaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Component configuration.
    std::shared_ptr<string> config_ = nullptr;
    // Detailed information.
    std::shared_ptr<GetAddonReleaseResponseBodyRelease> release_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
