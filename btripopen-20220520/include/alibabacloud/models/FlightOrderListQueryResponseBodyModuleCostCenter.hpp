// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULECOSTCENTER_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULECOSTCENTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryResponseBodyModuleCostCenter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBodyModuleCostCenter& obj) { 
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(number, number_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBodyModuleCostCenter& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(number, number_);
    };
    FlightOrderListQueryResponseBodyModuleCostCenter() = default ;
    FlightOrderListQueryResponseBodyModuleCostCenter(const FlightOrderListQueryResponseBodyModuleCostCenter &) = default ;
    FlightOrderListQueryResponseBodyModuleCostCenter(FlightOrderListQueryResponseBodyModuleCostCenter &&) = default ;
    FlightOrderListQueryResponseBodyModuleCostCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBodyModuleCostCenter() = default ;
    FlightOrderListQueryResponseBodyModuleCostCenter& operator=(const FlightOrderListQueryResponseBodyModuleCostCenter &) = default ;
    FlightOrderListQueryResponseBodyModuleCostCenter& operator=(FlightOrderListQueryResponseBodyModuleCostCenter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->number_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline FlightOrderListQueryResponseBodyModuleCostCenter& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FlightOrderListQueryResponseBodyModuleCostCenter& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightOrderListQueryResponseBodyModuleCostCenter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline FlightOrderListQueryResponseBodyModuleCostCenter& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
