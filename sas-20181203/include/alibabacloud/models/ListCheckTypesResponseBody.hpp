// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCheckTypesResponseBody() = default ;
    ListCheckTypesResponseBody(const ListCheckTypesResponseBody &) = default ;
    ListCheckTypesResponseBody(ListCheckTypesResponseBody &&) = default ;
    ListCheckTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckTypesResponseBody() = default ;
    ListCheckTypesResponseBody& operator=(const ListCheckTypesResponseBody &) = default ;
    ListCheckTypesResponseBody& operator=(ListCheckTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(CheckTypeDisName, checkTypeDisName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(CheckTypeDisName, checkTypeDisName_);
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
      class CheckDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckDetails& obj) { 
          DARABONBA_PTR_TO_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
          DARABONBA_PTR_TO_JSON(AffiliatedRisks, affiliatedRisks_);
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
        };
        friend void from_json(const Darabonba::Json& j, CheckDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
          DARABONBA_PTR_FROM_JSON(AffiliatedRisks, affiliatedRisks_);
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
        };
        CheckDetails() = default ;
        CheckDetails(const CheckDetails &) = default ;
        CheckDetails(CheckDetails &&) = default ;
        CheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckDetails() = default ;
        CheckDetails& operator=(const CheckDetails &) = default ;
        CheckDetails& operator=(CheckDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->affiliatedRiskTypes_ == nullptr
        && this->affiliatedRisks_ == nullptr && this->checkId_ == nullptr && this->checkItem_ == nullptr; };
        // affiliatedRiskTypes Field Functions 
        bool hasAffiliatedRiskTypes() const { return this->affiliatedRiskTypes_ != nullptr;};
        void deleteAffiliatedRiskTypes() { this->affiliatedRiskTypes_ = nullptr;};
        inline const vector<string> & getAffiliatedRiskTypes() const { DARABONBA_PTR_GET_CONST(affiliatedRiskTypes_, vector<string>) };
        inline vector<string> getAffiliatedRiskTypes() { DARABONBA_PTR_GET(affiliatedRiskTypes_, vector<string>) };
        inline CheckDetails& setAffiliatedRiskTypes(const vector<string> & affiliatedRiskTypes) { DARABONBA_PTR_SET_VALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };
        inline CheckDetails& setAffiliatedRiskTypes(vector<string> && affiliatedRiskTypes) { DARABONBA_PTR_SET_RVALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };


        // affiliatedRisks Field Functions 
        bool hasAffiliatedRisks() const { return this->affiliatedRisks_ != nullptr;};
        void deleteAffiliatedRisks() { this->affiliatedRisks_ = nullptr;};
        inline const vector<string> & getAffiliatedRisks() const { DARABONBA_PTR_GET_CONST(affiliatedRisks_, vector<string>) };
        inline vector<string> getAffiliatedRisks() { DARABONBA_PTR_GET(affiliatedRisks_, vector<string>) };
        inline CheckDetails& setAffiliatedRisks(const vector<string> & affiliatedRisks) { DARABONBA_PTR_SET_VALUE(affiliatedRisks_, affiliatedRisks) };
        inline CheckDetails& setAffiliatedRisks(vector<string> && affiliatedRisks) { DARABONBA_PTR_SET_RVALUE(affiliatedRisks_, affiliatedRisks) };


        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
        inline CheckDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // checkItem Field Functions 
        bool hasCheckItem() const { return this->checkItem_ != nullptr;};
        void deleteCheckItem() { this->checkItem_ = nullptr;};
        inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
        inline CheckDetails& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


      protected:
        // The list of the baseline categories of attribution.
        shared_ptr<vector<string>> affiliatedRiskTypes_ {};
        // The list of baselines attribution.
        shared_ptr<vector<string>> affiliatedRisks_ {};
        // The ID of the check item.
        shared_ptr<int64_t> checkId_ {};
        // The description of the check item.
        shared_ptr<string> checkItem_ {};
      };

      virtual bool empty() const override { return this->checkDetails_ == nullptr
        && this->checkType_ == nullptr && this->checkTypeDisName_ == nullptr; };
      // checkDetails Field Functions 
      bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
      void deleteCheckDetails() { this->checkDetails_ = nullptr;};
      inline const vector<Data::CheckDetails> & getCheckDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<Data::CheckDetails>) };
      inline vector<Data::CheckDetails> getCheckDetails() { DARABONBA_PTR_GET(checkDetails_, vector<Data::CheckDetails>) };
      inline Data& setCheckDetails(const vector<Data::CheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
      inline Data& setCheckDetails(vector<Data::CheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline Data& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // checkTypeDisName Field Functions 
      bool hasCheckTypeDisName() const { return this->checkTypeDisName_ != nullptr;};
      void deleteCheckTypeDisName() { this->checkTypeDisName_ = nullptr;};
      inline string getCheckTypeDisName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeDisName_, "") };
      inline Data& setCheckTypeDisName(string checkTypeDisName) { DARABONBA_PTR_SET_VALUE(checkTypeDisName_, checkTypeDisName) };


    protected:
      // The detail of check items.
      shared_ptr<vector<Data::CheckDetails>> checkDetails_ {};
      // The type of the check item.
      shared_ptr<string> checkType_ {};
      // The display name of the check item type.
      shared_ptr<string> checkTypeDisName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCheckTypesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListCheckTypesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCheckTypesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCheckTypesResponseBody::Data>) };
    inline vector<ListCheckTypesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCheckTypesResponseBody::Data>) };
    inline ListCheckTypesResponseBody& setData(const vector<ListCheckTypesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCheckTypesResponseBody& setData(vector<ListCheckTypesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCheckTypesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCheckTypesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCheckTypesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The data returned.
    shared_ptr<vector<ListCheckTypesResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
