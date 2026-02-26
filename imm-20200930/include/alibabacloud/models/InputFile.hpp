// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_INPUTFILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
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
    class Figures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Figures& obj) { 
        DARABONBA_PTR_TO_JSON(FigureClusterId, figureClusterId_);
        DARABONBA_PTR_TO_JSON(FigureId, figureId_);
        DARABONBA_PTR_TO_JSON(FigureType, figureType_);
      };
      friend void from_json(const Darabonba::Json& j, Figures& obj) { 
        DARABONBA_PTR_FROM_JSON(FigureClusterId, figureClusterId_);
        DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
        DARABONBA_PTR_FROM_JSON(FigureType, figureType_);
      };
      Figures() = default ;
      Figures(const Figures &) = default ;
      Figures(Figures &&) = default ;
      Figures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Figures() = default ;
      Figures& operator=(const Figures &) = default ;
      Figures& operator=(Figures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->figureClusterId_ == nullptr
        && this->figureId_ == nullptr && this->figureType_ == nullptr; };
      // figureClusterId Field Functions 
      bool hasFigureClusterId() const { return this->figureClusterId_ != nullptr;};
      void deleteFigureClusterId() { this->figureClusterId_ = nullptr;};
      inline string getFigureClusterId() const { DARABONBA_PTR_GET_DEFAULT(figureClusterId_, "") };
      inline Figures& setFigureClusterId(string figureClusterId) { DARABONBA_PTR_SET_VALUE(figureClusterId_, figureClusterId) };


      // figureId Field Functions 
      bool hasFigureId() const { return this->figureId_ != nullptr;};
      void deleteFigureId() { this->figureId_ = nullptr;};
      inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
      inline Figures& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


      // figureType Field Functions 
      bool hasFigureType() const { return this->figureType_ != nullptr;};
      void deleteFigureType() { this->figureType_ = nullptr;};
      inline string getFigureType() const { DARABONBA_PTR_GET_DEFAULT(figureType_, "") };
      inline Figures& setFigureType(string figureType) { DARABONBA_PTR_SET_VALUE(figureType_, figureType) };


    protected:
      // The ID of the face cluster. The following IDs of special face clusters are reserved:
      // 
      // *   figure-cluster-id-independent: indicates that the face does not belong to any face cluster. The face may be added to a face cluster in subsequent face clustering tasks after new images are added to the dataset.
      // *   figure-cluster-id-unavailable: indicates that the face has not been included in a face clustering task since a new image was added to the dataset.
      shared_ptr<string> figureClusterId_ {};
      // The person ID.
      shared_ptr<string> figureId_ {};
      // The figure type. Set this parameter to `face`.
      shared_ptr<string> figureType_ {};
    };

    virtual bool empty() const override { return this->addresses_ == nullptr
        && this->album_ == nullptr && this->albumArtist_ == nullptr && this->artist_ == nullptr && this->composer_ == nullptr && this->contentType_ == nullptr
        && this->customId_ == nullptr && this->customLabels_ == nullptr && this->figures_ == nullptr && this->fileHash_ == nullptr && this->labels_ == nullptr
        && this->latLong_ == nullptr && this->mediaType_ == nullptr && this->OSSURI_ == nullptr && this->performer_ == nullptr && this->produceTime_ == nullptr
        && this->title_ == nullptr && this->URI_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline InputFile& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline InputFile& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline string getAlbum() const { DARABONBA_PTR_GET_DEFAULT(album_, "") };
    inline InputFile& setAlbum(string album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumArtist Field Functions 
    bool hasAlbumArtist() const { return this->albumArtist_ != nullptr;};
    void deleteAlbumArtist() { this->albumArtist_ = nullptr;};
    inline string getAlbumArtist() const { DARABONBA_PTR_GET_DEFAULT(albumArtist_, "") };
    inline InputFile& setAlbumArtist(string albumArtist) { DARABONBA_PTR_SET_VALUE(albumArtist_, albumArtist) };


    // artist Field Functions 
    bool hasArtist() const { return this->artist_ != nullptr;};
    void deleteArtist() { this->artist_ = nullptr;};
    inline string getArtist() const { DARABONBA_PTR_GET_DEFAULT(artist_, "") };
    inline InputFile& setArtist(string artist) { DARABONBA_PTR_SET_VALUE(artist_, artist) };


    // composer Field Functions 
    bool hasComposer() const { return this->composer_ != nullptr;};
    void deleteComposer() { this->composer_ = nullptr;};
    inline string getComposer() const { DARABONBA_PTR_GET_DEFAULT(composer_, "") };
    inline InputFile& setComposer(string composer) { DARABONBA_PTR_SET_VALUE(composer_, composer) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline InputFile& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline InputFile& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline InputFile& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline InputFile& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // figures Field Functions 
    bool hasFigures() const { return this->figures_ != nullptr;};
    void deleteFigures() { this->figures_ = nullptr;};
    inline const vector<InputFile::Figures> & getFigures() const { DARABONBA_PTR_GET_CONST(figures_, vector<InputFile::Figures>) };
    inline vector<InputFile::Figures> getFigures() { DARABONBA_PTR_GET(figures_, vector<InputFile::Figures>) };
    inline InputFile& setFigures(const vector<InputFile::Figures> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
    inline InputFile& setFigures(vector<InputFile::Figures> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline InputFile& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline InputFile& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline InputFile& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latLong Field Functions 
    bool hasLatLong() const { return this->latLong_ != nullptr;};
    void deleteLatLong() { this->latLong_ = nullptr;};
    inline string getLatLong() const { DARABONBA_PTR_GET_DEFAULT(latLong_, "") };
    inline InputFile& setLatLong(string latLong) { DARABONBA_PTR_SET_VALUE(latLong_, latLong) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline InputFile& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // OSSURI Field Functions 
    bool hasOSSURI() const { return this->OSSURI_ != nullptr;};
    void deleteOSSURI() { this->OSSURI_ = nullptr;};
    inline string getOSSURI() const { DARABONBA_PTR_GET_DEFAULT(OSSURI_, "") };
    inline InputFile& setOSSURI(string OSSURI) { DARABONBA_PTR_SET_VALUE(OSSURI_, OSSURI) };


    // performer Field Functions 
    bool hasPerformer() const { return this->performer_ != nullptr;};
    void deletePerformer() { this->performer_ = nullptr;};
    inline string getPerformer() const { DARABONBA_PTR_GET_DEFAULT(performer_, "") };
    inline InputFile& setPerformer(string performer) { DARABONBA_PTR_SET_VALUE(performer_, performer) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string getProduceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline InputFile& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline InputFile& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline InputFile& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The addresses.
    shared_ptr<vector<Address>> addresses_ {};
    // The album.
    shared_ptr<string> album_ {};
    // The album artist.
    shared_ptr<string> albumArtist_ {};
    // The artist.
    shared_ptr<string> artist_ {};
    // The composer.
    shared_ptr<string> composer_ {};
    // In most cases, you can leave this parameter empty. The Multipurpose Internet Mail Extensions (MIME) type of the file.
    shared_ptr<string> contentType_ {};
    // The custom ID of the file. This parameter is optional. When the metadata of the file is indexed into the dataset, the custom ID is stored as the data attribute. You can map the custom ID to other data in your business system. You can configure this parameter based on your business requirements. For example, you can associate a URI with an ID in your business system. We recommend that you set this parameter to a unique value.
    // 
    // This parameter supports prefix searches and sorting during queries. For more information, see [Supported fields and operators](https://help.aliyun.com/document_detail/252856.html).
    shared_ptr<string> customId_ {};
    // The custom labels of the file. This parameter is optional. The parameter stores custom key-value labels, which can be used to filter data. For more information, see [Supported fields and operators](https://help.aliyun.com/document_detail/252856.html).
    Darabonba::Json customLabels_ {};
    // This parameter is optional. The persons. This parameter is used to remove a face from a face group or modify a face group. For more information, see [Face clustering](https://help.aliyun.com/document_detail/477175.html).
    // 
    // >  This parameter takes effect only for the UpdateFileMeta or BatchUpdateFileMeta operation.
    shared_ptr<vector<InputFile::Figures>> figures_ {};
    // The file hash. In most cases, you can leave this parameter empty. This parameter is required only when the URI parameter specifies a file in Photo and Drive Service.
    shared_ptr<string> fileHash_ {};
    // The intelligent labels.
    shared_ptr<vector<Label>> labels_ {};
    // The GPS latitude and longitude information.
    shared_ptr<string> latLong_ {};
    // In most cases, you can leave this parameter empty. The media type of the file.
    // 
    // Enumerated values:
    // 
    // *   image
    // *   other
    // *   document
    // *   archive
    // *   video
    // *   audio
    shared_ptr<string> mediaType_ {};
    // The path of the OSS object. In most cases, you can leave this parameter empty. You can specify this parameter only if the URI parameter specifies a file in Photo and Drive Service.
    shared_ptr<string> OSSURI_ {};
    // The performer.
    shared_ptr<string> performer_ {};
    // The time when the image was taken.
    shared_ptr<string> produceTime_ {};
    // The file title.
    shared_ptr<string> title_ {};
    // The URI of the file for which you want to create or update an index in the request. This parameter is required. The URI can represent an object in Object Storage Service (OSS) or a file in Photo and Drive Service.
    // 
    // The OSS URI must be in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that is in the same region as the current project. `${Object}` specifies the full file path that contains the object name extension.
    // 
    // The URI of a file in Photo and Drive Service must be in the `pds://domains/${domain}/drives/${drive}/files/${file}/revisions/${revision}` format.
    // 
    // >  URIs that start with HTTP are not supported.
    shared_ptr<string> URI_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
