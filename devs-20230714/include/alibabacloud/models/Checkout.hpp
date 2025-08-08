// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKOUT_HPP_
#define ALIBABACLOUD_MODELS_CHECKOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class Checkout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Checkout& obj) { 
      DARABONBA_PTR_TO_JSON(ref, ref_);
      DARABONBA_PTR_TO_JSON(remote, remote_);
    };
    friend void from_json(const Darabonba::Json& j, Checkout& obj) { 
      DARABONBA_PTR_FROM_JSON(ref, ref_);
      DARABONBA_PTR_FROM_JSON(remote, remote_);
    };
    Checkout() = default ;
    Checkout(const Checkout &) = default ;
    Checkout(Checkout &&) = default ;
    Checkout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Checkout() = default ;
    Checkout& operator=(const Checkout &) = default ;
    Checkout& operator=(Checkout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ref_ != nullptr
        && this->remote_ != nullptr; };
    // ref Field Functions 
    bool hasRef() const { return this->ref_ != nullptr;};
    void deleteRef() { this->ref_ = nullptr;};
    inline string ref() const { DARABONBA_PTR_GET_DEFAULT(ref_, "") };
    inline Checkout& setRef(string ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };


    // remote Field Functions 
    bool hasRemote() const { return this->remote_ != nullptr;};
    void deleteRemote() { this->remote_ = nullptr;};
    inline string remote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
    inline Checkout& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


  protected:
    std::shared_ptr<string> ref_ = nullptr;
    std::shared_ptr<string> remote_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
