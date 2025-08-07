// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOSSOFTWARES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOSSOFTWARES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyServiceInfosSoftwares : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyServiceInfosSoftwares& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyServiceInfosSoftwares& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetServiceResponseBodyServiceInfosSoftwares() = default ;
    GetServiceResponseBodyServiceInfosSoftwares(const GetServiceResponseBodyServiceInfosSoftwares &) = default ;
    GetServiceResponseBodyServiceInfosSoftwares(GetServiceResponseBodyServiceInfosSoftwares &&) = default ;
    GetServiceResponseBodyServiceInfosSoftwares(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyServiceInfosSoftwares() = default ;
    GetServiceResponseBodyServiceInfosSoftwares& operator=(const GetServiceResponseBodyServiceInfosSoftwares &) = default ;
    GetServiceResponseBodyServiceInfosSoftwares& operator=(GetServiceResponseBodyServiceInfosSoftwares &&) = default ;
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
    inline GetServiceResponseBodyServiceInfosSoftwares& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceResponseBodyServiceInfosSoftwares& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the Software.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the software.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
