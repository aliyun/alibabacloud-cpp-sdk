// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODY_HPP_
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
  class DescribeDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDisksResponseBody() = default ;
    DescribeDisksResponseBody(const DescribeDisksResponseBody &) = default ;
    DescribeDisksResponseBody(DescribeDisksResponseBody &&) = default ;
    DescribeDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBody() = default ;
    DescribeDisksResponseBody& operator=(const DescribeDisksResponseBody &) = default ;
    DescribeDisksResponseBody& operator=(DescribeDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Disks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Disks& obj) { 
        DARABONBA_PTR_TO_JSON(Disks, disks_);
      };
      friend void from_json(const Darabonba::Json& j, Disks& obj) { 
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
      };
      Disks() = default ;
      Disks(const Disks &) = default ;
      Disks(Disks &&) = default ;
      Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Disks() = default ;
      Disks& operator=(const Disks &) = default ;
      Disks& operator=(Disks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DisksItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DisksItem& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(EncryptedKeyId, encryptedKeyId_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Portable, portable_);
          DARABONBA_PTR_TO_JSON(SerialId, serialId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DisksItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(EncryptedKeyId, encryptedKeyId_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Portable, portable_);
          DARABONBA_PTR_FROM_JSON(SerialId, serialId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DisksItem() = default ;
        DisksItem(const DisksItem &) = default ;
        DisksItem(DisksItem &&) = default ;
        DisksItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DisksItem() = default ;
        DisksItem& operator=(const DisksItem &) = default ;
        DisksItem& operator=(DisksItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
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
            inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->creationTime_ == nullptr && this->deleteWithInstance_ == nullptr && this->description_ == nullptr && this->diskChargeType_ == nullptr && this->diskId_ == nullptr
        && this->diskName_ == nullptr && this->encrypted_ == nullptr && this->encryptedKeyId_ == nullptr && this->ensRegionId_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->portable_ == nullptr && this->serialId_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DisksItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DisksItem& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deleteWithInstance Field Functions 
        bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
        void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
        inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
        inline DisksItem& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DisksItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // diskChargeType Field Functions 
        bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
        void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
        inline string getDiskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
        inline DisksItem& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline DisksItem& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline DisksItem& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline DisksItem& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // encryptedKeyId Field Functions 
        bool hasEncryptedKeyId() const { return this->encryptedKeyId_ != nullptr;};
        void deleteEncryptedKeyId() { this->encryptedKeyId_ = nullptr;};
        inline string getEncryptedKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptedKeyId_, "") };
        inline DisksItem& setEncryptedKeyId(string encryptedKeyId) { DARABONBA_PTR_SET_VALUE(encryptedKeyId_, encryptedKeyId) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline DisksItem& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DisksItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline DisksItem& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // portable Field Functions 
        bool hasPortable() const { return this->portable_ != nullptr;};
        void deletePortable() { this->portable_ = nullptr;};
        inline bool getPortable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
        inline DisksItem& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


        // serialId Field Functions 
        bool hasSerialId() const { return this->serialId_ != nullptr;};
        void deleteSerialId() { this->serialId_ = nullptr;};
        inline string getSerialId() const { DARABONBA_PTR_GET_DEFAULT(serialId_, "") };
        inline DisksItem& setSerialId(string serialId) { DARABONBA_PTR_SET_VALUE(serialId_, serialId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline DisksItem& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline DisksItem& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DisksItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DisksItem::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DisksItem::Tags) };
        inline DisksItem::Tags getTags() { DARABONBA_PTR_GET(tags_, DisksItem::Tags) };
        inline DisksItem& setTags(const DisksItem::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DisksItem& setTags(DisksItem::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DisksItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The category of the disk.
        // 
        // *   cloud_efficiency: ultra disk.
        // *   cloud_ssd: all-flash disk.
        // *   local_hdd: local HDD.
        // *   local_ssd: local SSD.
        shared_ptr<string> category_ {};
        // The time when the disk was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // Indicates whether the disk is released when the instance to which the disk is attached is released. Valid values:
        // 
        // *   true: The disk is released when the associated instance is released.
        // *   false: The disk is retained when the associated instance is released.
        shared_ptr<bool> deleteWithInstance_ {};
        // The namespace description.
        shared_ptr<string> description_ {};
        // The billing method of the cloud disk or local disk. Valid values:
        // 
        // *   **prepaid**: subscription.
        // *   **postpaid**: pay-as-you-go.
        shared_ptr<string> diskChargeType_ {};
        // The ID of the disk.
        shared_ptr<string> diskId_ {};
        // The name of the disk.
        shared_ptr<string> diskName_ {};
        // Indicates whether the cloud disk is encrypted. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> encrypted_ {};
        // The ID of the Key Management Service (KMS) key that is used for the cloud disk.
        shared_ptr<string> encryptedKeyId_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the cloud disk or local disk is removable. Valid values:
        // 
        // *   true: The disk is removable. A removable disk can independently exist and can be attached to or detached from an instance within the same zone.
        // *   false: The disk is not removable. A disk that is not removable cannot independently exist or be attached to or detached from an instance within the same zone.
        // 
        // If disks are of the following categories or types, the **Portable** value is **false** and the disks have the same lifecycle as their attached instances:
        // 
        // *   Local HDDs
        // *   Local SSDs
        // *   Data disks that use the subscription billing method
        shared_ptr<bool> portable_ {};
        // The serial number.
        shared_ptr<string> serialId_ {};
        // The size of the disk. Unit: MiB.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot.
        shared_ptr<string> snapshotId_ {};
        // The status of the disk. Valid values:
        // 
        // *   In-use: The disk is in use.
        // *   Available: The disk can be attached.
        // *   Attaching: The disk is being attached.
        // *   Detaching: The disk is being detached.
        // *   Creating: The disk is being created.
        // *   ReIniting: The disk is being reset.
        shared_ptr<string> status_ {};
        shared_ptr<DisksItem::Tags> tags_ {};
        // The type of the cloud disk or local disk. Valid values:
        // 
        // *   1: system disk.
        // *   2: data disk.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->disks_ == nullptr; };
      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<Disks::DisksItem> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Disks::DisksItem>) };
      inline vector<Disks::DisksItem> getDisks() { DARABONBA_PTR_GET(disks_, vector<Disks::DisksItem>) };
      inline Disks& setDisks(const vector<Disks::DisksItem> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline Disks& setDisks(vector<Disks::DisksItem> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    protected:
      shared_ptr<vector<Disks::DisksItem>> disks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->disks_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeDisksResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const DescribeDisksResponseBody::Disks & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, DescribeDisksResponseBody::Disks) };
    inline DescribeDisksResponseBody::Disks getDisks() { DARABONBA_PTR_GET(disks_, DescribeDisksResponseBody::Disks) };
    inline DescribeDisksResponseBody& setDisks(const DescribeDisksResponseBody::Disks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDisksResponseBody& setDisks(DescribeDisksResponseBody::Disks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDisksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDisksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The information about the disks.
    shared_ptr<DescribeDisksResponseBody::Disks> disks_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
