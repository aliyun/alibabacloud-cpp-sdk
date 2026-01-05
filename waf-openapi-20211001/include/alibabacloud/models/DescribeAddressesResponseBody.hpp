// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAddressesResponseBody() = default ;
    DescribeAddressesResponseBody(const DescribeAddressesResponseBody &) = default ;
    DescribeAddressesResponseBody(DescribeAddressesResponseBody &&) = default ;
    DescribeAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressesResponseBody() = default ;
    DescribeAddressesResponseBody& operator=(const DescribeAddressesResponseBody &) = default ;
    DescribeAddressesResponseBody& operator=(DescribeAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddressList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddressList& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, AddressList& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      AddressList() = default ;
      AddressList(const AddressList &) = default ;
      AddressList(AddressList &&) = default ;
      AddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddressList() = default ;
      AddressList& operator=(const AddressList &) = default ;
      AddressList& operator=(AddressList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->gmtModified_ == nullptr && this->ruleId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline AddressList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline AddressList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline AddressList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<int64_t> ruleId_ {};
    };

    virtual bool empty() const override { return this->addressList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline const vector<DescribeAddressesResponseBody::AddressList> & getAddressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<DescribeAddressesResponseBody::AddressList>) };
    inline vector<DescribeAddressesResponseBody::AddressList> getAddressList() { DARABONBA_PTR_GET(addressList_, vector<DescribeAddressesResponseBody::AddressList>) };
    inline DescribeAddressesResponseBody& setAddressList(const vector<DescribeAddressesResponseBody::AddressList> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
    inline DescribeAddressesResponseBody& setAddressList(vector<DescribeAddressesResponseBody::AddressList> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAddressesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAddressesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAddressesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeAddressesResponseBody::AddressList>> addressList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
