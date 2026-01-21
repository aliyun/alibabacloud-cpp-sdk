// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEDATABASESTONETWORKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVEDATABASESTONETWORKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class MoveDatabasesToNetworkDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveDatabasesToNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, MoveDatabasesToNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    MoveDatabasesToNetworkDomainResponseBody() = default ;
    MoveDatabasesToNetworkDomainResponseBody(const MoveDatabasesToNetworkDomainResponseBody &) = default ;
    MoveDatabasesToNetworkDomainResponseBody(MoveDatabasesToNetworkDomainResponseBody &&) = default ;
    MoveDatabasesToNetworkDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveDatabasesToNetworkDomainResponseBody() = default ;
    MoveDatabasesToNetworkDomainResponseBody& operator=(const MoveDatabasesToNetworkDomainResponseBody &) = default ;
    MoveDatabasesToNetworkDomainResponseBody& operator=(MoveDatabasesToNetworkDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->databaseId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Results& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // Indicates whether the database is added to the network domain.
      // 
      // > The code LICENSE_OUT_OF_LIMIT indicates that the network domain feature is not supported by the current Bastionhost edition.
      shared_ptr<string> code_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveDatabasesToNetworkDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<MoveDatabasesToNetworkDomainResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<MoveDatabasesToNetworkDomainResponseBody::Results>) };
    inline vector<MoveDatabasesToNetworkDomainResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<MoveDatabasesToNetworkDomainResponseBody::Results>) };
    inline MoveDatabasesToNetworkDomainResponseBody& setResults(const vector<MoveDatabasesToNetworkDomainResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline MoveDatabasesToNetworkDomainResponseBody& setResults(vector<MoveDatabasesToNetworkDomainResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The results of the call.
    shared_ptr<vector<MoveDatabasesToNetworkDomainResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
