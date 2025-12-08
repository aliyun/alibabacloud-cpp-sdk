// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTUREADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTUREADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
    };
    BodyPostureAdvanceRequest() = default ;
    BodyPostureAdvanceRequest(const BodyPostureAdvanceRequest &) = default ;
    BodyPostureAdvanceRequest(BodyPostureAdvanceRequest &&) = default ;
    BodyPostureAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureAdvanceRequest() = default ;
    BodyPostureAdvanceRequest& operator=(const BodyPostureAdvanceRequest &) = default ;
    BodyPostureAdvanceRequest& operator=(BodyPostureAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline BodyPostureAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
