// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PKCE_HPP_
#define ALIBABACLOUD_MODELS_PKCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class PKCE : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PKCE& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, PKCE& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    PKCE() = default ;
    PKCE(const PKCE &) = default ;
    PKCE(PKCE &&) = default ;
    PKCE(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PKCE() = default ;
    PKCE& operator=(const PKCE &) = default ;
    PKCE& operator=(PKCE &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline PKCE& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
