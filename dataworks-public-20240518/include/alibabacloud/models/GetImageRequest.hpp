// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
    };
    GetImageRequest() = default ;
    GetImageRequest(const GetImageRequest &) = default ;
    GetImageRequest(GetImageRequest &&) = default ;
    GetImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageRequest() = default ;
    GetImageRequest& operator=(const GetImageRequest &) = default ;
    GetImageRequest& operator=(GetImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->imageVersion_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetImageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline GetImageRequest& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<string> imageVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
