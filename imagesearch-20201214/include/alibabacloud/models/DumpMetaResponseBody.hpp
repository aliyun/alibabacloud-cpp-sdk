// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUMPMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DUMPMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DumpMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DumpMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DumpMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DumpMetaResponseBody() = default ;
    DumpMetaResponseBody(const DumpMetaResponseBody &) = default ;
    DumpMetaResponseBody(DumpMetaResponseBody &&) = default ;
    DumpMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DumpMetaResponseBody() = default ;
    DumpMetaResponseBody& operator=(const DumpMetaResponseBody &) = default ;
    DumpMetaResponseBody& operator=(DumpMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DumpMetaStatus, dumpMetaStatus_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DumpMetaStatus, dumpMetaStatus_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      virtual bool empty() const override { return this->dumpMetaStatus_ == nullptr
        && this->id_ == nullptr; };
      // dumpMetaStatus Field Functions 
      bool hasDumpMetaStatus() const { return this->dumpMetaStatus_ != nullptr;};
      void deleteDumpMetaStatus() { this->dumpMetaStatus_ = nullptr;};
      inline string getDumpMetaStatus() const { DARABONBA_PTR_GET_DEFAULT(dumpMetaStatus_, "") };
      inline Data& setDumpMetaStatus(string dumpMetaStatus) { DARABONBA_PTR_SET_VALUE(dumpMetaStatus_, dumpMetaStatus) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The status of the export task.
      // 
      // *   PROCESSING: in progress
      // *   FAIL: failed
      // *   SUCCESS: successful
      shared_ptr<string> dumpMetaStatus_ {};
      // The ID of the export task.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DumpMetaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DumpMetaResponseBody::Data) };
    inline DumpMetaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DumpMetaResponseBody::Data) };
    inline DumpMetaResponseBody& setData(const DumpMetaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DumpMetaResponseBody& setData(DumpMetaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DumpMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DumpMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the export task.
    shared_ptr<DumpMetaResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
