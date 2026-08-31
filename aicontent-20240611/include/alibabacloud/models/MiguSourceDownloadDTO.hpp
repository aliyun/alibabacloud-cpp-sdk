// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGUSOURCEDOWNLOADDTO_HPP_
#define ALIBABACLOUD_MODELS_MIGUSOURCEDOWNLOADDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class MiguSourceDownloadDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MiguSourceDownloadDTO& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, MiguSourceDownloadDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    MiguSourceDownloadDTO() = default ;
    MiguSourceDownloadDTO(const MiguSourceDownloadDTO &) = default ;
    MiguSourceDownloadDTO(MiguSourceDownloadDTO &&) = default ;
    MiguSourceDownloadDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MiguSourceDownloadDTO() = default ;
    MiguSourceDownloadDTO& operator=(const MiguSourceDownloadDTO &) = default ;
    MiguSourceDownloadDTO& operator=(MiguSourceDownloadDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->expiresAt_ == nullptr && this->method_ == nullptr && this->sourceId_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline MiguSourceDownloadDTO& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline MiguSourceDownloadDTO& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline MiguSourceDownloadDTO& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MiguSourceDownloadDTO& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The OSS pre-signed download URL.
    shared_ptr<string> downloadUrl_ {};
    // The expiration time of the download URL, in RFC 3339 format.
    shared_ptr<string> expiresAt_ {};
    // The download request method. The value is fixed to GET.
    shared_ptr<string> method_ {};
    // The unique identifier of the source file.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
