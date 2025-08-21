// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODYACCESSKEY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODYACCESSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAccessKeyResponseBodyAccessKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessKeyResponseBodyAccessKey& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessKeyResponseBodyAccessKey& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateAccessKeyResponseBodyAccessKey() = default ;
    CreateAccessKeyResponseBodyAccessKey(const CreateAccessKeyResponseBodyAccessKey &) = default ;
    CreateAccessKeyResponseBodyAccessKey(CreateAccessKeyResponseBodyAccessKey &&) = default ;
    CreateAccessKeyResponseBodyAccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessKeyResponseBodyAccessKey() = default ;
    CreateAccessKeyResponseBodyAccessKey& operator=(const CreateAccessKeyResponseBodyAccessKey &) = default ;
    CreateAccessKeyResponseBodyAccessKey& operator=(CreateAccessKeyResponseBodyAccessKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->createDate_ != nullptr && this->status_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline CreateAccessKeyResponseBodyAccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline CreateAccessKeyResponseBodyAccessKey& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreateAccessKeyResponseBodyAccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAccessKeyResponseBodyAccessKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The AccessKey secret.
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    // The time when the AccessKey pair was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The status of the AccessKey pair. Valid values:
    // 
    // *   Active
    // *   Inactive
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
