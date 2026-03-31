// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODY_HPP_
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
  class DescribeDefenseResourceOwnerUidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceOwnerUidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerInfos, ownerInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceOwnerUidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerInfos, ownerInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseResourceOwnerUidResponseBody() = default ;
    DescribeDefenseResourceOwnerUidResponseBody(const DescribeDefenseResourceOwnerUidResponseBody &) = default ;
    DescribeDefenseResourceOwnerUidResponseBody(DescribeDefenseResourceOwnerUidResponseBody &&) = default ;
    DescribeDefenseResourceOwnerUidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceOwnerUidResponseBody() = default ;
    DescribeDefenseResourceOwnerUidResponseBody& operator=(const DescribeDefenseResourceOwnerUidResponseBody &) = default ;
    DescribeDefenseResourceOwnerUidResponseBody& operator=(DescribeDefenseResourceOwnerUidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OwnerInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OwnerInfos& obj) { 
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      };
      friend void from_json(const Darabonba::Json& j, OwnerInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      };
      OwnerInfos() = default ;
      OwnerInfos(const OwnerInfos &) = default ;
      OwnerInfos(OwnerInfos &&) = default ;
      OwnerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OwnerInfos() = default ;
      OwnerInfos& operator=(const OwnerInfos &) = default ;
      OwnerInfos& operator=(OwnerInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ownerUserId_ == nullptr
        && this->resourceName_ == nullptr; };
      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline OwnerInfos& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline OwnerInfos& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    protected:
      shared_ptr<string> ownerUserId_ {};
      shared_ptr<string> resourceName_ {};
    };

    virtual bool empty() const override { return this->ownerInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // ownerInfos Field Functions 
    bool hasOwnerInfos() const { return this->ownerInfos_ != nullptr;};
    void deleteOwnerInfos() { this->ownerInfos_ = nullptr;};
    inline const vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos> & getOwnerInfos() const { DARABONBA_PTR_GET_CONST(ownerInfos_, vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos>) };
    inline vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos> getOwnerInfos() { DARABONBA_PTR_GET(ownerInfos_, vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos>) };
    inline DescribeDefenseResourceOwnerUidResponseBody& setOwnerInfos(const vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos> & ownerInfos) { DARABONBA_PTR_SET_VALUE(ownerInfos_, ownerInfos) };
    inline DescribeDefenseResourceOwnerUidResponseBody& setOwnerInfos(vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos> && ownerInfos) { DARABONBA_PTR_SET_RVALUE(ownerInfos_, ownerInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceOwnerUidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDefenseResourceOwnerUidResponseBody::OwnerInfos>> ownerInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
