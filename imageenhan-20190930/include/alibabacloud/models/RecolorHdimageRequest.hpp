// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORHDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOLORHDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecolorHDImageRequestColorTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorHDImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorHDImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_TO_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_TO_JSON(Degree, degree_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RefUrl, refUrl_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorHDImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_FROM_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_FROM_JSON(Degree, degree_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RefUrl, refUrl_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RecolorHDImageRequest() = default ;
    RecolorHDImageRequest(const RecolorHDImageRequest &) = default ;
    RecolorHDImageRequest(RecolorHDImageRequest &&) = default ;
    RecolorHDImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorHDImageRequest() = default ;
    RecolorHDImageRequest& operator=(const RecolorHDImageRequest &) = default ;
    RecolorHDImageRequest& operator=(RecolorHDImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->colorCount_ != nullptr
        && this->colorTemplate_ != nullptr && this->degree_ != nullptr && this->mode_ != nullptr && this->refUrl_ != nullptr && this->url_ != nullptr; };
    // colorCount Field Functions 
    bool hasColorCount() const { return this->colorCount_ != nullptr;};
    void deleteColorCount() { this->colorCount_ = nullptr;};
    inline int32_t colorCount() const { DARABONBA_PTR_GET_DEFAULT(colorCount_, 0) };
    inline RecolorHDImageRequest& setColorCount(int32_t colorCount) { DARABONBA_PTR_SET_VALUE(colorCount_, colorCount) };


    // colorTemplate Field Functions 
    bool hasColorTemplate() const { return this->colorTemplate_ != nullptr;};
    void deleteColorTemplate() { this->colorTemplate_ = nullptr;};
    inline const vector<RecolorHDImageRequestColorTemplate> & colorTemplate() const { DARABONBA_PTR_GET_CONST(colorTemplate_, vector<RecolorHDImageRequestColorTemplate>) };
    inline vector<RecolorHDImageRequestColorTemplate> colorTemplate() { DARABONBA_PTR_GET(colorTemplate_, vector<RecolorHDImageRequestColorTemplate>) };
    inline RecolorHDImageRequest& setColorTemplate(const vector<RecolorHDImageRequestColorTemplate> & colorTemplate) { DARABONBA_PTR_SET_VALUE(colorTemplate_, colorTemplate) };
    inline RecolorHDImageRequest& setColorTemplate(vector<RecolorHDImageRequestColorTemplate> && colorTemplate) { DARABONBA_PTR_SET_RVALUE(colorTemplate_, colorTemplate) };


    // degree Field Functions 
    bool hasDegree() const { return this->degree_ != nullptr;};
    void deleteDegree() { this->degree_ = nullptr;};
    inline string degree() const { DARABONBA_PTR_GET_DEFAULT(degree_, "") };
    inline RecolorHDImageRequest& setDegree(string degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RecolorHDImageRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // refUrl Field Functions 
    bool hasRefUrl() const { return this->refUrl_ != nullptr;};
    void deleteRefUrl() { this->refUrl_ = nullptr;};
    inline string refUrl() const { DARABONBA_PTR_GET_DEFAULT(refUrl_, "") };
    inline RecolorHDImageRequest& setRefUrl(string refUrl) { DARABONBA_PTR_SET_VALUE(refUrl_, refUrl) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RecolorHDImageRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> colorCount_ = nullptr;
    // 1
    std::shared_ptr<vector<RecolorHDImageRequestColorTemplate>> colorTemplate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> degree_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> refUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
