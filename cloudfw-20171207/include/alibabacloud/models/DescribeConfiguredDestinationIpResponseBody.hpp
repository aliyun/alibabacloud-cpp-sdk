// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDestinationIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Destinations, destinations_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConfiguredDestinationIPResponseBody() = default ;
    DescribeConfiguredDestinationIPResponseBody(const DescribeConfiguredDestinationIPResponseBody &) = default ;
    DescribeConfiguredDestinationIPResponseBody(DescribeConfiguredDestinationIPResponseBody &&) = default ;
    DescribeConfiguredDestinationIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDestinationIPResponseBody() = default ;
    DescribeConfiguredDestinationIPResponseBody& operator=(const DescribeConfiguredDestinationIPResponseBody &) = default ;
    DescribeConfiguredDestinationIPResponseBody& operator=(DescribeConfiguredDestinationIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Destinations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Destinations& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DestinationIP, destinationIP_);
        DARABONBA_PTR_TO_JSON(DestinationISP, destinationISP_);
        DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      };
      friend void from_json(const Darabonba::Json& j, Destinations& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DestinationIP, destinationIP_);
        DARABONBA_PTR_FROM_JSON(DestinationISP, destinationISP_);
        DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      };
      Destinations() = default ;
      Destinations(const Destinations &) = default ;
      Destinations(Destinations &&) = default ;
      Destinations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Destinations() = default ;
      Destinations& operator=(const Destinations &) = default ;
      Destinations& operator=(Destinations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->destinationIP_ == nullptr && this->destinationISP_ == nullptr && this->destinationRegion_ == nullptr && this->operationTime_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Destinations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // destinationIP Field Functions 
      bool hasDestinationIP() const { return this->destinationIP_ != nullptr;};
      void deleteDestinationIP() { this->destinationIP_ = nullptr;};
      inline string getDestinationIP() const { DARABONBA_PTR_GET_DEFAULT(destinationIP_, "") };
      inline Destinations& setDestinationIP(string destinationIP) { DARABONBA_PTR_SET_VALUE(destinationIP_, destinationIP) };


      // destinationISP Field Functions 
      bool hasDestinationISP() const { return this->destinationISP_ != nullptr;};
      void deleteDestinationISP() { this->destinationISP_ = nullptr;};
      inline string getDestinationISP() const { DARABONBA_PTR_GET_DEFAULT(destinationISP_, "") };
      inline Destinations& setDestinationISP(string destinationISP) { DARABONBA_PTR_SET_VALUE(destinationISP_, destinationISP) };


      // destinationRegion Field Functions 
      bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
      void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
      inline string getDestinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
      inline Destinations& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline int32_t getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, 0) };
      inline Destinations& setOperationTime(int32_t operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<string> destinationIP_ {};
      shared_ptr<string> destinationISP_ {};
      shared_ptr<string> destinationRegion_ {};
      shared_ptr<int32_t> operationTime_ {};
    };

    virtual bool empty() const override { return this->destinations_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<DescribeConfiguredDestinationIPResponseBody::Destinations> & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<DescribeConfiguredDestinationIPResponseBody::Destinations>) };
    inline vector<DescribeConfiguredDestinationIPResponseBody::Destinations> getDestinations() { DARABONBA_PTR_GET(destinations_, vector<DescribeConfiguredDestinationIPResponseBody::Destinations>) };
    inline DescribeConfiguredDestinationIPResponseBody& setDestinations(const vector<DescribeConfiguredDestinationIPResponseBody::Destinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline DescribeConfiguredDestinationIPResponseBody& setDestinations(vector<DescribeConfiguredDestinationIPResponseBody::Destinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfiguredDestinationIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeConfiguredDestinationIPResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeConfiguredDestinationIPResponseBody::Destinations>> destinations_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
