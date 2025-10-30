// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAddonReleaseResponseBodyRelease.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAddonReleaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(release, release_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(release, release_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAddonReleaseResponseBody() = default ;
    CreateAddonReleaseResponseBody(const CreateAddonReleaseResponseBody &) = default ;
    CreateAddonReleaseResponseBody(CreateAddonReleaseResponseBody &&) = default ;
    CreateAddonReleaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAddonReleaseResponseBody() = default ;
    CreateAddonReleaseResponseBody& operator=(const CreateAddonReleaseResponseBody &) = default ;
    CreateAddonReleaseResponseBody& operator=(CreateAddonReleaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->release_ == nullptr
        && return this->requestId_ == nullptr; };
    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline const CreateAddonReleaseResponseBodyRelease & release() const { DARABONBA_PTR_GET_CONST(release_, CreateAddonReleaseResponseBodyRelease) };
    inline CreateAddonReleaseResponseBodyRelease release() { DARABONBA_PTR_GET(release_, CreateAddonReleaseResponseBodyRelease) };
    inline CreateAddonReleaseResponseBody& setRelease(const CreateAddonReleaseResponseBodyRelease & release) { DARABONBA_PTR_SET_VALUE(release_, release) };
    inline CreateAddonReleaseResponseBody& setRelease(CreateAddonReleaseResponseBodyRelease && release) { DARABONBA_PTR_SET_RVALUE(release_, release) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAddonReleaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Accessed component information.
    std::shared_ptr<CreateAddonReleaseResponseBodyRelease> release_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
