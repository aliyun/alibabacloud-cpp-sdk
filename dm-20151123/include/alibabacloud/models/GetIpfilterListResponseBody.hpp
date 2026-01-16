// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODY_HPP_
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
  class GetIpfilterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpfilterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpfilterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    GetIpfilterListResponseBody() = default ;
    GetIpfilterListResponseBody(const GetIpfilterListResponseBody &) = default ;
    GetIpfilterListResponseBody(GetIpfilterListResponseBody &&) = default ;
    GetIpfilterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpfilterListResponseBody() = default ;
    GetIpfilterListResponseBody& operator=(const GetIpfilterListResponseBody &) = default ;
    GetIpfilterListResponseBody& operator=(GetIpfilterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ipfilters, ipfilters_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ipfilters, ipfilters_);
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
      class Ipfilters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipfilters& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        };
        friend void from_json(const Darabonba::Json& j, Ipfilters& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        };
        Ipfilters() = default ;
        Ipfilters(const Ipfilters &) = default ;
        Ipfilters(Ipfilters &&) = default ;
        Ipfilters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipfilters() = default ;
        Ipfilters& operator=(const Ipfilters &) = default ;
        Ipfilters& operator=(Ipfilters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->ipAddress_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Ipfilters& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Ipfilters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline Ipfilters& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      protected:
        // timestamp
        shared_ptr<string> createTime_ {};
        // Record ID
        shared_ptr<string> id_ {};
        // IP address/IP range/IP segment
        shared_ptr<string> ipAddress_ {};
      };

      virtual bool empty() const override { return this->ipfilters_ == nullptr; };
      // ipfilters Field Functions 
      bool hasIpfilters() const { return this->ipfilters_ != nullptr;};
      void deleteIpfilters() { this->ipfilters_ = nullptr;};
      inline const vector<Data::Ipfilters> & getIpfilters() const { DARABONBA_PTR_GET_CONST(ipfilters_, vector<Data::Ipfilters>) };
      inline vector<Data::Ipfilters> getIpfilters() { DARABONBA_PTR_GET(ipfilters_, vector<Data::Ipfilters>) };
      inline Data& setIpfilters(const vector<Data::Ipfilters> & ipfilters) { DARABONBA_PTR_SET_VALUE(ipfilters_, ipfilters) };
      inline Data& setIpfilters(vector<Data::Ipfilters> && ipfilters) { DARABONBA_PTR_SET_RVALUE(ipfilters_, ipfilters) };


    protected:
      shared_ptr<vector<Data::Ipfilters>> ipfilters_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetIpfilterListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetIpfilterListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpfilterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetIpfilterListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIpfilterListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIpfilterListResponseBody::Data) };
    inline GetIpfilterListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIpfilterListResponseBody::Data) };
    inline GetIpfilterListResponseBody& setData(const GetIpfilterListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIpfilterListResponseBody& setData(GetIpfilterListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Current page number
    shared_ptr<int32_t> pageNumber_ {};
    // Number of items per page
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // Data records
    shared_ptr<GetIpfilterListResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
