// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKREQUESTSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGESPLICINGTASKREQUESTSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateImageSplicingTaskRequestSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageSplicingTaskRequestSources& obj) { 
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageSplicingTaskRequestSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateImageSplicingTaskRequestSources() = default ;
    CreateImageSplicingTaskRequestSources(const CreateImageSplicingTaskRequestSources &) = default ;
    CreateImageSplicingTaskRequestSources(CreateImageSplicingTaskRequestSources &&) = default ;
    CreateImageSplicingTaskRequestSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageSplicingTaskRequestSources() = default ;
    CreateImageSplicingTaskRequestSources& operator=(const CreateImageSplicingTaskRequestSources &) = default ;
    CreateImageSplicingTaskRequestSources& operator=(CreateImageSplicingTaskRequestSources &&) = default ;
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
    inline CreateImageSplicingTaskRequestSources& setRotate(int64_t rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateImageSplicingTaskRequestSources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The rotation angle. Valid values:
    // 
    // *   0 (default)
    // *   90
    // *   180
    // *   270
    std::shared_ptr<int64_t> rotate_ = nullptr;
    // The Object Storage Service (OSS) bucket in which you store the input images.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the complete path to the input images that have an extension.
    // 
    // The following image formats are supported: jpg and png.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
