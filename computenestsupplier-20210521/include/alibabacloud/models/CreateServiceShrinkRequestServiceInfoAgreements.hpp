// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUESTSERVICEINFOAGREEMENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUESTSERVICEINFOAGREEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceShrinkRequestServiceInfoAgreements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceShrinkRequestServiceInfoAgreements& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceShrinkRequestServiceInfoAgreements& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateServiceShrinkRequestServiceInfoAgreements() = default ;
    CreateServiceShrinkRequestServiceInfoAgreements(const CreateServiceShrinkRequestServiceInfoAgreements &) = default ;
    CreateServiceShrinkRequestServiceInfoAgreements(CreateServiceShrinkRequestServiceInfoAgreements &&) = default ;
    CreateServiceShrinkRequestServiceInfoAgreements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceShrinkRequestServiceInfoAgreements() = default ;
    CreateServiceShrinkRequestServiceInfoAgreements& operator=(const CreateServiceShrinkRequestServiceInfoAgreements &) = default ;
    CreateServiceShrinkRequestServiceInfoAgreements& operator=(CreateServiceShrinkRequestServiceInfoAgreements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->url_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceShrinkRequestServiceInfoAgreements& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateServiceShrinkRequestServiceInfoAgreements& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Protocol name.
    std::shared_ptr<string> name_ = nullptr;
    // Protocol url.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
