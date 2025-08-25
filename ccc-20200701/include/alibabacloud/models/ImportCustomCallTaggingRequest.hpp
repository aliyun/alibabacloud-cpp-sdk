// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCUSTOMCALLTAGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCUSTOMCALLTAGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportCustomCallTaggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ImportCustomCallTaggingRequest() = default ;
    ImportCustomCallTaggingRequest(const ImportCustomCallTaggingRequest &) = default ;
    ImportCustomCallTaggingRequest(ImportCustomCallTaggingRequest &&) = default ;
    ImportCustomCallTaggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCustomCallTaggingRequest() = default ;
    ImportCustomCallTaggingRequest& operator=(const ImportCustomCallTaggingRequest &) = default ;
    ImportCustomCallTaggingRequest& operator=(ImportCustomCallTaggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePath_ != nullptr
        && this->instanceId_ != nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ImportCustomCallTaggingRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportCustomCallTaggingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> filePath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
