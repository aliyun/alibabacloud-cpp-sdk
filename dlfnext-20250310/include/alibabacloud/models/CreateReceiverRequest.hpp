// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECEIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECEIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CreateReceiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReceiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(receiverName, receiverName_);
      DARABONBA_PTR_TO_JSON(receiverTenantId, receiverTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReceiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(receiverName, receiverName_);
      DARABONBA_PTR_FROM_JSON(receiverTenantId, receiverTenantId_);
    };
    CreateReceiverRequest() = default ;
    CreateReceiverRequest(const CreateReceiverRequest &) = default ;
    CreateReceiverRequest(CreateReceiverRequest &&) = default ;
    CreateReceiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReceiverRequest() = default ;
    CreateReceiverRequest& operator=(const CreateReceiverRequest &) = default ;
    CreateReceiverRequest& operator=(CreateReceiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->receiverName_ == nullptr && this->receiverTenantId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateReceiverRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // receiverName Field Functions 
    bool hasReceiverName() const { return this->receiverName_ != nullptr;};
    void deleteReceiverName() { this->receiverName_ = nullptr;};
    inline string getReceiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
    inline CreateReceiverRequest& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


    // receiverTenantId Field Functions 
    bool hasReceiverTenantId() const { return this->receiverTenantId_ != nullptr;};
    void deleteReceiverTenantId() { this->receiverTenantId_ = nullptr;};
    inline int64_t getReceiverTenantId() const { DARABONBA_PTR_GET_DEFAULT(receiverTenantId_, 0L) };
    inline CreateReceiverRequest& setReceiverTenantId(int64_t receiverTenantId) { DARABONBA_PTR_SET_VALUE(receiverTenantId_, receiverTenantId) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<string> receiverName_ {};
    shared_ptr<int64_t> receiverTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
