// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPICTURESEARCHAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPICTURESEARCHAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UpdatePictureSearchAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePictureSearchAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePictureSearchAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdatePictureSearchAppRequest() = default ;
    UpdatePictureSearchAppRequest(const UpdatePictureSearchAppRequest &) = default ;
    UpdatePictureSearchAppRequest(UpdatePictureSearchAppRequest &&) = default ;
    UpdatePictureSearchAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePictureSearchAppRequest() = default ;
    UpdatePictureSearchAppRequest& operator=(const UpdatePictureSearchAppRequest &) = default ;
    UpdatePictureSearchAppRequest& operator=(UpdatePictureSearchAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline UpdatePictureSearchAppRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePictureSearchAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePictureSearchAppRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](206608) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The description of the image search application instance.
    // 
    // The description can contain Chinese characters, uppercase and lowercase letters, digits, underscores (_), and hyphens (-). It can be up to 1,024 characters in length, and each Chinese character counts as two characters.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The name of the image search application instance. 
    // 
    // The name can contain Chinese characters, uppercase and lowercase letters, digits, underscores (_), and hyphens (-). It can be up to 64 characters in length, and each Chinese character counts as two characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
