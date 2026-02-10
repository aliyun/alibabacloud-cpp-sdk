// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCommonSwitchConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonSwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonSwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCommonSwitchConfigResponseBody() = default ;
    GetCommonSwitchConfigResponseBody(const GetCommonSwitchConfigResponseBody &) = default ;
    GetCommonSwitchConfigResponseBody(GetCommonSwitchConfigResponseBody &&) = default ;
    GetCommonSwitchConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonSwitchConfigResponseBody() = default ;
    GetCommonSwitchConfigResponseBody& operator=(const GetCommonSwitchConfigResponseBody &) = default ;
    GetCommonSwitchConfigResponseBody& operator=(GetCommonSwitchConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TargetDefault, targetDefault_);
        DARABONBA_PTR_TO_JSON(TargetSyncStatus, targetSyncStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetDefault, targetDefault_);
        DARABONBA_PTR_FROM_JSON(TargetSyncStatus, targetSyncStatus_);
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
      virtual bool empty() const override { return this->targetDefault_ == nullptr
        && this->targetSyncStatus_ == nullptr; };
      // targetDefault Field Functions 
      bool hasTargetDefault() const { return this->targetDefault_ != nullptr;};
      void deleteTargetDefault() { this->targetDefault_ = nullptr;};
      inline string getTargetDefault() const { DARABONBA_PTR_GET_DEFAULT(targetDefault_, "") };
      inline Data& setTargetDefault(string targetDefault) { DARABONBA_PTR_SET_VALUE(targetDefault_, targetDefault) };


      // targetSyncStatus Field Functions 
      bool hasTargetSyncStatus() const { return this->targetSyncStatus_ != nullptr;};
      void deleteTargetSyncStatus() { this->targetSyncStatus_ = nullptr;};
      inline string getTargetSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(targetSyncStatus_, "") };
      inline Data& setTargetSyncStatus(string targetSyncStatus) { DARABONBA_PTR_SET_VALUE(targetSyncStatus_, targetSyncStatus) };


    protected:
      // Specifies whether to turn on the switch for newly added servers. Valid values:
      // 
      // *   **add**: By default, the switch is turned on for newly added servers.
      // *   **del**: By default, the switch is turned off for newly added servers.
      shared_ptr<string> targetDefault_ {};
      // The status of the synchronization. Valid values:
      // 
      // *   **sync**: The modifications are being synchronized.
      // *   **valid**: The modifications has taken effect.
      shared_ptr<string> targetSyncStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCommonSwitchConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCommonSwitchConfigResponseBody::Data) };
    inline GetCommonSwitchConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCommonSwitchConfigResponseBody::Data) };
    inline GetCommonSwitchConfigResponseBody& setData(const GetCommonSwitchConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCommonSwitchConfigResponseBody& setData(GetCommonSwitchConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommonSwitchConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetCommonSwitchConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
