// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBWAFCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBWAFCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebWAFConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebWAFConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableWAF, enableWAF_);
    };
    friend void from_json(const Darabonba::Json& j, WebWAFConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableWAF, enableWAF_);
    };
    WebWAFConfig() = default ;
    WebWAFConfig(const WebWAFConfig &) = default ;
    WebWAFConfig(WebWAFConfig &&) = default ;
    WebWAFConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebWAFConfig() = default ;
    WebWAFConfig& operator=(const WebWAFConfig &) = default ;
    WebWAFConfig& operator=(WebWAFConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableWAF_ == nullptr; };
    // enableWAF Field Functions 
    bool hasEnableWAF() const { return this->enableWAF_ != nullptr;};
    void deleteEnableWAF() { this->enableWAF_ = nullptr;};
    inline bool enableWAF() const { DARABONBA_PTR_GET_DEFAULT(enableWAF_, false) };
    inline WebWAFConfig& setEnableWAF(bool enableWAF) { DARABONBA_PTR_SET_VALUE(enableWAF_, enableWAF) };


  protected:
    std::shared_ptr<bool> enableWAF_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
