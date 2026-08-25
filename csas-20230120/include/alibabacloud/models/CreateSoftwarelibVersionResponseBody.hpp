// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOFTWARELIBVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESOFTWARELIBVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateSoftwarelibVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoftwarelibVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoftwarelibVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateSoftwarelibVersionResponseBody() = default ;
    CreateSoftwarelibVersionResponseBody(const CreateSoftwarelibVersionResponseBody &) = default ;
    CreateSoftwarelibVersionResponseBody(CreateSoftwarelibVersionResponseBody &&) = default ;
    CreateSoftwarelibVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoftwarelibVersionResponseBody() = default ;
    CreateSoftwarelibVersionResponseBody& operator=(const CreateSoftwarelibVersionResponseBody &) = default ;
    CreateSoftwarelibVersionResponseBody& operator=(CreateSoftwarelibVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->versionId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSoftwarelibVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSoftwarelibVersionResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The ID of the software version that was created.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
