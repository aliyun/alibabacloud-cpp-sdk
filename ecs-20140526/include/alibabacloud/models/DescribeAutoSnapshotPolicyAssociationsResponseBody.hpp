// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyAssociations, autoSnapshotPolicyAssociations_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyAssociations, autoSnapshotPolicyAssociations_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoSnapshotPolicyAssociationsResponseBody() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(const DescribeAutoSnapshotPolicyAssociationsResponseBody &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(DescribeAutoSnapshotPolicyAssociationsResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyAssociationsResponseBody() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody& operator=(const DescribeAutoSnapshotPolicyAssociationsResponseBody &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBody& operator=(DescribeAutoSnapshotPolicyAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoSnapshotPolicyAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicyAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyAssociation, autoSnapshotPolicyAssociation_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicyAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyAssociation, autoSnapshotPolicyAssociation_);
      };
      AutoSnapshotPolicyAssociations() = default ;
      AutoSnapshotPolicyAssociations(const AutoSnapshotPolicyAssociations &) = default ;
      AutoSnapshotPolicyAssociations(AutoSnapshotPolicyAssociations &&) = default ;
      AutoSnapshotPolicyAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSnapshotPolicyAssociations() = default ;
      AutoSnapshotPolicyAssociations& operator=(const AutoSnapshotPolicyAssociations &) = default ;
      AutoSnapshotPolicyAssociations& operator=(AutoSnapshotPolicyAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoSnapshotPolicyAssociation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicyAssociation& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        };
        friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicyAssociation& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        };
        AutoSnapshotPolicyAssociation() = default ;
        AutoSnapshotPolicyAssociation(const AutoSnapshotPolicyAssociation &) = default ;
        AutoSnapshotPolicyAssociation(AutoSnapshotPolicyAssociation &&) = default ;
        AutoSnapshotPolicyAssociation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoSnapshotPolicyAssociation() = default ;
        AutoSnapshotPolicyAssociation& operator=(const AutoSnapshotPolicyAssociation &) = default ;
        AutoSnapshotPolicyAssociation& operator=(AutoSnapshotPolicyAssociation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->diskId_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline AutoSnapshotPolicyAssociation& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline AutoSnapshotPolicyAssociation& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      protected:
        // The ID of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // The ID of the cloud disk.
        shared_ptr<string> diskId_ {};
      };

      virtual bool empty() const override { return this->autoSnapshotPolicyAssociation_ == nullptr; };
      // autoSnapshotPolicyAssociation Field Functions 
      bool hasAutoSnapshotPolicyAssociation() const { return this->autoSnapshotPolicyAssociation_ != nullptr;};
      void deleteAutoSnapshotPolicyAssociation() { this->autoSnapshotPolicyAssociation_ = nullptr;};
      inline const vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation> & getAutoSnapshotPolicyAssociation() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicyAssociation_, vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation>) };
      inline vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation> getAutoSnapshotPolicyAssociation() { DARABONBA_PTR_GET(autoSnapshotPolicyAssociation_, vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation>) };
      inline AutoSnapshotPolicyAssociations& setAutoSnapshotPolicyAssociation(const vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation> & autoSnapshotPolicyAssociation) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyAssociation_, autoSnapshotPolicyAssociation) };
      inline AutoSnapshotPolicyAssociations& setAutoSnapshotPolicyAssociation(vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation> && autoSnapshotPolicyAssociation) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicyAssociation_, autoSnapshotPolicyAssociation) };


    protected:
      shared_ptr<vector<AutoSnapshotPolicyAssociations::AutoSnapshotPolicyAssociation>> autoSnapshotPolicyAssociation_ {};
    };

    virtual bool empty() const override { return this->autoSnapshotPolicyAssociations_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // autoSnapshotPolicyAssociations Field Functions 
    bool hasAutoSnapshotPolicyAssociations() const { return this->autoSnapshotPolicyAssociations_ != nullptr;};
    void deleteAutoSnapshotPolicyAssociations() { this->autoSnapshotPolicyAssociations_ = nullptr;};
    inline const DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations & getAutoSnapshotPolicyAssociations() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicyAssociations_, DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations getAutoSnapshotPolicyAssociations() { DARABONBA_PTR_GET(autoSnapshotPolicyAssociations_, DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setAutoSnapshotPolicyAssociations(const DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations & autoSnapshotPolicyAssociations) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyAssociations_, autoSnapshotPolicyAssociations) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setAutoSnapshotPolicyAssociations(DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations && autoSnapshotPolicyAssociations) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicyAssociations_, autoSnapshotPolicyAssociations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The association of automatic snapshot policies.
    shared_ptr<DescribeAutoSnapshotPolicyAssociationsResponseBody::AutoSnapshotPolicyAssociations> autoSnapshotPolicyAssociations_ {};
    // The returned pagination token which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
