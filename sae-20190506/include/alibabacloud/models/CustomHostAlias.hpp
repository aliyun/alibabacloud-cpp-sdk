// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMHOSTALIAS_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMHOSTALIAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HostAlias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CustomHostAlias : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomHostAlias& obj) { 
      DARABONBA_PTR_TO_JSON(hostAliases, hostAliases_);
    };
    friend void from_json(const Darabonba::Json& j, CustomHostAlias& obj) { 
      DARABONBA_PTR_FROM_JSON(hostAliases, hostAliases_);
    };
    CustomHostAlias() = default ;
    CustomHostAlias(const CustomHostAlias &) = default ;
    CustomHostAlias(CustomHostAlias &&) = default ;
    CustomHostAlias(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomHostAlias() = default ;
    CustomHostAlias& operator=(const CustomHostAlias &) = default ;
    CustomHostAlias& operator=(CustomHostAlias &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAliases_ == nullptr; };
    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<HostAlias> & hostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<HostAlias>) };
    inline vector<HostAlias> hostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<HostAlias>) };
    inline CustomHostAlias& setHostAliases(const vector<HostAlias> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline CustomHostAlias& setHostAliases(vector<HostAlias> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


  protected:
    std::shared_ptr<vector<HostAlias>> hostAliases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
