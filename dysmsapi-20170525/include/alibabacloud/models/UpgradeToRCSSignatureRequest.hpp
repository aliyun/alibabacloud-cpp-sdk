// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADETORCSSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADETORCSSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpgradeToRCSSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeToRCSSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundImage, backgroundImage_);
      DARABONBA_PTR_TO_JSON(BubbleColor, bubbleColor_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Latitude, latitude_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
      DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      DARABONBA_PTR_TO_JSON(OfficeAddress, officeAddress_);
      DARABONBA_PTR_TO_JSON(ServiceEmail, serviceEmail_);
      DARABONBA_PTR_TO_JSON(ServicePhone, servicePhone_);
      DARABONBA_PTR_TO_JSON(ServiceTerms, serviceTerms_);
      DARABONBA_PTR_TO_JSON(ServiceWebsite, serviceWebsite_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeToRCSSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundImage, backgroundImage_);
      DARABONBA_PTR_FROM_JSON(BubbleColor, bubbleColor_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
      DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      DARABONBA_PTR_FROM_JSON(OfficeAddress, officeAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceEmail, serviceEmail_);
      DARABONBA_PTR_FROM_JSON(ServicePhone, servicePhone_);
      DARABONBA_PTR_FROM_JSON(ServiceTerms, serviceTerms_);
      DARABONBA_PTR_FROM_JSON(ServiceWebsite, serviceWebsite_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
    };
    UpgradeToRCSSignatureRequest() = default ;
    UpgradeToRCSSignatureRequest(const UpgradeToRCSSignatureRequest &) = default ;
    UpgradeToRCSSignatureRequest(UpgradeToRCSSignatureRequest &&) = default ;
    UpgradeToRCSSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeToRCSSignatureRequest() = default ;
    UpgradeToRCSSignatureRequest& operator=(const UpgradeToRCSSignatureRequest &) = default ;
    UpgradeToRCSSignatureRequest& operator=(UpgradeToRCSSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundImage_ == nullptr
        && this->bubbleColor_ == nullptr && this->category_ == nullptr && this->description_ == nullptr && this->latitude_ == nullptr && this->logo_ == nullptr
        && this->longitude_ == nullptr && this->officeAddress_ == nullptr && this->serviceEmail_ == nullptr && this->servicePhone_ == nullptr && this->serviceTerms_ == nullptr
        && this->serviceWebsite_ == nullptr && this->signName_ == nullptr; };
    // backgroundImage Field Functions 
    bool hasBackgroundImage() const { return this->backgroundImage_ != nullptr;};
    void deleteBackgroundImage() { this->backgroundImage_ = nullptr;};
    inline string getBackgroundImage() const { DARABONBA_PTR_GET_DEFAULT(backgroundImage_, "") };
    inline UpgradeToRCSSignatureRequest& setBackgroundImage(string backgroundImage) { DARABONBA_PTR_SET_VALUE(backgroundImage_, backgroundImage) };


    // bubbleColor Field Functions 
    bool hasBubbleColor() const { return this->bubbleColor_ != nullptr;};
    void deleteBubbleColor() { this->bubbleColor_ = nullptr;};
    inline string getBubbleColor() const { DARABONBA_PTR_GET_DEFAULT(bubbleColor_, "") };
    inline UpgradeToRCSSignatureRequest& setBubbleColor(string bubbleColor) { DARABONBA_PTR_SET_VALUE(bubbleColor_, bubbleColor) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int64_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
    inline UpgradeToRCSSignatureRequest& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpgradeToRCSSignatureRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
    inline UpgradeToRCSSignatureRequest& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
    inline UpgradeToRCSSignatureRequest& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
    inline UpgradeToRCSSignatureRequest& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    // officeAddress Field Functions 
    bool hasOfficeAddress() const { return this->officeAddress_ != nullptr;};
    void deleteOfficeAddress() { this->officeAddress_ = nullptr;};
    inline string getOfficeAddress() const { DARABONBA_PTR_GET_DEFAULT(officeAddress_, "") };
    inline UpgradeToRCSSignatureRequest& setOfficeAddress(string officeAddress) { DARABONBA_PTR_SET_VALUE(officeAddress_, officeAddress) };


    // serviceEmail Field Functions 
    bool hasServiceEmail() const { return this->serviceEmail_ != nullptr;};
    void deleteServiceEmail() { this->serviceEmail_ = nullptr;};
    inline string getServiceEmail() const { DARABONBA_PTR_GET_DEFAULT(serviceEmail_, "") };
    inline UpgradeToRCSSignatureRequest& setServiceEmail(string serviceEmail) { DARABONBA_PTR_SET_VALUE(serviceEmail_, serviceEmail) };


    // servicePhone Field Functions 
    bool hasServicePhone() const { return this->servicePhone_ != nullptr;};
    void deleteServicePhone() { this->servicePhone_ = nullptr;};
    inline string getServicePhone() const { DARABONBA_PTR_GET_DEFAULT(servicePhone_, "") };
    inline UpgradeToRCSSignatureRequest& setServicePhone(string servicePhone) { DARABONBA_PTR_SET_VALUE(servicePhone_, servicePhone) };


    // serviceTerms Field Functions 
    bool hasServiceTerms() const { return this->serviceTerms_ != nullptr;};
    void deleteServiceTerms() { this->serviceTerms_ = nullptr;};
    inline string getServiceTerms() const { DARABONBA_PTR_GET_DEFAULT(serviceTerms_, "") };
    inline UpgradeToRCSSignatureRequest& setServiceTerms(string serviceTerms) { DARABONBA_PTR_SET_VALUE(serviceTerms_, serviceTerms) };


    // serviceWebsite Field Functions 
    bool hasServiceWebsite() const { return this->serviceWebsite_ != nullptr;};
    void deleteServiceWebsite() { this->serviceWebsite_ = nullptr;};
    inline string getServiceWebsite() const { DARABONBA_PTR_GET_DEFAULT(serviceWebsite_, "") };
    inline UpgradeToRCSSignatureRequest& setServiceWebsite(string serviceWebsite) { DARABONBA_PTR_SET_VALUE(serviceWebsite_, serviceWebsite) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline UpgradeToRCSSignatureRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


  protected:
    // 背景图片ossKey
    shared_ptr<string> backgroundImage_ {};
    // 气泡颜色
    shared_ptr<string> bubbleColor_ {};
    // 行业类型
    shared_ptr<int64_t> category_ {};
    // 描述信息
    shared_ptr<string> description_ {};
    // 纬度
    shared_ptr<string> latitude_ {};
    // logo图片ossKey
    shared_ptr<string> logo_ {};
    // 经度
    shared_ptr<string> longitude_ {};
    // 办公地址
    shared_ptr<string> officeAddress_ {};
    // 服务邮箱
    shared_ptr<string> serviceEmail_ {};
    // 服务电话
    shared_ptr<string> servicePhone_ {};
    // 服务条款URL
    shared_ptr<string> serviceTerms_ {};
    // 服务官网URL
    shared_ptr<string> serviceWebsite_ {};
    // 签名名称
    shared_ptr<string> signName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
