// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PICKOUTBOUNDNUMBERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PICKOUTBOUNDNUMBERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PickOutboundNumbersResponseBodyDataCallee.hpp>
#include <alibabacloud/models/PickOutboundNumbersResponseBodyDataCaller.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PickOutboundNumbersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PickOutboundNumbersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
    };
    friend void from_json(const Darabonba::Json& j, PickOutboundNumbersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
    };
    PickOutboundNumbersResponseBodyData() = default ;
    PickOutboundNumbersResponseBodyData(const PickOutboundNumbersResponseBodyData &) = default ;
    PickOutboundNumbersResponseBodyData(PickOutboundNumbersResponseBodyData &&) = default ;
    PickOutboundNumbersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PickOutboundNumbersResponseBodyData() = default ;
    PickOutboundNumbersResponseBodyData& operator=(const PickOutboundNumbersResponseBodyData &) = default ;
    PickOutboundNumbersResponseBodyData& operator=(PickOutboundNumbersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callee_ != nullptr
        && this->caller_ != nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline const Models::PickOutboundNumbersResponseBodyDataCallee & callee() const { DARABONBA_PTR_GET_CONST(callee_, Models::PickOutboundNumbersResponseBodyDataCallee) };
    inline Models::PickOutboundNumbersResponseBodyDataCallee callee() { DARABONBA_PTR_GET(callee_, Models::PickOutboundNumbersResponseBodyDataCallee) };
    inline PickOutboundNumbersResponseBodyData& setCallee(const Models::PickOutboundNumbersResponseBodyDataCallee & callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };
    inline PickOutboundNumbersResponseBodyData& setCallee(Models::PickOutboundNumbersResponseBodyDataCallee && callee) { DARABONBA_PTR_SET_RVALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline const Models::PickOutboundNumbersResponseBodyDataCaller & caller() const { DARABONBA_PTR_GET_CONST(caller_, Models::PickOutboundNumbersResponseBodyDataCaller) };
    inline Models::PickOutboundNumbersResponseBodyDataCaller caller() { DARABONBA_PTR_GET(caller_, Models::PickOutboundNumbersResponseBodyDataCaller) };
    inline PickOutboundNumbersResponseBodyData& setCaller(const Models::PickOutboundNumbersResponseBodyDataCaller & caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };
    inline PickOutboundNumbersResponseBodyData& setCaller(Models::PickOutboundNumbersResponseBodyDataCaller && caller) { DARABONBA_PTR_SET_RVALUE(caller_, caller) };


  protected:
    std::shared_ptr<Models::PickOutboundNumbersResponseBodyDataCallee> callee_ = nullptr;
    std::shared_ptr<Models::PickOutboundNumbersResponseBodyDataCaller> caller_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
