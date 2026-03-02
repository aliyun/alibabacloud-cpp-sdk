// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTTEMPLATEPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTTEMPLATEPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ComponentTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ComponentTemplatePageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentTemplatePageResult& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentTemplatePageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ComponentTemplatePageResult() = default ;
    ComponentTemplatePageResult(const ComponentTemplatePageResult &) = default ;
    ComponentTemplatePageResult(ComponentTemplatePageResult &&) = default ;
    ComponentTemplatePageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentTemplatePageResult() = default ;
    ComponentTemplatePageResult& operator=(const ComponentTemplatePageResult &) = default ;
    ComponentTemplatePageResult& operator=(ComponentTemplatePageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ComponentTemplate> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ComponentTemplate>) };
    inline vector<ComponentTemplate> getList() { DARABONBA_PTR_GET(list_, vector<ComponentTemplate>) };
    inline ComponentTemplatePageResult& setList(const vector<ComponentTemplate> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ComponentTemplatePageResult& setList(vector<ComponentTemplate> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ComponentTemplatePageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ComponentTemplatePageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ComponentTemplate>> list_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
