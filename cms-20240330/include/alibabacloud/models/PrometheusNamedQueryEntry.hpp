// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSNAMEDQUERYENTRY_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSNAMEDQUERYENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusNamedQueryEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusNamedQueryEntry& obj) { 
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusNamedQueryEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    PrometheusNamedQueryEntry() = default ;
    PrometheusNamedQueryEntry(const PrometheusNamedQueryEntry &) = default ;
    PrometheusNamedQueryEntry(PrometheusNamedQueryEntry &&) = default ;
    PrometheusNamedQueryEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusNamedQueryEntry() = default ;
    PrometheusNamedQueryEntry& operator=(const PrometheusNamedQueryEntry &) = default ;
    PrometheusNamedQueryEntry& operator=(PrometheusNamedQueryEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expr_ == nullptr
        && this->name_ == nullptr; };
    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline PrometheusNamedQueryEntry& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PrometheusNamedQueryEntry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> expr_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
