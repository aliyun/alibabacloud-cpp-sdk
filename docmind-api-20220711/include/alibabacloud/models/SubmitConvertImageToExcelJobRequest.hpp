// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTIMAGETOEXCELJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTIMAGETOEXCELJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertImageToExcelJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertImageToExcelJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_TO_JSON(ImageNameExtension, imageNameExtension_);
      DARABONBA_PTR_TO_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertImageToExcelJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_FROM_JSON(ImageNameExtension, imageNameExtension_);
      DARABONBA_PTR_FROM_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitConvertImageToExcelJobRequest() = default ;
    SubmitConvertImageToExcelJobRequest(const SubmitConvertImageToExcelJobRequest &) = default ;
    SubmitConvertImageToExcelJobRequest(SubmitConvertImageToExcelJobRequest &&) = default ;
    SubmitConvertImageToExcelJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertImageToExcelJobRequest() = default ;
    SubmitConvertImageToExcelJobRequest& operator=(const SubmitConvertImageToExcelJobRequest &) = default ;
    SubmitConvertImageToExcelJobRequest& operator=(SubmitConvertImageToExcelJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceMergeExcel_ == nullptr
        && return this->imageNameExtension_ == nullptr && return this->imageNames_ == nullptr && return this->imageUrls_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr; };
    // forceMergeExcel Field Functions 
    bool hasForceMergeExcel() const { return this->forceMergeExcel_ != nullptr;};
    void deleteForceMergeExcel() { this->forceMergeExcel_ = nullptr;};
    inline bool forceMergeExcel() const { DARABONBA_PTR_GET_DEFAULT(forceMergeExcel_, false) };
    inline SubmitConvertImageToExcelJobRequest& setForceMergeExcel(bool forceMergeExcel) { DARABONBA_PTR_SET_VALUE(forceMergeExcel_, forceMergeExcel) };


    // imageNameExtension Field Functions 
    bool hasImageNameExtension() const { return this->imageNameExtension_ != nullptr;};
    void deleteImageNameExtension() { this->imageNameExtension_ = nullptr;};
    inline string imageNameExtension() const { DARABONBA_PTR_GET_DEFAULT(imageNameExtension_, "") };
    inline SubmitConvertImageToExcelJobRequest& setImageNameExtension(string imageNameExtension) { DARABONBA_PTR_SET_VALUE(imageNameExtension_, imageNameExtension) };


    // imageNames Field Functions 
    bool hasImageNames() const { return this->imageNames_ != nullptr;};
    void deleteImageNames() { this->imageNames_ = nullptr;};
    inline const vector<string> & imageNames() const { DARABONBA_PTR_GET_CONST(imageNames_, vector<string>) };
    inline vector<string> imageNames() { DARABONBA_PTR_GET(imageNames_, vector<string>) };
    inline SubmitConvertImageToExcelJobRequest& setImageNames(const vector<string> & imageNames) { DARABONBA_PTR_SET_VALUE(imageNames_, imageNames) };
    inline SubmitConvertImageToExcelJobRequest& setImageNames(vector<string> && imageNames) { DARABONBA_PTR_SET_RVALUE(imageNames_, imageNames) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline SubmitConvertImageToExcelJobRequest& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline SubmitConvertImageToExcelJobRequest& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitConvertImageToExcelJobRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitConvertImageToExcelJobRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<bool> forceMergeExcel_ = nullptr;
    std::shared_ptr<string> imageNameExtension_ = nullptr;
    std::shared_ptr<vector<string>> imageNames_ = nullptr;
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
