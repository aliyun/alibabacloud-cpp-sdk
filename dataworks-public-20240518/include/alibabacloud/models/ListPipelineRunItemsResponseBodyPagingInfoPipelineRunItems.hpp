// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNITEMSRESPONSEBODYPAGINGINFOPIPELINERUNITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNITEMSRESPONSEBODYPAGINGINFOPIPELINERUNITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems() = default ;
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems(const ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems &) = default ;
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems(ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems &&) = default ;
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems() = default ;
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& operator=(const ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems &) = default ;
    ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& operator=(ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->message_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->spec_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The deployment creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The unique identifier of the deployment.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The error message if the deployment failed.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the deployment was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The deployment name.
    std::shared_ptr<string> name_ = nullptr;
    // The FlowSpec information describing this deployment. For detailed specifications, see [FlowSpec](https://github.com/aliyun/dataworks-spec/blob/master/README_zh_CN.md).
    std::shared_ptr<string> spec_ = nullptr;
    // The deployment status. Valid values:
    // 
    // *   Init: Initializing
    // *   Running
    // *   Success
    // *   Fail
    // *   Termination
    std::shared_ptr<string> status_ = nullptr;
    // The deployment type. Valid values:
    // 
    // *   Node
    // *   WorkflowDefinition: Workflow definition.
    // *   Resource
    // *   Function: The object is a function.
    std::shared_ptr<string> type_ = nullptr;
    // The deployment version.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
