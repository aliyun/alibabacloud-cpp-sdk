// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateFlowTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(flowTagGroupId, flowTagGroupId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(flowTagGroupId, flowTagGroupId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateFlowTagRequest() = default ;
    UpdateFlowTagRequest(const UpdateFlowTagRequest &) = default ;
    UpdateFlowTagRequest(UpdateFlowTagRequest &&) = default ;
    UpdateFlowTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowTagRequest() = default ;
    UpdateFlowTagRequest& operator=(const UpdateFlowTagRequest &) = default ;
    UpdateFlowTagRequest& operator=(UpdateFlowTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr
        && return this->flowTagGroupId_ == nullptr && return this->name_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline UpdateFlowTagRequest& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // flowTagGroupId Field Functions 
    bool hasFlowTagGroupId() const { return this->flowTagGroupId_ != nullptr;};
    void deleteFlowTagGroupId() { this->flowTagGroupId_ = nullptr;};
    inline int64_t flowTagGroupId() const { DARABONBA_PTR_GET_DEFAULT(flowTagGroupId_, 0L) };
    inline UpdateFlowTagRequest& setFlowTagGroupId(int64_t flowTagGroupId) { DARABONBA_PTR_SET_VALUE(flowTagGroupId_, flowTagGroupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFlowTagRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> color_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> flowTagGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
