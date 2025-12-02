// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGES2LIBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGES2LIBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddImages2LibResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImages2LibResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImgId, imgId_);
    };
    friend void from_json(const Darabonba::Json& j, AddImages2LibResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImgId, imgId_);
    };
    AddImages2LibResponseBodyData() = default ;
    AddImages2LibResponseBodyData(const AddImages2LibResponseBodyData &) = default ;
    AddImages2LibResponseBodyData(AddImages2LibResponseBodyData &&) = default ;
    AddImages2LibResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImages2LibResponseBodyData() = default ;
    AddImages2LibResponseBodyData& operator=(const AddImages2LibResponseBodyData &) = default ;
    AddImages2LibResponseBodyData& operator=(AddImages2LibResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imgId_ == nullptr; };
    // imgId Field Functions 
    bool hasImgId() const { return this->imgId_ != nullptr;};
    void deleteImgId() { this->imgId_ = nullptr;};
    inline string imgId() const { DARABONBA_PTR_GET_DEFAULT(imgId_, "") };
    inline AddImages2LibResponseBodyData& setImgId(string imgId) { DARABONBA_PTR_SET_VALUE(imgId_, imgId) };


  protected:
    // The id of the uploaded image.
    std::shared_ptr<string> imgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
