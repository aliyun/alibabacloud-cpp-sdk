// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINESRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpSegmentList, ipSegmentList_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CustomLines& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpSegmentList, ipSegmentList_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      class IpSegmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpSegmentList& obj) { 
          DARABONBA_PTR_TO_JSON(EndIp, endIp_);
          DARABONBA_PTR_TO_JSON(StartIp, startIp_);
        };
        friend void from_json(const Darabonba::Json& j, IpSegmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
          DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
        };
        IpSegmentList() = default ;
        IpSegmentList(const IpSegmentList &) = default ;
        IpSegmentList(IpSegmentList &&) = default ;
        IpSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpSegmentList() = default ;
        IpSegmentList& operator=(const IpSegmentList &) = default ;
        IpSegmentList& operator=(IpSegmentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endIp_ == nullptr
        && this->startIp_ == nullptr; };
        // endIp Field Functions 
        bool hasEndIp() const { return this->endIp_ != nullptr;};
        void deleteEndIp() { this->endIp_ = nullptr;};
        inline string getEndIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
        inline IpSegmentList& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


        // startIp Field Functions 
        bool hasStartIp() const { return this->startIp_ != nullptr;};
        void deleteStartIp() { this->startIp_ = nullptr;};
        inline string getStartIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
        inline IpSegmentList& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


      protected:
        shared_ptr<string> endIp_ {};
        shared_ptr<string> startIp_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->ipSegmentList_ == nullptr && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline CustomLines& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline CustomLines& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipSegmentList Field Functions 
      bool hasIpSegmentList() const { return this->ipSegmentList_ != nullptr;};
      void deleteIpSegmentList() { this->ipSegmentList_ = nullptr;};
      inline const vector<CustomLines::IpSegmentList> & getIpSegmentList() const { DARABONBA_PTR_GET_CONST(ipSegmentList_, vector<CustomLines::IpSegmentList>) };
      inline vector<CustomLines::IpSegmentList> getIpSegmentList() { DARABONBA_PTR_GET(ipSegmentList_, vector<CustomLines::IpSegmentList>) };
      inline CustomLines& setIpSegmentList(const vector<CustomLines::IpSegmentList> & ipSegmentList) { DARABONBA_PTR_SET_VALUE(ipSegmentList_, ipSegmentList) };
      inline CustomLines& setIpSegmentList(vector<CustomLines::IpSegmentList> && ipSegmentList) { DARABONBA_PTR_SET_RVALUE(ipSegmentList_, ipSegmentList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomLines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The code of the custom line.
      shared_ptr<string> code_ {};
      // The unique ID of the custom line.
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<CustomLines::IpSegmentList>> ipSegmentList_ {};
      // The name of the custom line.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->customLines_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // customLines Field Functions 
    bool hasCustomLines() const { return this->customLines_ != nullptr;};
    void deleteCustomLines() { this->customLines_ = nullptr;};
    inline const vector<DescribeCustomLinesResponseBody::CustomLines> & getCustomLines() const { DARABONBA_PTR_GET_CONST(customLines_, vector<DescribeCustomLinesResponseBody::CustomLines>) };
    inline vector<DescribeCustomLinesResponseBody::CustomLines> getCustomLines() { DARABONBA_PTR_GET(customLines_, vector<DescribeCustomLinesResponseBody::CustomLines>) };
    inline DescribeCustomLinesResponseBody& setCustomLines(const vector<DescribeCustomLinesResponseBody::CustomLines> & customLines) { DARABONBA_PTR_SET_VALUE(customLines_, customLines) };
    inline DescribeCustomLinesResponseBody& setCustomLines(vector<DescribeCustomLinesResponseBody::CustomLines> && customLines) { DARABONBA_PTR_SET_RVALUE(customLines_, customLines) };


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
    shared_ptr<vector<DescribeCustomLinesResponseBody::CustomLines>> customLines_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of custom lines.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
