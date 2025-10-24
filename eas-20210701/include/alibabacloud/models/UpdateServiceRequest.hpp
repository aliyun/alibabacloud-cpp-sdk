// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberToUpdate, memberToUpdate_);
      DARABONBA_PTR_TO_JSON(UpdateType, updateType_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberToUpdate, memberToUpdate_);
      DARABONBA_PTR_FROM_JSON(UpdateType, updateType_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateServiceRequest() = default ;
    UpdateServiceRequest(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest(UpdateServiceRequest &&) = default ;
    UpdateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequest() = default ;
    UpdateServiceRequest& operator=(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest& operator=(UpdateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberToUpdate_ == nullptr
        && return this->updateType_ == nullptr && return this->body_ == nullptr; };
    // memberToUpdate Field Functions 
    bool hasMemberToUpdate() const { return this->memberToUpdate_ != nullptr;};
    void deleteMemberToUpdate() { this->memberToUpdate_ = nullptr;};
    inline string memberToUpdate() const { DARABONBA_PTR_GET_DEFAULT(memberToUpdate_, "") };
    inline UpdateServiceRequest& setMemberToUpdate(string memberToUpdate) { DARABONBA_PTR_SET_VALUE(memberToUpdate_, memberToUpdate) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string updateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline UpdateServiceRequest& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateServiceRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    std::shared_ptr<string> memberToUpdate_ = nullptr;
    // The type of the service update. Valid values: merge and replace. By default, merge is used if you do not specify this parameter.
    // 
    // *   merge: If the JSON string configured for the existing service is `{"a":"b"}` and the JSON string specified in the body parameter is `{"c":"d"}`, the JSON string is `{"a":"b","c":"d"}` after the service update.
    // *   replace: If the JSON string configured for the existing service is `{"a":"b"}` and the JSON string specified in the body parameter is `{"c":"d"}`, the JSON string is `{"c":"d"}` after the service update.
    std::shared_ptr<string> updateType_ = nullptr;
    // The request body. The body includes the request parameters that you want to update. For more information about the request parameters, see [CreateService](https://help.aliyun.com/document_detail/412086.html).
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
