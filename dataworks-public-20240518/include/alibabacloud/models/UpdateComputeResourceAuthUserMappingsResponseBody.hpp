// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateComputeResourceAuthUserMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeResourceAuthUserMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeResourceAuthUserMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateComputeResourceAuthUserMappingsResponseBody() = default ;
    UpdateComputeResourceAuthUserMappingsResponseBody(const UpdateComputeResourceAuthUserMappingsResponseBody &) = default ;
    UpdateComputeResourceAuthUserMappingsResponseBody(UpdateComputeResourceAuthUserMappingsResponseBody &&) = default ;
    UpdateComputeResourceAuthUserMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeResourceAuthUserMappingsResponseBody() = default ;
    UpdateComputeResourceAuthUserMappingsResponseBody& operator=(const UpdateComputeResourceAuthUserMappingsResponseBody &) = default ;
    UpdateComputeResourceAuthUserMappingsResponseBody& operator=(UpdateComputeResourceAuthUserMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeRecordId, changeRecordId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeRecordId, changeRecordId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->changeRecordId_ == nullptr
        && this->status_ == nullptr; };
      // changeRecordId Field Functions 
      bool hasChangeRecordId() const { return this->changeRecordId_ != nullptr;};
      void deleteChangeRecordId() { this->changeRecordId_ = nullptr;};
      inline int64_t getChangeRecordId() const { DARABONBA_PTR_GET_DEFAULT(changeRecordId_, 0L) };
      inline Data& setChangeRecordId(int64_t changeRecordId) { DARABONBA_PTR_SET_VALUE(changeRecordId_, changeRecordId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The change record ID.
      shared_ptr<int64_t> changeRecordId_ {};
      // Indicates whether the operation succeeded. Valid values:
      // - success: The update succeeded.
      // - fail: The update failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateComputeResourceAuthUserMappingsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateComputeResourceAuthUserMappingsResponseBody::Data) };
    inline UpdateComputeResourceAuthUserMappingsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateComputeResourceAuthUserMappingsResponseBody::Data) };
    inline UpdateComputeResourceAuthUserMappingsResponseBody& setData(const UpdateComputeResourceAuthUserMappingsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateComputeResourceAuthUserMappingsResponseBody& setData(UpdateComputeResourceAuthUserMappingsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateComputeResourceAuthUserMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateComputeResourceAuthUserMappingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data object.
    shared_ptr<UpdateComputeResourceAuthUserMappingsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
