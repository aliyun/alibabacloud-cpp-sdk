// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LEAVEPICTURELIST_HPP_
#define ALIBABACLOUD_MODELS_LEAVEPICTURELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LeavePictureList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LeavePictureList& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(picture, picture_);
    };
    friend void from_json(const Darabonba::Json& j, LeavePictureList& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(picture, picture_);
    };
    LeavePictureList() = default ;
    LeavePictureList(const LeavePictureList &) = default ;
    LeavePictureList(LeavePictureList &&) = default ;
    LeavePictureList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LeavePictureList() = default ;
    LeavePictureList& operator=(const LeavePictureList &) = default ;
    LeavePictureList& operator=(LeavePictureList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && this->picture_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline LeavePictureList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // picture Field Functions 
    bool hasPicture() const { return this->picture_ != nullptr;};
    void deletePicture() { this->picture_ = nullptr;};
    inline string getPicture() const { DARABONBA_PTR_GET_DEFAULT(picture_, "") };
    inline LeavePictureList& setPicture(string picture) { DARABONBA_PTR_SET_VALUE(picture_, picture) };


  protected:
    shared_ptr<string> desc_ {};
    shared_ptr<string> picture_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
