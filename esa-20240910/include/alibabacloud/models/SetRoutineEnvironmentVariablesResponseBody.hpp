// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetRoutineEnvironmentVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SetKeys, setKeys_);
    };
    friend void from_json(const Darabonba::Json& j, SetRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SetKeys, setKeys_);
    };
    SetRoutineEnvironmentVariablesResponseBody() = default ;
    SetRoutineEnvironmentVariablesResponseBody(const SetRoutineEnvironmentVariablesResponseBody &) = default ;
    SetRoutineEnvironmentVariablesResponseBody(SetRoutineEnvironmentVariablesResponseBody &&) = default ;
    SetRoutineEnvironmentVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRoutineEnvironmentVariablesResponseBody() = default ;
    SetRoutineEnvironmentVariablesResponseBody& operator=(const SetRoutineEnvironmentVariablesResponseBody &) = default ;
    SetRoutineEnvironmentVariablesResponseBody& operator=(SetRoutineEnvironmentVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->setKeys_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetRoutineEnvironmentVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // setKeys Field Functions 
    bool hasSetKeys() const { return this->setKeys_ != nullptr;};
    void deleteSetKeys() { this->setKeys_ = nullptr;};
    inline const vector<string> & getSetKeys() const { DARABONBA_PTR_GET_CONST(setKeys_, vector<string>) };
    inline vector<string> getSetKeys() { DARABONBA_PTR_GET(setKeys_, vector<string>) };
    inline SetRoutineEnvironmentVariablesResponseBody& setSetKeys(const vector<string> & setKeys) { DARABONBA_PTR_SET_VALUE(setKeys_, setKeys) };
    inline SetRoutineEnvironmentVariablesResponseBody& setSetKeys(vector<string> && setKeys) { DARABONBA_PTR_SET_RVALUE(setKeys_, setKeys) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of environment variable keys that were set successfully.
    shared_ptr<vector<string>> setKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
