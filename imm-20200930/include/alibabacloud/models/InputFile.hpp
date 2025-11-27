// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_INPUTFILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
#include <alibabacloud/models/InputFileFigures.hpp>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class InputFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(Album, album_);
      DARABONBA_PTR_TO_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_TO_JSON(Artist, artist_);
      DARABONBA_PTR_TO_JSON(Composer, composer_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(Figures, figures_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatLong, latLong_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OSSURI, OSSURI_);
      DARABONBA_PTR_TO_JSON(Performer, performer_);
      DARABONBA_PTR_TO_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(Album, album_);
      DARABONBA_PTR_FROM_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_FROM_JSON(Artist, artist_);
      DARABONBA_PTR_FROM_JSON(Composer, composer_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(Figures, figures_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatLong, latLong_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OSSURI, OSSURI_);
      DARABONBA_PTR_FROM_JSON(Performer, performer_);
      DARABONBA_PTR_FROM_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    InputFile() = default ;
    InputFile(const InputFile &) = default ;
    InputFile(InputFile &&) = default ;
    InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputFile() = default ;
    InputFile& operator=(const InputFile &) = default ;
    InputFile& operator=(InputFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->album_ == nullptr && return this->albumArtist_ == nullptr && return this->artist_ == nullptr && return this->composer_ == nullptr && return this->contentType_ == nullptr
        && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->figures_ == nullptr && return this->fileHash_ == nullptr && return this->labels_ == nullptr
        && return this->latLong_ == nullptr && return this->mediaType_ == nullptr && return this->OSSURI_ == nullptr && return this->performer_ == nullptr && return this->produceTime_ == nullptr
        && return this->title_ == nullptr && return this->URI_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> addresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline InputFile& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline InputFile& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline string album() const { DARABONBA_PTR_GET_DEFAULT(album_, "") };
    inline InputFile& setAlbum(string album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumArtist Field Functions 
    bool hasAlbumArtist() const { return this->albumArtist_ != nullptr;};
    void deleteAlbumArtist() { this->albumArtist_ = nullptr;};
    inline string albumArtist() const { DARABONBA_PTR_GET_DEFAULT(albumArtist_, "") };
    inline InputFile& setAlbumArtist(string albumArtist) { DARABONBA_PTR_SET_VALUE(albumArtist_, albumArtist) };


    // artist Field Functions 
    bool hasArtist() const { return this->artist_ != nullptr;};
    void deleteArtist() { this->artist_ = nullptr;};
    inline string artist() const { DARABONBA_PTR_GET_DEFAULT(artist_, "") };
    inline InputFile& setArtist(string artist) { DARABONBA_PTR_SET_VALUE(artist_, artist) };


    // composer Field Functions 
    bool hasComposer() const { return this->composer_ != nullptr;};
    void deleteComposer() { this->composer_ = nullptr;};
    inline string composer() const { DARABONBA_PTR_GET_DEFAULT(composer_, "") };
    inline InputFile& setComposer(string composer) { DARABONBA_PTR_SET_VALUE(composer_, composer) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline InputFile& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline InputFile& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline InputFile& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline InputFile& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // figures Field Functions 
    bool hasFigures() const { return this->figures_ != nullptr;};
    void deleteFigures() { this->figures_ = nullptr;};
    inline const vector<InputFileFigures> & figures() const { DARABONBA_PTR_GET_CONST(figures_, vector<InputFileFigures>) };
    inline vector<InputFileFigures> figures() { DARABONBA_PTR_GET(figures_, vector<InputFileFigures>) };
    inline InputFile& setFigures(const vector<InputFileFigures> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
    inline InputFile& setFigures(vector<InputFileFigures> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline InputFile& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline InputFile& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline InputFile& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latLong Field Functions 
    bool hasLatLong() const { return this->latLong_ != nullptr;};
    void deleteLatLong() { this->latLong_ = nullptr;};
    inline string latLong() const { DARABONBA_PTR_GET_DEFAULT(latLong_, "") };
    inline InputFile& setLatLong(string latLong) { DARABONBA_PTR_SET_VALUE(latLong_, latLong) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline InputFile& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // OSSURI Field Functions 
    bool hasOSSURI() const { return this->OSSURI_ != nullptr;};
    void deleteOSSURI() { this->OSSURI_ = nullptr;};
    inline string OSSURI() const { DARABONBA_PTR_GET_DEFAULT(OSSURI_, "") };
    inline InputFile& setOSSURI(string OSSURI) { DARABONBA_PTR_SET_VALUE(OSSURI_, OSSURI) };


    // performer Field Functions 
    bool hasPerformer() const { return this->performer_ != nullptr;};
    void deletePerformer() { this->performer_ = nullptr;};
    inline string performer() const { DARABONBA_PTR_GET_DEFAULT(performer_, "") };
    inline InputFile& setPerformer(string performer) { DARABONBA_PTR_SET_VALUE(performer_, performer) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string produceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline InputFile& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline InputFile& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline InputFile& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    std::shared_ptr<vector<Address>> addresses_ = nullptr;
    std::shared_ptr<string> album_ = nullptr;
    std::shared_ptr<string> albumArtist_ = nullptr;
    std::shared_ptr<string> artist_ = nullptr;
    std::shared_ptr<string> composer_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<vector<InputFileFigures>> figures_ = nullptr;
    std::shared_ptr<string> fileHash_ = nullptr;
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    std::shared_ptr<string> latLong_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> OSSURI_ = nullptr;
    std::shared_ptr<string> performer_ = nullptr;
    std::shared_ptr<string> produceTime_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
