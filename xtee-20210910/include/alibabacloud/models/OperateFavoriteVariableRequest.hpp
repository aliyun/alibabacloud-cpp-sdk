// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEFAVORITEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEFAVORITEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class OperateFavoriteVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateFavoriteVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(operate, operate_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateFavoriteVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(operate, operate_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    OperateFavoriteVariableRequest() = default ;
    OperateFavoriteVariableRequest(const OperateFavoriteVariableRequest &) = default ;
    OperateFavoriteVariableRequest(OperateFavoriteVariableRequest &&) = default ;
    OperateFavoriteVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateFavoriteVariableRequest() = default ;
    OperateFavoriteVariableRequest& operator=(const OperateFavoriteVariableRequest &) = default ;
    OperateFavoriteVariableRequest& operator=(OperateFavoriteVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->id_ != nullptr && this->operate_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateFavoriteVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline OperateFavoriteVariableRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline OperateFavoriteVariableRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline OperateFavoriteVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Variable ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Favorite operation
    // 
    // This parameter is required.
    std::shared_ptr<string> operate_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
