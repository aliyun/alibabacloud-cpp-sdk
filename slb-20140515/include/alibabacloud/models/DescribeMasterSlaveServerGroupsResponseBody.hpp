// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroups, masterSlaveServerGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroups, masterSlaveServerGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMasterSlaveServerGroupsResponseBody() = default ;
    DescribeMasterSlaveServerGroupsResponseBody(const DescribeMasterSlaveServerGroupsResponseBody &) = default ;
    DescribeMasterSlaveServerGroupsResponseBody(DescribeMasterSlaveServerGroupsResponseBody &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBody() = default ;
    DescribeMasterSlaveServerGroupsResponseBody& operator=(const DescribeMasterSlaveServerGroupsResponseBody &) = default ;
    DescribeMasterSlaveServerGroupsResponseBody& operator=(DescribeMasterSlaveServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MasterSlaveServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MasterSlaveServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
      };
      friend void from_json(const Darabonba::Json& j, MasterSlaveServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
      };
      MasterSlaveServerGroups() = default ;
      MasterSlaveServerGroups(const MasterSlaveServerGroups &) = default ;
      MasterSlaveServerGroups(MasterSlaveServerGroups &&) = default ;
      MasterSlaveServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MasterSlaveServerGroups() = default ;
      MasterSlaveServerGroups& operator=(const MasterSlaveServerGroups &) = default ;
      MasterSlaveServerGroups& operator=(MasterSlaveServerGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterSlaveServerGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterSlaveServerGroup& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedObjects, associatedObjects_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
          DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, MasterSlaveServerGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedObjects, associatedObjects_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
          DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        MasterSlaveServerGroup() = default ;
        MasterSlaveServerGroup(const MasterSlaveServerGroup &) = default ;
        MasterSlaveServerGroup(MasterSlaveServerGroup &&) = default ;
        MasterSlaveServerGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterSlaveServerGroup() = default ;
        MasterSlaveServerGroup& operator=(const MasterSlaveServerGroup &) = default ;
        MasterSlaveServerGroup& operator=(MasterSlaveServerGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class AssociatedObjects : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedObjects& obj) { 
            DARABONBA_PTR_TO_JSON(Listeners, listeners_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedObjects& obj) { 
            DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
          };
          AssociatedObjects() = default ;
          AssociatedObjects(const AssociatedObjects &) = default ;
          AssociatedObjects(AssociatedObjects &&) = default ;
          AssociatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedObjects() = default ;
          AssociatedObjects& operator=(const AssociatedObjects &) = default ;
          AssociatedObjects& operator=(AssociatedObjects &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Listeners : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
              DARABONBA_PTR_TO_JSON(Listener, listener_);
            };
            friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
              DARABONBA_PTR_FROM_JSON(Listener, listener_);
            };
            Listeners() = default ;
            Listeners(const Listeners &) = default ;
            Listeners(Listeners &&) = default ;
            Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Listeners() = default ;
            Listeners& operator=(const Listeners &) = default ;
            Listeners& operator=(Listeners &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Listener : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Listener& obj) { 
                DARABONBA_PTR_TO_JSON(Port, port_);
                DARABONBA_PTR_TO_JSON(Protocol, protocol_);
              };
              friend void from_json(const Darabonba::Json& j, Listener& obj) { 
                DARABONBA_PTR_FROM_JSON(Port, port_);
                DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
              };
              Listener() = default ;
              Listener(const Listener &) = default ;
              Listener(Listener &&) = default ;
              Listener(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Listener() = default ;
              Listener& operator=(const Listener &) = default ;
              Listener& operator=(Listener &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
              // port Field Functions 
              bool hasPort() const { return this->port_ != nullptr;};
              void deletePort() { this->port_ = nullptr;};
              inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
              inline Listener& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


              // protocol Field Functions 
              bool hasProtocol() const { return this->protocol_ != nullptr;};
              void deleteProtocol() { this->protocol_ = nullptr;};
              inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
              inline Listener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


            protected:
              shared_ptr<int32_t> port_ {};
              shared_ptr<string> protocol_ {};
            };

            virtual bool empty() const override { return this->listener_ == nullptr; };
            // listener Field Functions 
            bool hasListener() const { return this->listener_ != nullptr;};
            void deleteListener() { this->listener_ = nullptr;};
            inline const vector<Listeners::Listener> & getListener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Listeners::Listener>) };
            inline vector<Listeners::Listener> getListener() { DARABONBA_PTR_GET(listener_, vector<Listeners::Listener>) };
            inline Listeners& setListener(const vector<Listeners::Listener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
            inline Listeners& setListener(vector<Listeners::Listener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


          protected:
            shared_ptr<vector<Listeners::Listener>> listener_ {};
          };

          virtual bool empty() const override { return this->listeners_ == nullptr; };
          // listeners Field Functions 
          bool hasListeners() const { return this->listeners_ != nullptr;};
          void deleteListeners() { this->listeners_ = nullptr;};
          inline const AssociatedObjects::Listeners & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, AssociatedObjects::Listeners) };
          inline AssociatedObjects::Listeners getListeners() { DARABONBA_PTR_GET(listeners_, AssociatedObjects::Listeners) };
          inline AssociatedObjects& setListeners(const AssociatedObjects::Listeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
          inline AssociatedObjects& setListeners(AssociatedObjects::Listeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


        protected:
          shared_ptr<AssociatedObjects::Listeners> listeners_ {};
        };

        virtual bool empty() const override { return this->associatedObjects_ == nullptr
        && this->createTime_ == nullptr && this->masterSlaveServerGroupId_ == nullptr && this->masterSlaveServerGroupName_ == nullptr && this->tags_ == nullptr; };
        // associatedObjects Field Functions 
        bool hasAssociatedObjects() const { return this->associatedObjects_ != nullptr;};
        void deleteAssociatedObjects() { this->associatedObjects_ = nullptr;};
        inline const MasterSlaveServerGroup::AssociatedObjects & getAssociatedObjects() const { DARABONBA_PTR_GET_CONST(associatedObjects_, MasterSlaveServerGroup::AssociatedObjects) };
        inline MasterSlaveServerGroup::AssociatedObjects getAssociatedObjects() { DARABONBA_PTR_GET(associatedObjects_, MasterSlaveServerGroup::AssociatedObjects) };
        inline MasterSlaveServerGroup& setAssociatedObjects(const MasterSlaveServerGroup::AssociatedObjects & associatedObjects) { DARABONBA_PTR_SET_VALUE(associatedObjects_, associatedObjects) };
        inline MasterSlaveServerGroup& setAssociatedObjects(MasterSlaveServerGroup::AssociatedObjects && associatedObjects) { DARABONBA_PTR_SET_RVALUE(associatedObjects_, associatedObjects) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MasterSlaveServerGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // masterSlaveServerGroupId Field Functions 
        bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
        void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
        inline string getMasterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
        inline MasterSlaveServerGroup& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


        // masterSlaveServerGroupName Field Functions 
        bool hasMasterSlaveServerGroupName() const { return this->masterSlaveServerGroupName_ != nullptr;};
        void deleteMasterSlaveServerGroupName() { this->masterSlaveServerGroupName_ = nullptr;};
        inline string getMasterSlaveServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupName_, "") };
        inline MasterSlaveServerGroup& setMasterSlaveServerGroupName(string masterSlaveServerGroupName) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupName_, masterSlaveServerGroupName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const MasterSlaveServerGroup::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, MasterSlaveServerGroup::Tags) };
        inline MasterSlaveServerGroup::Tags getTags() { DARABONBA_PTR_GET(tags_, MasterSlaveServerGroup::Tags) };
        inline MasterSlaveServerGroup& setTags(const MasterSlaveServerGroup::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline MasterSlaveServerGroup& setTags(MasterSlaveServerGroup::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<MasterSlaveServerGroup::AssociatedObjects> associatedObjects_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> masterSlaveServerGroupId_ {};
        shared_ptr<string> masterSlaveServerGroupName_ {};
        shared_ptr<MasterSlaveServerGroup::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->masterSlaveServerGroup_ == nullptr; };
      // masterSlaveServerGroup Field Functions 
      bool hasMasterSlaveServerGroup() const { return this->masterSlaveServerGroup_ != nullptr;};
      void deleteMasterSlaveServerGroup() { this->masterSlaveServerGroup_ = nullptr;};
      inline const vector<MasterSlaveServerGroups::MasterSlaveServerGroup> & getMasterSlaveServerGroup() const { DARABONBA_PTR_GET_CONST(masterSlaveServerGroup_, vector<MasterSlaveServerGroups::MasterSlaveServerGroup>) };
      inline vector<MasterSlaveServerGroups::MasterSlaveServerGroup> getMasterSlaveServerGroup() { DARABONBA_PTR_GET(masterSlaveServerGroup_, vector<MasterSlaveServerGroups::MasterSlaveServerGroup>) };
      inline MasterSlaveServerGroups& setMasterSlaveServerGroup(const vector<MasterSlaveServerGroups::MasterSlaveServerGroup> & masterSlaveServerGroup) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroup_, masterSlaveServerGroup) };
      inline MasterSlaveServerGroups& setMasterSlaveServerGroup(vector<MasterSlaveServerGroups::MasterSlaveServerGroup> && masterSlaveServerGroup) { DARABONBA_PTR_SET_RVALUE(masterSlaveServerGroup_, masterSlaveServerGroup) };


    protected:
      shared_ptr<vector<MasterSlaveServerGroups::MasterSlaveServerGroup>> masterSlaveServerGroup_ {};
    };

    virtual bool empty() const override { return this->masterSlaveServerGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // masterSlaveServerGroups Field Functions 
    bool hasMasterSlaveServerGroups() const { return this->masterSlaveServerGroups_ != nullptr;};
    void deleteMasterSlaveServerGroups() { this->masterSlaveServerGroups_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups & getMasterSlaveServerGroups() const { DARABONBA_PTR_GET_CONST(masterSlaveServerGroups_, DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups getMasterSlaveServerGroups() { DARABONBA_PTR_GET(masterSlaveServerGroups_, DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBody& setMasterSlaveServerGroups(const DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups & masterSlaveServerGroups) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroups_, masterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBody& setMasterSlaveServerGroups(DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups && masterSlaveServerGroups) { DARABONBA_PTR_SET_RVALUE(masterSlaveServerGroups_, masterSlaveServerGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMasterSlaveServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeMasterSlaveServerGroupsResponseBody::MasterSlaveServerGroups> masterSlaveServerGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
