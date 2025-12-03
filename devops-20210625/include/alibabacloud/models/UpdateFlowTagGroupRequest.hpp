// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWTAGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWTAGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateFlowTagGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowTagGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowTagGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateFlowTagGroupRequest() = default ;
    UpdateFlowTagGroupRequest(const UpdateFlowTagGroupRequest &) = default ;
    UpdateFlowTagGroupRequest(UpdateFlowTagGroupRequest &&) = default ;
    UpdateFlowTagGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowTagGroupRequest() = default ;
    UpdateFlowTagGroupRequest& operator=(const UpdateFlowTagGroupRequest &) = default ;
    UpdateFlowTagGroupRequest& operator=(UpdateFlowTagGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFlowTagGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
