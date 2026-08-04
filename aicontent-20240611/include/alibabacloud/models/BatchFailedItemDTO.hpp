// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFAILEDITEMDTO_HPP_
#define ALIBABACLOUD_MODELS_BATCHFAILEDITEMDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BatchFailedItemDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFailedItemDTO& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFailedItemDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    BatchFailedItemDTO() = default ;
    BatchFailedItemDTO(const BatchFailedItemDTO &) = default ;
    BatchFailedItemDTO(BatchFailedItemDTO &&) = default ;
    BatchFailedItemDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFailedItemDTO() = default ;
    BatchFailedItemDTO& operator=(const BatchFailedItemDTO &) = default ;
    BatchFailedItemDTO& operator=(BatchFailedItemDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr
        && this->userId_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline BatchFailedItemDTO& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline BatchFailedItemDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> reason_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
