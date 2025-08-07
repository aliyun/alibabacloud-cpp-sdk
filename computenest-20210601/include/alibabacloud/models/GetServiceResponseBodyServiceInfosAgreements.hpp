// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOSAGREEMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOSAGREEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyServiceInfosAgreements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyServiceInfosAgreements& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyServiceInfosAgreements& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetServiceResponseBodyServiceInfosAgreements() = default ;
    GetServiceResponseBodyServiceInfosAgreements(const GetServiceResponseBodyServiceInfosAgreements &) = default ;
    GetServiceResponseBodyServiceInfosAgreements(GetServiceResponseBodyServiceInfosAgreements &&) = default ;
    GetServiceResponseBodyServiceInfosAgreements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyServiceInfosAgreements() = default ;
    GetServiceResponseBodyServiceInfosAgreements& operator=(const GetServiceResponseBodyServiceInfosAgreements &) = default ;
    GetServiceResponseBodyServiceInfosAgreements& operator=(GetServiceResponseBodyServiceInfosAgreements &&) = default ;
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
    inline GetServiceResponseBodyServiceInfosAgreements& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetServiceResponseBodyServiceInfosAgreements& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The agreement name.
    std::shared_ptr<string> name_ = nullptr;
    // The agreement URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
