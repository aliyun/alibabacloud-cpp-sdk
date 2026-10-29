// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class SdnsVerifyRuleCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsVerifyRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsVerifyRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SdnsVerifyRuleCategoryResponseBody() = default ;
    SdnsVerifyRuleCategoryResponseBody(const SdnsVerifyRuleCategoryResponseBody &) = default ;
    SdnsVerifyRuleCategoryResponseBody(SdnsVerifyRuleCategoryResponseBody &&) = default ;
    SdnsVerifyRuleCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsVerifyRuleCategoryResponseBody() = default ;
    SdnsVerifyRuleCategoryResponseBody& operator=(const SdnsVerifyRuleCategoryResponseBody &) = default ;
    SdnsVerifyRuleCategoryResponseBody& operator=(SdnsVerifyRuleCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ArgKeys, argKeys_);
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(ResultMode, resultMode_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ArgKeys, argKeys_);
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(ResultMode, resultMode_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(TypeLabel, typeLabel_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(TypeLabel, typeLabel_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->type_ == nullptr && this->typeLabel_ == nullptr && this->weight_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Records& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Records& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeLabel Field Functions 
        bool hasTypeLabel() const { return this->typeLabel_ != nullptr;};
        void deleteTypeLabel() { this->typeLabel_ = nullptr;};
        inline string getTypeLabel() const { DARABONBA_PTR_GET_DEFAULT(typeLabel_, "") };
        inline Records& setTypeLabel(string typeLabel) { DARABONBA_PTR_SET_VALUE(typeLabel_, typeLabel) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Records& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The single destination IP address for the record. If Type is set to 1, specify an IPv4 address, such as 192.0.2.200. If Type is set to 28, specify an IPv6 address, such as 2001:db8::200. Do not use CIDR blocks, start-to-end ranges, or domain names.
        shared_ptr<string> ip_ {};
        // The DNS record type. Valid values:
        // - 1: A record
        // - 28: AAAA record
        // Specify an integer. Do not use the strings A or AAAA.
        shared_ptr<int32_t> type_ {};
        // The auxiliary display text for the record type. This parameter does not participate in matching or resolution decisions and can be omitted in the request.
        shared_ptr<string> typeLabel_ {};
        // The relative weight of the record. This parameter is used to select one record of the same query type only when ResultMode is set to 1. Set this parameter to a positive integer from 1 to 100. The sum of the weights of all records does not need to be 100. This parameter does not participate in selection when ResultMode is set to 0.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->argKeys_ == nullptr
        && this->args_ == nullptr && this->name_ == nullptr && this->records_ == nullptr && this->resultMode_ == nullptr && this->ttl_ == nullptr; };
      // argKeys Field Functions 
      bool hasArgKeys() const { return this->argKeys_ != nullptr;};
      void deleteArgKeys() { this->argKeys_ = nullptr;};
      inline const vector<string> & getArgKeys() const { DARABONBA_PTR_GET_CONST(argKeys_, vector<string>) };
      inline vector<string> getArgKeys() { DARABONBA_PTR_GET(argKeys_, vector<string>) };
      inline Data& setArgKeys(const vector<string> & argKeys) { DARABONBA_PTR_SET_VALUE(argKeys_, argKeys) };
      inline Data& setArgKeys(vector<string> && argKeys) { DARABONBA_PTR_SET_RVALUE(argKeys_, argKeys) };


      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const map<string, string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, map<string, string>) };
      inline map<string, string> getArgs() { DARABONBA_PTR_GET(args_, map<string, string>) };
      inline Data& setArgs(const map<string, string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Data& setArgs(map<string, string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // resultMode Field Functions 
      bool hasResultMode() const { return this->resultMode_ != nullptr;};
      void deleteResultMode() { this->resultMode_ = nullptr;};
      inline int32_t getResultMode() const { DARABONBA_PTR_GET_DEFAULT(resultMode_, 0) };
      inline Data& setResultMode(int32_t resultMode) { DARABONBA_PTR_SET_VALUE(resultMode_, resultMode) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline Data& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // The custom parameter names and their display order. This field can be empty if no custom parameters are used.
      shared_ptr<vector<string>> argKeys_ {};
      // The custom parameter match conditions attached to the rule. If not configured, no parameter restrictions are attached.
      shared_ptr<map<string, string>> args_ {};
      // The rule name, used to identify the rule. This field cannot replace the policy ID.
      shared_ptr<string> name_ {};
      // The list of configured DNS records, which can include A and AAAA records. Actual DNS resolution returns only records of the queried type. If the list is empty or does not contain records of the queried type, the system continues to fall back. This operation returns the records configured in the rule and does not filter them by query type.
      shared_ptr<vector<Data::Records>> records_ {};
      // The record return mode. Valid values:
      // - 0: Returns all records of the queried type.
      // - 1: Returns one record of the queried type based on weight.
      // Policy validation only returns the rule configuration and does not perform weight sampling.
      shared_ptr<int32_t> resultMode_ {};
      // The cache validity period of the record, in seconds. This parameter must be a positive integer.
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SdnsVerifyRuleCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SdnsVerifyRuleCategoryResponseBody::Data) };
    inline SdnsVerifyRuleCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SdnsVerifyRuleCategoryResponseBody::Data) };
    inline SdnsVerifyRuleCategoryResponseBody& setData(const SdnsVerifyRuleCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SdnsVerifyRuleCategoryResponseBody& setData(SdnsVerifyRuleCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SdnsVerifyRuleCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the matched rule. If no rules are matched, this field is empty or omitted. This field does not represent the final response of the actual resolution chain.
    shared_ptr<SdnsVerifyRuleCategoryResponseBody::Data> data_ {};
    // The ID of the request, used to troubleshoot call issues. This field is not the policy ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
