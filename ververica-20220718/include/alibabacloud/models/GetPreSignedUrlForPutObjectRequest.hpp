// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRESIGNEDURLFORPUTOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRESIGNEDURLFORPUTOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPreSignedUrlForPutObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPreSignedUrlForPutObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPreSignedUrlForPutObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
    };
    GetPreSignedUrlForPutObjectRequest() = default ;
    GetPreSignedUrlForPutObjectRequest(const GetPreSignedUrlForPutObjectRequest &) = default ;
    GetPreSignedUrlForPutObjectRequest(GetPreSignedUrlForPutObjectRequest &&) = default ;
    GetPreSignedUrlForPutObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPreSignedUrlForPutObjectRequest() = default ;
    GetPreSignedUrlForPutObjectRequest& operator=(const GetPreSignedUrlForPutObjectRequest &) = default ;
    GetPreSignedUrlForPutObjectRequest& operator=(GetPreSignedUrlForPutObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetPreSignedUrlForPutObjectRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
