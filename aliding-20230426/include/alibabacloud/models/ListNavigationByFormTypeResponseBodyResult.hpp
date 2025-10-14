// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTNAVIGATIONBYFORMTYPERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNavigationByFormTypeResponseBodyResultTitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListNavigationByFormTypeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNavigationByFormTypeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListNavigationByFormTypeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListNavigationByFormTypeResponseBodyResult() = default ;
    ListNavigationByFormTypeResponseBodyResult(const ListNavigationByFormTypeResponseBodyResult &) = default ;
    ListNavigationByFormTypeResponseBodyResult(ListNavigationByFormTypeResponseBodyResult &&) = default ;
    ListNavigationByFormTypeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNavigationByFormTypeResponseBodyResult() = default ;
    ListNavigationByFormTypeResponseBodyResult& operator=(const ListNavigationByFormTypeResponseBodyResult &) = default ;
    ListNavigationByFormTypeResponseBodyResult& operator=(ListNavigationByFormTypeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formUuid_ == nullptr
        && return this->processCode_ == nullptr && return this->title_ == nullptr; };
    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline ListNavigationByFormTypeResponseBodyResult& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline ListNavigationByFormTypeResponseBodyResult& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline const Models::ListNavigationByFormTypeResponseBodyResultTitle & title() const { DARABONBA_PTR_GET_CONST(title_, Models::ListNavigationByFormTypeResponseBodyResultTitle) };
    inline Models::ListNavigationByFormTypeResponseBodyResultTitle title() { DARABONBA_PTR_GET(title_, Models::ListNavigationByFormTypeResponseBodyResultTitle) };
    inline ListNavigationByFormTypeResponseBodyResult& setTitle(const Models::ListNavigationByFormTypeResponseBodyResultTitle & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
    inline ListNavigationByFormTypeResponseBodyResult& setTitle(Models::ListNavigationByFormTypeResponseBodyResultTitle && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


  protected:
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<Models::ListNavigationByFormTypeResponseBodyResultTitle> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
