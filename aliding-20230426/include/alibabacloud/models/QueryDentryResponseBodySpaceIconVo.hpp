// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACEICONVO_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACEICONVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpaceIconVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpaceIconVO& obj) { 
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpaceIconVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryDentryResponseBodySpaceIconVO() = default ;
    QueryDentryResponseBodySpaceIconVO(const QueryDentryResponseBodySpaceIconVO &) = default ;
    QueryDentryResponseBodySpaceIconVO(QueryDentryResponseBodySpaceIconVO &&) = default ;
    QueryDentryResponseBodySpaceIconVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpaceIconVO() = default ;
    QueryDentryResponseBodySpaceIconVO& operator=(const QueryDentryResponseBodySpaceIconVO &) = default ;
    QueryDentryResponseBodySpaceIconVO& operator=(QueryDentryResponseBodySpaceIconVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icon_ != nullptr
        && this->type_ != nullptr; };
    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline QueryDentryResponseBodySpaceIconVO& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryDentryResponseBodySpaceIconVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
