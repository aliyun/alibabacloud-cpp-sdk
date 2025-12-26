// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTMETADATACONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTMETADATACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestMetaDataConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestMetaDataConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomMetaData, customMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestMetaDataConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomMetaData, customMetaData_);
    };
    CreateKnowledgeBaseRequestMetaDataConfig() = default ;
    CreateKnowledgeBaseRequestMetaDataConfig(const CreateKnowledgeBaseRequestMetaDataConfig &) = default ;
    CreateKnowledgeBaseRequestMetaDataConfig(CreateKnowledgeBaseRequestMetaDataConfig &&) = default ;
    CreateKnowledgeBaseRequestMetaDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestMetaDataConfig() = default ;
    CreateKnowledgeBaseRequestMetaDataConfig& operator=(const CreateKnowledgeBaseRequestMetaDataConfig &) = default ;
    CreateKnowledgeBaseRequestMetaDataConfig& operator=(CreateKnowledgeBaseRequestMetaDataConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customMetaData_ == nullptr; };
    // customMetaData Field Functions 
    bool hasCustomMetaData() const { return this->customMetaData_ != nullptr;};
    void deleteCustomMetaData() { this->customMetaData_ = nullptr;};
    inline const vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData> & customMetaData() const { DARABONBA_PTR_GET_CONST(customMetaData_, vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData>) };
    inline vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData> customMetaData() { DARABONBA_PTR_GET(customMetaData_, vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData>) };
    inline CreateKnowledgeBaseRequestMetaDataConfig& setCustomMetaData(const vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData> & customMetaData) { DARABONBA_PTR_SET_VALUE(customMetaData_, customMetaData) };
    inline CreateKnowledgeBaseRequestMetaDataConfig& setCustomMetaData(vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData> && customMetaData) { DARABONBA_PTR_SET_RVALUE(customMetaData_, customMetaData) };


  protected:
    // 自定义元数据
    std::shared_ptr<vector<Models::CreateKnowledgeBaseRequestMetaDataConfigCustomMetaData>> customMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
