// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSLISTRULECATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SDNSLISTRULECATEGORIESRESPONSEBODY_HPP_
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
  class SdnsListRuleCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsListRuleCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsListRuleCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SdnsListRuleCategoriesResponseBody() = default ;
    SdnsListRuleCategoriesResponseBody(const SdnsListRuleCategoriesResponseBody &) = default ;
    SdnsListRuleCategoriesResponseBody(SdnsListRuleCategoriesResponseBody &&) = default ;
    SdnsListRuleCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsListRuleCategoriesResponseBody() = default ;
    SdnsListRuleCategoriesResponseBody& operator=(const SdnsListRuleCategoriesResponseBody &) = default ;
    SdnsListRuleCategoriesResponseBody& operator=(SdnsListRuleCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIpRanges, clientIpRanges_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(RecordLine, recordLine_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIpRanges, clientIpRanges_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(RecordLine, recordLine_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
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
          // The single destination IP address corresponding to the record. When Type is 1, it is an IPv4 address, such as 192.0.2.200. When Type is 28, it is an IPv6 address, such as 2001:db8::200. CIDR blocks, IP ranges, or domain names are not used.
          shared_ptr<string> ip_ {};
          // The DNS record type. Valid values: 1: A record. 28: AAAA record. Enter an integer instead of the string A or AAAA.
          shared_ptr<int32_t> type_ {};
          // The auxiliary display text for the record type, which is not used for matching or resolution decisions. This field can be omitted in requests.
          shared_ptr<string> typeLabel_ {};
          // The relative weight of the record, which is used to select one record of the same query type only when ResultMode is 1. Set this to a positive integer from 1 to 100. The sum of the weights of all records does not need to be 100. This field is not used for selection when ResultMode is 0.
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
        // The names and display order of custom parameters. This field can be empty if no custom parameters are used.
        shared_ptr<vector<string>> argKeys_ {};
        // The custom parameter matching conditions attached to the rule. If not configured, no parameter restrictions are applied.
        shared_ptr<map<string, string>> args_ {};
        // The name of the rule, which is used to identify the rule and cannot replace the policy ID.
        shared_ptr<string> name_ {};
        // The list of configured DNS records, which can include A and AAAA records. Actual resolution returns only records of the queried type. If the list is empty or contains no records of the queried type, the system continues to fall back.
        shared_ptr<vector<Rules::Records>> records_ {};
        // The record return mode. Valid values: 0: returns all records of the queried type. 1: returns one record of the queried type based on weight.
        shared_ptr<int32_t> resultMode_ {};
        // The cache validity period of the record, in seconds. This value must be a positive integer.
        shared_ptr<int32_t> ttl_ {};
      };

      class Region : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Region& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Continent, continent_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(Province, province_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Continent, continent_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
        };
        Region() = default ;
        Region(const Region &) = default ;
        Region(Region &&) = default ;
        Region(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Region() = default ;
        Region& operator=(const Region &) = default ;
        Region& operator=(Region &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Province : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Province& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Province& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Province() = default ;
          Province(const Province &) = default ;
          Province(Province &&) = default ;
          Province(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Province() = default ;
          Province& operator=(const Province &) = default ;
          Province& operator=(Province &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Province& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Province& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the province. The value x indicates the default item.
          shared_ptr<string> id_ {};
          // The display name of the province. An empty string can be returned for the default item.
          shared_ptr<string> label_ {};
        };

        class Isp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Isp& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Isp& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Isp() = default ;
          Isp(const Isp &) = default ;
          Isp(Isp &&) = default ;
          Isp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Isp() = default ;
          Isp& operator=(const Isp &) = default ;
          Isp& operator=(Isp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Isp& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Isp& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the ISP. The value x indicates the default item.
          shared_ptr<string> id_ {};
          // The display name of the ISP. An empty string can be returned for the default item.
          shared_ptr<string> label_ {};
        };

        class Country : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Country& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Country& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Country() = default ;
          Country(const Country &) = default ;
          Country(Country &&) = default ;
          Country(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Country() = default ;
          Country& operator=(const Country &) = default ;
          Country& operator=(Country &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Country& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Country& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the country or region. The value x indicates the default item.
          shared_ptr<string> id_ {};
          // The display name of the country or region. An empty string can be returned for the default item.
          shared_ptr<string> label_ {};
        };

        class Continent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Continent& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Continent& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Continent() = default ;
          Continent(const Continent &) = default ;
          Continent(Continent &&) = default ;
          Continent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Continent() = default ;
          Continent& operator=(const Continent &) = default ;
          Continent& operator=(Continent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Continent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Continent& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the continent. The value x indicates the default item.
          shared_ptr<string> id_ {};
          // The display name of the continent. An empty string can be returned for the default item.
          shared_ptr<string> label_ {};
        };

        class City : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const City& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, City& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          City() = default ;
          City(const City &) = default ;
          City(City &&) = default ;
          City(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~City() = default ;
          City& operator=(const City &) = default ;
          City& operator=(City &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline City& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline City& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the city. This is a reserved field for compatibility. The default value is x, which indicates that no city is specified. The example uses the JSON string literal "x", where the double quotes are not part of the actual field content.
          shared_ptr<string> id_ {};
          // The display name of the city. This is a reserved field for compatibility, and an empty string is returned. The example uses the JSON literal "" to represent an empty string, where the double quotes are not part of the actual field content.
          shared_ptr<string> label_ {};
        };

        class Area : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Area& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Area& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Area() = default ;
          Area(const Area &) = default ;
          Area(Area &&) = default ;
          Area(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Area() = default ;
          Area& operator=(const Area &) = default ;
          Area& operator=(Area &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Area& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Area& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // The code of the region. The value x indicates the default item.
          shared_ptr<string> id_ {};
          // The display name of the region. An empty string can be returned for the default item.
          shared_ptr<string> label_ {};
        };

        virtual bool empty() const override { return this->area_ == nullptr
        && this->city_ == nullptr && this->continent_ == nullptr && this->country_ == nullptr && this->isp_ == nullptr && this->province_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline const Region::Area & getArea() const { DARABONBA_PTR_GET_CONST(area_, Region::Area) };
        inline Region::Area getArea() { DARABONBA_PTR_GET(area_, Region::Area) };
        inline Region& setArea(const Region::Area & area) { DARABONBA_PTR_SET_VALUE(area_, area) };
        inline Region& setArea(Region::Area && area) { DARABONBA_PTR_SET_RVALUE(area_, area) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline const Region::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, Region::City) };
        inline Region::City getCity() { DARABONBA_PTR_GET(city_, Region::City) };
        inline Region& setCity(const Region::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
        inline Region& setCity(Region::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


        // continent Field Functions 
        bool hasContinent() const { return this->continent_ != nullptr;};
        void deleteContinent() { this->continent_ = nullptr;};
        inline const Region::Continent & getContinent() const { DARABONBA_PTR_GET_CONST(continent_, Region::Continent) };
        inline Region::Continent getContinent() { DARABONBA_PTR_GET(continent_, Region::Continent) };
        inline Region& setContinent(const Region::Continent & continent) { DARABONBA_PTR_SET_VALUE(continent_, continent) };
        inline Region& setContinent(Region::Continent && continent) { DARABONBA_PTR_SET_RVALUE(continent_, continent) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline const Region::Country & getCountry() const { DARABONBA_PTR_GET_CONST(country_, Region::Country) };
        inline Region::Country getCountry() { DARABONBA_PTR_GET(country_, Region::Country) };
        inline Region& setCountry(const Region::Country & country) { DARABONBA_PTR_SET_VALUE(country_, country) };
        inline Region& setCountry(Region::Country && country) { DARABONBA_PTR_SET_RVALUE(country_, country) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline const Region::Isp & getIsp() const { DARABONBA_PTR_GET_CONST(isp_, Region::Isp) };
        inline Region::Isp getIsp() { DARABONBA_PTR_GET(isp_, Region::Isp) };
        inline Region& setIsp(const Region::Isp & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
        inline Region& setIsp(Region::Isp && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline const Region::Province & getProvince() const { DARABONBA_PTR_GET_CONST(province_, Region::Province) };
        inline Region::Province getProvince() { DARABONBA_PTR_GET(province_, Region::Province) };
        inline Region& setProvince(const Region::Province & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
        inline Region& setProvince(Region::Province && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


      protected:
        // The code and display name of the region.
        shared_ptr<Region::Area> area_ {};
        // The code and display name of the city. This is a reserved field for compatibility. City-level granularity is not currently provided.
        shared_ptr<Region::City> city_ {};
        // The code and display name of the continent.
        shared_ptr<Region::Continent> continent_ {};
        // The code and display name of the country or region.
        shared_ptr<Region::Country> country_ {};
        // The code and display name of the ISP.
        shared_ptr<Region::Isp> isp_ {};
        // The code and display name of the province.
        shared_ptr<Region::Province> province_ {};
      };

      class RecordLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordLine& obj) { 
          DARABONBA_PTR_TO_JSON(LineId, lineId_);
          DARABONBA_PTR_TO_JSON(LineLabel, lineLabel_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
        };
        friend void from_json(const Darabonba::Json& j, RecordLine& obj) { 
          DARABONBA_PTR_FROM_JSON(LineId, lineId_);
          DARABONBA_PTR_FROM_JSON(LineLabel, lineLabel_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
        };
        RecordLine() = default ;
        RecordLine(const RecordLine &) = default ;
        RecordLine(RecordLine &&) = default ;
        RecordLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordLine() = default ;
        RecordLine& operator=(const RecordLine &) = default ;
        RecordLine& operator=(RecordLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Level, level_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
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
        && this->key_ == nullptr && this->label_ == nullptr && this->level_ == nullptr; };
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


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Paths& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
          inline Paths& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        protected:
          // The code of the option at this level. For example, chinanet at the isps level indicates China Telecom. Use valid options for the associated line and maintain consistent hierarchical relationships.
          shared_ptr<string> id_ {};
          // The level identifier. For the Chinese mainland, valid values are isps, subRegions, and provinces. For regions outside the Chinese mainland, valid values are continents and geoRegions. This corresponds to the Level field.
          shared_ptr<string> key_ {};
          // The display name of the line option. The display name of the default option can be empty.
          shared_ptr<string> label_ {};
          // The sequence number of the line level. For the Chinese mainland, the values are 1 (ISP), 2 (region), and 3 (province). For regions outside the Chinese mainland, the values are 1 (continent) and 2 (geographical region).
          shared_ptr<int32_t> level_ {};
        };

        virtual bool empty() const override { return this->lineId_ == nullptr
        && this->lineLabel_ == nullptr && this->paths_ == nullptr; };
        // lineId Field Functions 
        bool hasLineId() const { return this->lineId_ != nullptr;};
        void deleteLineId() { this->lineId_ = nullptr;};
        inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
        inline RecordLine& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


        // lineLabel Field Functions 
        bool hasLineLabel() const { return this->lineLabel_ != nullptr;};
        void deleteLineLabel() { this->lineLabel_ = nullptr;};
        inline string getLineLabel() const { DARABONBA_PTR_GET_DEFAULT(lineLabel_, "") };
        inline RecordLine& setLineLabel(string lineLabel) { DARABONBA_PTR_SET_VALUE(lineLabel_, lineLabel) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<RecordLine::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<RecordLine::Paths>) };
        inline vector<RecordLine::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<RecordLine::Paths>) };
        inline RecordLine& setPaths(const vector<RecordLine::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline RecordLine& setPaths(vector<RecordLine::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      protected:
        // The line identifier. Valid values: internal: the Chinese mainland. overseas: outside the Chinese mainland.
        shared_ptr<string> lineId_ {};
        // The display name of the line.
        shared_ptr<string> lineLabel_ {};
        // The line selection path, which describes the line conditions at each level. This field applies only to LINE policies. IP_RANGE policies do not use line paths.
        shared_ptr<vector<RecordLine::Paths>> paths_ {};
      };

      virtual bool empty() const override { return this->clientIpRanges_ == nullptr
        && this->domainName_ == nullptr && this->id_ == nullptr && this->matchType_ == nullptr && this->recordLine_ == nullptr && this->region_ == nullptr
        && this->rules_ == nullptr && this->status_ == nullptr; };
      // clientIpRanges Field Functions 
      bool hasClientIpRanges() const { return this->clientIpRanges_ != nullptr;};
      void deleteClientIpRanges() { this->clientIpRanges_ = nullptr;};
      inline const vector<string> & getClientIpRanges() const { DARABONBA_PTR_GET_CONST(clientIpRanges_, vector<string>) };
      inline vector<string> getClientIpRanges() { DARABONBA_PTR_GET(clientIpRanges_, vector<string>) };
      inline List& setClientIpRanges(const vector<string> & clientIpRanges) { DARABONBA_PTR_SET_VALUE(clientIpRanges_, clientIpRanges) };
      inline List& setClientIpRanges(vector<string> && clientIpRanges) { DARABONBA_PTR_SET_RVALUE(clientIpRanges_, clientIpRanges) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline List& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline List& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // recordLine Field Functions 
      bool hasRecordLine() const { return this->recordLine_ != nullptr;};
      void deleteRecordLine() { this->recordLine_ = nullptr;};
      inline const List::RecordLine & getRecordLine() const { DARABONBA_PTR_GET_CONST(recordLine_, List::RecordLine) };
      inline List::RecordLine getRecordLine() { DARABONBA_PTR_GET(recordLine_, List::RecordLine) };
      inline List& setRecordLine(const List::RecordLine & recordLine) { DARABONBA_PTR_SET_VALUE(recordLine_, recordLine) };
      inline List& setRecordLine(List::RecordLine && recordLine) { DARABONBA_PTR_SET_RVALUE(recordLine_, recordLine) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline const List::Region & getRegion() const { DARABONBA_PTR_GET_CONST(region_, List::Region) };
      inline List::Region getRegion() { DARABONBA_PTR_GET(region_, List::Region) };
      inline List& setRegion(const List::Region & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
      inline List& setRegion(List::Region && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<List::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<List::Rules>) };
      inline vector<List::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<List::Rules>) };
      inline List& setRules(const vector<List::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline List& setRules(vector<List::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The array of original CIDR blocks from the most recent successful submission for an IP_RANGE policy. The order, duplicates, and content of each string are preserved. The response is a JSON array, not a text string of an array. This field is not used for LINE policies.
      shared_ptr<vector<string>> clientIpRanges_ {};
      // The domain name to which the policy is bound.
      shared_ptr<string> domainName_ {};
      // The ID of the policy, which can be used to query, update, enable, disable, or delete the policy. Treat it as a string to avoid precision loss of large integers.
      shared_ptr<string> id_ {};
      // The match type of the policy. Valid values: LINE: line policy. IP_RANGE: client CIDR block policy.
      shared_ptr<string> matchType_ {};
      // The line display information for a LINE policy. This field can be empty or omitted for an IP_RANGE policy.
      shared_ptr<List::RecordLine> recordLine_ {};
      // The line and region display information for compatibility with existing clients. This field applies only to LINE policies and can be empty or omitted for IP_RANGE policies.
      shared_ptr<List::Region> region_ {};
      // The list of custom resolution rules included in the policy. If multiple rules have no parameter conditions, only the first rule is prioritized. Multiple return addresses should be configured in a single rule.
      shared_ptr<vector<List::Rules>> rules_ {};
      // The status of the policy. Valid values: 0: disabled. 1: enabled. After a policy is enabled, actual resolution requires waiting for configuration propagation.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<SdnsListRuleCategoriesResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<SdnsListRuleCategoriesResponseBody::List>) };
    inline vector<SdnsListRuleCategoriesResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<SdnsListRuleCategoriesResponseBody::List>) };
    inline SdnsListRuleCategoriesResponseBody& setList(const vector<SdnsListRuleCategoriesResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline SdnsListRuleCategoriesResponseBody& setList(vector<SdnsListRuleCategoriesResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SdnsListRuleCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of all custom resolution policies for the domain name, including LINE and IP_RANGE policies, as well as enabled and disabled policies. The order of the list is not guaranteed.
    shared_ptr<vector<SdnsListRuleCategoriesResponseBody::List>> list_ {};
    // The ID of the request, which is used to troubleshoot call issues and is not the policy ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
