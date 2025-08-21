// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELASTICSEARCHADVANCEDSETTING_HPP_
#define ALIBABACLOUD_MODELS_ELASTICSEARCHADVANCEDSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ElasticsearchAdvancedSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElasticsearchAdvancedSetting& obj) { 
      DARABONBA_PTR_TO_JSON(gcName, gcName_);
    };
    friend void from_json(const Darabonba::Json& j, ElasticsearchAdvancedSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(gcName, gcName_);
    };
    ElasticsearchAdvancedSetting() = default ;
    ElasticsearchAdvancedSetting(const ElasticsearchAdvancedSetting &) = default ;
    ElasticsearchAdvancedSetting(ElasticsearchAdvancedSetting &&) = default ;
    ElasticsearchAdvancedSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElasticsearchAdvancedSetting() = default ;
    ElasticsearchAdvancedSetting& operator=(const ElasticsearchAdvancedSetting &) = default ;
    ElasticsearchAdvancedSetting& operator=(ElasticsearchAdvancedSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gcName_ != nullptr; };
    // gcName Field Functions 
    bool hasGcName() const { return this->gcName_ != nullptr;};
    void deleteGcName() { this->gcName_ = nullptr;};
    inline string gcName() const { DARABONBA_PTR_GET_DEFAULT(gcName_, "") };
    inline ElasticsearchAdvancedSetting& setGcName(string gcName) { DARABONBA_PTR_SET_VALUE(gcName_, gcName) };


  protected:
    std::shared_ptr<string> gcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
