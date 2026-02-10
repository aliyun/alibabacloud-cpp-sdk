// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulListPageResponseBody() = default ;
    DescribeVulListPageResponseBody(const DescribeVulListPageResponseBody &) = default ;
    DescribeVulListPageResponseBody(DescribeVulListPageResponseBody &&) = default ;
    DescribeVulListPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListPageResponseBody() = default ;
    DescribeVulListPageResponseBody& operator=(const DescribeVulListPageResponseBody &) = default ;
    DescribeVulListPageResponseBody& operator=(DescribeVulListPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CveId, cveId_);
        DARABONBA_PTR_TO_JSON(ExtAegis, extAegis_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsAegis, isAegis_);
        DARABONBA_PTR_TO_JSON(IsSas, isSas_);
        DARABONBA_PTR_TO_JSON(OtherId, otherId_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CveId, cveId_);
        DARABONBA_PTR_FROM_JSON(ExtAegis, extAegis_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsAegis, isAegis_);
        DARABONBA_PTR_FROM_JSON(IsSas, isSas_);
        DARABONBA_PTR_FROM_JSON(OtherId, otherId_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->cveId_ == nullptr
        && this->extAegis_ == nullptr && this->id_ == nullptr && this->isAegis_ == nullptr && this->isSas_ == nullptr && this->otherId_ == nullptr
        && this->releaseTime_ == nullptr && this->title_ == nullptr; };
      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Data& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // extAegis Field Functions 
      bool hasExtAegis() const { return this->extAegis_ != nullptr;};
      void deleteExtAegis() { this->extAegis_ = nullptr;};
      inline string getExtAegis() const { DARABONBA_PTR_GET_DEFAULT(extAegis_, "") };
      inline Data& setExtAegis(string extAegis) { DARABONBA_PTR_SET_VALUE(extAegis_, extAegis) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isAegis Field Functions 
      bool hasIsAegis() const { return this->isAegis_ != nullptr;};
      void deleteIsAegis() { this->isAegis_ = nullptr;};
      inline int32_t getIsAegis() const { DARABONBA_PTR_GET_DEFAULT(isAegis_, 0) };
      inline Data& setIsAegis(int32_t isAegis) { DARABONBA_PTR_SET_VALUE(isAegis_, isAegis) };


      // isSas Field Functions 
      bool hasIsSas() const { return this->isSas_ != nullptr;};
      void deleteIsSas() { this->isSas_ = nullptr;};
      inline int32_t getIsSas() const { DARABONBA_PTR_GET_DEFAULT(isSas_, 0) };
      inline Data& setIsSas(int32_t isSas) { DARABONBA_PTR_SET_VALUE(isSas_, isSas) };


      // otherId Field Functions 
      bool hasOtherId() const { return this->otherId_ != nullptr;};
      void deleteOtherId() { this->otherId_ = nullptr;};
      inline string getOtherId() const { DARABONBA_PTR_GET_DEFAULT(otherId_, "") };
      inline Data& setOtherId(string otherId) { DARABONBA_PTR_SET_VALUE(otherId_, otherId) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline Data& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The common vulnerabilities and exposures (CVE) ID of the vulnerability.
      shared_ptr<string> cveId_ {};
      // The extended field for Server Guard.
      shared_ptr<string> extAegis_ {};
      // The primary key ID of the database.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the vulnerability was detected based on version comparison. Valid values:
      // 
      // *   1: The vulnerability was detected based on version comparison.
      // *   0: The vulnerability was not detected based on version comparison.
      shared_ptr<int32_t> isAegis_ {};
      // Indicates whether the vulnerability was detected based on proof of concept (POC) verification. Valid values:
      // 
      // *   1: The vulnerability was detected based on POC verification.
      // *   0: The vulnerability was not detected based on POC verification.
      shared_ptr<int32_t> isSas_ {};
      // The ID of the vulnerability.
      shared_ptr<string> otherId_ {};
      // The time when the vulnerability was disclosed.
      shared_ptr<int64_t> releaseTime_ {};
      // The name of the vulnerability.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeVulListPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeVulListPageResponseBody::Data>) };
    inline vector<DescribeVulListPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeVulListPageResponseBody::Data>) };
    inline DescribeVulListPageResponseBody& setData(const vector<DescribeVulListPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVulListPageResponseBody& setData(vector<DescribeVulListPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulListPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulListPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response parameters.
    shared_ptr<vector<DescribeVulListPageResponseBody::Data>> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
