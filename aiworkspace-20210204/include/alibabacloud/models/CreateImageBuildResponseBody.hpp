// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBuildId, imageBuildId_);
      DARABONBA_PTR_TO_JSON(ImageBuildJobId, imageBuildJobId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBuildId, imageBuildId_);
      DARABONBA_PTR_FROM_JSON(ImageBuildJobId, imageBuildJobId_);
    };
    CreateImageBuildResponseBody() = default ;
    CreateImageBuildResponseBody(const CreateImageBuildResponseBody &) = default ;
    CreateImageBuildResponseBody(CreateImageBuildResponseBody &&) = default ;
    CreateImageBuildResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildResponseBody() = default ;
    CreateImageBuildResponseBody& operator=(const CreateImageBuildResponseBody &) = default ;
    CreateImageBuildResponseBody& operator=(CreateImageBuildResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageBuildId_ == nullptr
        && this->imageBuildJobId_ == nullptr; };
    // imageBuildId Field Functions 
    bool hasImageBuildId() const { return this->imageBuildId_ != nullptr;};
    void deleteImageBuildId() { this->imageBuildId_ = nullptr;};
    inline string getImageBuildId() const { DARABONBA_PTR_GET_DEFAULT(imageBuildId_, "") };
    inline CreateImageBuildResponseBody& setImageBuildId(string imageBuildId) { DARABONBA_PTR_SET_VALUE(imageBuildId_, imageBuildId) };


    // imageBuildJobId Field Functions 
    bool hasImageBuildJobId() const { return this->imageBuildJobId_ != nullptr;};
    void deleteImageBuildJobId() { this->imageBuildJobId_ = nullptr;};
    inline string getImageBuildJobId() const { DARABONBA_PTR_GET_DEFAULT(imageBuildJobId_, "") };
    inline CreateImageBuildResponseBody& setImageBuildJobId(string imageBuildJobId) { DARABONBA_PTR_SET_VALUE(imageBuildJobId_, imageBuildJobId) };


  protected:
    // 代表资源一级ID的资源属性字段
    shared_ptr<string> imageBuildId_ {};
    shared_ptr<string> imageBuildJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
