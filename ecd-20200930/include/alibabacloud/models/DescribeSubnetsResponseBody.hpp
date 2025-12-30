// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBNETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSubnetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubnetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Subnets, subnets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubnetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Subnets, subnets_);
    };
    DescribeSubnetsResponseBody() = default ;
    DescribeSubnetsResponseBody(const DescribeSubnetsResponseBody &) = default ;
    DescribeSubnetsResponseBody(DescribeSubnetsResponseBody &&) = default ;
    DescribeSubnetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubnetsResponseBody() = default ;
    DescribeSubnetsResponseBody& operator=(const DescribeSubnetsResponseBody &) = default ;
    DescribeSubnetsResponseBody& operator=(DescribeSubnetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Subnets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subnets& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_TO_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_TO_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Subnets& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Subnets() = default ;
      Subnets(const Subnets &) = default ;
      Subnets(Subnets &&) = default ;
      Subnets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subnets() = default ;
      Subnets& operator=(const Subnets &) = default ;
      Subnets& operator=(Subnets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->name_ == nullptr && this->officeSiteId_ == nullptr && this->status_ == nullptr && this->subnetId_ == nullptr && this->totalEdsCount_ == nullptr
        && this->totalEdsCountForGroup_ == nullptr && this->zoneId_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline Subnets& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Subnets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Subnets& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Subnets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subnetId Field Functions 
      bool hasSubnetId() const { return this->subnetId_ != nullptr;};
      void deleteSubnetId() { this->subnetId_ = nullptr;};
      inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
      inline Subnets& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


      // totalEdsCount Field Functions 
      bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
      void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
      inline int32_t getTotalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0) };
      inline Subnets& setTotalEdsCount(int32_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


      // totalEdsCountForGroup Field Functions 
      bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
      void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
      inline int32_t getTotalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0) };
      inline Subnets& setTotalEdsCountForGroup(int32_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Subnets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> officeSiteId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subnetId_ {};
      shared_ptr<int32_t> totalEdsCount_ {};
      shared_ptr<int32_t> totalEdsCountForGroup_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->subnets_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSubnetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubnetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subnets Field Functions 
    bool hasSubnets() const { return this->subnets_ != nullptr;};
    void deleteSubnets() { this->subnets_ = nullptr;};
    inline const vector<DescribeSubnetsResponseBody::Subnets> & getSubnets() const { DARABONBA_PTR_GET_CONST(subnets_, vector<DescribeSubnetsResponseBody::Subnets>) };
    inline vector<DescribeSubnetsResponseBody::Subnets> getSubnets() { DARABONBA_PTR_GET(subnets_, vector<DescribeSubnetsResponseBody::Subnets>) };
    inline DescribeSubnetsResponseBody& setSubnets(const vector<DescribeSubnetsResponseBody::Subnets> & subnets) { DARABONBA_PTR_SET_VALUE(subnets_, subnets) };
    inline DescribeSubnetsResponseBody& setSubnets(vector<DescribeSubnetsResponseBody::Subnets> && subnets) { DARABONBA_PTR_SET_RVALUE(subnets_, subnets) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSubnetsResponseBody::Subnets>> subnets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
