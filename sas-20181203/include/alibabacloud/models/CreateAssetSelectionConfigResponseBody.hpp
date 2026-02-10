// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAssetSelectionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAssetSelectionConfigResponseBody() = default ;
    CreateAssetSelectionConfigResponseBody(const CreateAssetSelectionConfigResponseBody &) = default ;
    CreateAssetSelectionConfigResponseBody(CreateAssetSelectionConfigResponseBody &&) = default ;
    CreateAssetSelectionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssetSelectionConfigResponseBody() = default ;
    CreateAssetSelectionConfigResponseBody& operator=(const CreateAssetSelectionConfigResponseBody &) = default ;
    CreateAssetSelectionConfigResponseBody& operator=(CreateAssetSelectionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessType_ == nullptr
        && this->platform_ == nullptr && this->selectionKey_ == nullptr && this->targetType_ == nullptr; };
      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline Data& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // selectionKey Field Functions 
      bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
      void deleteSelectionKey() { this->selectionKey_ = nullptr;};
      inline int64_t getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, 0L) };
      inline Data& setSelectionKey(int64_t selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The business type that is selected for the asset. Valid values:
      // 
      // *   **VIRUS_SCAN_CYCLE_CONFIG**: virus detection configuration
      // *   **VIRUS_SCAN_ONCE_TASK**: one-time scan for virus detection
      shared_ptr<string> businessType_ {};
      // The operating system of the asset. Valid values:
      // 
      // *   **windows**: the Windows operating system
      // *   **linux**: the Linux operating system
      shared_ptr<string> platform_ {};
      // The ID of the current asset selection. It can be used to query and modify the asset that is selected.
      shared_ptr<int64_t> selectionKey_ {};
      // The dimension based on which the asset is selected. Valid values:
      // 
      // *   **instance**: The asset is selected by server.
      // *   **group**: The asset is selected by group.
      // *   **vpc**: The asset is selected by VPC.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAssetSelectionConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAssetSelectionConfigResponseBody::Data) };
    inline CreateAssetSelectionConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAssetSelectionConfigResponseBody::Data) };
    inline CreateAssetSelectionConfigResponseBody& setData(const CreateAssetSelectionConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAssetSelectionConfigResponseBody& setData(CreateAssetSelectionConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAssetSelectionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<CreateAssetSelectionConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
