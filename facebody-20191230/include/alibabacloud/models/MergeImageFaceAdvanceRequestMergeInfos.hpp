// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEIMAGEFACEADVANCEREQUESTMERGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_MERGEIMAGEFACEADVANCEREQUESTMERGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MergeImageFaceAdvanceRequestMergeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeImageFaceAdvanceRequestMergeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(TemplateFaceID, templateFaceID_);
    };
    friend void from_json(const Darabonba::Json& j, MergeImageFaceAdvanceRequestMergeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(TemplateFaceID, templateFaceID_);
    };
    MergeImageFaceAdvanceRequestMergeInfos() = default ;
    MergeImageFaceAdvanceRequestMergeInfos(const MergeImageFaceAdvanceRequestMergeInfos &) = default ;
    MergeImageFaceAdvanceRequestMergeInfos(MergeImageFaceAdvanceRequestMergeInfos &&) = default ;
    MergeImageFaceAdvanceRequestMergeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeImageFaceAdvanceRequestMergeInfos() = default ;
    MergeImageFaceAdvanceRequestMergeInfos& operator=(const MergeImageFaceAdvanceRequestMergeInfos &) = default ;
    MergeImageFaceAdvanceRequestMergeInfos& operator=(MergeImageFaceAdvanceRequestMergeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->templateFaceID_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline MergeImageFaceAdvanceRequestMergeInfos& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // templateFaceID Field Functions 
    bool hasTemplateFaceID() const { return this->templateFaceID_ != nullptr;};
    void deleteTemplateFaceID() { this->templateFaceID_ = nullptr;};
    inline string templateFaceID() const { DARABONBA_PTR_GET_DEFAULT(templateFaceID_, "") };
    inline MergeImageFaceAdvanceRequestMergeInfos& setTemplateFaceID(string templateFaceID) { DARABONBA_PTR_SET_VALUE(templateFaceID_, templateFaceID) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> templateFaceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
