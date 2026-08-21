// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYSCENICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYSCENICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketQueryScenicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryScenicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(ScenicId, scenicId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryScenicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(ScenicId, scenicId_);
    };
    TicketQueryScenicRequest() = default ;
    TicketQueryScenicRequest(const TicketQueryScenicRequest &) = default ;
    TicketQueryScenicRequest(TicketQueryScenicRequest &&) = default ;
    TicketQueryScenicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryScenicRequest() = default ;
    TicketQueryScenicRequest& operator=(const TicketQueryScenicRequest &) = default ;
    TicketQueryScenicRequest& operator=(TicketQueryScenicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->scenicId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketQueryScenicRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // scenicId Field Functions 
    bool hasScenicId() const { return this->scenicId_ != nullptr;};
    void deleteScenicId() { this->scenicId_ = nullptr;};
    inline int64_t getScenicId() const { DARABONBA_PTR_GET_DEFAULT(scenicId_, 0L) };
    inline TicketQueryScenicRequest& setScenicId(int64_t scenicId) { DARABONBA_PTR_SET_VALUE(scenicId_, scenicId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<int64_t> scenicId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
