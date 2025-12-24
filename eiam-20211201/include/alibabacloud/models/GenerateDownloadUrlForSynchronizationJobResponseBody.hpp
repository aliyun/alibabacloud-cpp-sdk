// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDOWNLOADURLFORSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDOWNLOADURLFORSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateDownloadUrlForSynchronizationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDownloadUrlForSynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileDownloadUrl, fileDownloadUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDownloadUrlForSynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileDownloadUrl, fileDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateDownloadUrlForSynchronizationJobResponseBody() = default ;
    GenerateDownloadUrlForSynchronizationJobResponseBody(const GenerateDownloadUrlForSynchronizationJobResponseBody &) = default ;
    GenerateDownloadUrlForSynchronizationJobResponseBody(GenerateDownloadUrlForSynchronizationJobResponseBody &&) = default ;
    GenerateDownloadUrlForSynchronizationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDownloadUrlForSynchronizationJobResponseBody() = default ;
    GenerateDownloadUrlForSynchronizationJobResponseBody& operator=(const GenerateDownloadUrlForSynchronizationJobResponseBody &) = default ;
    GenerateDownloadUrlForSynchronizationJobResponseBody& operator=(GenerateDownloadUrlForSynchronizationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileDownloadUrl_ == nullptr
        && return this->requestId_ == nullptr; };
    // fileDownloadUrl Field Functions 
    bool hasFileDownloadUrl() const { return this->fileDownloadUrl_ != nullptr;};
    void deleteFileDownloadUrl() { this->fileDownloadUrl_ = nullptr;};
    inline string fileDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(fileDownloadUrl_, "") };
    inline GenerateDownloadUrlForSynchronizationJobResponseBody& setFileDownloadUrl(string fileDownloadUrl) { DARABONBA_PTR_SET_VALUE(fileDownloadUrl_, fileDownloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDownloadUrlForSynchronizationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> fileDownloadUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
