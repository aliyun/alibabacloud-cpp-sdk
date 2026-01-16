// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_TO_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_FROM_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    GetTrackListResponseBody() = default ;
    GetTrackListResponseBody(const GetTrackListResponseBody &) = default ;
    GetTrackListResponseBody(GetTrackListResponseBody &&) = default ;
    GetTrackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListResponseBody() = default ;
    GetTrackListResponseBody& operator=(const GetTrackListResponseBody &) = default ;
    GetTrackListResponseBody& operator=(GetTrackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(stat, stat_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(stat, stat_);
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
      class Stat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stat& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(RcptClickCount, rcptClickCount_);
          DARABONBA_PTR_TO_JSON(RcptClickRate, rcptClickRate_);
          DARABONBA_PTR_TO_JSON(RcptOpenCount, rcptOpenCount_);
          DARABONBA_PTR_TO_JSON(RcptOpenRate, rcptOpenRate_);
          DARABONBA_PTR_TO_JSON(RcptUniqueClickCount, rcptUniqueClickCount_);
          DARABONBA_PTR_TO_JSON(RcptUniqueClickRate, rcptUniqueClickRate_);
          DARABONBA_PTR_TO_JSON(RcptUniqueOpenCount, rcptUniqueOpenCount_);
          DARABONBA_PTR_TO_JSON(RcptUniqueOpenRate, rcptUniqueOpenRate_);
          DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Stat& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(RcptClickCount, rcptClickCount_);
          DARABONBA_PTR_FROM_JSON(RcptClickRate, rcptClickRate_);
          DARABONBA_PTR_FROM_JSON(RcptOpenCount, rcptOpenCount_);
          DARABONBA_PTR_FROM_JSON(RcptOpenRate, rcptOpenRate_);
          DARABONBA_PTR_FROM_JSON(RcptUniqueClickCount, rcptUniqueClickCount_);
          DARABONBA_PTR_FROM_JSON(RcptUniqueClickRate, rcptUniqueClickRate_);
          DARABONBA_PTR_FROM_JSON(RcptUniqueOpenCount, rcptUniqueOpenCount_);
          DARABONBA_PTR_FROM_JSON(RcptUniqueOpenRate, rcptUniqueOpenRate_);
          DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
        };
        Stat() = default ;
        Stat(const Stat &) = default ;
        Stat(Stat &&) = default ;
        Stat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stat() = default ;
        Stat& operator=(const Stat &) = default ;
        Stat& operator=(Stat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->rcptClickCount_ == nullptr && this->rcptClickRate_ == nullptr && this->rcptOpenCount_ == nullptr && this->rcptOpenRate_ == nullptr && this->rcptUniqueClickCount_ == nullptr
        && this->rcptUniqueClickRate_ == nullptr && this->rcptUniqueOpenCount_ == nullptr && this->rcptUniqueOpenRate_ == nullptr && this->totalNumber_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Stat& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // rcptClickCount Field Functions 
        bool hasRcptClickCount() const { return this->rcptClickCount_ != nullptr;};
        void deleteRcptClickCount() { this->rcptClickCount_ = nullptr;};
        inline string getRcptClickCount() const { DARABONBA_PTR_GET_DEFAULT(rcptClickCount_, "") };
        inline Stat& setRcptClickCount(string rcptClickCount) { DARABONBA_PTR_SET_VALUE(rcptClickCount_, rcptClickCount) };


        // rcptClickRate Field Functions 
        bool hasRcptClickRate() const { return this->rcptClickRate_ != nullptr;};
        void deleteRcptClickRate() { this->rcptClickRate_ = nullptr;};
        inline string getRcptClickRate() const { DARABONBA_PTR_GET_DEFAULT(rcptClickRate_, "") };
        inline Stat& setRcptClickRate(string rcptClickRate) { DARABONBA_PTR_SET_VALUE(rcptClickRate_, rcptClickRate) };


        // rcptOpenCount Field Functions 
        bool hasRcptOpenCount() const { return this->rcptOpenCount_ != nullptr;};
        void deleteRcptOpenCount() { this->rcptOpenCount_ = nullptr;};
        inline string getRcptOpenCount() const { DARABONBA_PTR_GET_DEFAULT(rcptOpenCount_, "") };
        inline Stat& setRcptOpenCount(string rcptOpenCount) { DARABONBA_PTR_SET_VALUE(rcptOpenCount_, rcptOpenCount) };


        // rcptOpenRate Field Functions 
        bool hasRcptOpenRate() const { return this->rcptOpenRate_ != nullptr;};
        void deleteRcptOpenRate() { this->rcptOpenRate_ = nullptr;};
        inline string getRcptOpenRate() const { DARABONBA_PTR_GET_DEFAULT(rcptOpenRate_, "") };
        inline Stat& setRcptOpenRate(string rcptOpenRate) { DARABONBA_PTR_SET_VALUE(rcptOpenRate_, rcptOpenRate) };


        // rcptUniqueClickCount Field Functions 
        bool hasRcptUniqueClickCount() const { return this->rcptUniqueClickCount_ != nullptr;};
        void deleteRcptUniqueClickCount() { this->rcptUniqueClickCount_ = nullptr;};
        inline string getRcptUniqueClickCount() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueClickCount_, "") };
        inline Stat& setRcptUniqueClickCount(string rcptUniqueClickCount) { DARABONBA_PTR_SET_VALUE(rcptUniqueClickCount_, rcptUniqueClickCount) };


        // rcptUniqueClickRate Field Functions 
        bool hasRcptUniqueClickRate() const { return this->rcptUniqueClickRate_ != nullptr;};
        void deleteRcptUniqueClickRate() { this->rcptUniqueClickRate_ = nullptr;};
        inline string getRcptUniqueClickRate() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueClickRate_, "") };
        inline Stat& setRcptUniqueClickRate(string rcptUniqueClickRate) { DARABONBA_PTR_SET_VALUE(rcptUniqueClickRate_, rcptUniqueClickRate) };


        // rcptUniqueOpenCount Field Functions 
        bool hasRcptUniqueOpenCount() const { return this->rcptUniqueOpenCount_ != nullptr;};
        void deleteRcptUniqueOpenCount() { this->rcptUniqueOpenCount_ = nullptr;};
        inline string getRcptUniqueOpenCount() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueOpenCount_, "") };
        inline Stat& setRcptUniqueOpenCount(string rcptUniqueOpenCount) { DARABONBA_PTR_SET_VALUE(rcptUniqueOpenCount_, rcptUniqueOpenCount) };


        // rcptUniqueOpenRate Field Functions 
        bool hasRcptUniqueOpenRate() const { return this->rcptUniqueOpenRate_ != nullptr;};
        void deleteRcptUniqueOpenRate() { this->rcptUniqueOpenRate_ = nullptr;};
        inline string getRcptUniqueOpenRate() const { DARABONBA_PTR_GET_DEFAULT(rcptUniqueOpenRate_, "") };
        inline Stat& setRcptUniqueOpenRate(string rcptUniqueOpenRate) { DARABONBA_PTR_SET_VALUE(rcptUniqueOpenRate_, rcptUniqueOpenRate) };


        // totalNumber Field Functions 
        bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
        void deleteTotalNumber() { this->totalNumber_ = nullptr;};
        inline string getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, "") };
        inline Stat& setTotalNumber(string totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


      protected:
        // Creation time
        shared_ptr<string> createTime_ {};
        // Click count
        shared_ptr<string> rcptClickCount_ {};
        // Click rate
        shared_ptr<string> rcptClickRate_ {};
        // Number of Opens
        shared_ptr<string> rcptOpenCount_ {};
        // Open rate
        shared_ptr<string> rcptOpenRate_ {};
        // Unique click count
        shared_ptr<string> rcptUniqueClickCount_ {};
        // Unique click rate
        shared_ptr<string> rcptUniqueClickRate_ {};
        // Unique open count
        shared_ptr<string> rcptUniqueOpenCount_ {};
        // Unique open rate
        shared_ptr<string> rcptUniqueOpenRate_ {};
        // Total number
        shared_ptr<string> totalNumber_ {};
      };

      virtual bool empty() const override { return this->stat_ == nullptr; };
      // stat Field Functions 
      bool hasStat() const { return this->stat_ != nullptr;};
      void deleteStat() { this->stat_ = nullptr;};
      inline const vector<Data::Stat> & getStat() const { DARABONBA_PTR_GET_CONST(stat_, vector<Data::Stat>) };
      inline vector<Data::Stat> getStat() { DARABONBA_PTR_GET(stat_, vector<Data::Stat>) };
      inline Data& setStat(const vector<Data::Stat> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
      inline Data& setStat(vector<Data::Stat> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


    protected:
      shared_ptr<vector<Data::Stat>> stat_ {};
    };

    virtual bool empty() const override { return this->offsetCreateTime_ == nullptr
        && this->offsetCreateTimeDesc_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr
        && this->totalPages_ == nullptr && this->data_ == nullptr; };
    // offsetCreateTime Field Functions 
    bool hasOffsetCreateTime() const { return this->offsetCreateTime_ != nullptr;};
    void deleteOffsetCreateTime() { this->offsetCreateTime_ = nullptr;};
    inline string getOffsetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTime_, "") };
    inline GetTrackListResponseBody& setOffsetCreateTime(string offsetCreateTime) { DARABONBA_PTR_SET_VALUE(offsetCreateTime_, offsetCreateTime) };


    // offsetCreateTimeDesc Field Functions 
    bool hasOffsetCreateTimeDesc() const { return this->offsetCreateTimeDesc_ != nullptr;};
    void deleteOffsetCreateTimeDesc() { this->offsetCreateTimeDesc_ = nullptr;};
    inline string getOffsetCreateTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTimeDesc_, "") };
    inline GetTrackListResponseBody& setOffsetCreateTimeDesc(string offsetCreateTimeDesc) { DARABONBA_PTR_SET_VALUE(offsetCreateTimeDesc_, offsetCreateTimeDesc) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetTrackListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTrackListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetTrackListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline GetTrackListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTrackListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTrackListResponseBody::Data) };
    inline GetTrackListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTrackListResponseBody::Data) };
    inline GetTrackListResponseBody& setData(const GetTrackListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTrackListResponseBody& setData(GetTrackListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. Not set for the first query, but for subsequent queries, it should be set to the value of OffsetCreateTime from the previous response. (This field is deprecated)
    shared_ptr<string> offsetCreateTime_ {};
    // (This field is deprecated)
    shared_ptr<string> offsetCreateTimeDesc_ {};
    // Current page number
    shared_ptr<int32_t> pageNo_ {};
    // Number of items per page
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total number of items
    shared_ptr<int32_t> total_ {};
    shared_ptr<int32_t> totalPages_ {};
    // Tracking data records
    shared_ptr<GetTrackListResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
