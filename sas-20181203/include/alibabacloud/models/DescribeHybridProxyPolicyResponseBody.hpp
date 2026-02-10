// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
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
  class DescribeHybridProxyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyPolicyResponseBody() = default ;
    DescribeHybridProxyPolicyResponseBody(const DescribeHybridProxyPolicyResponseBody &) = default ;
    DescribeHybridProxyPolicyResponseBody(DescribeHybridProxyPolicyResponseBody &&) = default ;
    DescribeHybridProxyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyPolicyResponseBody() = default ;
    DescribeHybridProxyPolicyResponseBody& operator=(const DescribeHybridProxyPolicyResponseBody &) = default ;
    DescribeHybridProxyPolicyResponseBody& operator=(DescribeHybridProxyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(Info, info_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(Info, info_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      PolicyList() = default ;
      PolicyList(const PolicyList &) = default ;
      PolicyList(PolicyList &&) = default ;
      PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyList() = default ;
      PolicyList& operator=(const PolicyList &) = default ;
      PolicyList& operator=(PolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Info : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Info& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Info& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Info() = default ;
        Info(const Info &) = default ;
        Info(Info &&) = default ;
        Info(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Info() = default ;
        Info& operator=(const Info &) = default ;
        Info& operator=(Info &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->fileName_ == nullptr && this->type_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline Info& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Info& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Info& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The value of the policy configurations.
        shared_ptr<string> config_ {};
        // The name of the file. After you configure a blocking policy, the blocked data is written to the file.
        shared_ptr<string> fileName_ {};
        // The type of the policy that you configured. Valid values:
        // 
        // *   **file**
        // *   **net**
        // *   **process**
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->info_ == nullptr
        && this->policyType_ == nullptr; };
      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline const vector<PolicyList::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<PolicyList::Info>) };
      inline vector<PolicyList::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<PolicyList::Info>) };
      inline PolicyList& setInfo(const vector<PolicyList::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
      inline PolicyList& setInfo(vector<PolicyList::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline PolicyList& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The information about the policy.
      shared_ptr<vector<PolicyList::Info>> info_ {};
      // The type of the policy. Valid values:
      // 
      // *   **limitFrequency**
      // *   **limitBandWidth**
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->policyList_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeHybridProxyPolicyResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<DescribeHybridProxyPolicyResponseBody::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<DescribeHybridProxyPolicyResponseBody::PolicyList>) };
    inline vector<DescribeHybridProxyPolicyResponseBody::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<DescribeHybridProxyPolicyResponseBody::PolicyList>) };
    inline DescribeHybridProxyPolicyResponseBody& setPolicyList(const vector<DescribeHybridProxyPolicyResponseBody::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline DescribeHybridProxyPolicyResponseBody& setPolicyList(vector<DescribeHybridProxyPolicyResponseBody::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries on the current page.
    shared_ptr<int32_t> count_ {};
    // The data collection configurations of the proxy cluster.
    shared_ptr<vector<DescribeHybridProxyPolicyResponseBody::PolicyList>> policyList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
