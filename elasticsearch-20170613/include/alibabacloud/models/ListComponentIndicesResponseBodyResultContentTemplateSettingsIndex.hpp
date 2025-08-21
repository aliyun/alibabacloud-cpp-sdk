// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATESETTINGSINDEX_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATESETTINGSINDEX_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& obj) { 
      DARABONBA_PTR_TO_JSON(codec, codec_);
      DARABONBA_PTR_TO_JSON(lifecycle, lifecycle_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(codec, codec_);
      DARABONBA_PTR_FROM_JSON(lifecycle, lifecycle_);
    };
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex() = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex(const ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex(ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex &&) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex() = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& operator=(const ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& operator=(ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codec_ != nullptr
        && this->lifecycle_ != nullptr; };
    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline const Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle & lifecycle() const { DARABONBA_PTR_GET_CONST(lifecycle_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle) };
    inline Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle lifecycle() { DARABONBA_PTR_GET(lifecycle_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle) };
    inline ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& setLifecycle(const Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle & lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };
    inline ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex& setLifecycle(Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle && lifecycle) { DARABONBA_PTR_SET_RVALUE(lifecycle_, lifecycle) };


  protected:
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndexLifecycle> lifecycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
