// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CancelSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    CancelSubTaskRequest() = default ;
    CancelSubTaskRequest(const CancelSubTaskRequest &) = default ;
    CancelSubTaskRequest(CancelSubTaskRequest &&) = default ;
    CancelSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSubTaskRequest() = default ;
    CancelSubTaskRequest& operator=(const CancelSubTaskRequest &) = default ;
    CancelSubTaskRequest& operator=(CancelSubTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->subTaskId_ == nullptr && this->tab_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CancelSubTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CancelSubTaskRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // subTaskId Field Functions 
    bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
    void deleteSubTaskId() { this->subTaskId_ = nullptr;};
    inline int32_t getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
    inline CancelSubTaskRequest& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline CancelSubTaskRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    // Set the language type for requests and received messages. The default value is **zh**. Valid values:  
    // - **zh**: Chinese  
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Area encoding.
    shared_ptr<string> regId_ {};
    // Subtask ID.
    shared_ptr<int32_t> subTaskId_ {};
    // Scenario.
    shared_ptr<string> tab_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
