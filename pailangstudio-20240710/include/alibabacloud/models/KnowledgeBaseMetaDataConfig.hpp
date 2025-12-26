// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETADATACONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETADATACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseMetaDataConfigCustomMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseMetaDataConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseMetaDataConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomMetaData, customMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseMetaDataConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomMetaData, customMetaData_);
    };
    KnowledgeBaseMetaDataConfig() = default ;
    KnowledgeBaseMetaDataConfig(const KnowledgeBaseMetaDataConfig &) = default ;
    KnowledgeBaseMetaDataConfig(KnowledgeBaseMetaDataConfig &&) = default ;
    KnowledgeBaseMetaDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseMetaDataConfig() = default ;
    KnowledgeBaseMetaDataConfig& operator=(const KnowledgeBaseMetaDataConfig &) = default ;
    KnowledgeBaseMetaDataConfig& operator=(KnowledgeBaseMetaDataConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customMetaData_ == nullptr; };
    // customMetaData Field Functions 
    bool hasCustomMetaData() const { return this->customMetaData_ != nullptr;};
    void deleteCustomMetaData() { this->customMetaData_ = nullptr;};
    inline const vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData> & customMetaData() const { DARABONBA_PTR_GET_CONST(customMetaData_, vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData>) };
    inline vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData> customMetaData() { DARABONBA_PTR_GET(customMetaData_, vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData>) };
    inline KnowledgeBaseMetaDataConfig& setCustomMetaData(const vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData> & customMetaData) { DARABONBA_PTR_SET_VALUE(customMetaData_, customMetaData) };
    inline KnowledgeBaseMetaDataConfig& setCustomMetaData(vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData> && customMetaData) { DARABONBA_PTR_SET_RVALUE(customMetaData_, customMetaData) };


  protected:
    // 自定义元数据
    std::shared_ptr<vector<Models::KnowledgeBaseMetaDataConfigCustomMetaData>> customMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
