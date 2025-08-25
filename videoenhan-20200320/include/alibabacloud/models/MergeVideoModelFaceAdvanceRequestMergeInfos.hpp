// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEVIDEOMODELFACEADVANCEREQUESTMERGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_MERGEVIDEOMODELFACEADVANCEREQUESTMERGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class MergeVideoModelFaceAdvanceRequestMergeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeVideoModelFaceAdvanceRequestMergeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(TemplateFaceID, templateFaceID_);
      DARABONBA_PTR_TO_JSON(TemplateFaceURL, templateFaceURL_);
    };
    friend void from_json(const Darabonba::Json& j, MergeVideoModelFaceAdvanceRequestMergeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(TemplateFaceID, templateFaceID_);
      DARABONBA_PTR_FROM_JSON(TemplateFaceURL, templateFaceURL_);
    };
    MergeVideoModelFaceAdvanceRequestMergeInfos() = default ;
    MergeVideoModelFaceAdvanceRequestMergeInfos(const MergeVideoModelFaceAdvanceRequestMergeInfos &) = default ;
    MergeVideoModelFaceAdvanceRequestMergeInfos(MergeVideoModelFaceAdvanceRequestMergeInfos &&) = default ;
    MergeVideoModelFaceAdvanceRequestMergeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeVideoModelFaceAdvanceRequestMergeInfos() = default ;
    MergeVideoModelFaceAdvanceRequestMergeInfos& operator=(const MergeVideoModelFaceAdvanceRequestMergeInfos &) = default ;
    MergeVideoModelFaceAdvanceRequestMergeInfos& operator=(MergeVideoModelFaceAdvanceRequestMergeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->templateFaceID_ != nullptr && this->templateFaceURL_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline MergeVideoModelFaceAdvanceRequestMergeInfos& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // templateFaceID Field Functions 
    bool hasTemplateFaceID() const { return this->templateFaceID_ != nullptr;};
    void deleteTemplateFaceID() { this->templateFaceID_ = nullptr;};
    inline string templateFaceID() const { DARABONBA_PTR_GET_DEFAULT(templateFaceID_, "") };
    inline MergeVideoModelFaceAdvanceRequestMergeInfos& setTemplateFaceID(string templateFaceID) { DARABONBA_PTR_SET_VALUE(templateFaceID_, templateFaceID) };


    // templateFaceURL Field Functions 
    bool hasTemplateFaceURL() const { return this->templateFaceURL_ != nullptr;};
    void deleteTemplateFaceURL() { this->templateFaceURL_ = nullptr;};
    inline string templateFaceURL() const { DARABONBA_PTR_GET_DEFAULT(templateFaceURL_, "") };
    inline MergeVideoModelFaceAdvanceRequestMergeInfos& setTemplateFaceURL(string templateFaceURL) { DARABONBA_PTR_SET_VALUE(templateFaceURL_, templateFaceURL) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> templateFaceID_ = nullptr;
    std::shared_ptr<string> templateFaceURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
