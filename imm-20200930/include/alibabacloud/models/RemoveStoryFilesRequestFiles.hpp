// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESTORYFILESREQUESTFILES_HPP_
#define ALIBABACLOUD_MODELS_REMOVESTORYFILESREQUESTFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class RemoveStoryFilesRequestFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveStoryFilesRequestFiles& obj) { 
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveStoryFilesRequestFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    RemoveStoryFilesRequestFiles() = default ;
    RemoveStoryFilesRequestFiles(const RemoveStoryFilesRequestFiles &) = default ;
    RemoveStoryFilesRequestFiles(RemoveStoryFilesRequestFiles &&) = default ;
    RemoveStoryFilesRequestFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveStoryFilesRequestFiles() = default ;
    RemoveStoryFilesRequestFiles& operator=(const RemoveStoryFilesRequestFiles &) = default ;
    RemoveStoryFilesRequestFiles& operator=(RemoveStoryFilesRequestFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URI_ == nullptr; };
    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline RemoveStoryFilesRequestFiles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The URI of the Object Storage Service (OSS) bucket where you store the files that you want to delete.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the complete path to the files that have an extension.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
