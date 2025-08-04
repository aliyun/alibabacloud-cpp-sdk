// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUESTCALLBACK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUESTCALLBACK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCallbackMetaRequestCallback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCallbackMetaRequestCallback& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Conf, conf_);
      DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCallbackMetaRequestCallback& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Conf, conf_);
      DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
    };
    ModifyCallbackMetaRequestCallback() = default ;
    ModifyCallbackMetaRequestCallback(const ModifyCallbackMetaRequestCallback &) = default ;
    ModifyCallbackMetaRequestCallback(ModifyCallbackMetaRequestCallback &&) = default ;
    ModifyCallbackMetaRequestCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCallbackMetaRequestCallback() = default ;
    ModifyCallbackMetaRequestCallback& operator=(const ModifyCallbackMetaRequestCallback &) = default ;
    ModifyCallbackMetaRequestCallback& operator=(ModifyCallbackMetaRequestCallback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->conf_ != nullptr && this->subEvent_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyCallbackMetaRequestCallback& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // conf Field Functions 
    bool hasConf() const { return this->conf_ != nullptr;};
    void deleteConf() { this->conf_ = nullptr;};
    inline string conf() const { DARABONBA_PTR_GET_DEFAULT(conf_, "") };
    inline ModifyCallbackMetaRequestCallback& setConf(string conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };


    // subEvent Field Functions 
    bool hasSubEvent() const { return this->subEvent_ != nullptr;};
    void deleteSubEvent() { this->subEvent_ = nullptr;};
    inline const vector<int32_t> & subEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<int32_t>) };
    inline vector<int32_t> subEvent() { DARABONBA_PTR_GET(subEvent_, vector<int32_t>) };
    inline ModifyCallbackMetaRequestCallback& setSubEvent(const vector<int32_t> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
    inline ModifyCallbackMetaRequestCallback& setSubEvent(vector<int32_t> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conf_ = nullptr;
    std::shared_ptr<vector<int32_t>> subEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
