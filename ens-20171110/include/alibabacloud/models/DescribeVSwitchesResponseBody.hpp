// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeVSwitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody(DescribeVSwitchesResponseBody &&) = default ;
    DescribeVSwitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody& operator=(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody& operator=(DescribeVSwitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
        };
        VSwitch() = default ;
        VSwitch(const VSwitch &) = default ;
        VSwitch(VSwitch &&) = default ;
        VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitch() = default ;
        VSwitch& operator=(const VSwitch &) = default ;
        VSwitch& operator=(VSwitch &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->key_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


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


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
            // The request error rate.
            shared_ptr<string> value_ {};
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

        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->freeIpCount_ == nullptr && this->networkId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline VSwitch& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VSwitch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline VSwitch& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // freeIpCount Field Functions 
        bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
        void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
        inline int64_t getFreeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, 0L) };
        inline VSwitch& setFreeIpCount(int64_t freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline VSwitch& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const VSwitch::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, VSwitch::Tags) };
        inline VSwitch::Tags getTags() { DARABONBA_PTR_GET(tags_, VSwitch::Tags) };
        inline VSwitch& setTags(const VSwitch::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline VSwitch& setTags(VSwitch::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


      protected:
        // The IPv4 CIDR block of the vSwitch.
        shared_ptr<string> cidrBlock_ {};
        // The time when the VPC was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createdTime_ {};
        // The description of the vSwitch.
        shared_ptr<string> description_ {};
        // The ID of the ENS node.
        shared_ptr<string> ensRegionId_ {};
        // The number of available IP addresses.
        shared_ptr<int64_t> freeIpCount_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> networkId_ {};
        // The status of the vSwitch. Valid values:
        // 
        // *   Pending
        // *   Available
        shared_ptr<string> status_ {};
        shared_ptr<VSwitch::Tags> tags_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The name of the vSwitch.
        shared_ptr<string> vSwitchName_ {};
      };

      virtual bool empty() const override { return this->vSwitch_ == nullptr; };
      // vSwitch Field Functions 
      bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
      void deleteVSwitch() { this->vSwitch_ = nullptr;};
      inline const vector<VSwitches::VSwitch> & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<VSwitches::VSwitch>) };
      inline vector<VSwitches::VSwitch> getVSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<VSwitches::VSwitch>) };
      inline VSwitches& setVSwitch(const vector<VSwitches::VSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
      inline VSwitches& setVSwitch(vector<VSwitches::VSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    protected:
      shared_ptr<vector<VSwitches::VSwitch>> vSwitch_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vSwitches_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVSwitchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVSwitchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVSwitchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeVSwitchesResponseBody::VSwitches & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody::VSwitches getVSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(const DescribeVSwitchesResponseBody::VSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(DescribeVSwitchesResponseBody::VSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the vSwitches. For more information, see the array of vSwitches in the response examples in the JSON format.
    shared_ptr<DescribeVSwitchesResponseBody::VSwitches> vSwitches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
