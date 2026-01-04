// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainSecurityProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecurityProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecurityProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeDomainSecurityProfileResponseBody() = default ;
    DescribeDomainSecurityProfileResponseBody(const DescribeDomainSecurityProfileResponseBody &) = default ;
    DescribeDomainSecurityProfileResponseBody(DescribeDomainSecurityProfileResponseBody &&) = default ;
    DescribeDomainSecurityProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecurityProfileResponseBody() = default ;
    DescribeDomainSecurityProfileResponseBody& operator=(const DescribeDomainSecurityProfileResponseBody &) = default ;
    DescribeDomainSecurityProfileResponseBody& operator=(DescribeDomainSecurityProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalEnable, globalEnable_);
        DARABONBA_PTR_TO_JSON(GlobalMode, globalMode_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalEnable, globalEnable_);
        DARABONBA_PTR_FROM_JSON(GlobalMode, globalMode_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->globalEnable_ == nullptr
        && this->globalMode_ == nullptr; };
      // globalEnable Field Functions 
      bool hasGlobalEnable() const { return this->globalEnable_ != nullptr;};
      void deleteGlobalEnable() { this->globalEnable_ = nullptr;};
      inline bool getGlobalEnable() const { DARABONBA_PTR_GET_DEFAULT(globalEnable_, false) };
      inline Result& setGlobalEnable(bool globalEnable) { DARABONBA_PTR_SET_VALUE(globalEnable_, globalEnable) };


      // globalMode Field Functions 
      bool hasGlobalMode() const { return this->globalMode_ != nullptr;};
      void deleteGlobalMode() { this->globalMode_ = nullptr;};
      inline string getGlobalMode() const { DARABONBA_PTR_GET_DEFAULT(globalMode_, "") };
      inline Result& setGlobalMode(string globalMode) { DARABONBA_PTR_SET_VALUE(globalMode_, globalMode) };


    protected:
      // Indicates whether the global mitigation policy is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> globalEnable_ {};
      // The mode of the global mitigation policy. Valid values:
      // 
      // *   **weak**: the Low mode
      // *   **default**: the Normal mode
      // *   **hard**: the Strict mode
      shared_ptr<string> globalMode_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecurityProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeDomainSecurityProfileResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeDomainSecurityProfileResponseBody::Result>) };
    inline vector<DescribeDomainSecurityProfileResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeDomainSecurityProfileResponseBody::Result>) };
    inline DescribeDomainSecurityProfileResponseBody& setResult(const vector<DescribeDomainSecurityProfileResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDomainSecurityProfileResponseBody& setResult(vector<DescribeDomainSecurityProfileResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<DescribeDomainSecurityProfileResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
