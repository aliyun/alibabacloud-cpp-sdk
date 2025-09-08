// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JAEGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JAEGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class JaegerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JaegerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, JaegerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
    };
    JaegerConfig() = default ;
    JaegerConfig(const JaegerConfig &) = default ;
    JaegerConfig(JaegerConfig &&) = default ;
    JaegerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JaegerConfig() = default ;
    JaegerConfig& operator=(const JaegerConfig &) = default ;
    JaegerConfig& operator=(JaegerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline JaegerConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
