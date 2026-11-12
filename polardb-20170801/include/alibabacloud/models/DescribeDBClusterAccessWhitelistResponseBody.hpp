// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAccessWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterSecurityGroups, DBClusterSecurityGroups_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ProjectItems, projectItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterSecurityGroups, DBClusterSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ProjectItems, projectItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAccessWhitelistResponseBody() = default ;
    DescribeDBClusterAccessWhitelistResponseBody(const DescribeDBClusterAccessWhitelistResponseBody &) = default ;
    DescribeDBClusterAccessWhitelistResponseBody(DescribeDBClusterAccessWhitelistResponseBody &&) = default ;
    DescribeDBClusterAccessWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhitelistResponseBody() = default ;
    DescribeDBClusterAccessWhitelistResponseBody& operator=(const DescribeDBClusterAccessWhitelistResponseBody &) = default ;
    DescribeDBClusterAccessWhitelistResponseBody& operator=(DescribeDBClusterAccessWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterProjectIPArray, DBClusterProjectIPArray_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterProjectIPArray, DBClusterProjectIPArray_);
      };
      ProjectItems() = default ;
      ProjectItems(const ProjectItems &) = default ;
      ProjectItems(ProjectItems &&) = default ;
      ProjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectItems() = default ;
      ProjectItems& operator=(const ProjectItems &) = default ;
      ProjectItems& operator=(ProjectItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBClusterProjectIPArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBClusterProjectIPArray& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultOpen, defaultOpen_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Revision, revision_);
          DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
        };
        friend void from_json(const Darabonba::Json& j, DBClusterProjectIPArray& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultOpen, defaultOpen_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Revision, revision_);
          DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
        };
        DBClusterProjectIPArray() = default ;
        DBClusterProjectIPArray(const DBClusterProjectIPArray &) = default ;
        DBClusterProjectIPArray(DBClusterProjectIPArray &&) = default ;
        DBClusterProjectIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBClusterProjectIPArray() = default ;
        DBClusterProjectIPArray& operator=(const DBClusterProjectIPArray &) = default ;
        DBClusterProjectIPArray& operator=(DBClusterProjectIPArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultOpen_ == nullptr
        && this->projectId_ == nullptr && this->revision_ == nullptr && this->securityIps_ == nullptr; };
        // defaultOpen Field Functions 
        bool hasDefaultOpen() const { return this->defaultOpen_ != nullptr;};
        void deleteDefaultOpen() { this->defaultOpen_ = nullptr;};
        inline bool getDefaultOpen() const { DARABONBA_PTR_GET_DEFAULT(defaultOpen_, false) };
        inline DBClusterProjectIPArray& setDefaultOpen(bool defaultOpen) { DARABONBA_PTR_SET_VALUE(defaultOpen_, defaultOpen) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline DBClusterProjectIPArray& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // revision Field Functions 
        bool hasRevision() const { return this->revision_ != nullptr;};
        void deleteRevision() { this->revision_ = nullptr;};
        inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
        inline DBClusterProjectIPArray& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


        // securityIps Field Functions 
        bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
        void deleteSecurityIps() { this->securityIps_ = nullptr;};
        inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
        inline DBClusterProjectIPArray& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


      protected:
        shared_ptr<bool> defaultOpen_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<int64_t> revision_ {};
        shared_ptr<string> securityIps_ {};
      };

      virtual bool empty() const override { return this->DBClusterProjectIPArray_ == nullptr; };
      // DBClusterProjectIPArray Field Functions 
      bool hasDBClusterProjectIPArray() const { return this->DBClusterProjectIPArray_ != nullptr;};
      void deleteDBClusterProjectIPArray() { this->DBClusterProjectIPArray_ = nullptr;};
      inline const vector<ProjectItems::DBClusterProjectIPArray> & getDBClusterProjectIPArray() const { DARABONBA_PTR_GET_CONST(DBClusterProjectIPArray_, vector<ProjectItems::DBClusterProjectIPArray>) };
      inline vector<ProjectItems::DBClusterProjectIPArray> getDBClusterProjectIPArray() { DARABONBA_PTR_GET(DBClusterProjectIPArray_, vector<ProjectItems::DBClusterProjectIPArray>) };
      inline ProjectItems& setDBClusterProjectIPArray(const vector<ProjectItems::DBClusterProjectIPArray> & dBClusterProjectIPArray) { DARABONBA_PTR_SET_VALUE(DBClusterProjectIPArray_, dBClusterProjectIPArray) };
      inline ProjectItems& setDBClusterProjectIPArray(vector<ProjectItems::DBClusterProjectIPArray> && dBClusterProjectIPArray) { DARABONBA_PTR_SET_RVALUE(DBClusterProjectIPArray_, dBClusterProjectIPArray) };


    protected:
      shared_ptr<vector<ProjectItems::DBClusterProjectIPArray>> DBClusterProjectIPArray_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterIPArray, DBClusterIPArray_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterIPArray, DBClusterIPArray_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBClusterIPArray : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBClusterIPArray& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
          DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
          DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
        };
        friend void from_json(const Darabonba::Json& j, DBClusterIPArray& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
          DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
          DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
        };
        DBClusterIPArray() = default ;
        DBClusterIPArray(const DBClusterIPArray &) = default ;
        DBClusterIPArray(DBClusterIPArray &&) = default ;
        DBClusterIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBClusterIPArray() = default ;
        DBClusterIPArray& operator=(const DBClusterIPArray &) = default ;
        DBClusterIPArray& operator=(DBClusterIPArray &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBClusterIPArrayAttribute_ == nullptr
        && this->DBClusterIPArrayName_ == nullptr && this->securityIps_ == nullptr; };
        // DBClusterIPArrayAttribute Field Functions 
        bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
        void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
        inline string getDBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
        inline DBClusterIPArray& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


        // DBClusterIPArrayName Field Functions 
        bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
        void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
        inline string getDBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
        inline DBClusterIPArray& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


        // securityIps Field Functions 
        bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
        void deleteSecurityIps() { this->securityIps_ = nullptr;};
        inline string getSecurityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
        inline DBClusterIPArray& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


      protected:
        shared_ptr<string> DBClusterIPArrayAttribute_ {};
        shared_ptr<string> DBClusterIPArrayName_ {};
        shared_ptr<string> securityIps_ {};
      };

      virtual bool empty() const override { return this->DBClusterIPArray_ == nullptr; };
      // DBClusterIPArray Field Functions 
      bool hasDBClusterIPArray() const { return this->DBClusterIPArray_ != nullptr;};
      void deleteDBClusterIPArray() { this->DBClusterIPArray_ = nullptr;};
      inline const vector<Items::DBClusterIPArray> & getDBClusterIPArray() const { DARABONBA_PTR_GET_CONST(DBClusterIPArray_, vector<Items::DBClusterIPArray>) };
      inline vector<Items::DBClusterIPArray> getDBClusterIPArray() { DARABONBA_PTR_GET(DBClusterIPArray_, vector<Items::DBClusterIPArray>) };
      inline Items& setDBClusterIPArray(const vector<Items::DBClusterIPArray> & dBClusterIPArray) { DARABONBA_PTR_SET_VALUE(DBClusterIPArray_, dBClusterIPArray) };
      inline Items& setDBClusterIPArray(vector<Items::DBClusterIPArray> && dBClusterIPArray) { DARABONBA_PTR_SET_RVALUE(DBClusterIPArray_, dBClusterIPArray) };


    protected:
      shared_ptr<vector<Items::DBClusterIPArray>> DBClusterIPArray_ {};
    };

    class DBClusterSecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterSecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterSecurityGroup, DBClusterSecurityGroup_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterSecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterSecurityGroup, DBClusterSecurityGroup_);
      };
      DBClusterSecurityGroups() = default ;
      DBClusterSecurityGroups(const DBClusterSecurityGroups &) = default ;
      DBClusterSecurityGroups(DBClusterSecurityGroups &&) = default ;
      DBClusterSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterSecurityGroups() = default ;
      DBClusterSecurityGroups& operator=(const DBClusterSecurityGroups &) = default ;
      DBClusterSecurityGroups& operator=(DBClusterSecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBClusterSecurityGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBClusterSecurityGroup& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, DBClusterSecurityGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
        };
        DBClusterSecurityGroup() = default ;
        DBClusterSecurityGroup(const DBClusterSecurityGroup &) = default ;
        DBClusterSecurityGroup(DBClusterSecurityGroup &&) = default ;
        DBClusterSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBClusterSecurityGroup() = default ;
        DBClusterSecurityGroup& operator=(const DBClusterSecurityGroup &) = default ;
        DBClusterSecurityGroup& operator=(DBClusterSecurityGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->securityGroupName_ == nullptr; };
        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline DBClusterSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // securityGroupName Field Functions 
        bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
        void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
        inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
        inline DBClusterSecurityGroup& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


      protected:
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> securityGroupName_ {};
      };

      virtual bool empty() const override { return this->DBClusterSecurityGroup_ == nullptr; };
      // DBClusterSecurityGroup Field Functions 
      bool hasDBClusterSecurityGroup() const { return this->DBClusterSecurityGroup_ != nullptr;};
      void deleteDBClusterSecurityGroup() { this->DBClusterSecurityGroup_ = nullptr;};
      inline const vector<DBClusterSecurityGroups::DBClusterSecurityGroup> & getDBClusterSecurityGroup() const { DARABONBA_PTR_GET_CONST(DBClusterSecurityGroup_, vector<DBClusterSecurityGroups::DBClusterSecurityGroup>) };
      inline vector<DBClusterSecurityGroups::DBClusterSecurityGroup> getDBClusterSecurityGroup() { DARABONBA_PTR_GET(DBClusterSecurityGroup_, vector<DBClusterSecurityGroups::DBClusterSecurityGroup>) };
      inline DBClusterSecurityGroups& setDBClusterSecurityGroup(const vector<DBClusterSecurityGroups::DBClusterSecurityGroup> & dBClusterSecurityGroup) { DARABONBA_PTR_SET_VALUE(DBClusterSecurityGroup_, dBClusterSecurityGroup) };
      inline DBClusterSecurityGroups& setDBClusterSecurityGroup(vector<DBClusterSecurityGroups::DBClusterSecurityGroup> && dBClusterSecurityGroup) { DARABONBA_PTR_SET_RVALUE(DBClusterSecurityGroup_, dBClusterSecurityGroup) };


    protected:
      shared_ptr<vector<DBClusterSecurityGroups::DBClusterSecurityGroup>> DBClusterSecurityGroup_ {};
    };

    virtual bool empty() const override { return this->DBClusterSecurityGroups_ == nullptr
        && this->items_ == nullptr && this->projectItems_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterSecurityGroups Field Functions 
    bool hasDBClusterSecurityGroups() const { return this->DBClusterSecurityGroups_ != nullptr;};
    void deleteDBClusterSecurityGroups() { this->DBClusterSecurityGroups_ = nullptr;};
    inline const DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups & getDBClusterSecurityGroups() const { DARABONBA_PTR_GET_CONST(DBClusterSecurityGroups_, DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups getDBClusterSecurityGroups() { DARABONBA_PTR_GET(DBClusterSecurityGroups_, DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setDBClusterSecurityGroups(const DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups & dBClusterSecurityGroups) { DARABONBA_PTR_SET_VALUE(DBClusterSecurityGroups_, dBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setDBClusterSecurityGroups(DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups && dBClusterSecurityGroups) { DARABONBA_PTR_SET_RVALUE(DBClusterSecurityGroups_, dBClusterSecurityGroups) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClusterAccessWhitelistResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClusterAccessWhitelistResponseBody::Items) };
    inline DescribeDBClusterAccessWhitelistResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBClusterAccessWhitelistResponseBody::Items) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setItems(const DescribeDBClusterAccessWhitelistResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setItems(DescribeDBClusterAccessWhitelistResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // projectItems Field Functions 
    bool hasProjectItems() const { return this->projectItems_ != nullptr;};
    void deleteProjectItems() { this->projectItems_ = nullptr;};
    inline const DescribeDBClusterAccessWhitelistResponseBody::ProjectItems & getProjectItems() const { DARABONBA_PTR_GET_CONST(projectItems_, DescribeDBClusterAccessWhitelistResponseBody::ProjectItems) };
    inline DescribeDBClusterAccessWhitelistResponseBody::ProjectItems getProjectItems() { DARABONBA_PTR_GET(projectItems_, DescribeDBClusterAccessWhitelistResponseBody::ProjectItems) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setProjectItems(const DescribeDBClusterAccessWhitelistResponseBody::ProjectItems & projectItems) { DARABONBA_PTR_SET_VALUE(projectItems_, projectItems) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setProjectItems(DescribeDBClusterAccessWhitelistResponseBody::ProjectItems && projectItems) { DARABONBA_PTR_SET_RVALUE(projectItems_, projectItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAccessWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBClusterAccessWhitelistResponseBody::DBClusterSecurityGroups> DBClusterSecurityGroups_ {};
    shared_ptr<DescribeDBClusterAccessWhitelistResponseBody::Items> items_ {};
    shared_ptr<DescribeDBClusterAccessWhitelistResponseBody::ProjectItems> projectItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
