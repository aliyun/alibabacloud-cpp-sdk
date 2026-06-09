// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUTQUESTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUTQUESTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EduTutor20250707
{
namespace Models
{
  class CutQuestionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CutQuestionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CutQuestionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CutQuestionsRequest() = default ;
    CutQuestionsRequest(const CutQuestionsRequest &) = default ;
    CutQuestionsRequest(CutQuestionsRequest &&) = default ;
    CutQuestionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CutQuestionsRequest() = default ;
    CutQuestionsRequest& operator=(const CutQuestionsRequest &) = default ;
    CutQuestionsRequest& operator=(CutQuestionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(extract_images, extractImages_);
        DARABONBA_PTR_TO_JSON(struct, struct_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(extract_images, extractImages_);
        DARABONBA_PTR_FROM_JSON(struct, struct_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extractImages_ == nullptr
        && this->struct_ == nullptr; };
      // extractImages Field Functions 
      bool hasExtractImages() const { return this->extractImages_ != nullptr;};
      void deleteExtractImages() { this->extractImages_ = nullptr;};
      inline bool getExtractImages() const { DARABONBA_PTR_GET_DEFAULT(extractImages_, false) };
      inline Parameters& setExtractImages(bool extractImages) { DARABONBA_PTR_SET_VALUE(extractImages_, extractImages) };


      // struct Field Functions 
      bool hasStruct() const { return this->struct_ != nullptr;};
      void deleteStruct() { this->struct_ = nullptr;};
      inline bool getStruct() const { DARABONBA_PTR_GET_DEFAULT(struct_, false) };
      inline Parameters& setStruct(bool _struct) { DARABONBA_PTR_SET_VALUE(struct_, _struct) };


    protected:
      // This parameter is required.
      shared_ptr<bool> extractImages_ {};
      // This parameter is required.
      shared_ptr<bool> struct_ {};
    };

    virtual bool empty() const override { return this->image_ == nullptr
        && this->parameters_ == nullptr && this->workspaceId_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CutQuestionsRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const CutQuestionsRequest::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, CutQuestionsRequest::Parameters) };
    inline CutQuestionsRequest::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, CutQuestionsRequest::Parameters) };
    inline CutQuestionsRequest& setParameters(const CutQuestionsRequest::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CutQuestionsRequest& setParameters(CutQuestionsRequest::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CutQuestionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> image_ {};
    // This parameter is required.
    shared_ptr<CutQuestionsRequest::Parameters> parameters_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EduTutor20250707
#endif
