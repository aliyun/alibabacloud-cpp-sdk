// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateUploadAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Purpose, purpose_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Purpose, purpose_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GenerateUploadAuthRequest() = default ;
    GenerateUploadAuthRequest(const GenerateUploadAuthRequest &) = default ;
    GenerateUploadAuthRequest(GenerateUploadAuthRequest &&) = default ;
    GenerateUploadAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadAuthRequest() = default ;
    GenerateUploadAuthRequest& operator=(const GenerateUploadAuthRequest &) = default ;
    GenerateUploadAuthRequest& operator=(GenerateUploadAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->purpose_ == nullptr && return this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateUploadAuthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string purpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline GenerateUploadAuthRequest& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GenerateUploadAuthRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 文件用途
    std::shared_ptr<string> purpose_ = nullptr;
    // 文件类型，目前只支持image,最大1M
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
