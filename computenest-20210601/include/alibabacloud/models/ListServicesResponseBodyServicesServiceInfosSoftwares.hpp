// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESSERVICEINFOSSOFTWARES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESSERVICEINFOSSOFTWARES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServicesResponseBodyServicesServiceInfosSoftwares : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBodyServicesServiceInfosSoftwares& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBodyServicesServiceInfosSoftwares& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListServicesResponseBodyServicesServiceInfosSoftwares() = default ;
    ListServicesResponseBodyServicesServiceInfosSoftwares(const ListServicesResponseBodyServicesServiceInfosSoftwares &) = default ;
    ListServicesResponseBodyServicesServiceInfosSoftwares(ListServicesResponseBodyServicesServiceInfosSoftwares &&) = default ;
    ListServicesResponseBodyServicesServiceInfosSoftwares(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBodyServicesServiceInfosSoftwares() = default ;
    ListServicesResponseBodyServicesServiceInfosSoftwares& operator=(const ListServicesResponseBodyServicesServiceInfosSoftwares &) = default ;
    ListServicesResponseBodyServicesServiceInfosSoftwares& operator=(ListServicesResponseBodyServicesServiceInfosSoftwares &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->version_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServicesResponseBodyServicesServiceInfosSoftwares& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListServicesResponseBodyServicesServiceInfosSoftwares& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the software.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the software.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
