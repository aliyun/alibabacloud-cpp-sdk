// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPIPELINERELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPIPELINERELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeletePipelineRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePipelineRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(relObjectId, relObjectId_);
      DARABONBA_PTR_TO_JSON(relObjectType, relObjectType_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePipelineRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(relObjectId, relObjectId_);
      DARABONBA_PTR_FROM_JSON(relObjectType, relObjectType_);
    };
    DeletePipelineRelationsRequest() = default ;
    DeletePipelineRelationsRequest(const DeletePipelineRelationsRequest &) = default ;
    DeletePipelineRelationsRequest(DeletePipelineRelationsRequest &&) = default ;
    DeletePipelineRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePipelineRelationsRequest() = default ;
    DeletePipelineRelationsRequest& operator=(const DeletePipelineRelationsRequest &) = default ;
    DeletePipelineRelationsRequest& operator=(DeletePipelineRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relObjectId_ == nullptr
        && return this->relObjectType_ == nullptr; };
    // relObjectId Field Functions 
    bool hasRelObjectId() const { return this->relObjectId_ != nullptr;};
    void deleteRelObjectId() { this->relObjectId_ = nullptr;};
    inline string relObjectId() const { DARABONBA_PTR_GET_DEFAULT(relObjectId_, "") };
    inline DeletePipelineRelationsRequest& setRelObjectId(string relObjectId) { DARABONBA_PTR_SET_VALUE(relObjectId_, relObjectId) };


    // relObjectType Field Functions 
    bool hasRelObjectType() const { return this->relObjectType_ != nullptr;};
    void deleteRelObjectType() { this->relObjectType_ = nullptr;};
    inline string relObjectType() const { DARABONBA_PTR_GET_DEFAULT(relObjectType_, "") };
    inline DeletePipelineRelationsRequest& setRelObjectType(string relObjectType) { DARABONBA_PTR_SET_VALUE(relObjectType_, relObjectType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> relObjectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> relObjectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
