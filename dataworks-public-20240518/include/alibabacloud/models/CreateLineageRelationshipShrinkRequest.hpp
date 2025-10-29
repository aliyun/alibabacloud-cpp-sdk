// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELINEAGERELATIONSHIPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELINEAGERELATIONSHIPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateLineageRelationshipShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLineageRelationshipShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstEntity, dstEntityShrink_);
      DARABONBA_PTR_TO_JSON(SrcEntity, srcEntityShrink_);
      DARABONBA_PTR_TO_JSON(Task, taskShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLineageRelationshipShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstEntity, dstEntityShrink_);
      DARABONBA_PTR_FROM_JSON(SrcEntity, srcEntityShrink_);
      DARABONBA_PTR_FROM_JSON(Task, taskShrink_);
    };
    CreateLineageRelationshipShrinkRequest() = default ;
    CreateLineageRelationshipShrinkRequest(const CreateLineageRelationshipShrinkRequest &) = default ;
    CreateLineageRelationshipShrinkRequest(CreateLineageRelationshipShrinkRequest &&) = default ;
    CreateLineageRelationshipShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLineageRelationshipShrinkRequest() = default ;
    CreateLineageRelationshipShrinkRequest& operator=(const CreateLineageRelationshipShrinkRequest &) = default ;
    CreateLineageRelationshipShrinkRequest& operator=(CreateLineageRelationshipShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstEntityShrink_ == nullptr
        && return this->srcEntityShrink_ == nullptr && return this->taskShrink_ == nullptr; };
    // dstEntityShrink Field Functions 
    bool hasDstEntityShrink() const { return this->dstEntityShrink_ != nullptr;};
    void deleteDstEntityShrink() { this->dstEntityShrink_ = nullptr;};
    inline string dstEntityShrink() const { DARABONBA_PTR_GET_DEFAULT(dstEntityShrink_, "") };
    inline CreateLineageRelationshipShrinkRequest& setDstEntityShrink(string dstEntityShrink) { DARABONBA_PTR_SET_VALUE(dstEntityShrink_, dstEntityShrink) };


    // srcEntityShrink Field Functions 
    bool hasSrcEntityShrink() const { return this->srcEntityShrink_ != nullptr;};
    void deleteSrcEntityShrink() { this->srcEntityShrink_ = nullptr;};
    inline string srcEntityShrink() const { DARABONBA_PTR_GET_DEFAULT(srcEntityShrink_, "") };
    inline CreateLineageRelationshipShrinkRequest& setSrcEntityShrink(string srcEntityShrink) { DARABONBA_PTR_SET_VALUE(srcEntityShrink_, srcEntityShrink) };


    // taskShrink Field Functions 
    bool hasTaskShrink() const { return this->taskShrink_ != nullptr;};
    void deleteTaskShrink() { this->taskShrink_ = nullptr;};
    inline string taskShrink() const { DARABONBA_PTR_GET_DEFAULT(taskShrink_, "") };
    inline CreateLineageRelationshipShrinkRequest& setTaskShrink(string taskShrink) { DARABONBA_PTR_SET_VALUE(taskShrink_, taskShrink) };


  protected:
    // The destination entity.
    std::shared_ptr<string> dstEntityShrink_ = nullptr;
    // The source entity.
    std::shared_ptr<string> srcEntityShrink_ = nullptr;
    // The task information.
    std::shared_ptr<string> taskShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
