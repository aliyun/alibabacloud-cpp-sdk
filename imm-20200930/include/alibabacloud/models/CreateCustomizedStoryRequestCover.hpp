// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUESTCOVER_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUESTCOVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCustomizedStoryRequestCover : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomizedStoryRequestCover& obj) { 
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomizedStoryRequestCover& obj) { 
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateCustomizedStoryRequestCover() = default ;
    CreateCustomizedStoryRequestCover(const CreateCustomizedStoryRequestCover &) = default ;
    CreateCustomizedStoryRequestCover(CreateCustomizedStoryRequestCover &&) = default ;
    CreateCustomizedStoryRequestCover(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomizedStoryRequestCover() = default ;
    CreateCustomizedStoryRequestCover& operator=(const CreateCustomizedStoryRequestCover &) = default ;
    CreateCustomizedStoryRequestCover& operator=(CreateCustomizedStoryRequestCover &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URI_ == nullptr; };
    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateCustomizedStoryRequestCover& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The URI of the cover image.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
