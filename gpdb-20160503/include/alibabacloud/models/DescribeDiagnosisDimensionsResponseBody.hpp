// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisDimensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisDimensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserNames, userNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisDimensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
    };
    DescribeDiagnosisDimensionsResponseBody() = default ;
    DescribeDiagnosisDimensionsResponseBody(const DescribeDiagnosisDimensionsResponseBody &) = default ;
    DescribeDiagnosisDimensionsResponseBody(DescribeDiagnosisDimensionsResponseBody &&) = default ;
    DescribeDiagnosisDimensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisDimensionsResponseBody() = default ;
    DescribeDiagnosisDimensionsResponseBody& operator=(const DescribeDiagnosisDimensionsResponseBody &) = default ;
    DescribeDiagnosisDimensionsResponseBody& operator=(DescribeDiagnosisDimensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && this->requestId_ == nullptr && this->userNames_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<string> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
    inline vector<string> getDatabases() { DARABONBA_PTR_GET(databases_, vector<string>) };
    inline DescribeDiagnosisDimensionsResponseBody& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDiagnosisDimensionsResponseBody& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisDimensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userNames Field Functions 
    bool hasUserNames() const { return this->userNames_ != nullptr;};
    void deleteUserNames() { this->userNames_ = nullptr;};
    inline const vector<string> & getUserNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
    inline vector<string> getUserNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
    inline DescribeDiagnosisDimensionsResponseBody& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
    inline DescribeDiagnosisDimensionsResponseBody& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


  protected:
    // The names of the databases.
    shared_ptr<vector<string>> databases_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The names of the database accounts.
    shared_ptr<vector<string>> userNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
