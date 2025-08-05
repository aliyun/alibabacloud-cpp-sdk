// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateTempFileUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTempFileUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTempFileUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    CreateTempFileUploadUrlRequest() = default ;
    CreateTempFileUploadUrlRequest(const CreateTempFileUploadUrlRequest &) = default ;
    CreateTempFileUploadUrlRequest(CreateTempFileUploadUrlRequest &&) = default ;
    CreateTempFileUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTempFileUploadUrlRequest() = default ;
    CreateTempFileUploadUrlRequest& operator=(const CreateTempFileUploadUrlRequest &) = default ;
    CreateTempFileUploadUrlRequest& operator=(CreateTempFileUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateTempFileUploadUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The name of the file to be uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
