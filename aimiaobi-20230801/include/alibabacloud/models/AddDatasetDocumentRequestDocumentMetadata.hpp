// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUESTDOCUMENTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUESTDOCUMENTMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDatasetDocumentRequestDocumentMetadataAsrSentences.hpp>
#include <alibabacloud/models/AddDatasetDocumentRequestDocumentMetadataVideoShots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddDatasetDocumentRequestDocumentMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDocumentRequestDocumentMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(AsrSentences, asrSentences_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(VideoShots, videoShots_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDocumentRequestDocumentMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrSentences, asrSentences_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(VideoShots, videoShots_);
    };
    AddDatasetDocumentRequestDocumentMetadata() = default ;
    AddDatasetDocumentRequestDocumentMetadata(const AddDatasetDocumentRequestDocumentMetadata &) = default ;
    AddDatasetDocumentRequestDocumentMetadata(AddDatasetDocumentRequestDocumentMetadata &&) = default ;
    AddDatasetDocumentRequestDocumentMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDocumentRequestDocumentMetadata() = default ;
    AddDatasetDocumentRequestDocumentMetadata& operator=(const AddDatasetDocumentRequestDocumentMetadata &) = default ;
    AddDatasetDocumentRequestDocumentMetadata& operator=(AddDatasetDocumentRequestDocumentMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrSentences_ == nullptr
        && return this->text_ == nullptr && return this->videoShots_ == nullptr; };
    // asrSentences Field Functions 
    bool hasAsrSentences() const { return this->asrSentences_ != nullptr;};
    void deleteAsrSentences() { this->asrSentences_ = nullptr;};
    inline const vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences> & asrSentences() const { DARABONBA_PTR_GET_CONST(asrSentences_, vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences>) };
    inline vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences> asrSentences() { DARABONBA_PTR_GET(asrSentences_, vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences>) };
    inline AddDatasetDocumentRequestDocumentMetadata& setAsrSentences(const vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences> & asrSentences) { DARABONBA_PTR_SET_VALUE(asrSentences_, asrSentences) };
    inline AddDatasetDocumentRequestDocumentMetadata& setAsrSentences(vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences> && asrSentences) { DARABONBA_PTR_SET_RVALUE(asrSentences_, asrSentences) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AddDatasetDocumentRequestDocumentMetadata& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // videoShots Field Functions 
    bool hasVideoShots() const { return this->videoShots_ != nullptr;};
    void deleteVideoShots() { this->videoShots_ = nullptr;};
    inline const vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots> & videoShots() const { DARABONBA_PTR_GET_CONST(videoShots_, vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots>) };
    inline vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots> videoShots() { DARABONBA_PTR_GET(videoShots_, vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots>) };
    inline AddDatasetDocumentRequestDocumentMetadata& setVideoShots(const vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots> & videoShots) { DARABONBA_PTR_SET_VALUE(videoShots_, videoShots) };
    inline AddDatasetDocumentRequestDocumentMetadata& setVideoShots(vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots> && videoShots) { DARABONBA_PTR_SET_RVALUE(videoShots_, videoShots) };


  protected:
    std::shared_ptr<vector<Models::AddDatasetDocumentRequestDocumentMetadataAsrSentences>> asrSentences_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<vector<Models::AddDatasetDocumentRequestDocumentMetadataVideoShots>> videoShots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
