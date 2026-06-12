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
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->visibility_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetUploadCredentialsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetUploadCredentialsRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The name of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The visibility of the bucket to which the file is uploaded. Valid values: public and private. A value of **public** means the file is uploaded to a public bucket. A value of **private** means the file is uploaded to a private bucket that requires authorization for access.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
