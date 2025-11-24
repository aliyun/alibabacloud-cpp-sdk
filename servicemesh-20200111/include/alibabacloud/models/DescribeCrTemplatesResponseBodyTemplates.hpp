// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeCrTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(ChineseName, chineseName_);
      DARABONBA_PTR_TO_JSON(EnglishName, englishName_);
      DARABONBA_PTR_TO_JSON(Yaml, yaml_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(ChineseName, chineseName_);
      DARABONBA_PTR_FROM_JSON(EnglishName, englishName_);
      DARABONBA_PTR_FROM_JSON(Yaml, yaml_);
    };
    DescribeCrTemplatesResponseBodyTemplates() = default ;
    DescribeCrTemplatesResponseBodyTemplates(const DescribeCrTemplatesResponseBodyTemplates &) = default ;
    DescribeCrTemplatesResponseBodyTemplates(DescribeCrTemplatesResponseBodyTemplates &&) = default ;
    DescribeCrTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrTemplatesResponseBodyTemplates() = default ;
    DescribeCrTemplatesResponseBodyTemplates& operator=(const DescribeCrTemplatesResponseBodyTemplates &) = default ;
    DescribeCrTemplatesResponseBodyTemplates& operator=(DescribeCrTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chineseName_ == nullptr
        && return this->englishName_ == nullptr && return this->yaml_ == nullptr; };
    // chineseName Field Functions 
    bool hasChineseName() const { return this->chineseName_ != nullptr;};
    void deleteChineseName() { this->chineseName_ = nullptr;};
    inline string chineseName() const { DARABONBA_PTR_GET_DEFAULT(chineseName_, "") };
    inline DescribeCrTemplatesResponseBodyTemplates& setChineseName(string chineseName) { DARABONBA_PTR_SET_VALUE(chineseName_, chineseName) };


    // englishName Field Functions 
    bool hasEnglishName() const { return this->englishName_ != nullptr;};
    void deleteEnglishName() { this->englishName_ = nullptr;};
    inline string englishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
    inline DescribeCrTemplatesResponseBodyTemplates& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


    // yaml Field Functions 
    bool hasYaml() const { return this->yaml_ != nullptr;};
    void deleteYaml() { this->yaml_ = nullptr;};
    inline string yaml() const { DARABONBA_PTR_GET_DEFAULT(yaml_, "") };
    inline DescribeCrTemplatesResponseBodyTemplates& setYaml(string yaml) { DARABONBA_PTR_SET_VALUE(yaml_, yaml) };


  protected:
    // The Chinese name of the YAML template.
    std::shared_ptr<string> chineseName_ = nullptr;
    // The English name of the YAML template.
    std::shared_ptr<string> englishName_ = nullptr;
    // The content in the YAML template.
    std::shared_ptr<string> yaml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
