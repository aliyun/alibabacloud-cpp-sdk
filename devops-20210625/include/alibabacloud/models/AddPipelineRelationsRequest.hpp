// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINERELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINERELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class AddPipelineRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(relObjectIds, relObjectIds_);
      DARABONBA_PTR_TO_JSON(relObjectType, relObjectType_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(relObjectIds, relObjectIds_);
      DARABONBA_PTR_FROM_JSON(relObjectType, relObjectType_);
    };
    AddPipelineRelationsRequest() = default ;
    AddPipelineRelationsRequest(const AddPipelineRelationsRequest &) = default ;
    AddPipelineRelationsRequest(AddPipelineRelationsRequest &&) = default ;
    AddPipelineRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineRelationsRequest() = default ;
    AddPipelineRelationsRequest& operator=(const AddPipelineRelationsRequest &) = default ;
    AddPipelineRelationsRequest& operator=(AddPipelineRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relObjectIds_ == nullptr
        && return this->relObjectType_ == nullptr; };
    // relObjectIds Field Functions 
    bool hasRelObjectIds() const { return this->relObjectIds_ != nullptr;};
    void deleteRelObjectIds() { this->relObjectIds_ = nullptr;};
    inline string relObjectIds() const { DARABONBA_PTR_GET_DEFAULT(relObjectIds_, "") };
    inline AddPipelineRelationsRequest& setRelObjectIds(string relObjectIds) { DARABONBA_PTR_SET_VALUE(relObjectIds_, relObjectIds) };


    // relObjectType Field Functions 
    bool hasRelObjectType() const { return this->relObjectType_ != nullptr;};
    void deleteRelObjectType() { this->relObjectType_ = nullptr;};
    inline string relObjectType() const { DARABONBA_PTR_GET_DEFAULT(relObjectType_, "") };
    inline AddPipelineRelationsRequest& setRelObjectType(string relObjectType) { DARABONBA_PTR_SET_VALUE(relObjectType_, relObjectType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> relObjectIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> relObjectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
