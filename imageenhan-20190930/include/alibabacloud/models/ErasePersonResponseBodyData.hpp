// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEPERSONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ERASEPERSONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ErasePersonResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ErasePersonResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ErasePersonResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    ErasePersonResponseBodyData() = default ;
    ErasePersonResponseBodyData(const ErasePersonResponseBodyData &) = default ;
    ErasePersonResponseBodyData(ErasePersonResponseBodyData &&) = default ;
    ErasePersonResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ErasePersonResponseBodyData() = default ;
    ErasePersonResponseBodyData& operator=(const ErasePersonResponseBodyData &) = default ;
    ErasePersonResponseBodyData& operator=(ErasePersonResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUrl_ != nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ErasePersonResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
