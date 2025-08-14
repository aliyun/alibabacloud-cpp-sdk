// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATATOOLSPECTOOLSMETAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATATOOLSPECTOOLSMETAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DataToolSpecToolsMetaValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataToolSpecToolsMetaValue& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_ANY_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DataToolSpecToolsMetaValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(Templates, templates_);
    };
    DataToolSpecToolsMetaValue() = default ;
    DataToolSpecToolsMetaValue(const DataToolSpecToolsMetaValue &) = default ;
    DataToolSpecToolsMetaValue(DataToolSpecToolsMetaValue &&) = default ;
    DataToolSpecToolsMetaValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataToolSpecToolsMetaValue() = default ;
    DataToolSpecToolsMetaValue& operator=(const DataToolSpecToolsMetaValue &) = default ;
    DataToolSpecToolsMetaValue& operator=(DataToolSpecToolsMetaValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->templates_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DataToolSpecToolsMetaValue& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline     const Darabonba::Json & templates() const { DARABONBA_GET(templates_) };
    Darabonba::Json & templates() { DARABONBA_GET(templates_) };
    inline DataToolSpecToolsMetaValue& setTemplates(const Darabonba::Json & templates) { DARABONBA_SET_VALUE(templates_, templates) };
    inline DataToolSpecToolsMetaValue& setTemplates(Darabonba::Json & templates) { DARABONBA_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    Darabonba::Json templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
