// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELFILEPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_MODELFILEPREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelFilePreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelFilePreview& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(hash, hash_);
      DARABONBA_PTR_TO_JSON(isCompressedImage, isCompressedImage_);
      DARABONBA_PTR_TO_JSON(isDir, isDir_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(unpreviewable, unpreviewable_);
    };
    friend void from_json(const Darabonba::Json& j, ModelFilePreview& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(hash, hash_);
      DARABONBA_PTR_FROM_JSON(isCompressedImage, isCompressedImage_);
      DARABONBA_PTR_FROM_JSON(isDir, isDir_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(unpreviewable, unpreviewable_);
    };
    ModelFilePreview() = default ;
    ModelFilePreview(const ModelFilePreview &) = default ;
    ModelFilePreview(ModelFilePreview &&) = default ;
    ModelFilePreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelFilePreview() = default ;
    ModelFilePreview& operator=(const ModelFilePreview &) = default ;
    ModelFilePreview& operator=(ModelFilePreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->hash_ != nullptr && this->isCompressedImage_ != nullptr && this->isDir_ != nullptr && this->name_ != nullptr && this->path_ != nullptr
        && this->size_ != nullptr && this->unpreviewable_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModelFilePreview& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string hash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline ModelFilePreview& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // isCompressedImage Field Functions 
    bool hasIsCompressedImage() const { return this->isCompressedImage_ != nullptr;};
    void deleteIsCompressedImage() { this->isCompressedImage_ = nullptr;};
    inline bool isCompressedImage() const { DARABONBA_PTR_GET_DEFAULT(isCompressedImage_, false) };
    inline ModelFilePreview& setIsCompressedImage(bool isCompressedImage) { DARABONBA_PTR_SET_VALUE(isCompressedImage_, isCompressedImage) };


    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline bool isDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
    inline ModelFilePreview& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelFilePreview& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModelFilePreview& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ModelFilePreview& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // unpreviewable Field Functions 
    bool hasUnpreviewable() const { return this->unpreviewable_ != nullptr;};
    void deleteUnpreviewable() { this->unpreviewable_ = nullptr;};
    inline bool unpreviewable() const { DARABONBA_PTR_GET_DEFAULT(unpreviewable_, false) };
    inline ModelFilePreview& setUnpreviewable(bool unpreviewable) { DARABONBA_PTR_SET_VALUE(unpreviewable_, unpreviewable) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> hash_ = nullptr;
    std::shared_ptr<bool> isCompressedImage_ = nullptr;
    std::shared_ptr<bool> isDir_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<bool> unpreviewable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
