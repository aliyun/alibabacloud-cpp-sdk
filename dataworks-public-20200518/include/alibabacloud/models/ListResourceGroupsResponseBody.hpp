// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceGroupsResponseBody() = default ;
    ListResourceGroupsResponseBody(const ListResourceGroupsResponseBody &) = default ;
    ListResourceGroupsResponseBody(ListResourceGroupsResponseBody &&) = default ;
    ListResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBody() = default ;
    ListResourceGroupsResponseBody& operator=(const ListResourceGroupsResponseBody &) = default ;
    ListResourceGroupsResponseBody& operator=(ListResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizExtKey, bizExtKey_);
        DARABONBA_PTR_TO_JSON(Cluster, cluster_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableKp, enableKp_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_ANY_TO_JSON(Specs, specs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizExtKey, bizExtKey_);
        DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableKp, enableKp_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_ANY_FROM_JSON(Specs, specs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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

      virtual bool empty() const override { return this->bizExtKey_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->enableKp_ == nullptr && this->id_ == nullptr && this->identifier_ == nullptr
        && this->isDefault_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->resourceGroupType_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->sequence_ == nullptr && this->specs_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->tenantId_ == nullptr
        && this->updateTime_ == nullptr; };
      // bizExtKey Field Functions 
      bool hasBizExtKey() const { return this->bizExtKey_ != nullptr;};
      void deleteBizExtKey() { this->bizExtKey_ = nullptr;};
      inline string getBizExtKey() const { DARABONBA_PTR_GET_DEFAULT(bizExtKey_, "") };
      inline Data& setBizExtKey(string bizExtKey) { DARABONBA_PTR_SET_VALUE(bizExtKey_, bizExtKey) };


      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
      inline Data& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableKp Field Functions 
      bool hasEnableKp() const { return this->enableKp_ != nullptr;};
      void deleteEnableKp() { this->enableKp_ = nullptr;};
      inline bool getEnableKp() const { DARABONBA_PTR_GET_DEFAULT(enableKp_, false) };
      inline Data& setEnableKp(bool enableKp) { DARABONBA_PTR_SET_VALUE(enableKp_, enableKp) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline Data& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Data& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Data& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupType Field Functions 
      bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
      void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
      inline string getResourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
      inline Data& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Data& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Data& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // specs Field Functions 
      bool hasSpecs() const { return this->specs_ != nullptr;};
      void deleteSpecs() { this->specs_ = nullptr;};
      inline       const Darabonba::Json & getSpecs() const { DARABONBA_GET(specs_) };
      Darabonba::Json & getSpecs() { DARABONBA_GET(specs_) };
      inline Data& setSpecs(const Darabonba::Json & specs) { DARABONBA_SET_VALUE(specs_, specs) };
      inline Data& setSpecs(Darabonba::Json && specs) { DARABONBA_SET_RVALUE(specs_, specs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The category of the resource group. Valid values:
      // - default: public resource group.
      // - single: dedicated resource group.
      shared_ptr<string> bizExtKey_ {};
      // The name of the cluster. This parameter is valid only for MaxCompute and PAI resource group types.
      shared_ptr<string> cluster_ {};
      // The time when the cluster was created. The format is Jul 9, 2018 2:43:37 PM.
      shared_ptr<string> createTime_ {};
      // Indicates whether Kp (key person) access is used. Valid values:
      // - true: The MaxCompute engine uses the Alibaba Cloud account UID as the display name of the access account.
      // - false: The MaxCompute engine uses the Alibaba Cloud account name as the display name of the access account.
      // This parameter is meaningless for other types and is valid only for the MaxCompute engine.
      shared_ptr<bool> enableKp_ {};
      // The ID of the resource group.
      shared_ptr<int64_t> id_ {};
      // The identifier of the resource group.
      shared_ptr<string> identifier_ {};
      // Indicates whether the resource group is the default resource group. Valid values:
      // - true: The resource group is the default resource group.
      // - false: The resource group is not the default resource group.
      shared_ptr<bool> isDefault_ {};
      // The type of the resource group. Valid values:
      // - ISOLATE: an upfront dedicated resource group.
      // - SHARE: a pay-as-you-go public resource group.
      // - DEVELOP: a developer edition.
      shared_ptr<string> mode_ {};
      // The name of the resource group.
      shared_ptr<string> name_ {};
      // The type of the resource group. Valid values:
      // - 0: DataWorks
      // - 2: MaxCompute
      // - 3: PAI
      // - 4: data integration
      // - 7: scheduling
      // - 9: dataService
      shared_ptr<string> resourceGroupType_ {};
      // The resource group ID.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The sequence field. Used to sort created resource groups in ascending order by creation sequence number.
      shared_ptr<int32_t> sequence_ {};
      // The detailed information of the resource group. The content displayed in {} is the detailed information of the resource group.
      Darabonba::Json specs_ {};
      // The status of the resource group. Valid values:
      // - NORMAL(0): The resource group is running or in service.
      // - STOP(1): The resource group has expired and is frozen.
      // - DELETED(2): The resource group has been released or destroyed.
      // - CREATING(3): The resource group is being created or started.
      // - CREATE_FAILED(4): The resource group failed to be created or started.
      // - UPDATING(5): The resource group is being scaled out or upgraded.
      // - UPDATE_FAILED(6): The resource group failed to be scaled out or upgraded.
      // - DELETING(7): The resource group is being released or destroyed.
      // - DELETE_FAILED(8): The resource group failed to be released or destroyed.
      // - TIMEOUT(9): The operation performed on the resource group timed out. All change operations may time out. This value is temporarily available only for DataService.
      shared_ptr<int32_t> status_ {};
      // The list of tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // The time when the resource group was last updated.
      // 
      // The format is `MMM d, yyyy h:mm:ss a`, for example, `Jul 9, 2018 2:43:37 PM`.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListResourceGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListResourceGroupsResponseBody::Data>) };
    inline vector<ListResourceGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListResourceGroupsResponseBody::Data>) };
    inline ListResourceGroupsResponseBody& setData(const vector<ListResourceGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListResourceGroupsResponseBody& setData(vector<ListResourceGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListResourceGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of resource groups.
    shared_ptr<vector<ListResourceGroupsResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
