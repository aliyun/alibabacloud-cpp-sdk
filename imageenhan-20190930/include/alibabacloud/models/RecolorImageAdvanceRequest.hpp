// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOLORIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecolorImageAdvanceRequestColorTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_TO_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_TO_JSON(RefUrl, refUrlObject_);
      DARABONBA_TO_JSON(Url, urlObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorCount, colorCount_);
      DARABONBA_PTR_FROM_JSON(ColorTemplate, colorTemplate_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_FROM_JSON(RefUrl, refUrlObject_);
      DARABONBA_FROM_JSON(Url, urlObject_);
    };
    RecolorImageAdvanceRequest() = default ;
    RecolorImageAdvanceRequest(const RecolorImageAdvanceRequest &) = default ;
    RecolorImageAdvanceRequest(RecolorImageAdvanceRequest &&) = default ;
    RecolorImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorImageAdvanceRequest() = default ;
    RecolorImageAdvanceRequest& operator=(const RecolorImageAdvanceRequest &) = default ;
    RecolorImageAdvanceRequest& operator=(RecolorImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->colorCount_ == nullptr
        && return this->colorTemplate_ == nullptr && return this->mode_ == nullptr && return this->refUrlObject_ == nullptr && return this->urlObject_ == nullptr; };
    // colorCount Field Functions 
    bool hasColorCount() const { return this->colorCount_ != nullptr;};
    void deleteColorCount() { this->colorCount_ = nullptr;};
    inline int32_t colorCount() const { DARABONBA_PTR_GET_DEFAULT(colorCount_, 0) };
    inline RecolorImageAdvanceRequest& setColorCount(int32_t colorCount) { DARABONBA_PTR_SET_VALUE(colorCount_, colorCount) };


    // colorTemplate Field Functions 
    bool hasColorTemplate() const { return this->colorTemplate_ != nullptr;};
    void deleteColorTemplate() { this->colorTemplate_ = nullptr;};
    inline const vector<RecolorImageAdvanceRequestColorTemplate> & colorTemplate() const { DARABONBA_PTR_GET_CONST(colorTemplate_, vector<RecolorImageAdvanceRequestColorTemplate>) };
    inline vector<RecolorImageAdvanceRequestColorTemplate> colorTemplate() { DARABONBA_PTR_GET(colorTemplate_, vector<RecolorImageAdvanceRequestColorTemplate>) };
    inline RecolorImageAdvanceRequest& setColorTemplate(const vector<RecolorImageAdvanceRequestColorTemplate> & colorTemplate) { DARABONBA_PTR_SET_VALUE(colorTemplate_, colorTemplate) };
    inline RecolorImageAdvanceRequest& setColorTemplate(vector<RecolorImageAdvanceRequestColorTemplate> && colorTemplate) { DARABONBA_PTR_SET_RVALUE(colorTemplate_, colorTemplate) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RecolorImageAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // refUrlObject Field Functions 
    bool hasRefUrlObject() const { return this->refUrlObject_ != nullptr;};
    void deleteRefUrlObject() { this->refUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> refUrlObject() const { DARABONBA_GET(refUrlObject_) };
    inline RecolorImageAdvanceRequest& setRefUrlObject(shared_ptr<Darabonba::IStream> refUrlObject) { DARABONBA_SET_VALUE(refUrlObject_, refUrlObject) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline RecolorImageAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    std::shared_ptr<int32_t> colorCount_ = nullptr;
    // 1
    std::shared_ptr<vector<RecolorImageAdvanceRequestColorTemplate>> colorTemplate_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    shared_ptr<Darabonba::IStream> refUrlObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
