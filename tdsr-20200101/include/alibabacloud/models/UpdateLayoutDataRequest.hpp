// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAYOUTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAYOUTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class UpdateLayoutDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLayoutDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutData, layoutData_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLayoutDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutData, layoutData_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    UpdateLayoutDataRequest() = default ;
    UpdateLayoutDataRequest(const UpdateLayoutDataRequest &) = default ;
    UpdateLayoutDataRequest(UpdateLayoutDataRequest &&) = default ;
    UpdateLayoutDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLayoutDataRequest() = default ;
    UpdateLayoutDataRequest& operator=(const UpdateLayoutDataRequest &) = default ;
    UpdateLayoutDataRequest& operator=(UpdateLayoutDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutData_ == nullptr
        && return this->subSceneId_ == nullptr; };
    // layoutData Field Functions 
    bool hasLayoutData() const { return this->layoutData_ != nullptr;};
    void deleteLayoutData() { this->layoutData_ = nullptr;};
    inline string layoutData() const { DARABONBA_PTR_GET_DEFAULT(layoutData_, "") };
    inline UpdateLayoutDataRequest& setLayoutData(string layoutData) { DARABONBA_PTR_SET_VALUE(layoutData_, layoutData) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline UpdateLayoutDataRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> layoutData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
