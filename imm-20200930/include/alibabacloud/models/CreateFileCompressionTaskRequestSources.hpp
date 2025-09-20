// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKREQUESTSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKREQUESTSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateFileCompressionTaskRequestSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileCompressionTaskRequestSources& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileCompressionTaskRequestSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateFileCompressionTaskRequestSources() = default ;
    CreateFileCompressionTaskRequestSources(const CreateFileCompressionTaskRequestSources &) = default ;
    CreateFileCompressionTaskRequestSources(CreateFileCompressionTaskRequestSources &&) = default ;
    CreateFileCompressionTaskRequestSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileCompressionTaskRequestSources() = default ;
    CreateFileCompressionTaskRequestSources& operator=(const CreateFileCompressionTaskRequestSources &) = default ;
    CreateFileCompressionTaskRequestSources& operator=(CreateFileCompressionTaskRequestSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->mode_ != nullptr && this->URI_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline CreateFileCompressionTaskRequestSources& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateFileCompressionTaskRequestSources& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateFileCompressionTaskRequestSources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // Specifies the path of the object in the package, or renames the object in the package.
    // 
    // *   Leave this parameter empty to retain the original directory structure of the object in the package. For example, if the object is stored at `oss://test-bucket/test-dir/test-object.doc` and you do not specify this parameter, the path of the object in the package is `/test-dir/test-object.doc`.
    // *   Rename the object. For example, if the object is stored at `oss://test-bucket/test-object.jpg` and you set the **Alias** parameter to `test-rename-object.jpg`, the name of the object in the package is `test-rename-object.jpg`.
    // *   Specify a different path for the object in the package. For example, if the directory to be packed is `oss://test-bucket/test-dir/` and you set the **Alias** parameter to `/new-dir/`, all objects in the directory are placed in the `/new-dir/` path in the package.
    // *   Set the parameter to `/` to remove the original directory structure.
    // 
    // >  Duplicate object names may cause a failure in extracting the objects from the package, depending on the packing tool that you use. We recommend that you avoid using duplicate object names when you rename objects in the packing task.
    std::shared_ptr<string> alias_ = nullptr;
    // The object matching rule. Valid values: `fullname` and `prefix`. Default value: `prefix`
    // 
    // *   `prefix`: matches objects by object name prefix.
    // *   `fullname`: exactly matches one single object by its full object name.
    std::shared_ptr<string> mode_ = nullptr;
    // The OSS URI of the object or directory.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is a directory or object:
    // 
    // When you pack a directory, `${Object}` is the path of the directory.
    // 
    // *   When you pack an object, `${Object}` is the path of the object with the extension included.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
