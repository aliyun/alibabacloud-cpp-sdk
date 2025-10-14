// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEUPLOADRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FILEUPLOADRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class FileUploadResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FileUploadResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(uploaded_file_url, uploadedFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FileUploadResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(uploaded_file_url, uploadedFileUrl_);
    };
    FileUploadResponseBodyData() = default ;
    FileUploadResponseBodyData(const FileUploadResponseBodyData &) = default ;
    FileUploadResponseBodyData(FileUploadResponseBodyData &&) = default ;
    FileUploadResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FileUploadResponseBodyData() = default ;
    FileUploadResponseBodyData& operator=(const FileUploadResponseBodyData &) = default ;
    FileUploadResponseBodyData& operator=(FileUploadResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uploadedFileUrl_ == nullptr; };
    // uploadedFileUrl Field Functions 
    bool hasUploadedFileUrl() const { return this->uploadedFileUrl_ != nullptr;};
    void deleteUploadedFileUrl() { this->uploadedFileUrl_ = nullptr;};
    inline string uploadedFileUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadedFileUrl_, "") };
    inline FileUploadResponseBodyData& setUploadedFileUrl(string uploadedFileUrl) { DARABONBA_PTR_SET_VALUE(uploadedFileUrl_, uploadedFileUrl) };


  protected:
    std::shared_ptr<string> uploadedFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
