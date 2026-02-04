// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSBYSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainsBySourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainsBySourceResponseBody() = default ;
    DescribeDcdnDomainsBySourceResponseBody(const DescribeDcdnDomainsBySourceResponseBody &) = default ;
    DescribeDcdnDomainsBySourceResponseBody(DescribeDcdnDomainsBySourceResponseBody &&) = default ;
    DescribeDcdnDomainsBySourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainsBySourceResponseBody() = default ;
    DescribeDcdnDomainsBySourceResponseBody& operator=(const DescribeDcdnDomainsBySourceResponseBody &) = default ;
    DescribeDcdnDomainsBySourceResponseBody& operator=(DescribeDcdnDomainsBySourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DomainList, domainList_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      DomainInfo() = default ;
      DomainInfo(const DomainInfo &) = default ;
      DomainInfo(DomainInfo &&) = default ;
      DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfo() = default ;
      DomainInfo& operator=(const DomainInfo &) = default ;
      DomainInfo& operator=(DomainInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainCname, domainCname_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, DomainList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainCname, domainCname_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        DomainList() = default ;
        DomainList(const DomainList &) = default ;
        DomainList(DomainList &&) = default ;
        DomainList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainList() = default ;
        DomainList& operator=(const DomainList &) = default ;
        DomainList& operator=(DomainList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainCname_ == nullptr && this->domainName_ == nullptr && this->domainType_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DomainList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainCname Field Functions 
        bool hasDomainCname() const { return this->domainCname_ != nullptr;};
        void deleteDomainCname() { this->domainCname_ = nullptr;};
        inline string getDomainCname() const { DARABONBA_PTR_GET_DEFAULT(domainCname_, "") };
        inline DomainList& setDomainCname(string domainCname) { DARABONBA_PTR_SET_VALUE(domainCname_, domainCname) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainType Field Functions 
        bool hasDomainType() const { return this->domainType_ != nullptr;};
        void deleteDomainType() { this->domainType_ = nullptr;};
        inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
        inline DomainList& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DomainList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline DomainList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The CNAME record assigned to the domain name.
        shared_ptr<string> domainCname_ {};
        // The accelerated domain name.
        shared_ptr<string> domainName_ {};
        // The workload type of the accelerated domain name. Valid value:
        // 
        // *   **ipa**: layer 4 acceleration
        // *   **dynamic**: layer 7 acceleration
        shared_ptr<string> domainType_ {};
        // The status of the domain name. Valid value:
        // 
        // *   **applying**: The domain name is under review.
        // *   **configuring**: The domain name is being configured.
        // *   **online**: The domain name is working as expected.
        // *   **stopping**: The domain name is being stopped.
        // *   **offline**: The domain name is disabled.
        // *   **disabling**: The domain name is being removed.
        shared_ptr<string> status_ {};
        // The time when the domain name was updated.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->domainList_ == nullptr
        && this->source_ == nullptr; };
      // domainList Field Functions 
      bool hasDomainList() const { return this->domainList_ != nullptr;};
      void deleteDomainList() { this->domainList_ = nullptr;};
      inline const vector<DomainInfo::DomainList> & getDomainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<DomainInfo::DomainList>) };
      inline vector<DomainInfo::DomainList> getDomainList() { DARABONBA_PTR_GET(domainList_, vector<DomainInfo::DomainList>) };
      inline DomainInfo& setDomainList(const vector<DomainInfo::DomainList> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
      inline DomainInfo& setDomainList(vector<DomainInfo::DomainList> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline DomainInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The information about the domain names.
      shared_ptr<vector<DomainInfo::DomainList>> domainList_ {};
      // The origin server.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->domainInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo> & getDomainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo>) };
    inline vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo> getDomainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo>) };
    inline DescribeDcdnDomainsBySourceResponseBody& setDomainInfo(const vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline DescribeDcdnDomainsBySourceResponseBody& setDomainInfo(vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainsBySourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about each origin server and the corresponding domain names.
    // 
    // This parameter is required.
    shared_ptr<vector<DescribeDcdnDomainsBySourceResponseBody::DomainInfo>> domainInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
