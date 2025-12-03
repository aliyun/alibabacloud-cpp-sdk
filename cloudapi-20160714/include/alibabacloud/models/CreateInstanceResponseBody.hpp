// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagStatus, tagStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagStatus, tagStatus_);
    };
    CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody(CreateInstanceResponseBody &&) = default ;
    CreateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody& operator=(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody& operator=(CreateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->requestId_ == nullptr && return this->tagStatus_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagStatus Field Functions 
    bool hasTagStatus() const { return this->tagStatus_ != nullptr;};
    void deleteTagStatus() { this->tagStatus_ = nullptr;};
    inline bool tagStatus() const { DARABONBA_PTR_GET_DEFAULT(tagStatus_, false) };
    inline CreateInstanceResponseBody& setTagStatus(bool tagStatus) { DARABONBA_PTR_SET_VALUE(tagStatus_, tagStatus) };


  protected:
    // Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the tag exists. Valid values: **true** and **false**.
    std::shared_ptr<bool> tagStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
