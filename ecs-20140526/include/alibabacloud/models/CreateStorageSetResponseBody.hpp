// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateStorageSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
    };
    CreateStorageSetResponseBody() = default ;
    CreateStorageSetResponseBody(const CreateStorageSetResponseBody &) = default ;
    CreateStorageSetResponseBody(CreateStorageSetResponseBody &&) = default ;
    CreateStorageSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageSetResponseBody() = default ;
    CreateStorageSetResponseBody& operator=(const CreateStorageSetResponseBody &) = default ;
    CreateStorageSetResponseBody& operator=(CreateStorageSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->storageSetId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStorageSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateStorageSetResponseBody& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
