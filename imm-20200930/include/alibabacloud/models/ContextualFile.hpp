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
        && this->datasetName_ == nullptr && this->elements_ == nullptr && this->mediaType_ == nullptr && this->OSSURI_ == nullptr && this->objectId_ == nullptr
        && this->ownerId_ == nullptr && this->projectName_ == nullptr && this->URI_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ContextualFile& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ContextualFile& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Element> & getElements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Element>) };
    inline vector<Element> getElements() { DARABONBA_PTR_GET(elements_, vector<Element>) };
    inline ContextualFile& setElements(const vector<Element> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline ContextualFile& setElements(vector<Element> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ContextualFile& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // OSSURI Field Functions 
    bool hasOSSURI() const { return this->OSSURI_ != nullptr;};
    void deleteOSSURI() { this->OSSURI_ = nullptr;};
    inline string getOSSURI() const { DARABONBA_PTR_GET_DEFAULT(OSSURI_, "") };
    inline ContextualFile& setOSSURI(string OSSURI) { DARABONBA_PTR_SET_VALUE(OSSURI_, OSSURI) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ContextualFile& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ContextualFile& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ContextualFile& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline ContextualFile& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The Multipurpose Internet Mail Extensions (MIME) type of the file.
    shared_ptr<string> contentType_ {};
    // Name of the dataset
    shared_ptr<string> datasetName_ {};
    // Elements
    shared_ptr<vector<Element>> elements_ {};
    // Media type of the current file
    // 
    // Valid values:
    // 
    // *   image
    // *   other
    // *   document
    // *   archive
    // *   audio
    // *   video
    shared_ptr<string> mediaType_ {};
    // The URI of the OSS object. This parameter is available only if the value of the URI parameter is the URI of a file in Photo and Drive Service.
    shared_ptr<string> OSSURI_ {};
    // The identifier of the corresponding file that exists in the dataset.
    shared_ptr<string> objectId_ {};
    // User ID
    shared_ptr<string> ownerId_ {};
    // Name of the project
    shared_ptr<string> projectName_ {};
    // URI of the file. Specify the OSS URI in the oss://${bucketname}/${objectname} format, where ${bucketname} is the name of the bucket in the same region as the current project and ${objectname} is the path of the object. The URI of a file in Photo and Drive Service follows the pds://domains/${domain}/drives/${drive}/files/${file}/revisions/${revision} format.
    shared_ptr<string> URI_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
