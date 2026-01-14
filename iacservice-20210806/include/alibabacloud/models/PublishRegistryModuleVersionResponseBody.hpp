// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class PublishRegistryModuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    PublishRegistryModuleVersionResponseBody() = default ;
    PublishRegistryModuleVersionResponseBody(const PublishRegistryModuleVersionResponseBody &) = default ;
    PublishRegistryModuleVersionResponseBody(PublishRegistryModuleVersionResponseBody &&) = default ;
    PublishRegistryModuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRegistryModuleVersionResponseBody() = default ;
    PublishRegistryModuleVersionResponseBody& operator=(const PublishRegistryModuleVersionResponseBody &) = default ;
    PublishRegistryModuleVersionResponseBody& operator=(PublishRegistryModuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishRegistryModuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PublishRegistryModuleVersionResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
