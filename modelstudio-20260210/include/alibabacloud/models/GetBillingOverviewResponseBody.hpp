// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWRESPONSEBODY_HPP_
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
  class GetBillingOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetBillingOverviewResponseBody() = default ;
    GetBillingOverviewResponseBody(const GetBillingOverviewResponseBody &) = default ;
    GetBillingOverviewResponseBody(GetBillingOverviewResponseBody &&) = default ;
    GetBillingOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingOverviewResponseBody() = default ;
    GetBillingOverviewResponseBody& operator=(const GetBillingOverviewResponseBody &) = default ;
    GetBillingOverviewResponseBody& operator=(GetBillingOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currency, currency_);
        DARABONBA_PTR_TO_JSON(groups, groups_);
        DARABONBA_PTR_TO_JSON(pretaxAmount, pretaxAmount_);
        DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
        DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currency, currency_);
        DARABONBA_PTR_FROM_JSON(groups, groups_);
        DARABONBA_PTR_FROM_JSON(pretaxAmount, pretaxAmount_);
        DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
        DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(articleCodes, articleCodes_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(percentage, percentage_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(articleCodes, articleCodes_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(percentage, percentage_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->articleCodes_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->percentage_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline Groups& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // articleCodes Field Functions 
        bool hasArticleCodes() const { return this->articleCodes_ != nullptr;};
        void deleteArticleCodes() { this->articleCodes_ = nullptr;};
        inline const vector<string> & getArticleCodes() const { DARABONBA_PTR_GET_CONST(articleCodes_, vector<string>) };
        inline vector<string> getArticleCodes() { DARABONBA_PTR_GET(articleCodes_, vector<string>) };
        inline Groups& setArticleCodes(const vector<string> & articleCodes) { DARABONBA_PTR_SET_VALUE(articleCodes_, articleCodes) };
        inline Groups& setArticleCodes(vector<string> && articleCodes) { DARABONBA_PTR_SET_RVALUE(articleCodes_, articleCodes) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Groups& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Groups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline string getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
        inline Groups& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      protected:
        // The amount of the current group.
        shared_ptr<string> amount_ {};
        // The list of commodity codes associated with the current group.
        shared_ptr<vector<string>> articleCodes_ {};
        // The grouping dimension value. A null value is returned as DIMENSION_FILTER_NULL_VALUE.
        shared_ptr<string> key_ {};
        // The display name of the group, which is affected by the locale parameter. A null value is displayed as -.
        shared_ptr<string> name_ {};
        // The ratio of the group amount to the total amount of the top N groups.
        shared_ptr<string> percentage_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->groups_ == nullptr && this->pretaxAmount_ == nullptr && this->taxAmount_ == nullptr && this->totalAmount_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<Data::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Data::Groups>) };
      inline vector<Data::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<Data::Groups>) };
      inline Data& setGroups(const vector<Data::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Data& setGroups(vector<Data::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // pretaxAmount Field Functions 
      bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
      void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
      inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
      inline Data& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


      // taxAmount Field Functions 
      bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
      void deleteTaxAmount() { this->taxAmount_ = nullptr;};
      inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
      inline Data& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
      inline Data& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    protected:
      // The currency of the amount.
      shared_ptr<string> currency_ {};
      // The top N groups sorted by amount in descending order.
      shared_ptr<vector<Data::Groups>> groups_ {};
      // The total pretax amount.
      shared_ptr<string> pretaxAmount_ {};
      // The total tax amount.
      shared_ptr<string> taxAmount_ {};
      // The total amount.
      shared_ptr<string> totalAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBillingOverviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBillingOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBillingOverviewResponseBody::Data) };
    inline GetBillingOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBillingOverviewResponseBody::Data) };
    inline GetBillingOverviewResponseBody& setData(const GetBillingOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBillingOverviewResponseBody& setData(GetBillingOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBillingOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBillingOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBillingOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request result code.
    shared_ptr<string> code_ {};
    // The bill overview data.
    shared_ptr<GetBillingOverviewResponseBody::Data> data_ {};
    // The request result message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
