// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANSKETCHSTYLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANSKETCHSTYLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenerateHumanSketchStyleAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanSketchStyleAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanSketchStyleAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
    };
    GenerateHumanSketchStyleAdvanceRequest() = default ;
    GenerateHumanSketchStyleAdvanceRequest(const GenerateHumanSketchStyleAdvanceRequest &) = default ;
    GenerateHumanSketchStyleAdvanceRequest(GenerateHumanSketchStyleAdvanceRequest &&) = default ;
    GenerateHumanSketchStyleAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanSketchStyleAdvanceRequest() = default ;
    GenerateHumanSketchStyleAdvanceRequest& operator=(const GenerateHumanSketchStyleAdvanceRequest &) = default ;
    GenerateHumanSketchStyleAdvanceRequest& operator=(GenerateHumanSketchStyleAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->returnType_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline GenerateHumanSketchStyleAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline string returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
    inline GenerateHumanSketchStyleAdvanceRequest& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<string> returnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
