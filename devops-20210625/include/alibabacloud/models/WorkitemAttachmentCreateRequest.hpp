// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKITEMATTACHMENTCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WORKITEMATTACHMENTCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class WorkitemAttachmentCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkitemAttachmentCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(originalFilename, originalFilename_);
    };
    friend void from_json(const Darabonba::Json& j, WorkitemAttachmentCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(originalFilename, originalFilename_);
    };
    WorkitemAttachmentCreateRequest() = default ;
    WorkitemAttachmentCreateRequest(const WorkitemAttachmentCreateRequest &) = default ;
    WorkitemAttachmentCreateRequest(WorkitemAttachmentCreateRequest &&) = default ;
    WorkitemAttachmentCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkitemAttachmentCreateRequest() = default ;
    WorkitemAttachmentCreateRequest& operator=(const WorkitemAttachmentCreateRequest &) = default ;
    WorkitemAttachmentCreateRequest& operator=(WorkitemAttachmentCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && return this->originalFilename_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline WorkitemAttachmentCreateRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // originalFilename Field Functions 
    bool hasOriginalFilename() const { return this->originalFilename_ != nullptr;};
    void deleteOriginalFilename() { this->originalFilename_ = nullptr;};
    inline string originalFilename() const { DARABONBA_PTR_GET_DEFAULT(originalFilename_, "") };
    inline WorkitemAttachmentCreateRequest& setOriginalFilename(string originalFilename) { DARABONBA_PTR_SET_VALUE(originalFilename_, originalFilename) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalFilename_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
