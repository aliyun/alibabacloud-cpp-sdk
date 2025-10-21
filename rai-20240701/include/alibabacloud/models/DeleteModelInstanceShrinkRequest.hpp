// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteModelInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelInstanceIdList, modelInstanceIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelInstanceIdList, modelInstanceIdListShrink_);
    };
    DeleteModelInstanceShrinkRequest() = default ;
    DeleteModelInstanceShrinkRequest(const DeleteModelInstanceShrinkRequest &) = default ;
    DeleteModelInstanceShrinkRequest(DeleteModelInstanceShrinkRequest &&) = default ;
    DeleteModelInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelInstanceShrinkRequest() = default ;
    DeleteModelInstanceShrinkRequest& operator=(const DeleteModelInstanceShrinkRequest &) = default ;
    DeleteModelInstanceShrinkRequest& operator=(DeleteModelInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelInstanceIdListShrink_ == nullptr; };
    // modelInstanceIdListShrink Field Functions 
    bool hasModelInstanceIdListShrink() const { return this->modelInstanceIdListShrink_ != nullptr;};
    void deleteModelInstanceIdListShrink() { this->modelInstanceIdListShrink_ = nullptr;};
    inline string modelInstanceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceIdListShrink_, "") };
    inline DeleteModelInstanceShrinkRequest& setModelInstanceIdListShrink(string modelInstanceIdListShrink) { DARABONBA_PTR_SET_VALUE(modelInstanceIdListShrink_, modelInstanceIdListShrink) };


  protected:
    std::shared_ptr<string> modelInstanceIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
