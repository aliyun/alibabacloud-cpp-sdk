// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDONOTCALLFILEUPLOADPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDONOTCALLFILEUPLOADPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetDoNotCallFileUploadParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoNotCallFileUploadParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoNotCallFileUploadParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetDoNotCallFileUploadParametersRequest() = default ;
    GetDoNotCallFileUploadParametersRequest(const GetDoNotCallFileUploadParametersRequest &) = default ;
    GetDoNotCallFileUploadParametersRequest(GetDoNotCallFileUploadParametersRequest &&) = default ;
    GetDoNotCallFileUploadParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoNotCallFileUploadParametersRequest() = default ;
    GetDoNotCallFileUploadParametersRequest& operator=(const GetDoNotCallFileUploadParametersRequest &) = default ;
    GetDoNotCallFileUploadParametersRequest& operator=(GetDoNotCallFileUploadParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->instanceId_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetDoNotCallFileUploadParametersRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDoNotCallFileUploadParametersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
