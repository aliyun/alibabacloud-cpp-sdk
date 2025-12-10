// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImagesResponseBodyImagesLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages(ListImagesResponseBodyImages &&) = default ;
    ListImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages& operator=(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages& operator=(ListImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->imageId_ == nullptr && return this->imageUri_ == nullptr && return this->labels_ == nullptr && return this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListImagesResponseBodyImages& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string imageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline ListImagesResponseBodyImages& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListImagesResponseBodyImagesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListImagesResponseBodyImagesLabels>) };
    inline vector<Models::ListImagesResponseBodyImagesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListImagesResponseBodyImagesLabels>) };
    inline ListImagesResponseBodyImages& setLabels(const vector<Models::ListImagesResponseBodyImagesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListImagesResponseBodyImages& setLabels(vector<Models::ListImagesResponseBodyImagesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListImagesResponseBodyImages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageUri_ = nullptr;
    std::shared_ptr<vector<Models::ListImagesResponseBodyImagesLabels>> labels_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
