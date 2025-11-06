// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTGATEWAYSLBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SELECTGATEWAYSLBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class SelectGatewaySlbResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectGatewaySlbResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
    };
    friend void from_json(const Darabonba::Json& j, SelectGatewaySlbResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
    };
    SelectGatewaySlbResponseBodyData() = default ;
    SelectGatewaySlbResponseBodyData(const SelectGatewaySlbResponseBodyData &) = default ;
    SelectGatewaySlbResponseBodyData(SelectGatewaySlbResponseBodyData &&) = default ;
    SelectGatewaySlbResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectGatewaySlbResponseBodyData() = default ;
    SelectGatewaySlbResponseBodyData& operator=(const SelectGatewaySlbResponseBodyData &) = default ;
    SelectGatewaySlbResponseBodyData& operator=(SelectGatewaySlbResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slbId_ == nullptr
        && return this->slbName_ == nullptr; };
    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline SelectGatewaySlbResponseBodyData& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline SelectGatewaySlbResponseBodyData& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


  protected:
    // The ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The name of the SLB instance.
    std::shared_ptr<string> slbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
