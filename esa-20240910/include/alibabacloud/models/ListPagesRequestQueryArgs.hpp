// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAGESREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTPAGESREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPagesRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPagesRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(NameDescriptionLike, nameDescriptionLike_);
    };
    friend void from_json(const Darabonba::Json& j, ListPagesRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(NameDescriptionLike, nameDescriptionLike_);
    };
    ListPagesRequestQueryArgs() = default ;
    ListPagesRequestQueryArgs(const ListPagesRequestQueryArgs &) = default ;
    ListPagesRequestQueryArgs(ListPagesRequestQueryArgs &&) = default ;
    ListPagesRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPagesRequestQueryArgs() = default ;
    ListPagesRequestQueryArgs& operator=(const ListPagesRequestQueryArgs &) = default ;
    ListPagesRequestQueryArgs& operator=(ListPagesRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameDescriptionLike_ == nullptr; };
    // nameDescriptionLike Field Functions 
    bool hasNameDescriptionLike() const { return this->nameDescriptionLike_ != nullptr;};
    void deleteNameDescriptionLike() { this->nameDescriptionLike_ = nullptr;};
    inline string nameDescriptionLike() const { DARABONBA_PTR_GET_DEFAULT(nameDescriptionLike_, "") };
    inline ListPagesRequestQueryArgs& setNameDescriptionLike(string nameDescriptionLike) { DARABONBA_PTR_SET_VALUE(nameDescriptionLike_, nameDescriptionLike) };


  protected:
    std::shared_ptr<string> nameDescriptionLike_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
