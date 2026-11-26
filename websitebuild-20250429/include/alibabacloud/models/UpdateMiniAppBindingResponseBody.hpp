// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateMiniAppBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateMiniAppBindingResponseBody() = default ;
    UpdateMiniAppBindingResponseBody(const UpdateMiniAppBindingResponseBody &) = default ;
    UpdateMiniAppBindingResponseBody(UpdateMiniAppBindingResponseBody &&) = default ;
    UpdateMiniAppBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMiniAppBindingResponseBody() = default ;
    UpdateMiniAppBindingResponseBody& operator=(const UpdateMiniAppBindingResponseBody &) = default ;
    UpdateMiniAppBindingResponseBody& operator=(UpdateMiniAppBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_TO_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_TO_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_TO_JSON(Revision, revision_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_FROM_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_FROM_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_FROM_JSON(Revision, revision_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->privacyDraftId_ == nullptr
        && this->privacyRevision_ == nullptr && this->readbackStatus_ == nullptr && this->revision_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
      // privacyDraftId Field Functions 
      bool hasPrivacyDraftId() const { return this->privacyDraftId_ != nullptr;};
      void deletePrivacyDraftId() { this->privacyDraftId_ = nullptr;};
      inline string getPrivacyDraftId() const { DARABONBA_PTR_GET_DEFAULT(privacyDraftId_, "") };
      inline Data& setPrivacyDraftId(string privacyDraftId) { DARABONBA_PTR_SET_VALUE(privacyDraftId_, privacyDraftId) };


      // privacyRevision Field Functions 
      bool hasPrivacyRevision() const { return this->privacyRevision_ != nullptr;};
      void deletePrivacyRevision() { this->privacyRevision_ = nullptr;};
      inline string getPrivacyRevision() const { DARABONBA_PTR_GET_DEFAULT(privacyRevision_, "") };
      inline Data& setPrivacyRevision(string privacyRevision) { DARABONBA_PTR_SET_VALUE(privacyRevision_, privacyRevision) };


      // readbackStatus Field Functions 
      bool hasReadbackStatus() const { return this->readbackStatus_ != nullptr;};
      void deleteReadbackStatus() { this->readbackStatus_ = nullptr;};
      inline string getReadbackStatus() const { DARABONBA_PTR_GET_DEFAULT(readbackStatus_, "") };
      inline Data& setReadbackStatus(string readbackStatus) { DARABONBA_PTR_SET_VALUE(readbackStatus_, readbackStatus) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> privacyDraftId_ {};
      shared_ptr<string> privacyRevision_ {};
      shared_ptr<string> readbackStatus_ {};
      shared_ptr<int64_t> revision_ {};
      shared_ptr<string> status_ {};
      // Indicates whether the request is successful.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateMiniAppBindingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateMiniAppBindingResponseBody::Data) };
    inline UpdateMiniAppBindingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateMiniAppBindingResponseBody::Data) };
    inline UpdateMiniAppBindingResponseBody& setData(const UpdateMiniAppBindingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateMiniAppBindingResponseBody& setData(UpdateMiniAppBindingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMiniAppBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request result.
    shared_ptr<UpdateMiniAppBindingResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
