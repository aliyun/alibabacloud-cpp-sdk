// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODYDATAFILEATTR_HPP_
#define ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODYDATAFILEATTR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListGeneratedContentsResponseBodyDataFileAttr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGeneratedContentsResponseBodyDataFileAttr& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(TmpUrl, tmpUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListGeneratedContentsResponseBodyDataFileAttr& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(TmpUrl, tmpUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListGeneratedContentsResponseBodyDataFileAttr() = default ;
    ListGeneratedContentsResponseBodyDataFileAttr(const ListGeneratedContentsResponseBodyDataFileAttr &) = default ;
    ListGeneratedContentsResponseBodyDataFileAttr(ListGeneratedContentsResponseBodyDataFileAttr &&) = default ;
    ListGeneratedContentsResponseBodyDataFileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGeneratedContentsResponseBodyDataFileAttr() = default ;
    ListGeneratedContentsResponseBodyDataFileAttr& operator=(const ListGeneratedContentsResponseBodyDataFileAttr &) = default ;
    ListGeneratedContentsResponseBodyDataFileAttr& operator=(ListGeneratedContentsResponseBodyDataFileAttr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->height_ == nullptr && return this->tmpUrl_ == nullptr && return this->width_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListGeneratedContentsResponseBodyDataFileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ListGeneratedContentsResponseBodyDataFileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // tmpUrl Field Functions 
    bool hasTmpUrl() const { return this->tmpUrl_ != nullptr;};
    void deleteTmpUrl() { this->tmpUrl_ = nullptr;};
    inline string tmpUrl() const { DARABONBA_PTR_GET_DEFAULT(tmpUrl_, "") };
    inline ListGeneratedContentsResponseBodyDataFileAttr& setTmpUrl(string tmpUrl) { DARABONBA_PTR_SET_VALUE(tmpUrl_, tmpUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListGeneratedContentsResponseBodyDataFileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> tmpUrl_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
