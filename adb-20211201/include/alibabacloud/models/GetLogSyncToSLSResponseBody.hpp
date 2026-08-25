// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGSYNCTOSLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGSYNCTOSLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetLogSyncToSLSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogSyncToSLSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogSyncToSLSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLogSyncToSLSResponseBody() = default ;
    GetLogSyncToSLSResponseBody(const GetLogSyncToSLSResponseBody &) = default ;
    GetLogSyncToSLSResponseBody(GetLogSyncToSLSResponseBody &&) = default ;
    GetLogSyncToSLSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogSyncToSLSResponseBody() = default ;
    GetLogSyncToSLSResponseBody& operator=(const GetLogSyncToSLSResponseBody &) = default ;
    GetLogSyncToSLSResponseBody& operator=(GetLogSyncToSLSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
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
      virtual bool empty() const override { return this->status_ == nullptr
        && this->targetLogStore_ == nullptr && this->targetProject_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetLogStore Field Functions 
      bool hasTargetLogStore() const { return this->targetLogStore_ != nullptr;};
      void deleteTargetLogStore() { this->targetLogStore_ = nullptr;};
      inline string getTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(targetLogStore_, "") };
      inline Data& setTargetLogStore(string targetLogStore) { DARABONBA_PTR_SET_VALUE(targetLogStore_, targetLogStore) };


      // targetProject Field Functions 
      bool hasTargetProject() const { return this->targetProject_ != nullptr;};
      void deleteTargetProject() { this->targetProject_ = nullptr;};
      inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
      inline Data& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


    protected:
      // The log synchronization status. Valid values:
      // - on: Synchronization is enabled.
      // - off: Synchronization is disabled.
      shared_ptr<string> status_ {};
      // The Simple Log Service Logstore.
      shared_ptr<string> targetLogStore_ {};
      // The Simple Log Service project.
      shared_ptr<string> targetProject_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLogSyncToSLSResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLogSyncToSLSResponseBody::Data) };
    inline GetLogSyncToSLSResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLogSyncToSLSResponseBody::Data) };
    inline GetLogSyncToSLSResponseBody& setData(const GetLogSyncToSLSResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLogSyncToSLSResponseBody& setData(GetLogSyncToSLSResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogSyncToSLSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetLogSyncToSLSResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
