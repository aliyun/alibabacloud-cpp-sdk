// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGETOPDFTASKREQUESTSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGETOPDFTASKREQUESTSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateImageToPDFTaskRequestSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageToPDFTaskRequestSources& obj) { 
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageToPDFTaskRequestSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateImageToPDFTaskRequestSources() = default ;
    CreateImageToPDFTaskRequestSources(const CreateImageToPDFTaskRequestSources &) = default ;
    CreateImageToPDFTaskRequestSources(CreateImageToPDFTaskRequestSources &&) = default ;
    CreateImageToPDFTaskRequestSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageToPDFTaskRequestSources() = default ;
    CreateImageToPDFTaskRequestSources& operator=(const CreateImageToPDFTaskRequestSources &) = default ;
    CreateImageToPDFTaskRequestSources& operator=(CreateImageToPDFTaskRequestSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rotate_ != nullptr
        && this->URI_ != nullptr; };
    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline int64_t rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, 0L) };
    inline CreateImageToPDFTaskRequestSources& setRotate(int64_t rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateImageToPDFTaskRequestSources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The rotation angle. Valid values:
    // 
    // *   0 (default)
    // *   90
    // *   180
    // *   270
    std::shared_ptr<int64_t> rotate_ = nullptr;
    // The OSS URI of the input image.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // The operation supports the following image formats: JPG, JP2, PNG, TIFF, WebP, BMP, and SVG.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
