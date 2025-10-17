// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODYASSOCIATE_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODYASSOCIATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class AssociateResponseBodyAssociate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResponseBodyAssociate& obj) { 
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResponseBodyAssociate& obj) { 
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    AssociateResponseBodyAssociate() = default ;
    AssociateResponseBodyAssociate(const AssociateResponseBodyAssociate &) = default ;
    AssociateResponseBodyAssociate(AssociateResponseBodyAssociate &&) = default ;
    AssociateResponseBodyAssociate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResponseBodyAssociate() = default ;
    AssociateResponseBodyAssociate& operator=(const AssociateResponseBodyAssociate &) = default ;
    AssociateResponseBodyAssociate& operator=(AssociateResponseBodyAssociate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->meta_ == nullptr
        && return this->title_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline AssociateResponseBodyAssociate& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AssociateResponseBodyAssociate& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> meta_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
