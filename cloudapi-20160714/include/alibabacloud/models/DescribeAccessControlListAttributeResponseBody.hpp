// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody(DescribeAccessControlListAttributeResponseBody &&) = default ;
    DescribeAccessControlListAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(DescribeAccessControlListAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclEntrys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntrys& obj) { 
        DARABONBA_PTR_TO_JSON(AclEntry, aclEntry_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntrys& obj) { 
        DARABONBA_PTR_FROM_JSON(AclEntry, aclEntry_);
      };
      AclEntrys() = default ;
      AclEntrys(const AclEntrys &) = default ;
      AclEntrys(AclEntrys &&) = default ;
      AclEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntrys() = default ;
      AclEntrys& operator=(const AclEntrys &) = default ;
      AclEntrys& operator=(AclEntrys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclEntry& obj) { 
          DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_TO_JSON(AclEntryIp, aclEntryIp_);
        };
        friend void from_json(const Darabonba::Json& j, AclEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_FROM_JSON(AclEntryIp, aclEntryIp_);
        };
        AclEntry() = default ;
        AclEntry(const AclEntry &) = default ;
        AclEntry(AclEntry &&) = default ;
        AclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclEntry() = default ;
        AclEntry& operator=(const AclEntry &) = default ;
        AclEntry& operator=(AclEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && this->aclEntryIp_ == nullptr; };
        // aclEntryComment Field Functions 
        bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
        void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
        inline string getAclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
        inline AclEntry& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


        // aclEntryIp Field Functions 
        bool hasAclEntryIp() const { return this->aclEntryIp_ != nullptr;};
        void deleteAclEntryIp() { this->aclEntryIp_ = nullptr;};
        inline string getAclEntryIp() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIp_, "") };
        inline AclEntry& setAclEntryIp(string aclEntryIp) { DARABONBA_PTR_SET_VALUE(aclEntryIp_, aclEntryIp) };


      protected:
        // The entry description.
        shared_ptr<string> aclEntryComment_ {};
        // The ACL entry.
        shared_ptr<string> aclEntryIp_ {};
      };

      virtual bool empty() const override { return this->aclEntry_ == nullptr; };
      // aclEntry Field Functions 
      bool hasAclEntry() const { return this->aclEntry_ != nullptr;};
      void deleteAclEntry() { this->aclEntry_ = nullptr;};
      inline const vector<AclEntrys::AclEntry> & getAclEntry() const { DARABONBA_PTR_GET_CONST(aclEntry_, vector<AclEntrys::AclEntry>) };
      inline vector<AclEntrys::AclEntry> getAclEntry() { DARABONBA_PTR_GET(aclEntry_, vector<AclEntrys::AclEntry>) };
      inline AclEntrys& setAclEntry(const vector<AclEntrys::AclEntry> & aclEntry) { DARABONBA_PTR_SET_VALUE(aclEntry_, aclEntry) };
      inline AclEntrys& setAclEntry(vector<AclEntrys::AclEntry> && aclEntry) { DARABONBA_PTR_SET_RVALUE(aclEntry_, aclEntry) };


    protected:
      shared_ptr<vector<AclEntrys::AclEntry>> aclEntry_ {};
    };

    virtual bool empty() const override { return this->aclEntrys_ == nullptr
        && this->aclId_ == nullptr && this->aclName_ == nullptr && this->addressIPVersion_ == nullptr && this->requestId_ == nullptr; };
    // aclEntrys Field Functions 
    bool hasAclEntrys() const { return this->aclEntrys_ != nullptr;};
    void deleteAclEntrys() { this->aclEntrys_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBody::AclEntrys & getAclEntrys() const { DARABONBA_PTR_GET_CONST(aclEntrys_, DescribeAccessControlListAttributeResponseBody::AclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody::AclEntrys getAclEntrys() { DARABONBA_PTR_GET(aclEntrys_, DescribeAccessControlListAttributeResponseBody::AclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(const DescribeAccessControlListAttributeResponseBody::AclEntrys & aclEntrys) { DARABONBA_PTR_SET_VALUE(aclEntrys_, aclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(DescribeAccessControlListAttributeResponseBody::AclEntrys && aclEntrys) { DARABONBA_PTR_SET_RVALUE(aclEntrys_, aclEntrys) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the access control policy.
    shared_ptr<DescribeAccessControlListAttributeResponseBody::AclEntrys> aclEntrys_ {};
    // The ID of the access control policy.
    shared_ptr<string> aclId_ {};
    // The name of the access control policy.
    shared_ptr<string> aclName_ {};
    // The IP protocol version. Valid values: **ipv4** and **ipv6**.
    shared_ptr<string> addressIPVersion_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
