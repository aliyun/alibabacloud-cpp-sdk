// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKREQUESTSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKREQUESTSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateOfficeConversionTaskRequestSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeConversionTaskRequestSources& obj) { 
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeConversionTaskRequestSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateOfficeConversionTaskRequestSources() = default ;
    CreateOfficeConversionTaskRequestSources(const CreateOfficeConversionTaskRequestSources &) = default ;
    CreateOfficeConversionTaskRequestSources(CreateOfficeConversionTaskRequestSources &&) = default ;
    CreateOfficeConversionTaskRequestSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeConversionTaskRequestSources() = default ;
    CreateOfficeConversionTaskRequestSources& operator=(const CreateOfficeConversionTaskRequestSources &) = default ;
    CreateOfficeConversionTaskRequestSources& operator=(CreateOfficeConversionTaskRequestSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rotate_ == nullptr
        && return this->URI_ == nullptr; };
    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline int64_t rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, 0L) };
    inline CreateOfficeConversionTaskRequestSources& setRotate(int64_t rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateOfficeConversionTaskRequestSources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


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
    // The URI must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that contains the file name extension.
    // 
    // The operation supports the following image formats: JPG, JP2, PNG, TIFF, WebP, BMP, and SVG.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
