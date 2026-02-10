// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALLABELSTUDIOSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALLABELSTUDIOSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalLabelStudioServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalLabelStudioServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalLabelStudioServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateMultimodalLabelStudioServiceRequest() = default ;
    CreateMultimodalLabelStudioServiceRequest(const CreateMultimodalLabelStudioServiceRequest &) = default ;
    CreateMultimodalLabelStudioServiceRequest(CreateMultimodalLabelStudioServiceRequest &&) = default ;
    CreateMultimodalLabelStudioServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalLabelStudioServiceRequest() = default ;
    CreateMultimodalLabelStudioServiceRequest& operator=(const CreateMultimodalLabelStudioServiceRequest &) = default ;
    CreateMultimodalLabelStudioServiceRequest& operator=(CreateMultimodalLabelStudioServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIds_ == nullptr && this->password_ == nullptr && this->username_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalLabelStudioServiceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline const vector<string> & getDatasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
    inline vector<string> getDatasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
    inline CreateMultimodalLabelStudioServiceRequest& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
    inline CreateMultimodalLabelStudioServiceRequest& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateMultimodalLabelStudioServiceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateMultimodalLabelStudioServiceRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> datasetIds_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
