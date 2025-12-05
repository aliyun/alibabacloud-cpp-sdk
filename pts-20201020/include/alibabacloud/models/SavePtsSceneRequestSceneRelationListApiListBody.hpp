// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENERELATIONLISTAPILISTBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENERELATIONLISTAPILISTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequestSceneRelationListApiListBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequestSceneRelationListApiListBody& obj) { 
      DARABONBA_PTR_TO_JSON(BodyValue, bodyValue_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequestSceneRelationListApiListBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyValue, bodyValue_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
    };
    SavePtsSceneRequestSceneRelationListApiListBody() = default ;
    SavePtsSceneRequestSceneRelationListApiListBody(const SavePtsSceneRequestSceneRelationListApiListBody &) = default ;
    SavePtsSceneRequestSceneRelationListApiListBody(SavePtsSceneRequestSceneRelationListApiListBody &&) = default ;
    SavePtsSceneRequestSceneRelationListApiListBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequestSceneRelationListApiListBody() = default ;
    SavePtsSceneRequestSceneRelationListApiListBody& operator=(const SavePtsSceneRequestSceneRelationListApiListBody &) = default ;
    SavePtsSceneRequestSceneRelationListApiListBody& operator=(SavePtsSceneRequestSceneRelationListApiListBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyValue_ == nullptr
        && return this->contentType_ == nullptr; };
    // bodyValue Field Functions 
    bool hasBodyValue() const { return this->bodyValue_ != nullptr;};
    void deleteBodyValue() { this->bodyValue_ = nullptr;};
    inline string bodyValue() const { DARABONBA_PTR_GET_DEFAULT(bodyValue_, "") };
    inline SavePtsSceneRequestSceneRelationListApiListBody& setBodyValue(string bodyValue) { DARABONBA_PTR_SET_VALUE(bodyValue_, bodyValue) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SavePtsSceneRequestSceneRelationListApiListBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    // The data in the body. For example, {"key1":"value2","key2":"value2"}.
    std::shared_ptr<string> bodyValue_ = nullptr;
    // The body type. Default: `application/x-www-form-urlencoded`.
    std::shared_ptr<string> contentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
