// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENUPLOADPICTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENUPLOADPICTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenUploadPictureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenUploadPictureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenUploadPictureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
    };
    DescribeScreenUploadPictureRequest() = default ;
    DescribeScreenUploadPictureRequest(const DescribeScreenUploadPictureRequest &) = default ;
    DescribeScreenUploadPictureRequest(DescribeScreenUploadPictureRequest &&) = default ;
    DescribeScreenUploadPictureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenUploadPictureRequest() = default ;
    DescribeScreenUploadPictureRequest& operator=(const DescribeScreenUploadPictureRequest &) = default ;
    DescribeScreenUploadPictureRequest& operator=(DescribeScreenUploadPictureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logoUrl_ == nullptr; };
    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline DescribeScreenUploadPictureRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> logoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
