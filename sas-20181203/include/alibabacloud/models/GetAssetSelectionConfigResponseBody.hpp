// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetSelectionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetSelectionConfigResponseBody() = default ;
    GetAssetSelectionConfigResponseBody(const GetAssetSelectionConfigResponseBody &) = default ;
    GetAssetSelectionConfigResponseBody(GetAssetSelectionConfigResponseBody &&) = default ;
    GetAssetSelectionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetSelectionConfigResponseBody() = default ;
    GetAssetSelectionConfigResponseBody& operator=(const GetAssetSelectionConfigResponseBody &) = default ;
    GetAssetSelectionConfigResponseBody& operator=(GetAssetSelectionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->platform_ == nullptr
        && this->selectionKey_ == nullptr && this->targetType_ == nullptr; };
      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // selectionKey Field Functions 
      bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
      void deleteSelectionKey() { this->selectionKey_ = nullptr;};
      inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
      inline Data& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The operating system of the asset. Valid values:
      // 
      // *   **windows**
      // *   **linux**
      shared_ptr<string> platform_ {};
      // The ID of the current asset selection. It can be used to query and modify the asset that is selected.
      shared_ptr<string> selectionKey_ {};
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
    inline const GetAssetSelectionConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAssetSelectionConfigResponseBody::Data) };
    inline GetAssetSelectionConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAssetSelectionConfigResponseBody::Data) };
    inline GetAssetSelectionConfigResponseBody& setData(const GetAssetSelectionConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAssetSelectionConfigResponseBody& setData(GetAssetSelectionConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetSelectionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetAssetSelectionConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
