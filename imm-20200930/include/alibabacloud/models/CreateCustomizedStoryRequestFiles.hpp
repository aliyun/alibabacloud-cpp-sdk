// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUESTFILES_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUESTFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCustomizedStoryRequestFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomizedStoryRequestFiles& obj) { 
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomizedStoryRequestFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateCustomizedStoryRequestFiles() = default ;
    CreateCustomizedStoryRequestFiles(const CreateCustomizedStoryRequestFiles &) = default ;
    CreateCustomizedStoryRequestFiles(CreateCustomizedStoryRequestFiles &&) = default ;
    CreateCustomizedStoryRequestFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomizedStoryRequestFiles() = default ;
    CreateCustomizedStoryRequestFiles& operator=(const CreateCustomizedStoryRequestFiles &) = default ;
    CreateCustomizedStoryRequestFiles& operator=(CreateCustomizedStoryRequestFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URI_ == nullptr; };
    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateCustomizedStoryRequestFiles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The URIs of the files.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
