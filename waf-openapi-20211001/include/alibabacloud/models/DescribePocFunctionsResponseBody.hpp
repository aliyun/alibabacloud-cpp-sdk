// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePocFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePocFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePocFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePocFunctionsResponseBody() = default ;
    DescribePocFunctionsResponseBody(const DescribePocFunctionsResponseBody &) = default ;
    DescribePocFunctionsResponseBody(DescribePocFunctionsResponseBody &&) = default ;
    DescribePocFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePocFunctionsResponseBody() = default ;
    DescribePocFunctionsResponseBody& operator=(const DescribePocFunctionsResponseBody &) = default ;
    DescribePocFunctionsResponseBody& operator=(DescribePocFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Functions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Functions& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Functions& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Functions() = default ;
      Functions(const Functions &) = default ;
      Functions(Functions &&) = default ;
      Functions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Functions() = default ;
      Functions& operator=(const Functions &) = default ;
      Functions& operator=(Functions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->type_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Functions& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Functions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->functions_ == nullptr
        && this->requestId_ == nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<DescribePocFunctionsResponseBody::Functions> & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, vector<DescribePocFunctionsResponseBody::Functions>) };
    inline vector<DescribePocFunctionsResponseBody::Functions> getFunctions() { DARABONBA_PTR_GET(functions_, vector<DescribePocFunctionsResponseBody::Functions>) };
    inline DescribePocFunctionsResponseBody& setFunctions(const vector<DescribePocFunctionsResponseBody::Functions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline DescribePocFunctionsResponseBody& setFunctions(vector<DescribePocFunctionsResponseBody::Functions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePocFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribePocFunctionsResponseBody::Functions>> functions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
