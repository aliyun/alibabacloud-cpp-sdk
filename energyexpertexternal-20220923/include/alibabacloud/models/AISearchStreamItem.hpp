// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHSTREAMITEM_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHSTREAMITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AISearchStreamItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchStreamItem& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchStreamItem& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AISearchStreamItem() = default ;
    AISearchStreamItem(const AISearchStreamItem &) = default ;
    AISearchStreamItem(AISearchStreamItem &&) = default ;
    AISearchStreamItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchStreamItem() = default ;
    AISearchStreamItem& operator=(const AISearchStreamItem &) = default ;
    AISearchStreamItem& operator=(AISearchStreamItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->params_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AISearchStreamItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline AISearchStreamItem& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline AISearchStreamItem& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AISearchStreamItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> content_ {};
    Darabonba::Json params_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
