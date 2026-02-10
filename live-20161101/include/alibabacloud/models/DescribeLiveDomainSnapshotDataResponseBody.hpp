// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSNAPSHOTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainSnapshotDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDataInfos, snapshotDataInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainSnapshotDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDataInfos, snapshotDataInfos_);
    };
    DescribeLiveDomainSnapshotDataResponseBody() = default ;
    DescribeLiveDomainSnapshotDataResponseBody(const DescribeLiveDomainSnapshotDataResponseBody &) = default ;
    DescribeLiveDomainSnapshotDataResponseBody(DescribeLiveDomainSnapshotDataResponseBody &&) = default ;
    DescribeLiveDomainSnapshotDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainSnapshotDataResponseBody() = default ;
    DescribeLiveDomainSnapshotDataResponseBody& operator=(const DescribeLiveDomainSnapshotDataResponseBody &) = default ;
    DescribeLiveDomainSnapshotDataResponseBody& operator=(DescribeLiveDomainSnapshotDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotDataInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotDataInfos& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotDataInfo, snapshotDataInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotDataInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotDataInfo, snapshotDataInfo_);
      };
      SnapshotDataInfos() = default ;
      SnapshotDataInfos(const SnapshotDataInfos &) = default ;
      SnapshotDataInfos(SnapshotDataInfos &&) = default ;
      SnapshotDataInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotDataInfos() = default ;
      SnapshotDataInfos& operator=(const SnapshotDataInfos &) = default ;
      SnapshotDataInfos& operator=(SnapshotDataInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotDataInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotDataInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotDataInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        SnapshotDataInfo() = default ;
        SnapshotDataInfo(const SnapshotDataInfo &) = default ;
        SnapshotDataInfo(SnapshotDataInfo &&) = default ;
        SnapshotDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotDataInfo() = default ;
        SnapshotDataInfo& operator=(const SnapshotDataInfo &) = default ;
        SnapshotDataInfo& operator=(SnapshotDataInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->total_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline SnapshotDataInfo& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline SnapshotDataInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<int32_t> total_ {};
      };

      virtual bool empty() const override { return this->snapshotDataInfo_ == nullptr; };
      // snapshotDataInfo Field Functions 
      bool hasSnapshotDataInfo() const { return this->snapshotDataInfo_ != nullptr;};
      void deleteSnapshotDataInfo() { this->snapshotDataInfo_ = nullptr;};
      inline const vector<SnapshotDataInfos::SnapshotDataInfo> & getSnapshotDataInfo() const { DARABONBA_PTR_GET_CONST(snapshotDataInfo_, vector<SnapshotDataInfos::SnapshotDataInfo>) };
      inline vector<SnapshotDataInfos::SnapshotDataInfo> getSnapshotDataInfo() { DARABONBA_PTR_GET(snapshotDataInfo_, vector<SnapshotDataInfos::SnapshotDataInfo>) };
      inline SnapshotDataInfos& setSnapshotDataInfo(const vector<SnapshotDataInfos::SnapshotDataInfo> & snapshotDataInfo) { DARABONBA_PTR_SET_VALUE(snapshotDataInfo_, snapshotDataInfo) };
      inline SnapshotDataInfos& setSnapshotDataInfo(vector<SnapshotDataInfos::SnapshotDataInfo> && snapshotDataInfo) { DARABONBA_PTR_SET_RVALUE(snapshotDataInfo_, snapshotDataInfo) };


    protected:
      shared_ptr<vector<SnapshotDataInfos::SnapshotDataInfo>> snapshotDataInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotDataInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainSnapshotDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDataInfos Field Functions 
    bool hasSnapshotDataInfos() const { return this->snapshotDataInfos_ != nullptr;};
    void deleteSnapshotDataInfos() { this->snapshotDataInfos_ = nullptr;};
    inline const DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos & getSnapshotDataInfos() const { DARABONBA_PTR_GET_CONST(snapshotDataInfos_, DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos getSnapshotDataInfos() { DARABONBA_PTR_GET(snapshotDataInfos_, DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBody& setSnapshotDataInfos(const DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos & snapshotDataInfos) { DARABONBA_PTR_SET_VALUE(snapshotDataInfos_, snapshotDataInfos) };
    inline DescribeLiveDomainSnapshotDataResponseBody& setSnapshotDataInfos(DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos && snapshotDataInfos) { DARABONBA_PTR_SET_RVALUE(snapshotDataInfos_, snapshotDataInfos) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeLiveDomainSnapshotDataResponseBody::SnapshotDataInfos> snapshotDataInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
