// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSUDPIPSEGMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSUDPIPSEGMENTSRESPONSEBODY_HPP_
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
  class DescribePdnsUdpIpSegmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsUdpIpSegmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsUdpIpSegmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribePdnsUdpIpSegmentsResponseBody() = default ;
    DescribePdnsUdpIpSegmentsResponseBody(const DescribePdnsUdpIpSegmentsResponseBody &) = default ;
    DescribePdnsUdpIpSegmentsResponseBody(DescribePdnsUdpIpSegmentsResponseBody &&) = default ;
    DescribePdnsUdpIpSegmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsUdpIpSegmentsResponseBody() = default ;
    DescribePdnsUdpIpSegmentsResponseBody& operator=(const DescribePdnsUdpIpSegmentsResponseBody &) = default ;
    DescribePdnsUdpIpSegmentsResponseBody& operator=(DescribePdnsUdpIpSegmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpSegments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSegments& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, IpSegments& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      IpSegments() = default ;
      IpSegments(const IpSegments &) = default ;
      IpSegments(IpSegments &&) = default ;
      IpSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSegments() = default ;
      IpSegments& operator=(const IpSegments &) = default ;
      IpSegments& operator=(IpSegments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->createTimestamp_ == nullptr && this->id_ == nullptr && this->ip_ == nullptr && this->mask_ == nullptr && this->name_ == nullptr
        && this->secretKey_ == nullptr && this->state_ == nullptr && this->updateDate_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline IpSegments& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline IpSegments& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline IpSegments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpSegments& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline int64_t getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, 0L) };
      inline IpSegments& setMask(int64_t mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline IpSegments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // secretKey Field Functions 
      bool hasSecretKey() const { return this->secretKey_ != nullptr;};
      void deleteSecretKey() { this->secretKey_ = nullptr;};
      inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
      inline IpSegments& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline IpSegments& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline IpSegments& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      shared_ptr<string> createDate_ {};
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<int64_t> mask_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> secretKey_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->ipSegments_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPages_ == nullptr; };
    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline const vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments> & getIpSegments() const { DARABONBA_PTR_GET_CONST(ipSegments_, vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments>) };
    inline vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments> getIpSegments() { DARABONBA_PTR_GET(ipSegments_, vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments>) };
    inline DescribePdnsUdpIpSegmentsResponseBody& setIpSegments(const vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments> & ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };
    inline DescribePdnsUdpIpSegmentsResponseBody& setIpSegments(vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments> && ipSegments) { DARABONBA_PTR_SET_RVALUE(ipSegments_, ipSegments) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsUdpIpSegmentsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsUdpIpSegmentsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsUdpIpSegmentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline string getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBody& setTotalPages(string totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<vector<DescribePdnsUdpIpSegmentsResponseBody::IpSegments>> ipSegments_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
