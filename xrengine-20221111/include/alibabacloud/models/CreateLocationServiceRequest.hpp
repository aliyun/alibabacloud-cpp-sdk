// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCATIONSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCATIONSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class CreateLocationServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocationServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocationServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
    };
    CreateLocationServiceRequest() = default ;
    CreateLocationServiceRequest(const CreateLocationServiceRequest &) = default ;
    CreateLocationServiceRequest(CreateLocationServiceRequest &&) = default ;
    CreateLocationServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocationServiceRequest() = default ;
    CreateLocationServiceRequest& operator=(const CreateLocationServiceRequest &) = default ;
    CreateLocationServiceRequest& operator=(CreateLocationServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->imageId_ == nullptr && this->jwtToken_ == nullptr && this->name_ == nullptr && this->note_ == nullptr && this->qps_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateLocationServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline int64_t getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, 0L) };
    inline CreateLocationServiceRequest& setImageId(int64_t imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline CreateLocationServiceRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLocationServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CreateLocationServiceRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline CreateLocationServiceRequest& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


  protected:
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<int64_t> imageId_ {};
    shared_ptr<string> jwtToken_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> note_ {};
    shared_ptr<int64_t> qps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
