// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorInfoList, errorInfoList_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionList, physicalConnectionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorInfoList, errorInfoList_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionList, physicalConnectionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHighReliablePhysicalConnectionResponseBody() = default ;
    CreateHighReliablePhysicalConnectionResponseBody(const CreateHighReliablePhysicalConnectionResponseBody &) = default ;
    CreateHighReliablePhysicalConnectionResponseBody(CreateHighReliablePhysicalConnectionResponseBody &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBody() = default ;
    CreateHighReliablePhysicalConnectionResponseBody& operator=(const CreateHighReliablePhysicalConnectionResponseBody &) = default ;
    CreateHighReliablePhysicalConnectionResponseBody& operator=(CreateHighReliablePhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhysicalConnectionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhysicalConnectionList& obj) { 
        DARABONBA_PTR_TO_JSON(physicalConnectionList, physicalConnectionList_);
      };
      friend void from_json(const Darabonba::Json& j, PhysicalConnectionList& obj) { 
        DARABONBA_PTR_FROM_JSON(physicalConnectionList, physicalConnectionList_);
      };
      PhysicalConnectionList() = default ;
      PhysicalConnectionList(const PhysicalConnectionList &) = default ;
      PhysicalConnectionList(PhysicalConnectionList &&) = default ;
      PhysicalConnectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhysicalConnectionList() = default ;
      PhysicalConnectionList& operator=(const PhysicalConnectionList &) = default ;
      PhysicalConnectionList& operator=(PhysicalConnectionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PhysicalConnectionListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PhysicalConnectionListItem& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, PhysicalConnectionListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        PhysicalConnectionListItem() = default ;
        PhysicalConnectionListItem(const PhysicalConnectionListItem &) = default ;
        PhysicalConnectionListItem(PhysicalConnectionListItem &&) = default ;
        PhysicalConnectionListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PhysicalConnectionListItem() = default ;
        PhysicalConnectionListItem& operator=(const PhysicalConnectionListItem &) = default ;
        PhysicalConnectionListItem& operator=(PhysicalConnectionListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionNo_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline PhysicalConnectionListItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline PhysicalConnectionListItem& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        // The ID of the Express Connect circuit.
        shared_ptr<string> instanceId_ {};
        // The region ID of the Express Connect circuit.
        shared_ptr<string> regionNo_ {};
      };

      virtual bool empty() const override { return this->physicalConnectionList_ == nullptr; };
      // physicalConnectionList Field Functions 
      bool hasPhysicalConnectionList() const { return this->physicalConnectionList_ != nullptr;};
      void deletePhysicalConnectionList() { this->physicalConnectionList_ = nullptr;};
      inline const vector<PhysicalConnectionList::PhysicalConnectionListItem> & getPhysicalConnectionList() const { DARABONBA_PTR_GET_CONST(physicalConnectionList_, vector<PhysicalConnectionList::PhysicalConnectionListItem>) };
      inline vector<PhysicalConnectionList::PhysicalConnectionListItem> getPhysicalConnectionList() { DARABONBA_PTR_GET(physicalConnectionList_, vector<PhysicalConnectionList::PhysicalConnectionListItem>) };
      inline PhysicalConnectionList& setPhysicalConnectionList(const vector<PhysicalConnectionList::PhysicalConnectionListItem> & physicalConnectionList) { DARABONBA_PTR_SET_VALUE(physicalConnectionList_, physicalConnectionList) };
      inline PhysicalConnectionList& setPhysicalConnectionList(vector<PhysicalConnectionList::PhysicalConnectionListItem> && physicalConnectionList) { DARABONBA_PTR_SET_RVALUE(physicalConnectionList_, physicalConnectionList) };


    protected:
      shared_ptr<vector<PhysicalConnectionList::PhysicalConnectionListItem>> physicalConnectionList_ {};
    };

    class ErrorInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(errorInfoList, errorInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(errorInfoList, errorInfoList_);
      };
      ErrorInfoList() = default ;
      ErrorInfoList(const ErrorInfoList &) = default ;
      ErrorInfoList(ErrorInfoList &&) = default ;
      ErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorInfoList() = default ;
      ErrorInfoList& operator=(const ErrorInfoList &) = default ;
      ErrorInfoList& operator=(ErrorInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErrorInfoListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorInfoListItem& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorInfoListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        ErrorInfoListItem() = default ;
        ErrorInfoListItem(const ErrorInfoListItem &) = default ;
        ErrorInfoListItem(ErrorInfoListItem &&) = default ;
        ErrorInfoListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorInfoListItem() = default ;
        ErrorInfoListItem& operator=(const ErrorInfoListItem &) = default ;
        ErrorInfoListItem& operator=(ErrorInfoListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorInfoListItem& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ErrorInfoListItem& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ErrorInfoListItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // Error codes.
        shared_ptr<string> errorCode_ {};
        // The returned error message.
        shared_ptr<string> errorMessage_ {};
        // The ID of the Express Connect circuit.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->errorInfoList_ == nullptr; };
      // errorInfoList Field Functions 
      bool hasErrorInfoList() const { return this->errorInfoList_ != nullptr;};
      void deleteErrorInfoList() { this->errorInfoList_ = nullptr;};
      inline const vector<ErrorInfoList::ErrorInfoListItem> & getErrorInfoList() const { DARABONBA_PTR_GET_CONST(errorInfoList_, vector<ErrorInfoList::ErrorInfoListItem>) };
      inline vector<ErrorInfoList::ErrorInfoListItem> getErrorInfoList() { DARABONBA_PTR_GET(errorInfoList_, vector<ErrorInfoList::ErrorInfoListItem>) };
      inline ErrorInfoList& setErrorInfoList(const vector<ErrorInfoList::ErrorInfoListItem> & errorInfoList) { DARABONBA_PTR_SET_VALUE(errorInfoList_, errorInfoList) };
      inline ErrorInfoList& setErrorInfoList(vector<ErrorInfoList::ErrorInfoListItem> && errorInfoList) { DARABONBA_PTR_SET_RVALUE(errorInfoList_, errorInfoList) };


    protected:
      shared_ptr<vector<ErrorInfoList::ErrorInfoListItem>> errorInfoList_ {};
    };

    virtual bool empty() const override { return this->errorInfoList_ == nullptr
        && this->physicalConnectionList_ == nullptr && this->requestId_ == nullptr; };
    // errorInfoList Field Functions 
    bool hasErrorInfoList() const { return this->errorInfoList_ != nullptr;};
    void deleteErrorInfoList() { this->errorInfoList_ = nullptr;};
    inline const CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList & getErrorInfoList() const { DARABONBA_PTR_GET_CONST(errorInfoList_, CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList getErrorInfoList() { DARABONBA_PTR_GET(errorInfoList_, CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setErrorInfoList(const CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList & errorInfoList) { DARABONBA_PTR_SET_VALUE(errorInfoList_, errorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setErrorInfoList(CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList && errorInfoList) { DARABONBA_PTR_SET_RVALUE(errorInfoList_, errorInfoList) };


    // physicalConnectionList Field Functions 
    bool hasPhysicalConnectionList() const { return this->physicalConnectionList_ != nullptr;};
    void deletePhysicalConnectionList() { this->physicalConnectionList_ = nullptr;};
    inline const CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList & getPhysicalConnectionList() const { DARABONBA_PTR_GET_CONST(physicalConnectionList_, CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList getPhysicalConnectionList() { DARABONBA_PTR_GET(physicalConnectionList_, CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setPhysicalConnectionList(const CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList & physicalConnectionList) { DARABONBA_PTR_SET_VALUE(physicalConnectionList_, physicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setPhysicalConnectionList(CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList && physicalConnectionList) { DARABONBA_PTR_SET_RVALUE(physicalConnectionList_, physicalConnectionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // If the request fails the dry run, the following error codes and error messages may be returned:
    // 
    // - pconn.high.reliable.dryrun.error.disable.outbound.data.transfer.billing. Billing for outbound data transfer is not enabled.
    // - pconn.high.reliable.dryrun.error.incompatable.device.capacity. No device in the access point supports advanced features.
    // - pconn.high.reliable.dryrun.error.quota.exceeded. The quota is insufficient.
    // - pconn.high.reliable.dryrun.error.not.enough.resource. The access point resources are insufficient.
    shared_ptr<CreateHighReliablePhysicalConnectionResponseBody::ErrorInfoList> errorInfoList_ {};
    // The Express Connect circuits.
    shared_ptr<CreateHighReliablePhysicalConnectionResponseBody::PhysicalConnectionList> physicalConnectionList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
