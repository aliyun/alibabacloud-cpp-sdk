// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYREQUEST_HPP_
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
  class CreateSdnsRuleCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSdnsRuleCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSdnsRuleCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRanges_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateSdnsRuleCategoryRequest() = default ;
    CreateSdnsRuleCategoryRequest(const CreateSdnsRuleCategoryRequest &) = default ;
    CreateSdnsRuleCategoryRequest(CreateSdnsRuleCategoryRequest &&) = default ;
    CreateSdnsRuleCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSdnsRuleCategoryRequest() = default ;
    CreateSdnsRuleCategoryRequest& operator=(const CreateSdnsRuleCategoryRequest &) = default ;
    CreateSdnsRuleCategoryRequest& operator=(CreateSdnsRuleCategoryRequest &&) = default ;
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
        // The single destination IP address corresponding to the record. If Type is set to 1, the value is an IPv4 address, such as 192.0.2.200. If Type is set to 28, the value is an IPv6 address, such as 2001:db8::200. Do not use CIDR blocks, start-end ranges, or domain names.
        shared_ptr<string> ip_ {};
        // The DNS record type. Valid values:
        // - 1: A record.
        // - 28: AAAA record.
        // 
        // Specify an integer. Do not use the string A or AAAA.
        shared_ptr<int32_t> type_ {};
        // The auxiliary display text for the record type. This parameter does not participate in matching or resolution decisions and can be omitted in the request.
        shared_ptr<string> typeLabel_ {};
        // The relative weight of the record. This parameter is used to select one record of the same queried type only when ResultMode is set to 1. We recommend that you set this parameter to a positive integer from 1 to 100. The sum of the weights of all records does not need to be 100. This parameter does not participate in selection when ResultMode is set to 0.
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
      // The optional list of custom parameter names used to record the display order. Omit this parameter when matching only by IP address range. If Args is used, the names must correspond to the parameter names in Args.
      shared_ptr<vector<string>> argKeys_ {};
      // The optional custom parameter conditions. The key is the parameter name, and the value is the match value. Omit this parameter when matching only by IP address range. You do not need to add business parameters.
      shared_ptr<map<string, string>> args_ {};
      // The rule name. This parameter is required and cannot be null. We recommend that you use a non-empty name with business meaning. This parameter cannot replace the policy Id.
      shared_ptr<string> name_ {};
      // The list of configured resolution records, which can include A and AAAA records. Actual resolution returns only records of the queried type. If the list is empty or does not contain records of the queried type, the system continues to fall back.
      shared_ptr<vector<Rules::Records>> records_ {};
      // The record return mode. Valid values:
      // - 0: returns all records of the queried type.
      // - 1: returns one record of the queried type based on the weight.
      shared_ptr<int32_t> resultMode_ {};
      // The cache validity period of the record, in seconds. This parameter must be a positive integer.
      shared_ptr<int32_t> ttl_ {};
    };

    class Paths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Paths& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, Paths& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      Paths() = default ;
      Paths(const Paths &) = default ;
      Paths(Paths &&) = default ;
      Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Paths() = default ;
      Paths& operator=(const Paths &) = default ;
      Paths& operator=(Paths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->key_ == nullptr && this->level_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Paths& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Paths& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
      inline Paths& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The code of the option at this level. For example, chinanet at the isps level indicates China Telecom. Use valid options for the associated line and maintain consistent hierarchical subordination.
      shared_ptr<string> id_ {};
      // The level identifier. For the Chinese mainland, use isps, subRegions, and provinces. For regions outside the Chinese mainland, use continents and geoRegions. This parameter corresponds to Level.
      shared_ptr<string> key_ {};
      // The sequence number of the line level. For the Chinese mainland, the values are 1 (ISP), 2 (region), and 3 (province). For regions outside the Chinese mainland, the values are 1 (continent) and 2 (region).
      shared_ptr<int32_t> level_ {};
    };

    virtual bool empty() const override { return this->clientIpRanges_ == nullptr
        && this->domainName_ == nullptr && this->enable_ == nullptr && this->lineId_ == nullptr && this->matchType_ == nullptr && this->paths_ == nullptr
        && this->rules_ == nullptr; };
    // clientIpRanges Field Functions 
    bool hasClientIpRanges() const { return this->clientIpRanges_ != nullptr;};
    void deleteClientIpRanges() { this->clientIpRanges_ = nullptr;};
    inline const vector<string> & getClientIpRanges() const { DARABONBA_PTR_GET_CONST(clientIpRanges_, vector<string>) };
    inline vector<string> getClientIpRanges() { DARABONBA_PTR_GET(clientIpRanges_, vector<string>) };
    inline CreateSdnsRuleCategoryRequest& setClientIpRanges(const vector<string> & clientIpRanges) { DARABONBA_PTR_SET_VALUE(clientIpRanges_, clientIpRanges) };
    inline CreateSdnsRuleCategoryRequest& setClientIpRanges(vector<string> && clientIpRanges) { DARABONBA_PTR_SET_RVALUE(clientIpRanges_, clientIpRanges) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateSdnsRuleCategoryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateSdnsRuleCategoryRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
    inline CreateSdnsRuleCategoryRequest& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline CreateSdnsRuleCategoryRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<CreateSdnsRuleCategoryRequest::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<CreateSdnsRuleCategoryRequest::Paths>) };
    inline vector<CreateSdnsRuleCategoryRequest::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<CreateSdnsRuleCategoryRequest::Paths>) };
    inline CreateSdnsRuleCategoryRequest& setPaths(const vector<CreateSdnsRuleCategoryRequest::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateSdnsRuleCategoryRequest& setPaths(vector<CreateSdnsRuleCategoryRequest::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateSdnsRuleCategoryRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateSdnsRuleCategoryRequest::Rules>) };
    inline vector<CreateSdnsRuleCategoryRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateSdnsRuleCategoryRequest::Rules>) };
    inline CreateSdnsRuleCategoryRequest& setRules(const vector<CreateSdnsRuleCategoryRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateSdnsRuleCategoryRequest& setRules(vector<CreateSdnsRuleCategoryRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The array of client IP address ranges required for the IP_RANGE pattern. Send this parameter as a JSON form field. Do not specify this parameter for the LINE pattern. This parameter supports single IPv4 and IPv6 addresses, CIDR blocks, and start-end ranges. Multiple entries have an OR relationship. For CIDR blocks, the IPv4 prefix length ranges from 0 to 32, and the IPv6 prefix length ranges from 0 to 128. Start-end ranges are inclusive and must belong to the same address family, and the start address cannot be greater than the end address. Duplicates, inclusions, and overlaps are allowed within the same policy. When the policy is saved and read back, the array sequence, duplicates, and original text of each string are preserved. The array can contain up to 2,000 array elements. The total number of parsed non-empty address expressions ranges from 1 to 2,000, and duplicates are counted. We recommend that you specify one expression per array element. It is compatible with line breaks within an array element. Each expression can contain up to 128 characters, including leading and trailing spaces. The serialized UTF-8 JSON content cannot exceed 65,535 bytes. The quantity and byte limits take effect simultaneously. Overlaps are not allowed between different IP_RANGE policies for the same account, domain name, and address family. Disabled policies are also checked. Disabling a policy does not release the ranges. This limit does not compare independent configurations of LINE policies and the legacy SetIPRegionResult operation.
    shared_ptr<vector<string>> clientIpRanges_ {};
    // The domain name connected to HTTPDNS for the current account. This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to enable the policy upon creation. If this parameter is omitted or set to false, the policy is disabled (Status=0). If this parameter is set to true, the policy is enabled (Status=1), and you do not need to call the enable operation. This parameter applies to the LINE and IP_RANGE modes. Actual resolution still requires waiting for configuration propagation.
    shared_ptr<bool> enable_ {};
    // The line identifier required for the LINE mode. Valid values:
    // - internal: the Chinese mainland.
    // - overseas: outside the Chinese mainland.
    // 
    // Do not specify this parameter for the IP_RANGE mode.
    shared_ptr<string> lineId_ {};
    // The match type. Valid values:
    // - LINE: the line mode.
    // - IP_RANGE: the client IP address range mode.
    // 
    // If this parameter is omitted, it is processed as LINE. To create an IP address range policy, you must explicitly set this parameter to IP_RANGE and provide ClientIpRanges. You cannot provide LineId or Paths at the same time. The match type cannot be changed after creation.
    shared_ptr<string> matchType_ {};
    // The line selection path that describes the line conditions at each level. This parameter applies only to the LINE mode. The IP_RANGE mode does not use line paths. When you create a line policy, provide valid options at each level. Use x for the default option. For the Chinese mainland, the levels include ISP, region, and province. For regions outside the Chinese mainland, the levels include continent and region.
    shared_ptr<vector<CreateSdnsRuleCategoryRequest::Paths>> paths_ {};
    // The complete list of rules. This parameter is required and must contain at least one rule. When matching only by IP address range, configure a default rule without ArgKeys and Args, and configure the A or AAAA destination addresses in the Records of this rule. When saved, the serialized UTF-8 JSON content must be less than 65,535 bytes.
    shared_ptr<vector<CreateSdnsRuleCategoryRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
