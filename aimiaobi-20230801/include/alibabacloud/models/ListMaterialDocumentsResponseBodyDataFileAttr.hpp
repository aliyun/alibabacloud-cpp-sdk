// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSRESPONSEBODYDATAFILEATTR_HPP_
#define ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSRESPONSEBODYDATAFILEATTR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListMaterialDocumentsResponseBodyDataFileAttr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaterialDocumentsResponseBodyDataFileAttr& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaterialDocumentsResponseBodyDataFileAttr& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListMaterialDocumentsResponseBodyDataFileAttr() = default ;
    ListMaterialDocumentsResponseBodyDataFileAttr(const ListMaterialDocumentsResponseBodyDataFileAttr &) = default ;
    ListMaterialDocumentsResponseBodyDataFileAttr(ListMaterialDocumentsResponseBodyDataFileAttr &&) = default ;
    ListMaterialDocumentsResponseBodyDataFileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaterialDocumentsResponseBodyDataFileAttr() = default ;
    ListMaterialDocumentsResponseBodyDataFileAttr& operator=(const ListMaterialDocumentsResponseBodyDataFileAttr &) = default ;
    ListMaterialDocumentsResponseBodyDataFileAttr& operator=(ListMaterialDocumentsResponseBodyDataFileAttr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->fileLength_ != nullptr && this->fileName_ != nullptr && this->height_ != nullptr && this->mimeType_ != nullptr && this->width_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileLength Field Functions 
    bool hasFileLength() const { return this->fileLength_ != nullptr;};
    void deleteFileLength() { this->fileLength_ = nullptr;};
    inline int64_t fileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, 0L) };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setFileLength(int64_t fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mimeType Field Functions 
    bool hasMimeType() const { return this->mimeType_ != nullptr;};
    void deleteMimeType() { this->mimeType_ = nullptr;};
    inline string mimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListMaterialDocumentsResponseBodyDataFileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<double> duration_ = nullptr;
    std::shared_ptr<int64_t> fileLength_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> mimeType_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
