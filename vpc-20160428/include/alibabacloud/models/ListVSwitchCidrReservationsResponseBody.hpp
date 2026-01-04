// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVSwitchCidrReservationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVSwitchCidrReservationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservations, vSwitchCidrReservations_);
    };
    friend void from_json(const Darabonba::Json& j, ListVSwitchCidrReservationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservations, vSwitchCidrReservations_);
    };
    ListVSwitchCidrReservationsResponseBody() = default ;
    ListVSwitchCidrReservationsResponseBody(const ListVSwitchCidrReservationsResponseBody &) = default ;
    ListVSwitchCidrReservationsResponseBody(ListVSwitchCidrReservationsResponseBody &&) = default ;
    ListVSwitchCidrReservationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVSwitchCidrReservationsResponseBody() = default ;
    ListVSwitchCidrReservationsResponseBody& operator=(const ListVSwitchCidrReservationsResponseBody &) = default ;
    ListVSwitchCidrReservationsResponseBody& operator=(ListVSwitchCidrReservationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchCidrReservations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchCidrReservations& obj) { 
        DARABONBA_PTR_TO_JSON(AssignedCidrCount, assignedCidrCount_);
        DARABONBA_PTR_TO_JSON(AvailableCidrCount, availableCidrCount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
        DARABONBA_PTR_TO_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
        DARABONBA_PTR_TO_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
        DARABONBA_PTR_TO_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchCidrReservations& obj) { 
        DARABONBA_PTR_FROM_JSON(AssignedCidrCount, assignedCidrCount_);
        DARABONBA_PTR_FROM_JSON(AvailableCidrCount, availableCidrCount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
        DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
        DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationId, vSwitchCidrReservationId_);
        DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      VSwitchCidrReservations() = default ;
      VSwitchCidrReservations(const VSwitchCidrReservations &) = default ;
      VSwitchCidrReservations(VSwitchCidrReservations &&) = default ;
      VSwitchCidrReservations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchCidrReservations() = default ;
      VSwitchCidrReservations& operator=(const VSwitchCidrReservations &) = default ;
      VSwitchCidrReservations& operator=(VSwitchCidrReservations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->assignedCidrCount_ == nullptr
        && this->availableCidrCount_ == nullptr && this->creationTime_ == nullptr && this->ipVersion_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr && this->vSwitchCidrReservationCidr_ == nullptr && this->vSwitchCidrReservationDescription_ == nullptr && this->vSwitchCidrReservationId_ == nullptr && this->vSwitchCidrReservationName_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // assignedCidrCount Field Functions 
      bool hasAssignedCidrCount() const { return this->assignedCidrCount_ != nullptr;};
      void deleteAssignedCidrCount() { this->assignedCidrCount_ = nullptr;};
      inline int32_t getAssignedCidrCount() const { DARABONBA_PTR_GET_DEFAULT(assignedCidrCount_, 0) };
      inline VSwitchCidrReservations& setAssignedCidrCount(int32_t assignedCidrCount) { DARABONBA_PTR_SET_VALUE(assignedCidrCount_, assignedCidrCount) };


      // availableCidrCount Field Functions 
      bool hasAvailableCidrCount() const { return this->availableCidrCount_ != nullptr;};
      void deleteAvailableCidrCount() { this->availableCidrCount_ = nullptr;};
      inline int32_t getAvailableCidrCount() const { DARABONBA_PTR_GET_DEFAULT(availableCidrCount_, 0) };
      inline VSwitchCidrReservations& setAvailableCidrCount(int32_t availableCidrCount) { DARABONBA_PTR_SET_VALUE(availableCidrCount_, availableCidrCount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VSwitchCidrReservations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline VSwitchCidrReservations& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VSwitchCidrReservations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<VSwitchCidrReservations::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<VSwitchCidrReservations::Tags>) };
      inline vector<VSwitchCidrReservations::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<VSwitchCidrReservations::Tags>) };
      inline VSwitchCidrReservations& setTags(const vector<VSwitchCidrReservations::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline VSwitchCidrReservations& setTags(vector<VSwitchCidrReservations::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VSwitchCidrReservations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vSwitchCidrReservationCidr Field Functions 
      bool hasVSwitchCidrReservationCidr() const { return this->vSwitchCidrReservationCidr_ != nullptr;};
      void deleteVSwitchCidrReservationCidr() { this->vSwitchCidrReservationCidr_ = nullptr;};
      inline string getVSwitchCidrReservationCidr() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationCidr_, "") };
      inline VSwitchCidrReservations& setVSwitchCidrReservationCidr(string vSwitchCidrReservationCidr) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationCidr_, vSwitchCidrReservationCidr) };


      // vSwitchCidrReservationDescription Field Functions 
      bool hasVSwitchCidrReservationDescription() const { return this->vSwitchCidrReservationDescription_ != nullptr;};
      void deleteVSwitchCidrReservationDescription() { this->vSwitchCidrReservationDescription_ = nullptr;};
      inline string getVSwitchCidrReservationDescription() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationDescription_, "") };
      inline VSwitchCidrReservations& setVSwitchCidrReservationDescription(string vSwitchCidrReservationDescription) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationDescription_, vSwitchCidrReservationDescription) };


      // vSwitchCidrReservationId Field Functions 
      bool hasVSwitchCidrReservationId() const { return this->vSwitchCidrReservationId_ != nullptr;};
      void deleteVSwitchCidrReservationId() { this->vSwitchCidrReservationId_ = nullptr;};
      inline string getVSwitchCidrReservationId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationId_, "") };
      inline VSwitchCidrReservations& setVSwitchCidrReservationId(string vSwitchCidrReservationId) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationId_, vSwitchCidrReservationId) };


      // vSwitchCidrReservationName Field Functions 
      bool hasVSwitchCidrReservationName() const { return this->vSwitchCidrReservationName_ != nullptr;};
      void deleteVSwitchCidrReservationName() { this->vSwitchCidrReservationName_ = nullptr;};
      inline string getVSwitchCidrReservationName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationName_, "") };
      inline VSwitchCidrReservations& setVSwitchCidrReservationName(string vSwitchCidrReservationName) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationName_, vSwitchCidrReservationName) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline VSwitchCidrReservations& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VSwitchCidrReservations& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The number of used prefixes in the reserved CIDR block.
      shared_ptr<int32_t> assignedCidrCount_ {};
      // The number of available prefixes in the reserved CIDR block.
      shared_ptr<int32_t> availableCidrCount_ {};
      // The time when the reserved CIDR block was created.
      shared_ptr<string> creationTime_ {};
      // The IP version of the reserved CIDR block. Valid values:
      // 
      // *   **IPv4** (default)
      // *   **IPv6**
      shared_ptr<string> ipVersion_ {};
      // The status of the reserved CIDR block. Valid values:
      // 
      // *   **Assigning**
      // *   **Assigned**
      // *   **Releasing**
      // *   **Released**
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<VSwitchCidrReservations::Tags>> tags_ {};
      // The type of the reserved CIDR block. Valid value: **prefix**. CIDR blocks are allocated from the reserved CIDR block.
      shared_ptr<string> type_ {};
      // The reserved CIDR block.
      shared_ptr<string> vSwitchCidrReservationCidr_ {};
      // The description of the reserved CIDR block.
      shared_ptr<string> vSwitchCidrReservationDescription_ {};
      // The ID of the reserved CIDR block.
      shared_ptr<string> vSwitchCidrReservationId_ {};
      // The name of the reserved CIDR block.
      shared_ptr<string> vSwitchCidrReservationName_ {};
      // The ID of the vSwitch to which the reserved CIDR block belongs.
      shared_ptr<string> vSwitchId_ {};
      // The virtual private cloud (VPC) to which the reserved CIDR block belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vSwitchCidrReservations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListVSwitchCidrReservationsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVSwitchCidrReservationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVSwitchCidrReservationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVSwitchCidrReservationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchCidrReservations Field Functions 
    bool hasVSwitchCidrReservations() const { return this->vSwitchCidrReservations_ != nullptr;};
    void deleteVSwitchCidrReservations() { this->vSwitchCidrReservations_ = nullptr;};
    inline const vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations> & getVSwitchCidrReservations() const { DARABONBA_PTR_GET_CONST(vSwitchCidrReservations_, vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations>) };
    inline vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations> getVSwitchCidrReservations() { DARABONBA_PTR_GET(vSwitchCidrReservations_, vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations>) };
    inline ListVSwitchCidrReservationsResponseBody& setVSwitchCidrReservations(const vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations> & vSwitchCidrReservations) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservations_, vSwitchCidrReservations) };
    inline ListVSwitchCidrReservationsResponseBody& setVSwitchCidrReservations(vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations> && vSwitchCidrReservations) { DARABONBA_PTR_SET_RVALUE(vSwitchCidrReservations_, vSwitchCidrReservations) };


  protected:
    // The number of entries to return per page.
    shared_ptr<int64_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // A list of reserved CIDR blocks.
    shared_ptr<vector<ListVSwitchCidrReservationsResponseBody::VSwitchCidrReservations>> vSwitchCidrReservations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
