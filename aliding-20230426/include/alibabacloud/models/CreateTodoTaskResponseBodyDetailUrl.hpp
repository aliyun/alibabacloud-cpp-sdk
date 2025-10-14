// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYDETAILURL_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYDETAILURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskResponseBodyDetailUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskResponseBodyDetailUrl& obj) { 
      DARABONBA_PTR_TO_JSON(appUrl, appUrl_);
      DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskResponseBodyDetailUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(appUrl, appUrl_);
      DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
    };
    CreateTodoTaskResponseBodyDetailUrl() = default ;
    CreateTodoTaskResponseBodyDetailUrl(const CreateTodoTaskResponseBodyDetailUrl &) = default ;
    CreateTodoTaskResponseBodyDetailUrl(CreateTodoTaskResponseBodyDetailUrl &&) = default ;
    CreateTodoTaskResponseBodyDetailUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskResponseBodyDetailUrl() = default ;
    CreateTodoTaskResponseBodyDetailUrl& operator=(const CreateTodoTaskResponseBodyDetailUrl &) = default ;
    CreateTodoTaskResponseBodyDetailUrl& operator=(CreateTodoTaskResponseBodyDetailUrl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUrl_ == nullptr
        && return this->pcUrl_ == nullptr; };
    // appUrl Field Functions 
    bool hasAppUrl() const { return this->appUrl_ != nullptr;};
    void deleteAppUrl() { this->appUrl_ = nullptr;};
    inline string appUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
    inline CreateTodoTaskResponseBodyDetailUrl& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


    // pcUrl Field Functions 
    bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
    void deletePcUrl() { this->pcUrl_ = nullptr;};
    inline string pcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
    inline CreateTodoTaskResponseBodyDetailUrl& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


  protected:
    std::shared_ptr<string> appUrl_ = nullptr;
    std::shared_ptr<string> pcUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
