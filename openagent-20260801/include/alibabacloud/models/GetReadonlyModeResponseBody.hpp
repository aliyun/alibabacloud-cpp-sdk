// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREADONLYMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREADONLYMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class GetReadonlyModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReadonlyModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetReadonlyModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetReadonlyModeResponseBody() = default ;
    GetReadonlyModeResponseBody(const GetReadonlyModeResponseBody &) = default ;
    GetReadonlyModeResponseBody(GetReadonlyModeResponseBody &&) = default ;
    GetReadonlyModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReadonlyModeResponseBody() = default ;
    GetReadonlyModeResponseBody& operator=(const GetReadonlyModeResponseBody &) = default ;
    GetReadonlyModeResponseBody& operator=(GetReadonlyModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configName, configName_);
        DARABONBA_PTR_TO_JSON(exists, exists_);
        DARABONBA_PTR_TO_JSON(gmtUpdate, gmtUpdate_);
        DARABONBA_PTR_TO_JSON(value, value_);
        DARABONBA_PTR_TO_JSON(valueType, valueType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configName, configName_);
        DARABONBA_PTR_FROM_JSON(exists, exists_);
        DARABONBA_PTR_FROM_JSON(gmtUpdate, gmtUpdate_);
        DARABONBA_PTR_FROM_JSON(value, value_);
        DARABONBA_PTR_FROM_JSON(valueType, valueType_);
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
      virtual bool empty() const override { return this->configName_ == nullptr
        && this->exists_ == nullptr && this->gmtUpdate_ == nullptr && this->value_ == nullptr && this->valueType_ == nullptr; };
      // configName Field Functions 
      bool hasConfigName() const { return this->configName_ != nullptr;};
      void deleteConfigName() { this->configName_ = nullptr;};
      inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
      inline Data& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


      // exists Field Functions 
      bool hasExists() const { return this->exists_ != nullptr;};
      void deleteExists() { this->exists_ = nullptr;};
      inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
      inline Data& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


      // gmtUpdate Field Functions 
      bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
      void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
      inline string getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, "") };
      inline Data& setGmtUpdate(string gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
      inline Data& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    protected:
      // The configuration name. The value is fixed to readonly.
      shared_ptr<string> configName_ {};
      // Indicates whether a configuration record exists.
      shared_ptr<bool> exists_ {};
      // The last update time in ISO 8601 format. The value is null if no configuration record exists.
      shared_ptr<string> gmtUpdate_ {};
      // The current effective read-only mode, returned as a string. A value of true indicates that the mode is enabled, and a value of false indicates that the mode is disabled. The value is true if not configured.
      shared_ptr<string> value_ {};
      // The configuration value type. The value is fixed to BOOL.
      shared_ptr<string> valueType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetReadonlyModeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetReadonlyModeResponseBody::Data) };
    inline GetReadonlyModeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetReadonlyModeResponseBody::Data) };
    inline GetReadonlyModeResponseBody& setData(const GetReadonlyModeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetReadonlyModeResponseBody& setData(GetReadonlyModeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReadonlyModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetReadonlyModeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<GetReadonlyModeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
