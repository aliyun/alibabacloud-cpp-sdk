// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALLABELSTUDIOSERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALLABELSTUDIOSERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalLabelStudioServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalLabelStudioServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalLabelStudioServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateMultimodalLabelStudioServiceShrinkRequest() = default ;
    CreateMultimodalLabelStudioServiceShrinkRequest(const CreateMultimodalLabelStudioServiceShrinkRequest &) = default ;
    CreateMultimodalLabelStudioServiceShrinkRequest(CreateMultimodalLabelStudioServiceShrinkRequest &&) = default ;
    CreateMultimodalLabelStudioServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalLabelStudioServiceShrinkRequest() = default ;
    CreateMultimodalLabelStudioServiceShrinkRequest& operator=(const CreateMultimodalLabelStudioServiceShrinkRequest &) = default ;
    CreateMultimodalLabelStudioServiceShrinkRequest& operator=(CreateMultimodalLabelStudioServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIdsShrink_ == nullptr && this->password_ == nullptr && this->username_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalLabelStudioServiceShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIdsShrink Field Functions 
    bool hasDatasetIdsShrink() const { return this->datasetIdsShrink_ != nullptr;};
    void deleteDatasetIdsShrink() { this->datasetIdsShrink_ = nullptr;};
    inline string getDatasetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetIdsShrink_, "") };
    inline CreateMultimodalLabelStudioServiceShrinkRequest& setDatasetIdsShrink(string datasetIdsShrink) { DARABONBA_PTR_SET_VALUE(datasetIdsShrink_, datasetIdsShrink) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateMultimodalLabelStudioServiceShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateMultimodalLabelStudioServiceShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> datasetIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
