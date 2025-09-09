// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetUploadCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    GetUploadCredentialsRequest() = default ;
    GetUploadCredentialsRequest(const GetUploadCredentialsRequest &) = default ;
    GetUploadCredentialsRequest(GetUploadCredentialsRequest &&) = default ;
    GetUploadCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadCredentialsRequest() = default ;
    GetUploadCredentialsRequest& operator=(const GetUploadCredentialsRequest &) = default ;
    GetUploadCredentialsRequest& operator=(GetUploadCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->visibility_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetUploadCredentialsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetUploadCredentialsRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The file name to upload.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // Specifies whether the file is publicly accessible. Valid values: **public** or **private**. The default value is **private**.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
