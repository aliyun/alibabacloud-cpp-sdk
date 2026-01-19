// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModelFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
    };
    ModelFileUploadRequest() = default ;
    ModelFileUploadRequest(const ModelFileUploadRequest &) = default ;
    ModelFileUploadRequest(ModelFileUploadRequest &&) = default ;
    ModelFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelFileUploadRequest() = default ;
    ModelFileUploadRequest& operator=(const ModelFileUploadRequest &) = default ;
    ModelFileUploadRequest& operator=(ModelFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectName_ == nullptr
        && this->regId_ == nullptr; };
    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline ModelFileUploadRequest& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModelFileUploadRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // File name.
    // 
    // This parameter is required.
    shared_ptr<string> objectName_ {};
    // Region code.
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
