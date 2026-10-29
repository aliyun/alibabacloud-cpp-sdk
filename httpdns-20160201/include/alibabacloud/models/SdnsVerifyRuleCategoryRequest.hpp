// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDNSVERIFYRULECATEGORYREQUEST_HPP_
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
  class SdnsVerifyRuleCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsVerifyRuleCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Cip, cip_);
      DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsVerifyRuleCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Cip, cip_);
      DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    SdnsVerifyRuleCategoryRequest() = default ;
    SdnsVerifyRuleCategoryRequest(const SdnsVerifyRuleCategoryRequest &) = default ;
    SdnsVerifyRuleCategoryRequest(SdnsVerifyRuleCategoryRequest &&) = default ;
    SdnsVerifyRuleCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsVerifyRuleCategoryRequest() = default ;
    SdnsVerifyRuleCategoryRequest& operator=(const SdnsVerifyRuleCategoryRequest &) = default ;
    SdnsVerifyRuleCategoryRequest& operator=(SdnsVerifyRuleCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ArgKeys, argKeys_);
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(ResultMode, resultMode_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ArgKeys, argKeys_);
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(ResultMode, resultMode_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
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
      inline Rules& setArgKeys(const vector<string> & argKeys) { DARABONBA_PTR_SET_VALUE(argKeys_, argKeys) };
      inline Rules& setArgKeys(vector<string> && argKeys) { DARABONBA_PTR_SET_RVALUE(argKeys_, argKeys) };


      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const map<string, string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, map<string, string>) };
      inline map<string, string> getArgs() { DARABONBA_PTR_GET(args_, map<string, string>) };
      inline Rules& setArgs(const map<string, string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Rules& setArgs(map<string, string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Rules::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Rules::Records>) };
      inline vector<Rules::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Rules::Records>) };
      inline Rules& setRecords(const vector<Rules::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Rules& setRecords(vector<Rules::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // resultMode Field Functions 
      bool hasResultMode() const { return this->resultMode_ != nullptr;};
      void deleteResultMode() { this->resultMode_ = nullptr;};
      inline int32_t getResultMode() const { DARABONBA_PTR_GET_DEFAULT(resultMode_, 0) };
      inline Rules& setResultMode(int32_t resultMode) { DARABONBA_PTR_SET_VALUE(resultMode_, resultMode) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline Rules& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // The optional list of custom parameter names, used to record the display order. Omit this parameter if you only match CIDR blocks. If you use Args, the names must correspond to the parameter names in Args.
      shared_ptr<vector<string>> argKeys_ {};
      // The optional custom parameter conditions. The key is the parameter name and the value is the match value. Omit this parameter if you only match CIDR blocks. You do not need to add business parameters.
      shared_ptr<map<string, string>> args_ {};
      // The rule name. This parameter is required and cannot be null. Use a non-empty name with business meaning. This parameter cannot replace the policy ID.
      shared_ptr<string> name_ {};
      // The list of configured DNS records, which can include A and AAAA records. Actual DNS resolution returns only records of the queried type. If the list is empty or does not contain records of the queried type, the system continues to fall back. This operation returns the records configured in the rule and does not filter them by query type.
      shared_ptr<vector<Rules::Records>> records_ {};
      // The record return mode. Valid values:
      // - 0: Returns all records of the queried type.
      // - 1: Returns one record of the queried type based on weight.
      // Policy validation only returns the rule configuration and does not perform weight sampling.
      shared_ptr<int32_t> resultMode_ {};
      // The cache validity period of the record, in seconds. This parameter must be a positive integer.
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->args_ == nullptr
        && this->cip_ == nullptr && this->clientIpRanges_ == nullptr && this->matchType_ == nullptr && this->rules_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const map<string, string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, map<string, string>) };
    inline map<string, string> getArgs() { DARABONBA_PTR_GET(args_, map<string, string>) };
    inline SdnsVerifyRuleCategoryRequest& setArgs(const map<string, string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline SdnsVerifyRuleCategoryRequest& setArgs(map<string, string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // cip Field Functions 
    bool hasCip() const { return this->cip_ != nullptr;};
    void deleteCip() { this->cip_ = nullptr;};
    inline string getCip() const { DARABONBA_PTR_GET_DEFAULT(cip_, "") };
    inline SdnsVerifyRuleCategoryRequest& setCip(string cip) { DARABONBA_PTR_SET_VALUE(cip_, cip) };


    // clientIpRanges Field Functions 
    bool hasClientIpRanges() const { return this->clientIpRanges_ != nullptr;};
    void deleteClientIpRanges() { this->clientIpRanges_ = nullptr;};
    inline const vector<string> & getClientIpRanges() const { DARABONBA_PTR_GET_CONST(clientIpRanges_, vector<string>) };
    inline vector<string> getClientIpRanges() { DARABONBA_PTR_GET(clientIpRanges_, vector<string>) };
    inline SdnsVerifyRuleCategoryRequest& setClientIpRanges(const vector<string> & clientIpRanges) { DARABONBA_PTR_SET_VALUE(clientIpRanges_, clientIpRanges) };
    inline SdnsVerifyRuleCategoryRequest& setClientIpRanges(vector<string> && clientIpRanges) { DARABONBA_PTR_SET_RVALUE(clientIpRanges_, clientIpRanges) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline SdnsVerifyRuleCategoryRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<SdnsVerifyRuleCategoryRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<SdnsVerifyRuleCategoryRequest::Rules>) };
    inline vector<SdnsVerifyRuleCategoryRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<SdnsVerifyRuleCategoryRequest::Rules>) };
    inline SdnsVerifyRuleCategoryRequest& setRules(const vector<SdnsVerifyRuleCategoryRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline SdnsVerifyRuleCategoryRequest& setRules(vector<SdnsVerifyRuleCategoryRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The parameter object used for the current validation. If no custom parameters are used, pass an empty JSON object {}. Do not pass an empty string or null.
    shared_ptr<map<string, string>> args_ {};
    // The simulated client IP address. This parameter is required in IP_RANGE mode. Supports a single IPv4 or IPv6 address. CIDR blocks and start-to-end ranges are not supported. This parameter is used for CIDR block matching in the current request and does not change the source of the actual DNS resolution request.
    shared_ptr<string> cip_ {};
    // The array of client CIDR blocks that must be provided in the IP_RANGE pattern. Send this parameter as a JSON form field. Do not pass this parameter in the LINE pattern. Supports single IPv4 and IPv6 addresses, CIDR blocks, and start-to-end ranges. Multiple entries have an OR relationship. For CIDR blocks, the IPv4 prefix length ranges from 0 to 32, and the IPv6 prefix length ranges from 0 to 128. Start-to-end ranges are inclusive and must belong to the same address family, with the start address not greater than the end address. Overlapping, containing, and duplicate ranges are allowed within the same policy. When the policy is saved and read back, the array sequence, duplicate items, and the original text of each string are preserved. The array can contain up to 2,000 array elements. The total number of parsed non-empty address expressions ranges from 1 to 2,000, including duplicates. Specify one expression per array element. It is compatible with line breaks within an array element. Each expression can contain up to 128 characters, including leading and trailing whitespace. The serialized UTF-8 JSON content cannot exceed 65,535 bytes. Both the quantity and byte limits apply simultaneously. To authenticate, the system only checks the ranges that you commit and does not check for conflicts with saved policies.
    shared_ptr<vector<string>> clientIpRanges_ {};
    // The match type. Valid values:
    // - LINE: line mode
    // - IP_RANGE: client CIDR block mode
    // If this parameter is omitted, LINE is used. In IP_RANGE mode, you must provide both ClientIpRanges and Cip.
    shared_ptr<string> matchType_ {};
    // The complete list of rules. This parameter is required and must contain at least one rule. If you only need to match CIDR blocks, configure a default rule without ArgKeys and Args, and configure the A/AAAA destination addresses in the Records field of this rule. This operation is used for match validation and does not save the rules.
    shared_ptr<vector<SdnsVerifyRuleCategoryRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
