// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRINCIPAL_HPP_
#define ALIBABACLOUD_MODELS_PRINCIPAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Principal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Principal& obj) { 
      DARABONBA_PTR_TO_JSON(PrincipalArn, principalArn_);
    };
    friend void from_json(const Darabonba::Json& j, Principal& obj) { 
      DARABONBA_PTR_FROM_JSON(PrincipalArn, principalArn_);
    };
    Principal() = default ;
    Principal(const Principal &) = default ;
    Principal(Principal &&) = default ;
    Principal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Principal() = default ;
    Principal& operator=(const Principal &) = default ;
    Principal& operator=(Principal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->principalArn_ == nullptr; };
    // principalArn Field Functions 
    bool hasPrincipalArn() const { return this->principalArn_ != nullptr;};
    void deletePrincipalArn() { this->principalArn_ = nullptr;};
    inline string principalArn() const { DARABONBA_PTR_GET_DEFAULT(principalArn_, "") };
    inline Principal& setPrincipalArn(string principalArn) { DARABONBA_PTR_SET_VALUE(principalArn_, principalArn) };


  protected:
    std::shared_ptr<string> principalArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
