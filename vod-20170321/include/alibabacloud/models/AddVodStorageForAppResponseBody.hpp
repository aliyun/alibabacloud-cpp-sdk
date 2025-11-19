// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVODSTORAGEFORAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDVODSTORAGEFORAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddVodStorageForAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVodStorageForAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
    };
    friend void from_json(const Darabonba::Json& j, AddVodStorageForAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
    };
    AddVodStorageForAppResponseBody() = default ;
    AddVodStorageForAppResponseBody(const AddVodStorageForAppResponseBody &) = default ;
    AddVodStorageForAppResponseBody(AddVodStorageForAppResponseBody &&) = default ;
    AddVodStorageForAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVodStorageForAppResponseBody() = default ;
    AddVodStorageForAppResponseBody& operator=(const AddVodStorageForAppResponseBody &) = default ;
    AddVodStorageForAppResponseBody& operator=(AddVodStorageForAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->storageLocation_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddVodStorageForAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline AddVodStorageForAppResponseBody& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The address of the VOD bucket.
    std::shared_ptr<string> storageLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
