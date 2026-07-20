// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECEIVER_HPP_
#define ALIBABACLOUD_MODELS_RECEIVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Receiver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Receiver& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(receiverName, receiverName_);
      DARABONBA_PTR_TO_JSON(receiverTenantId, receiverTenantId_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Receiver& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(receiverName, receiverName_);
      DARABONBA_PTR_FROM_JSON(receiverTenantId, receiverTenantId_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Receiver() = default ;
    Receiver(const Receiver &) = default ;
    Receiver(Receiver &&) = default ;
    Receiver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Receiver() = default ;
    Receiver& operator=(const Receiver &) = default ;
    Receiver& operator=(Receiver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->receiverName_ == nullptr && this->receiverTenantId_ == nullptr && this->updatedAt_ == nullptr
        && this->updatedBy_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Receiver& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Receiver& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Receiver& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // receiverName Field Functions 
    bool hasReceiverName() const { return this->receiverName_ != nullptr;};
    void deleteReceiverName() { this->receiverName_ = nullptr;};
    inline string getReceiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
    inline Receiver& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


    // receiverTenantId Field Functions 
    bool hasReceiverTenantId() const { return this->receiverTenantId_ != nullptr;};
    void deleteReceiverTenantId() { this->receiverTenantId_ = nullptr;};
    inline int64_t getReceiverTenantId() const { DARABONBA_PTR_GET_DEFAULT(receiverTenantId_, 0L) };
    inline Receiver& setReceiverTenantId(int64_t receiverTenantId) { DARABONBA_PTR_SET_VALUE(receiverTenantId_, receiverTenantId) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Receiver& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Receiver& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> createdBy_ {};
    shared_ptr<string> receiverName_ {};
    shared_ptr<int64_t> receiverTenantId_ {};
    shared_ptr<int64_t> updatedAt_ {};
    shared_ptr<string> updatedBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
