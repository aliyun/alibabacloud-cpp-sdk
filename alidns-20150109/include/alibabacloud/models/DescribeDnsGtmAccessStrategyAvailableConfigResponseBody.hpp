// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainAddrPools, domainAddrPools_);
      DARABONBA_PTR_TO_JSON(Ipv4AddrPools, ipv4AddrPools_);
      DARABONBA_PTR_TO_JSON(Ipv6AddrPools, ipv6AddrPools_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectedDomainLines, selectedDomainLines_);
      DARABONBA_PTR_TO_JSON(SelectedIpv4Lines, selectedIpv4Lines_);
      DARABONBA_PTR_TO_JSON(SelectedIpv6Lines, selectedIpv6Lines_);
      DARABONBA_PTR_TO_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainAddrPools, domainAddrPools_);
      DARABONBA_PTR_FROM_JSON(Ipv4AddrPools, ipv4AddrPools_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddrPools, ipv6AddrPools_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectedDomainLines, selectedDomainLines_);
      DARABONBA_PTR_FROM_JSON(SelectedIpv4Lines, selectedIpv4Lines_);
      DARABONBA_PTR_FROM_JSON(SelectedIpv6Lines, selectedIpv6Lines_);
      DARABONBA_PTR_FROM_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelectedIpv6Lines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedIpv6Lines& obj) { 
        DARABONBA_PTR_TO_JSON(SelectedIpv6Line, selectedIpv6Line_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedIpv6Lines& obj) { 
        DARABONBA_PTR_FROM_JSON(SelectedIpv6Line, selectedIpv6Line_);
      };
      SelectedIpv6Lines() = default ;
      SelectedIpv6Lines(const SelectedIpv6Lines &) = default ;
      SelectedIpv6Lines(SelectedIpv6Lines &&) = default ;
      SelectedIpv6Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedIpv6Lines() = default ;
      SelectedIpv6Lines& operator=(const SelectedIpv6Lines &) = default ;
      SelectedIpv6Lines& operator=(SelectedIpv6Lines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->selectedIpv6Line_ == nullptr; };
      // selectedIpv6Line Field Functions 
      bool hasSelectedIpv6Line() const { return this->selectedIpv6Line_ != nullptr;};
      void deleteSelectedIpv6Line() { this->selectedIpv6Line_ = nullptr;};
      inline const vector<string> & getSelectedIpv6Line() const { DARABONBA_PTR_GET_CONST(selectedIpv6Line_, vector<string>) };
      inline vector<string> getSelectedIpv6Line() { DARABONBA_PTR_GET(selectedIpv6Line_, vector<string>) };
      inline SelectedIpv6Lines& setSelectedIpv6Line(const vector<string> & selectedIpv6Line) { DARABONBA_PTR_SET_VALUE(selectedIpv6Line_, selectedIpv6Line) };
      inline SelectedIpv6Lines& setSelectedIpv6Line(vector<string> && selectedIpv6Line) { DARABONBA_PTR_SET_RVALUE(selectedIpv6Line_, selectedIpv6Line) };


    protected:
      shared_ptr<vector<string>> selectedIpv6Line_ {};
    };

    class SelectedIpv4Lines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedIpv4Lines& obj) { 
        DARABONBA_PTR_TO_JSON(SelectedIpv4Line, selectedIpv4Line_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedIpv4Lines& obj) { 
        DARABONBA_PTR_FROM_JSON(SelectedIpv4Line, selectedIpv4Line_);
      };
      SelectedIpv4Lines() = default ;
      SelectedIpv4Lines(const SelectedIpv4Lines &) = default ;
      SelectedIpv4Lines(SelectedIpv4Lines &&) = default ;
      SelectedIpv4Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedIpv4Lines() = default ;
      SelectedIpv4Lines& operator=(const SelectedIpv4Lines &) = default ;
      SelectedIpv4Lines& operator=(SelectedIpv4Lines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->selectedIpv4Line_ == nullptr; };
      // selectedIpv4Line Field Functions 
      bool hasSelectedIpv4Line() const { return this->selectedIpv4Line_ != nullptr;};
      void deleteSelectedIpv4Line() { this->selectedIpv4Line_ = nullptr;};
      inline const vector<string> & getSelectedIpv4Line() const { DARABONBA_PTR_GET_CONST(selectedIpv4Line_, vector<string>) };
      inline vector<string> getSelectedIpv4Line() { DARABONBA_PTR_GET(selectedIpv4Line_, vector<string>) };
      inline SelectedIpv4Lines& setSelectedIpv4Line(const vector<string> & selectedIpv4Line) { DARABONBA_PTR_SET_VALUE(selectedIpv4Line_, selectedIpv4Line) };
      inline SelectedIpv4Lines& setSelectedIpv4Line(vector<string> && selectedIpv4Line) { DARABONBA_PTR_SET_RVALUE(selectedIpv4Line_, selectedIpv4Line) };


    protected:
      shared_ptr<vector<string>> selectedIpv4Line_ {};
    };

    class SelectedDomainLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedDomainLines& obj) { 
        DARABONBA_PTR_TO_JSON(SelectedDomainLine, selectedDomainLine_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedDomainLines& obj) { 
        DARABONBA_PTR_FROM_JSON(SelectedDomainLine, selectedDomainLine_);
      };
      SelectedDomainLines() = default ;
      SelectedDomainLines(const SelectedDomainLines &) = default ;
      SelectedDomainLines(SelectedDomainLines &&) = default ;
      SelectedDomainLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedDomainLines() = default ;
      SelectedDomainLines& operator=(const SelectedDomainLines &) = default ;
      SelectedDomainLines& operator=(SelectedDomainLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->selectedDomainLine_ == nullptr; };
      // selectedDomainLine Field Functions 
      bool hasSelectedDomainLine() const { return this->selectedDomainLine_ != nullptr;};
      void deleteSelectedDomainLine() { this->selectedDomainLine_ = nullptr;};
      inline const vector<string> & getSelectedDomainLine() const { DARABONBA_PTR_GET_CONST(selectedDomainLine_, vector<string>) };
      inline vector<string> getSelectedDomainLine() { DARABONBA_PTR_GET(selectedDomainLine_, vector<string>) };
      inline SelectedDomainLines& setSelectedDomainLine(const vector<string> & selectedDomainLine) { DARABONBA_PTR_SET_VALUE(selectedDomainLine_, selectedDomainLine) };
      inline SelectedDomainLines& setSelectedDomainLine(vector<string> && selectedDomainLine) { DARABONBA_PTR_SET_RVALUE(selectedDomainLine_, selectedDomainLine) };


    protected:
      shared_ptr<vector<string>> selectedDomainLine_ {};
    };

    class Lines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Lines& obj) { 
        DARABONBA_PTR_TO_JSON(Line, line_);
      };
      friend void from_json(const Darabonba::Json& j, Lines& obj) { 
        DARABONBA_PTR_FROM_JSON(Line, line_);
      };
      Lines() = default ;
      Lines(const Lines &) = default ;
      Lines(Lines &&) = default ;
      Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Lines() = default ;
      Lines& operator=(const Lines &) = default ;
      Lines& operator=(Lines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Line : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Line& obj) { 
          DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
          DARABONBA_PTR_TO_JSON(LineName, lineName_);
        };
        friend void from_json(const Darabonba::Json& j, Line& obj) { 
          DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
          DARABONBA_PTR_FROM_JSON(LineName, lineName_);
        };
        Line() = default ;
        Line(const Line &) = default ;
        Line(Line &&) = default ;
        Line(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Line() = default ;
        Line& operator=(const Line &) = default ;
        Line& operator=(Line &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fatherCode_ == nullptr
        && this->groupCode_ == nullptr && this->groupName_ == nullptr && this->lineCode_ == nullptr && this->lineName_ == nullptr; };
        // fatherCode Field Functions 
        bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
        void deleteFatherCode() { this->fatherCode_ = nullptr;};
        inline string getFatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
        inline Line& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


        // groupCode Field Functions 
        bool hasGroupCode() const { return this->groupCode_ != nullptr;};
        void deleteGroupCode() { this->groupCode_ = nullptr;};
        inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
        inline Line& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Line& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // lineCode Field Functions 
        bool hasLineCode() const { return this->lineCode_ != nullptr;};
        void deleteLineCode() { this->lineCode_ = nullptr;};
        inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
        inline Line& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


        // lineName Field Functions 
        bool hasLineName() const { return this->lineName_ != nullptr;};
        void deleteLineName() { this->lineName_ = nullptr;};
        inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
        inline Line& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


      protected:
        // The parent line code of the source region. Leave it blank if no parent line exists.
        shared_ptr<string> fatherCode_ {};
        // The line name of the source region.
        shared_ptr<string> groupCode_ {};
        // The name of the source region group.
        shared_ptr<string> groupName_ {};
        // The line code of the source region.
        shared_ptr<string> lineCode_ {};
        // The code of the source region group.
        shared_ptr<string> lineName_ {};
      };

      virtual bool empty() const override { return this->line_ == nullptr; };
      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline const vector<Lines::Line> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<Lines::Line>) };
      inline vector<Lines::Line> getLine() { DARABONBA_PTR_GET(line_, vector<Lines::Line>) };
      inline Lines& setLine(const vector<Lines::Line> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
      inline Lines& setLine(vector<Lines::Line> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


    protected:
      shared_ptr<vector<Lines::Line>> line_ {};
    };

    class Ipv6AddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6AddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6AddrPool, ipv6AddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6AddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6AddrPool, ipv6AddrPool_);
      };
      Ipv6AddrPools() = default ;
      Ipv6AddrPools(const Ipv6AddrPools &) = default ;
      Ipv6AddrPools(Ipv6AddrPools &&) = default ;
      Ipv6AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6AddrPools() = default ;
      Ipv6AddrPools& operator=(const Ipv6AddrPools &) = default ;
      Ipv6AddrPools& operator=(Ipv6AddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6AddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6AddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6AddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Ipv6AddrPool() = default ;
        Ipv6AddrPool(const Ipv6AddrPool &) = default ;
        Ipv6AddrPool(Ipv6AddrPool &&) = default ;
        Ipv6AddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6AddrPool() = default ;
        Ipv6AddrPool& operator=(const Ipv6AddrPool &) = default ;
        Ipv6AddrPool& operator=(Ipv6AddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline Ipv6AddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Ipv6AddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ipv6AddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> id_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->ipv6AddrPool_ == nullptr; };
      // ipv6AddrPool Field Functions 
      bool hasIpv6AddrPool() const { return this->ipv6AddrPool_ != nullptr;};
      void deleteIpv6AddrPool() { this->ipv6AddrPool_ = nullptr;};
      inline const vector<Ipv6AddrPools::Ipv6AddrPool> & getIpv6AddrPool() const { DARABONBA_PTR_GET_CONST(ipv6AddrPool_, vector<Ipv6AddrPools::Ipv6AddrPool>) };
      inline vector<Ipv6AddrPools::Ipv6AddrPool> getIpv6AddrPool() { DARABONBA_PTR_GET(ipv6AddrPool_, vector<Ipv6AddrPools::Ipv6AddrPool>) };
      inline Ipv6AddrPools& setIpv6AddrPool(const vector<Ipv6AddrPools::Ipv6AddrPool> & ipv6AddrPool) { DARABONBA_PTR_SET_VALUE(ipv6AddrPool_, ipv6AddrPool) };
      inline Ipv6AddrPools& setIpv6AddrPool(vector<Ipv6AddrPools::Ipv6AddrPool> && ipv6AddrPool) { DARABONBA_PTR_SET_RVALUE(ipv6AddrPool_, ipv6AddrPool) };


    protected:
      shared_ptr<vector<Ipv6AddrPools::Ipv6AddrPool>> ipv6AddrPool_ {};
    };

    class Ipv4AddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv4AddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4AddrPool, ipv4AddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv4AddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4AddrPool, ipv4AddrPool_);
      };
      Ipv4AddrPools() = default ;
      Ipv4AddrPools(const Ipv4AddrPools &) = default ;
      Ipv4AddrPools(Ipv4AddrPools &&) = default ;
      Ipv4AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv4AddrPools() = default ;
      Ipv4AddrPools& operator=(const Ipv4AddrPools &) = default ;
      Ipv4AddrPools& operator=(Ipv4AddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv4AddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4AddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4AddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Ipv4AddrPool() = default ;
        Ipv4AddrPool(const Ipv4AddrPool &) = default ;
        Ipv4AddrPool(Ipv4AddrPool &&) = default ;
        Ipv4AddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4AddrPool() = default ;
        Ipv4AddrPool& operator=(const Ipv4AddrPool &) = default ;
        Ipv4AddrPool& operator=(Ipv4AddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline Ipv4AddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Ipv4AddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ipv4AddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> id_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->ipv4AddrPool_ == nullptr; };
      // ipv4AddrPool Field Functions 
      bool hasIpv4AddrPool() const { return this->ipv4AddrPool_ != nullptr;};
      void deleteIpv4AddrPool() { this->ipv4AddrPool_ = nullptr;};
      inline const vector<Ipv4AddrPools::Ipv4AddrPool> & getIpv4AddrPool() const { DARABONBA_PTR_GET_CONST(ipv4AddrPool_, vector<Ipv4AddrPools::Ipv4AddrPool>) };
      inline vector<Ipv4AddrPools::Ipv4AddrPool> getIpv4AddrPool() { DARABONBA_PTR_GET(ipv4AddrPool_, vector<Ipv4AddrPools::Ipv4AddrPool>) };
      inline Ipv4AddrPools& setIpv4AddrPool(const vector<Ipv4AddrPools::Ipv4AddrPool> & ipv4AddrPool) { DARABONBA_PTR_SET_VALUE(ipv4AddrPool_, ipv4AddrPool) };
      inline Ipv4AddrPools& setIpv4AddrPool(vector<Ipv4AddrPools::Ipv4AddrPool> && ipv4AddrPool) { DARABONBA_PTR_SET_RVALUE(ipv4AddrPool_, ipv4AddrPool) };


    protected:
      shared_ptr<vector<Ipv4AddrPools::Ipv4AddrPool>> ipv4AddrPool_ {};
    };

    class DomainAddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainAddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(DomainAddrPool, domainAddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, DomainAddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainAddrPool, domainAddrPool_);
      };
      DomainAddrPools() = default ;
      DomainAddrPools(const DomainAddrPools &) = default ;
      DomainAddrPools(DomainAddrPools &&) = default ;
      DomainAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainAddrPools() = default ;
      DomainAddrPools& operator=(const DomainAddrPools &) = default ;
      DomainAddrPools& operator=(DomainAddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainAddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainAddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DomainAddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DomainAddrPool() = default ;
        DomainAddrPool(const DomainAddrPool &) = default ;
        DomainAddrPool(DomainAddrPool &&) = default ;
        DomainAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainAddrPool() = default ;
        DomainAddrPool& operator=(const DomainAddrPool &) = default ;
        DomainAddrPool& operator=(DomainAddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline DomainAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DomainAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DomainAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> id_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->domainAddrPool_ == nullptr; };
      // domainAddrPool Field Functions 
      bool hasDomainAddrPool() const { return this->domainAddrPool_ != nullptr;};
      void deleteDomainAddrPool() { this->domainAddrPool_ = nullptr;};
      inline const vector<DomainAddrPools::DomainAddrPool> & getDomainAddrPool() const { DARABONBA_PTR_GET_CONST(domainAddrPool_, vector<DomainAddrPools::DomainAddrPool>) };
      inline vector<DomainAddrPools::DomainAddrPool> getDomainAddrPool() { DARABONBA_PTR_GET(domainAddrPool_, vector<DomainAddrPools::DomainAddrPool>) };
      inline DomainAddrPools& setDomainAddrPool(const vector<DomainAddrPools::DomainAddrPool> & domainAddrPool) { DARABONBA_PTR_SET_VALUE(domainAddrPool_, domainAddrPool) };
      inline DomainAddrPools& setDomainAddrPool(vector<DomainAddrPools::DomainAddrPool> && domainAddrPool) { DARABONBA_PTR_SET_RVALUE(domainAddrPool_, domainAddrPool) };


    protected:
      shared_ptr<vector<DomainAddrPools::DomainAddrPool>> domainAddrPool_ {};
    };

    virtual bool empty() const override { return this->domainAddrPools_ == nullptr
        && this->ipv4AddrPools_ == nullptr && this->ipv6AddrPools_ == nullptr && this->lines_ == nullptr && this->requestId_ == nullptr && this->selectedDomainLines_ == nullptr
        && this->selectedIpv4Lines_ == nullptr && this->selectedIpv6Lines_ == nullptr && this->suggestSetDefaultLine_ == nullptr; };
    // domainAddrPools Field Functions 
    bool hasDomainAddrPools() const { return this->domainAddrPools_ != nullptr;};
    void deleteDomainAddrPools() { this->domainAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools & getDomainAddrPools() const { DARABONBA_PTR_GET_CONST(domainAddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools getDomainAddrPools() { DARABONBA_PTR_GET(domainAddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setDomainAddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools & domainAddrPools) { DARABONBA_PTR_SET_VALUE(domainAddrPools_, domainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setDomainAddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools && domainAddrPools) { DARABONBA_PTR_SET_RVALUE(domainAddrPools_, domainAddrPools) };


    // ipv4AddrPools Field Functions 
    bool hasIpv4AddrPools() const { return this->ipv4AddrPools_ != nullptr;};
    void deleteIpv4AddrPools() { this->ipv4AddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools & getIpv4AddrPools() const { DARABONBA_PTR_GET_CONST(ipv4AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools getIpv4AddrPools() { DARABONBA_PTR_GET(ipv4AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv4AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools & ipv4AddrPools) { DARABONBA_PTR_SET_VALUE(ipv4AddrPools_, ipv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv4AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools && ipv4AddrPools) { DARABONBA_PTR_SET_RVALUE(ipv4AddrPools_, ipv4AddrPools) };


    // ipv6AddrPools Field Functions 
    bool hasIpv6AddrPools() const { return this->ipv6AddrPools_ != nullptr;};
    void deleteIpv6AddrPools() { this->ipv6AddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools & getIpv6AddrPools() const { DARABONBA_PTR_GET_CONST(ipv6AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools getIpv6AddrPools() { DARABONBA_PTR_GET(ipv6AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv6AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools & ipv6AddrPools) { DARABONBA_PTR_SET_VALUE(ipv6AddrPools_, ipv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv6AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools && ipv6AddrPools) { DARABONBA_PTR_SET_RVALUE(ipv6AddrPools_, ipv6AddrPools) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines & getLines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines getLines() { DARABONBA_PTR_GET(lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setLines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setLines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedDomainLines Field Functions 
    bool hasSelectedDomainLines() const { return this->selectedDomainLines_ != nullptr;};
    void deleteSelectedDomainLines() { this->selectedDomainLines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines & getSelectedDomainLines() const { DARABONBA_PTR_GET_CONST(selectedDomainLines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines getSelectedDomainLines() { DARABONBA_PTR_GET(selectedDomainLines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedDomainLines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines & selectedDomainLines) { DARABONBA_PTR_SET_VALUE(selectedDomainLines_, selectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedDomainLines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines && selectedDomainLines) { DARABONBA_PTR_SET_RVALUE(selectedDomainLines_, selectedDomainLines) };


    // selectedIpv4Lines Field Functions 
    bool hasSelectedIpv4Lines() const { return this->selectedIpv4Lines_ != nullptr;};
    void deleteSelectedIpv4Lines() { this->selectedIpv4Lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines & getSelectedIpv4Lines() const { DARABONBA_PTR_GET_CONST(selectedIpv4Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines getSelectedIpv4Lines() { DARABONBA_PTR_GET(selectedIpv4Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv4Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines & selectedIpv4Lines) { DARABONBA_PTR_SET_VALUE(selectedIpv4Lines_, selectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv4Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines && selectedIpv4Lines) { DARABONBA_PTR_SET_RVALUE(selectedIpv4Lines_, selectedIpv4Lines) };


    // selectedIpv6Lines Field Functions 
    bool hasSelectedIpv6Lines() const { return this->selectedIpv6Lines_ != nullptr;};
    void deleteSelectedIpv6Lines() { this->selectedIpv6Lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines & getSelectedIpv6Lines() const { DARABONBA_PTR_GET_CONST(selectedIpv6Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines getSelectedIpv6Lines() { DARABONBA_PTR_GET(selectedIpv6Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv6Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines & selectedIpv6Lines) { DARABONBA_PTR_SET_VALUE(selectedIpv6Lines_, selectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv6Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines && selectedIpv6Lines) { DARABONBA_PTR_SET_RVALUE(selectedIpv6Lines_, selectedIpv6Lines) };


    // suggestSetDefaultLine Field Functions 
    bool hasSuggestSetDefaultLine() const { return this->suggestSetDefaultLine_ != nullptr;};
    void deleteSuggestSetDefaultLine() { this->suggestSetDefaultLine_ = nullptr;};
    inline bool getSuggestSetDefaultLine() const { DARABONBA_PTR_GET_DEFAULT(suggestSetDefaultLine_, false) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSuggestSetDefaultLine(bool suggestSetDefaultLine) { DARABONBA_PTR_SET_VALUE(suggestSetDefaultLine_, suggestSetDefaultLine) };


  protected:
    // The available address pools of the domain name type.
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::DomainAddrPools> domainAddrPools_ {};
    // The available address pools of the IPv4 type.
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv4AddrPools> ipv4AddrPools_ {};
    // The available address pools of the IPv6 type.
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Ipv6AddrPools> ipv6AddrPools_ {};
    // The source regions.
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::Lines> lines_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedDomainLines> selectedDomainLines_ {};
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv4Lines> selectedIpv4Lines_ {};
    shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBody::SelectedIpv6Lines> selectedIpv6Lines_ {};
    // Indicates whether we recommend that you set the source region to global.
    shared_ptr<bool> suggestSetDefaultLine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
