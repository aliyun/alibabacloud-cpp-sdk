// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECROSSACCOUNTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECROSSACCOUNTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class UpdateCrossAccountsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCrossAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTargets, createTargetsShrink_);
      DARABONBA_PTR_TO_JSON(DeleteTargets, deleteTargetsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCrossAccountsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTargets, createTargetsShrink_);
      DARABONBA_PTR_FROM_JSON(DeleteTargets, deleteTargetsShrink_);
    };
    UpdateCrossAccountsShrinkRequest() = default ;
    UpdateCrossAccountsShrinkRequest(const UpdateCrossAccountsShrinkRequest &) = default ;
    UpdateCrossAccountsShrinkRequest(UpdateCrossAccountsShrinkRequest &&) = default ;
    UpdateCrossAccountsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCrossAccountsShrinkRequest() = default ;
    UpdateCrossAccountsShrinkRequest& operator=(const UpdateCrossAccountsShrinkRequest &) = default ;
    UpdateCrossAccountsShrinkRequest& operator=(UpdateCrossAccountsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTargetsShrink_ == nullptr
        && this->deleteTargetsShrink_ == nullptr; };
    // createTargetsShrink Field Functions 
    bool hasCreateTargetsShrink() const { return this->createTargetsShrink_ != nullptr;};
    void deleteCreateTargetsShrink() { this->createTargetsShrink_ = nullptr;};
    inline string getCreateTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(createTargetsShrink_, "") };
    inline UpdateCrossAccountsShrinkRequest& setCreateTargetsShrink(string createTargetsShrink) { DARABONBA_PTR_SET_VALUE(createTargetsShrink_, createTargetsShrink) };


    // deleteTargetsShrink Field Functions 
    bool hasDeleteTargetsShrink() const { return this->deleteTargetsShrink_ != nullptr;};
    void deleteDeleteTargetsShrink() { this->deleteTargetsShrink_ = nullptr;};
    inline string getDeleteTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteTargetsShrink_, "") };
    inline UpdateCrossAccountsShrinkRequest& setDeleteTargetsShrink(string deleteTargetsShrink) { DARABONBA_PTR_SET_VALUE(deleteTargetsShrink_, deleteTargetsShrink) };


  protected:
    shared_ptr<string> createTargetsShrink_ {};
    shared_ptr<string> deleteTargetsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
