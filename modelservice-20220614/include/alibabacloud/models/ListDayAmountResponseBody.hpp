// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAYAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDAYAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class ListDayAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDayAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DayAmounts, dayAmounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDayAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DayAmounts, dayAmounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDayAmountResponseBody() = default ;
    ListDayAmountResponseBody(const ListDayAmountResponseBody &) = default ;
    ListDayAmountResponseBody(ListDayAmountResponseBody &&) = default ;
    ListDayAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDayAmountResponseBody() = default ;
    ListDayAmountResponseBody& operator=(const ListDayAmountResponseBody &) = default ;
    ListDayAmountResponseBody& operator=(ListDayAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DayAmounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DayAmounts& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Date, date_);
      };
      friend void from_json(const Darabonba::Json& j, DayAmounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
      };
      DayAmounts() = default ;
      DayAmounts(const DayAmounts &) = default ;
      DayAmounts(DayAmounts &&) = default ;
      DayAmounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DayAmounts() = default ;
      DayAmounts& operator=(const DayAmounts &) = default ;
      DayAmounts& operator=(DayAmounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->date_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
      inline DayAmounts& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline DayAmounts& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    protected:
      shared_ptr<int32_t> amount_ {};
      shared_ptr<string> date_ {};
    };

    virtual bool empty() const override { return this->dayAmounts_ == nullptr
        && this->requestId_ == nullptr; };
    // dayAmounts Field Functions 
    bool hasDayAmounts() const { return this->dayAmounts_ != nullptr;};
    void deleteDayAmounts() { this->dayAmounts_ = nullptr;};
    inline const vector<ListDayAmountResponseBody::DayAmounts> & getDayAmounts() const { DARABONBA_PTR_GET_CONST(dayAmounts_, vector<ListDayAmountResponseBody::DayAmounts>) };
    inline vector<ListDayAmountResponseBody::DayAmounts> getDayAmounts() { DARABONBA_PTR_GET(dayAmounts_, vector<ListDayAmountResponseBody::DayAmounts>) };
    inline ListDayAmountResponseBody& setDayAmounts(const vector<ListDayAmountResponseBody::DayAmounts> & dayAmounts) { DARABONBA_PTR_SET_VALUE(dayAmounts_, dayAmounts) };
    inline ListDayAmountResponseBody& setDayAmounts(vector<ListDayAmountResponseBody::DayAmounts> && dayAmounts) { DARABONBA_PTR_SET_RVALUE(dayAmounts_, dayAmounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDayAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDayAmountResponseBody::DayAmounts>> dayAmounts_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
