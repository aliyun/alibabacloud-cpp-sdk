// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICTURESEARCHAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICTURESEARCHAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreatePictureSearchAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePictureSearchAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePictureSearchAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePictureSearchAppRequest() = default ;
    CreatePictureSearchAppRequest(const CreatePictureSearchAppRequest &) = default ;
    CreatePictureSearchAppRequest(CreatePictureSearchAppRequest &&) = default ;
    CreatePictureSearchAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePictureSearchAppRequest() = default ;
    CreatePictureSearchAppRequest& operator=(const CreatePictureSearchAppRequest &) = default ;
    CreatePictureSearchAppRequest& operator=(CreatePictureSearchAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && this->iotInstanceId_ == nullptr && this->name_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreatePictureSearchAppRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CreatePictureSearchAppRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePictureSearchAppRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the image search application instance.
    // 
    // The description can contain Chinese characters, uppercase and lowercase English letters, digits, underscores (_), and hyphens (-). It can be up to 1,024 characters in length, and each Chinese character counts as two characters.
    // 
    // This parameter is required.
    shared_ptr<string> desc_ {};
    // The instance ID.
    // 
    // You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If the instance has an ID, you must specify this ID. Otherwise, the call fails.
    // 
    // > If the public instance does not have an ID, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    shared_ptr<string> iotInstanceId_ {};
    // The name of the image search application instance. 
    // 
    // The name can contain Chinese characters, uppercase and lowercase English letters, digits, underscores (_), and hyphens (-). It can be up to 64 characters in length, and each Chinese character counts as two characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
