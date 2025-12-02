// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGELIBRESPONSEBODYLIBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGELIBRESPONSEBODYLIBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListImageLibResponseBodyLibList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageLibResponseBodyLibList& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FreeInspection, freeInspection_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageNum, imageNum_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageLibResponseBodyLibList& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FreeInspection, freeInspection_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageNum, imageNum_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    ListImageLibResponseBodyLibList() = default ;
    ListImageLibResponseBodyLibList(const ListImageLibResponseBodyLibList &) = default ;
    ListImageLibResponseBodyLibList(ListImageLibResponseBodyLibList &&) = default ;
    ListImageLibResponseBodyLibList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageLibResponseBodyLibList() = default ;
    ListImageLibResponseBodyLibList& operator=(const ListImageLibResponseBodyLibList &) = default ;
    ListImageLibResponseBodyLibList& operator=(ListImageLibResponseBodyLibList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->freeInspection_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->imageNum_ == nullptr && return this->libId_ == nullptr
        && return this->libName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListImageLibResponseBodyLibList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // freeInspection Field Functions 
    bool hasFreeInspection() const { return this->freeInspection_ != nullptr;};
    void deleteFreeInspection() { this->freeInspection_ = nullptr;};
    inline int32_t freeInspection() const { DARABONBA_PTR_GET_DEFAULT(freeInspection_, 0) };
    inline ListImageLibResponseBodyLibList& setFreeInspection(int32_t freeInspection) { DARABONBA_PTR_SET_VALUE(freeInspection_, freeInspection) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListImageLibResponseBodyLibList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListImageLibResponseBodyLibList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageNum Field Functions 
    bool hasImageNum() const { return this->imageNum_ != nullptr;};
    void deleteImageNum() { this->imageNum_ = nullptr;};
    inline int64_t imageNum() const { DARABONBA_PTR_GET_DEFAULT(imageNum_, 0L) };
    inline ListImageLibResponseBodyLibList& setImageNum(int64_t imageNum) { DARABONBA_PTR_SET_VALUE(imageNum_, imageNum) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListImageLibResponseBodyLibList& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ListImageLibResponseBodyLibList& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // Comment.
    std::shared_ptr<string> comment_ = nullptr;
    // Exempt from inspection configuration.
    std::shared_ptr<int32_t> freeInspection_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Number of images in the library.
    std::shared_ptr<int64_t> imageNum_ = nullptr;
    // Library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // Library name.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
