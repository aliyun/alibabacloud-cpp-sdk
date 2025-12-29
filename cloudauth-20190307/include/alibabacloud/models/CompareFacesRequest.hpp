// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceImageType, sourceImageType_);
      DARABONBA_PTR_TO_JSON(SourceImageValue, sourceImageValue_);
      DARABONBA_PTR_TO_JSON(TargetImageType, targetImageType_);
      DARABONBA_PTR_TO_JSON(TargetImageValue, targetImageValue_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceImageType, sourceImageType_);
      DARABONBA_PTR_FROM_JSON(SourceImageValue, sourceImageValue_);
      DARABONBA_PTR_FROM_JSON(TargetImageType, targetImageType_);
      DARABONBA_PTR_FROM_JSON(TargetImageValue, targetImageValue_);
    };
    CompareFacesRequest() = default ;
    CompareFacesRequest(const CompareFacesRequest &) = default ;
    CompareFacesRequest(CompareFacesRequest &&) = default ;
    CompareFacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFacesRequest() = default ;
    CompareFacesRequest& operator=(const CompareFacesRequest &) = default ;
    CompareFacesRequest& operator=(CompareFacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceImageType_ == nullptr
        && this->sourceImageValue_ == nullptr && this->targetImageType_ == nullptr && this->targetImageValue_ == nullptr; };
    // sourceImageType Field Functions 
    bool hasSourceImageType() const { return this->sourceImageType_ != nullptr;};
    void deleteSourceImageType() { this->sourceImageType_ = nullptr;};
    inline string getSourceImageType() const { DARABONBA_PTR_GET_DEFAULT(sourceImageType_, "") };
    inline CompareFacesRequest& setSourceImageType(string sourceImageType) { DARABONBA_PTR_SET_VALUE(sourceImageType_, sourceImageType) };


    // sourceImageValue Field Functions 
    bool hasSourceImageValue() const { return this->sourceImageValue_ != nullptr;};
    void deleteSourceImageValue() { this->sourceImageValue_ = nullptr;};
    inline string getSourceImageValue() const { DARABONBA_PTR_GET_DEFAULT(sourceImageValue_, "") };
    inline CompareFacesRequest& setSourceImageValue(string sourceImageValue) { DARABONBA_PTR_SET_VALUE(sourceImageValue_, sourceImageValue) };


    // targetImageType Field Functions 
    bool hasTargetImageType() const { return this->targetImageType_ != nullptr;};
    void deleteTargetImageType() { this->targetImageType_ = nullptr;};
    inline string getTargetImageType() const { DARABONBA_PTR_GET_DEFAULT(targetImageType_, "") };
    inline CompareFacesRequest& setTargetImageType(string targetImageType) { DARABONBA_PTR_SET_VALUE(targetImageType_, targetImageType) };


    // targetImageValue Field Functions 
    bool hasTargetImageValue() const { return this->targetImageValue_ != nullptr;};
    void deleteTargetImageValue() { this->targetImageValue_ = nullptr;};
    inline string getTargetImageValue() const { DARABONBA_PTR_GET_DEFAULT(targetImageValue_, "") };
    inline CompareFacesRequest& setTargetImageValue(string targetImageValue) { DARABONBA_PTR_SET_VALUE(targetImageValue_, targetImageValue) };


  protected:
    // Type of Image 1, with values:
    // 
    // - **FacePic**: User\\"s face photo
    // - **IDPic**: Headshot from the user\\"s second-generation ID card chip (typically obtained and decoded by a second-generation ID card reader)
    shared_ptr<string> sourceImageType_ {};
    // Address of Image 1. Please refer to the instructions on uploading image addresses.
    shared_ptr<string> sourceImageValue_ {};
    // Type of Image 2, with values:
    // 
    // - **FacePic**: User\\"s face photo
    // - **IDPic**: Headshot from the user\\"s second-generation ID card chip (typically obtained and decoded by a second-generation ID card reader)
    shared_ptr<string> targetImageType_ {};
    // Address of Image 2. Please refer to the instructions on uploading image addresses.
    shared_ptr<string> targetImageValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
