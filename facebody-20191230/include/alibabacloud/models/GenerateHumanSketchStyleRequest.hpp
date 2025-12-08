// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANSKETCHSTYLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANSKETCHSTYLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenerateHumanSketchStyleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanSketchStyleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanSketchStyleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
    };
    GenerateHumanSketchStyleRequest() = default ;
    GenerateHumanSketchStyleRequest(const GenerateHumanSketchStyleRequest &) = default ;
    GenerateHumanSketchStyleRequest(GenerateHumanSketchStyleRequest &&) = default ;
    GenerateHumanSketchStyleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanSketchStyleRequest() = default ;
    GenerateHumanSketchStyleRequest& operator=(const GenerateHumanSketchStyleRequest &) = default ;
    GenerateHumanSketchStyleRequest& operator=(GenerateHumanSketchStyleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->returnType_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline GenerateHumanSketchStyleRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline string returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
    inline GenerateHumanSketchStyleRequest& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> returnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
