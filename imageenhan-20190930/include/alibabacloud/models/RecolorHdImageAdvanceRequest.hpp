// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORHDIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOLORHDIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecolorHDImageAdvanceRequestColorTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorHDImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorHDImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_TO_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_TO_JSON(Degree, degree_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_TO_JSON(RefUrl, refUrlObject_);
      DARABONBA_TO_JSON(Url, urlObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorHDImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_FROM_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_FROM_JSON(Degree, degree_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_FROM_JSON(RefUrl, refUrlObject_);
      DARABONBA_FROM_JSON(Url, urlObject_);
    };
    RecolorHDImageAdvanceRequest() = default ;
    RecolorHDImageAdvanceRequest(const RecolorHDImageAdvanceRequest &) = default ;
    RecolorHDImageAdvanceRequest(RecolorHDImageAdvanceRequest &&) = default ;
    RecolorHDImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorHDImageAdvanceRequest() = default ;
    RecolorHDImageAdvanceRequest& operator=(const RecolorHDImageAdvanceRequest &) = default ;
    RecolorHDImageAdvanceRequest& operator=(RecolorHDImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->colorCount_ == nullptr
        && return this->colorTemplate_ == nullptr && return this->degree_ == nullptr && return this->mode_ == nullptr && return this->refUrlObject_ == nullptr && return this->urlObject_ == nullptr; };
    // colorCount Field Functions 
    bool hasColorCount() const { return this->colorCount_ != nullptr;};
    void deleteColorCount() { this->colorCount_ = nullptr;};
    inline int32_t colorCount() const { DARABONBA_PTR_GET_DEFAULT(colorCount_, 0) };
    inline RecolorHDImageAdvanceRequest& setColorCount(int32_t colorCount) { DARABONBA_PTR_SET_VALUE(colorCount_, colorCount) };


    // colorTemplate Field Functions 
    bool hasColorTemplate() const { return this->colorTemplate_ != nullptr;};
    void deleteColorTemplate() { this->colorTemplate_ = nullptr;};
    inline const vector<RecolorHDImageAdvanceRequestColorTemplate> & colorTemplate() const { DARABONBA_PTR_GET_CONST(colorTemplate_, vector<RecolorHDImageAdvanceRequestColorTemplate>) };
    inline vector<RecolorHDImageAdvanceRequestColorTemplate> colorTemplate() { DARABONBA_PTR_GET(colorTemplate_, vector<RecolorHDImageAdvanceRequestColorTemplate>) };
    inline RecolorHDImageAdvanceRequest& setColorTemplate(const vector<RecolorHDImageAdvanceRequestColorTemplate> & colorTemplate) { DARABONBA_PTR_SET_VALUE(colorTemplate_, colorTemplate) };
    inline RecolorHDImageAdvanceRequest& setColorTemplate(vector<RecolorHDImageAdvanceRequestColorTemplate> && colorTemplate) { DARABONBA_PTR_SET_RVALUE(colorTemplate_, colorTemplate) };


    // degree Field Functions 
    bool hasDegree() const { return this->degree_ != nullptr;};
    void deleteDegree() { this->degree_ = nullptr;};
    inline string degree() const { DARABONBA_PTR_GET_DEFAULT(degree_, "") };
    inline RecolorHDImageAdvanceRequest& setDegree(string degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RecolorHDImageAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // refUrlObject Field Functions 
    bool hasRefUrlObject() const { return this->refUrlObject_ != nullptr;};
    void deleteRefUrlObject() { this->refUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> refUrlObject() const { DARABONBA_GET(refUrlObject_) };
    inline RecolorHDImageAdvanceRequest& setRefUrlObject(shared_ptr<Darabonba::IStream> refUrlObject) { DARABONBA_SET_VALUE(refUrlObject_, refUrlObject) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline RecolorHDImageAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    std::shared_ptr<int32_t> colorCount_ = nullptr;
    // 1
    std::shared_ptr<vector<RecolorHDImageAdvanceRequestColorTemplate>> colorTemplate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> degree_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    shared_ptr<Darabonba::IStream> refUrlObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
