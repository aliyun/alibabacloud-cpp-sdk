// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSTORYFILESREQUESTFILES_HPP_
#define ALIBABACLOUD_MODELS_ADDSTORYFILESREQUESTFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddStoryFilesRequestFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddStoryFilesRequestFiles& obj) { 
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, AddStoryFilesRequestFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    AddStoryFilesRequestFiles() = default ;
    AddStoryFilesRequestFiles(const AddStoryFilesRequestFiles &) = default ;
    AddStoryFilesRequestFiles(AddStoryFilesRequestFiles &&) = default ;
    AddStoryFilesRequestFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddStoryFilesRequestFiles() = default ;
    AddStoryFilesRequestFiles& operator=(const AddStoryFilesRequestFiles &) = default ;
    AddStoryFilesRequestFiles& operator=(AddStoryFilesRequestFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URI_ == nullptr; };
    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline AddStoryFilesRequestFiles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The URI of the object.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
