// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeCustomLinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomLinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomLines, customLines_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomLinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomLines, customLines_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeCustomLinesResponseBody() = default ;
    DescribeCustomLinesResponseBody(const DescribeCustomLinesResponseBody &) = default ;
    DescribeCustomLinesResponseBody(DescribeCustomLinesResponseBody &&) = default ;
    DescribeCustomLinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomLinesResponseBody() = default ;
    DescribeCustomLinesResponseBody& operator=(const DescribeCustomLinesResponseBody &) = default ;
    DescribeCustomLinesResponseBody& operator=(DescribeCustomLinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomLines& obj) { 
        DARABONBA_PTR_TO_JSON(CustomLine, customLine_);
      };
      friend void from_json(const Darabonba::Json& j, CustomLines& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomLine, customLine_);
      };
      CustomLines() = default ;
      CustomLines(const CustomLines &) = default ;
      CustomLines(CustomLines &&) = default ;
      CustomLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomLines() = default ;
      CustomLines& operator=(const CustomLines &) = default ;
      CustomLines& operator=(CustomLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomLine& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_TO_JSON(DnsCategory, dnsCategory_);
          DARABONBA_PTR_TO_JSON(Ipv4s, ipv4s_);
          DARABONBA_PTR_TO_JSON(LineId, lineId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, CustomLine& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_FROM_JSON(DnsCategory, dnsCategory_);
          DARABONBA_PTR_FROM_JSON(Ipv4s, ipv4s_);
          DARABONBA_PTR_FROM_JSON(LineId, lineId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        CustomLine() = default ;
        CustomLine(const CustomLine &) = default ;
        CustomLine(CustomLine &&) = default ;
        CustomLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomLine() = default ;
        CustomLine& operator=(const CustomLine &) = default ;
        CustomLine& operator=(CustomLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ipv4s : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv4s& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv4s& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
          };
          Ipv4s() = default ;
          Ipv4s(const Ipv4s &) = default ;
          Ipv4s(Ipv4s &&) = default ;
          Ipv4s(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv4s() = default ;
          Ipv4s& operator=(const Ipv4s &) = default ;
          Ipv4s& operator=(Ipv4s &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipv4_ == nullptr; };
          // ipv4 Field Functions 
          bool hasIpv4() const { return this->ipv4_ != nullptr;};
          void deleteIpv4() { this->ipv4_ = nullptr;};
          inline const vector<string> & getIpv4() const { DARABONBA_PTR_GET_CONST(ipv4_, vector<string>) };
          inline vector<string> getIpv4() { DARABONBA_PTR_GET(ipv4_, vector<string>) };
          inline Ipv4s& setIpv4(const vector<string> & ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };
          inline Ipv4s& setIpv4(vector<string> && ipv4) { DARABONBA_PTR_SET_RVALUE(ipv4_, ipv4) };


        protected:
          shared_ptr<vector<string>> ipv4_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorSubType_ == nullptr && this->creatorType_ == nullptr && this->dnsCategory_ == nullptr
        && this->ipv4s_ == nullptr && this->lineId_ == nullptr && this->name_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CustomLine& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline CustomLine& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline CustomLine& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorSubType Field Functions 
        bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
        void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
        inline string getCreatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
        inline CustomLine& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline CustomLine& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


        // dnsCategory Field Functions 
        bool hasDnsCategory() const { return this->dnsCategory_ != nullptr;};
        void deleteDnsCategory() { this->dnsCategory_ = nullptr;};
        inline string getDnsCategory() const { DARABONBA_PTR_GET_DEFAULT(dnsCategory_, "") };
        inline CustomLine& setDnsCategory(string dnsCategory) { DARABONBA_PTR_SET_VALUE(dnsCategory_, dnsCategory) };


        // ipv4s Field Functions 
        bool hasIpv4s() const { return this->ipv4s_ != nullptr;};
        void deleteIpv4s() { this->ipv4s_ = nullptr;};
        inline const CustomLine::Ipv4s & getIpv4s() const { DARABONBA_PTR_GET_CONST(ipv4s_, CustomLine::Ipv4s) };
        inline CustomLine::Ipv4s getIpv4s() { DARABONBA_PTR_GET(ipv4s_, CustomLine::Ipv4s) };
        inline CustomLine& setIpv4s(const CustomLine::Ipv4s & ipv4s) { DARABONBA_PTR_SET_VALUE(ipv4s_, ipv4s) };
        inline CustomLine& setIpv4s(CustomLine::Ipv4s && ipv4s) { DARABONBA_PTR_SET_RVALUE(ipv4s_, ipv4s) };


        // lineId Field Functions 
        bool hasLineId() const { return this->lineId_ != nullptr;};
        void deleteLineId() { this->lineId_ = nullptr;};
        inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
        inline CustomLine& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomLine& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline CustomLine& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline CustomLine& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        // The time when the custom line was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the custom line was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTimestamp_ {};
        // The creator of the custom line.
        shared_ptr<string> creator_ {};
        // The type of the creator for the custom line. Valid values:
        // 
        // *   CUSTOM: Alibaba Cloud account
        // *   SUB: RAM user
        // *   STS: assumed role that obtains the Security Token Service (STS) token of a RAM role
        // *   OTHER: other roles
        shared_ptr<string> creatorSubType_ {};
        // The role of the creator for the custom line. Valid values:
        // 
        // *   USER: user
        // *   SYSTEM: system
        shared_ptr<string> creatorType_ {};
        shared_ptr<string> dnsCategory_ {};
        // The IPv4 CIDR blocks.
        shared_ptr<CustomLine::Ipv4s> ipv4s_ {};
        // The unique ID of the custom line.
        shared_ptr<string> lineId_ {};
        // The name of the custom line.
        shared_ptr<string> name_ {};
        // The time when the custom line was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> updateTime_ {};
        // The time when the custom line was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->customLine_ == nullptr; };
      // customLine Field Functions 
      bool hasCustomLine() const { return this->customLine_ != nullptr;};
      void deleteCustomLine() { this->customLine_ = nullptr;};
      inline const vector<CustomLines::CustomLine> & getCustomLine() const { DARABONBA_PTR_GET_CONST(customLine_, vector<CustomLines::CustomLine>) };
      inline vector<CustomLines::CustomLine> getCustomLine() { DARABONBA_PTR_GET(customLine_, vector<CustomLines::CustomLine>) };
      inline CustomLines& setCustomLine(const vector<CustomLines::CustomLine> & customLine) { DARABONBA_PTR_SET_VALUE(customLine_, customLine) };
      inline CustomLines& setCustomLine(vector<CustomLines::CustomLine> && customLine) { DARABONBA_PTR_SET_RVALUE(customLine_, customLine) };


    protected:
      shared_ptr<vector<CustomLines::CustomLine>> customLine_ {};
    };

    virtual bool empty() const override { return this->customLines_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // customLines Field Functions 
    bool hasCustomLines() const { return this->customLines_ != nullptr;};
    void deleteCustomLines() { this->customLines_ = nullptr;};
    inline const DescribeCustomLinesResponseBody::CustomLines & getCustomLines() const { DARABONBA_PTR_GET_CONST(customLines_, DescribeCustomLinesResponseBody::CustomLines) };
    inline DescribeCustomLinesResponseBody::CustomLines getCustomLines() { DARABONBA_PTR_GET(customLines_, DescribeCustomLinesResponseBody::CustomLines) };
    inline DescribeCustomLinesResponseBody& setCustomLines(const DescribeCustomLinesResponseBody::CustomLines & customLines) { DARABONBA_PTR_SET_VALUE(customLines_, customLines) };
    inline DescribeCustomLinesResponseBody& setCustomLines(DescribeCustomLinesResponseBody::CustomLines && customLines) { DARABONBA_PTR_SET_RVALUE(customLines_, customLines) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCustomLinesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCustomLinesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomLinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeCustomLinesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeCustomLinesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The custom lines.
    shared_ptr<DescribeCustomLinesResponseBody::CustomLines> customLines_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
