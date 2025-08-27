// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULEINSUREINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULEINSUREINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryResponseBodyModuleInsureInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBodyModuleInsureInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(insure_no, insureNo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBodyModuleInsureInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(insure_no, insureNo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    FlightOrderListQueryResponseBodyModuleInsureInfoList() = default ;
    FlightOrderListQueryResponseBodyModuleInsureInfoList(const FlightOrderListQueryResponseBodyModuleInsureInfoList &) = default ;
    FlightOrderListQueryResponseBodyModuleInsureInfoList(FlightOrderListQueryResponseBodyModuleInsureInfoList &&) = default ;
    FlightOrderListQueryResponseBodyModuleInsureInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBodyModuleInsureInfoList() = default ;
    FlightOrderListQueryResponseBodyModuleInsureInfoList& operator=(const FlightOrderListQueryResponseBodyModuleInsureInfoList &) = default ;
    FlightOrderListQueryResponseBodyModuleInsureInfoList& operator=(FlightOrderListQueryResponseBodyModuleInsureInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insureNo_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr; };
    // insureNo Field Functions 
    bool hasInsureNo() const { return this->insureNo_ != nullptr;};
    void deleteInsureNo() { this->insureNo_ = nullptr;};
    inline string insureNo() const { DARABONBA_PTR_GET_DEFAULT(insureNo_, "") };
    inline FlightOrderListQueryResponseBodyModuleInsureInfoList& setInsureNo(string insureNo) { DARABONBA_PTR_SET_VALUE(insureNo_, insureNo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightOrderListQueryResponseBodyModuleInsureInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderListQueryResponseBodyModuleInsureInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> insureNo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
