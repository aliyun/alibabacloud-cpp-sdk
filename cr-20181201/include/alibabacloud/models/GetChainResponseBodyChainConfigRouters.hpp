// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERS_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGROUTERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfigRoutersFrom.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfigRoutersTo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigRouters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigRouters& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigRouters& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    GetChainResponseBodyChainConfigRouters() = default ;
    GetChainResponseBodyChainConfigRouters(const GetChainResponseBodyChainConfigRouters &) = default ;
    GetChainResponseBodyChainConfigRouters(GetChainResponseBodyChainConfigRouters &&) = default ;
    GetChainResponseBodyChainConfigRouters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigRouters() = default ;
    GetChainResponseBodyChainConfigRouters& operator=(const GetChainResponseBodyChainConfigRouters &) = default ;
    GetChainResponseBodyChainConfigRouters& operator=(GetChainResponseBodyChainConfigRouters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->to_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline const Models::GetChainResponseBodyChainConfigRoutersFrom & from() const { DARABONBA_PTR_GET_CONST(from_, Models::GetChainResponseBodyChainConfigRoutersFrom) };
    inline Models::GetChainResponseBodyChainConfigRoutersFrom from() { DARABONBA_PTR_GET(from_, Models::GetChainResponseBodyChainConfigRoutersFrom) };
    inline GetChainResponseBodyChainConfigRouters& setFrom(const Models::GetChainResponseBodyChainConfigRoutersFrom & from) { DARABONBA_PTR_SET_VALUE(from_, from) };
    inline GetChainResponseBodyChainConfigRouters& setFrom(Models::GetChainResponseBodyChainConfigRoutersFrom && from) { DARABONBA_PTR_SET_RVALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline const Models::GetChainResponseBodyChainConfigRoutersTo & to() const { DARABONBA_PTR_GET_CONST(to_, Models::GetChainResponseBodyChainConfigRoutersTo) };
    inline Models::GetChainResponseBodyChainConfigRoutersTo to() { DARABONBA_PTR_GET(to_, Models::GetChainResponseBodyChainConfigRoutersTo) };
    inline GetChainResponseBodyChainConfigRouters& setTo(const Models::GetChainResponseBodyChainConfigRoutersTo & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
    inline GetChainResponseBodyChainConfigRouters& setTo(Models::GetChainResponseBodyChainConfigRoutersTo && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


  protected:
    std::shared_ptr<Models::GetChainResponseBodyChainConfigRoutersFrom> from_ = nullptr;
    std::shared_ptr<Models::GetChainResponseBodyChainConfigRoutersTo> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
