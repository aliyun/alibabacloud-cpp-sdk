// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACEHDICONVO_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACEHDICONVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpaceHdIconVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpaceHdIconVO& obj) { 
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpaceHdIconVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CopyDentryResponseBodySpaceHdIconVO() = default ;
    CopyDentryResponseBodySpaceHdIconVO(const CopyDentryResponseBodySpaceHdIconVO &) = default ;
    CopyDentryResponseBodySpaceHdIconVO(CopyDentryResponseBodySpaceHdIconVO &&) = default ;
    CopyDentryResponseBodySpaceHdIconVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpaceHdIconVO() = default ;
    CopyDentryResponseBodySpaceHdIconVO& operator=(const CopyDentryResponseBodySpaceHdIconVO &) = default ;
    CopyDentryResponseBodySpaceHdIconVO& operator=(CopyDentryResponseBodySpaceHdIconVO &&) = default ;
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
    inline CopyDentryResponseBodySpaceHdIconVO& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CopyDentryResponseBodySpaceHdIconVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
