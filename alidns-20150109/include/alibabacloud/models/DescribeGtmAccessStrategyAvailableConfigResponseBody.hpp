// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
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
  class DescribeGtmAccessStrategyAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    DescribeGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(const DescribeGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(DescribeGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody& operator=(const DescribeGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody& operator=(DescribeGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Line& obj) { 
          DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
          DARABONBA_PTR_FROM_JSON(LineName, lineName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->groupCode_ == nullptr && this->groupName_ == nullptr && this->lineCode_ == nullptr && this->lineName_ == nullptr && this->status_ == nullptr; };
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


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Line& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The code of the parent line. No value is returned if no parent line exists.
        shared_ptr<string> fatherCode_ {};
        // The group number of the DNS request source.
        shared_ptr<string> groupCode_ {};
        // The group name of the DNS request source.
        shared_ptr<string> groupName_ {};
        // The code of the DNS request source.
        shared_ptr<string> lineCode_ {};
        // The name of the DNS request source.
        shared_ptr<string> lineName_ {};
        // The state of the line. Valid values:
        // 
        // *   **FORBIDDEN**: The line is unavailable.
        // *   **OPTIONAL**: The line is available.
        shared_ptr<string> status_ {};
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

    class AddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(AddrPool, addrPool_);
      };
      friend void from_json(const Darabonba::Json& j, AddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AddrPool, addrPool_);
      };
      AddrPools() = default ;
      AddrPools(const AddrPools &) = default ;
      AddrPools(AddrPools &&) = default ;
      AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddrPools() = default ;
      AddrPools& operator=(const AddrPools &) = default ;
      AddrPools& operator=(AddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_TO_JSON(AddrPoolName, addrPoolName_);
        };
        friend void from_json(const Darabonba::Json& j, AddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
          DARABONBA_PTR_FROM_JSON(AddrPoolName, addrPoolName_);
        };
        AddrPool() = default ;
        AddrPool(const AddrPool &) = default ;
        AddrPool(AddrPool &&) = default ;
        AddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddrPool() = default ;
        AddrPool& operator=(const AddrPool &) = default ;
        AddrPool& operator=(AddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && this->addrPoolName_ == nullptr; };
        // addrPoolId Field Functions 
        bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
        void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
        inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
        inline AddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


        // addrPoolName Field Functions 
        bool hasAddrPoolName() const { return this->addrPoolName_ != nullptr;};
        void deleteAddrPoolName() { this->addrPoolName_ = nullptr;};
        inline string getAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(addrPoolName_, "") };
        inline AddrPool& setAddrPoolName(string addrPoolName) { DARABONBA_PTR_SET_VALUE(addrPoolName_, addrPoolName) };


      protected:
        // The ID of the address pool.
        shared_ptr<string> addrPoolId_ {};
        // The name of the address pool.
        shared_ptr<string> addrPoolName_ {};
      };

      virtual bool empty() const override { return this->addrPool_ == nullptr; };
      // addrPool Field Functions 
      bool hasAddrPool() const { return this->addrPool_ != nullptr;};
      void deleteAddrPool() { this->addrPool_ = nullptr;};
      inline const vector<AddrPools::AddrPool> & getAddrPool() const { DARABONBA_PTR_GET_CONST(addrPool_, vector<AddrPools::AddrPool>) };
      inline vector<AddrPools::AddrPool> getAddrPool() { DARABONBA_PTR_GET(addrPool_, vector<AddrPools::AddrPool>) };
      inline AddrPools& setAddrPool(const vector<AddrPools::AddrPool> & addrPool) { DARABONBA_PTR_SET_VALUE(addrPool_, addrPool) };
      inline AddrPools& setAddrPool(vector<AddrPools::AddrPool> && addrPool) { DARABONBA_PTR_SET_RVALUE(addrPool_, addrPool) };


    protected:
      shared_ptr<vector<AddrPools::AddrPool>> addrPool_ {};
    };

    virtual bool empty() const override { return this->addrPools_ == nullptr
        && this->lines_ == nullptr && this->requestId_ == nullptr && this->suggestSetDefaultLine_ == nullptr; };
    // addrPools Field Functions 
    bool hasAddrPools() const { return this->addrPools_ != nullptr;};
    void deleteAddrPools() { this->addrPools_ = nullptr;};
    inline const DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools & getAddrPools() const { DARABONBA_PTR_GET_CONST(addrPools_, DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools getAddrPools() { DARABONBA_PTR_GET(addrPools_, DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setAddrPools(const DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools & addrPools) { DARABONBA_PTR_SET_VALUE(addrPools_, addrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setAddrPools(DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools && addrPools) { DARABONBA_PTR_SET_RVALUE(addrPools_, addrPools) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines & getLines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines getLines() { DARABONBA_PTR_GET(lines_, DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setLines(const DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setLines(DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestSetDefaultLine Field Functions 
    bool hasSuggestSetDefaultLine() const { return this->suggestSetDefaultLine_ != nullptr;};
    void deleteSuggestSetDefaultLine() { this->suggestSetDefaultLine_ = nullptr;};
    inline bool getSuggestSetDefaultLine() const { DARABONBA_PTR_GET_DEFAULT(suggestSetDefaultLine_, false) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setSuggestSetDefaultLine(bool suggestSetDefaultLine) { DARABONBA_PTR_SET_VALUE(suggestSetDefaultLine_, suggestSetDefaultLine) };


  protected:
    // The address pools.
    shared_ptr<DescribeGtmAccessStrategyAvailableConfigResponseBody::AddrPools> addrPools_ {};
    // The Domain Name System (DNS) request sources.
    shared_ptr<DescribeGtmAccessStrategyAvailableConfigResponseBody::Lines> lines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the global line is recommended.
    shared_ptr<bool> suggestSetDefaultLine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
