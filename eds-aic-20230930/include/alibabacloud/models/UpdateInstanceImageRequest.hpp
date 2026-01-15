// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class UpdateInstanceImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(Reset, reset_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(Reset, reset_);
    };
    UpdateInstanceImageRequest() = default ;
    UpdateInstanceImageRequest(const UpdateInstanceImageRequest &) = default ;
    UpdateInstanceImageRequest(UpdateInstanceImageRequest &&) = default ;
    UpdateInstanceImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceImageRequest() = default ;
    UpdateInstanceImageRequest& operator=(const UpdateInstanceImageRequest &) = default ;
    UpdateInstanceImageRequest& operator=(UpdateInstanceImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreParamValidation_ == nullptr
        && this->imageId_ == nullptr && this->instanceIdList_ == nullptr && this->reset_ == nullptr; };
    // ignoreParamValidation Field Functions 
    bool hasIgnoreParamValidation() const { return this->ignoreParamValidation_ != nullptr;};
    void deleteIgnoreParamValidation() { this->ignoreParamValidation_ = nullptr;};
    inline bool getIgnoreParamValidation() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamValidation_, false) };
    inline UpdateInstanceImageRequest& setIgnoreParamValidation(bool ignoreParamValidation) { DARABONBA_PTR_SET_VALUE(ignoreParamValidation_, ignoreParamValidation) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateInstanceImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline UpdateInstanceImageRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline UpdateInstanceImageRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // reset Field Functions 
    bool hasReset() const { return this->reset_ != nullptr;};
    void deleteReset() { this->reset_ = nullptr;};
    inline bool getReset() const { DARABONBA_PTR_GET_DEFAULT(reset_, false) };
    inline UpdateInstanceImageRequest& setReset(bool reset) { DARABONBA_PTR_SET_VALUE(reset_, reset) };


  protected:
    shared_ptr<bool> ignoreParamValidation_ {};
    shared_ptr<string> imageId_ {};
    shared_ptr<vector<string>> instanceIdList_ {};
    shared_ptr<bool> reset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
