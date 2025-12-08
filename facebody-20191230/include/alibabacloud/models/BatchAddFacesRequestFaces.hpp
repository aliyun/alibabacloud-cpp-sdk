// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESREQUESTFACES_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESREQUESTFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesRequestFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesRequestFaces& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesRequestFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    BatchAddFacesRequestFaces() = default ;
    BatchAddFacesRequestFaces(const BatchAddFacesRequestFaces &) = default ;
    BatchAddFacesRequestFaces(BatchAddFacesRequestFaces &&) = default ;
    BatchAddFacesRequestFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesRequestFaces() = default ;
    BatchAddFacesRequestFaces& operator=(const BatchAddFacesRequestFaces &) = default ;
    BatchAddFacesRequestFaces& operator=(BatchAddFacesRequestFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraData_ == nullptr
        && return this->imageURL_ == nullptr; };
    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline BatchAddFacesRequestFaces& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline BatchAddFacesRequestFaces& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<string> extraData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
