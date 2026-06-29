// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHASSIGNSEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHASSIGNSEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class BatchAssignSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAssignSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(SeatType, seatType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAssignSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(SeatType, seatType_);
    };
    BatchAssignSeatsRequest() = default ;
    BatchAssignSeatsRequest(const BatchAssignSeatsRequest &) = default ;
    BatchAssignSeatsRequest(BatchAssignSeatsRequest &&) = default ;
    BatchAssignSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAssignSeatsRequest() = default ;
    BatchAssignSeatsRequest& operator=(const BatchAssignSeatsRequest &) = default ;
    BatchAssignSeatsRequest& operator=(BatchAssignSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->locale_ == nullptr && this->seatType_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline BatchAssignSeatsRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline BatchAssignSeatsRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline BatchAssignSeatsRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline BatchAssignSeatsRequest& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


  protected:
    // The list of target member IDs.
    shared_ptr<vector<string>> accountIds_ {};
    // The language. Valid values: zh-CN and en-US.
    shared_ptr<string> locale_ {};
    // The seat type. Valid values:
    // - standard: standard seat
    // - pro: pro seat
    // - max: premium seat
    // 
    // This parameter is required.
    shared_ptr<string> seatType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
