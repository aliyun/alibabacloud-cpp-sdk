// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALFILE_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALFILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Element.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualFile& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OSSURI, OSSURI_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualFile& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OSSURI, OSSURI_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    ContextualFile() = default ;
    ContextualFile(const ContextualFile &) = default ;
    ContextualFile(ContextualFile &&) = default ;
    ContextualFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualFile() = default ;
    ContextualFile& operator=(const ContextualFile &) = default ;
    ContextualFile& operator=(ContextualFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->datasetName_ == nullptr && return this->elements_ == nullptr && return this->mediaType_ == nullptr && return this->OSSURI_ == nullptr && return this->objectId_ == nullptr
        && return this->ownerId_ == nullptr && return this->projectName_ == nullptr && return this->URI_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ContextualFile& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ContextualFile& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Element> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Element>) };
    inline vector<Element> elements() { DARABONBA_PTR_GET(elements_, vector<Element>) };
    inline ContextualFile& setElements(const vector<Element> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline ContextualFile& setElements(vector<Element> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ContextualFile& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // OSSURI Field Functions 
    bool hasOSSURI() const { return this->OSSURI_ != nullptr;};
    void deleteOSSURI() { this->OSSURI_ = nullptr;};
    inline string OSSURI() const { DARABONBA_PTR_GET_DEFAULT(OSSURI_, "") };
    inline ContextualFile& setOSSURI(string OSSURI) { DARABONBA_PTR_SET_VALUE(OSSURI_, OSSURI) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ContextualFile& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ContextualFile& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualFile& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline ContextualFile& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<vector<Element>> elements_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> OSSURI_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
