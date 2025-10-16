// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODYEVENTSTERMINALINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSRESPONSEBODYEVENTSTERMINALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeClientEventsResponseBodyEventsTerminalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientEventsResponseBodyEventsTerminalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientEventsResponseBodyEventsTerminalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    DescribeClientEventsResponseBodyEventsTerminalInfo() = default ;
    DescribeClientEventsResponseBodyEventsTerminalInfo(const DescribeClientEventsResponseBodyEventsTerminalInfo &) = default ;
    DescribeClientEventsResponseBodyEventsTerminalInfo(DescribeClientEventsResponseBodyEventsTerminalInfo &&) = default ;
    DescribeClientEventsResponseBodyEventsTerminalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientEventsResponseBodyEventsTerminalInfo() = default ;
    DescribeClientEventsResponseBodyEventsTerminalInfo& operator=(const DescribeClientEventsResponseBodyEventsTerminalInfo &) = default ;
    DescribeClientEventsResponseBodyEventsTerminalInfo& operator=(DescribeClientEventsResponseBodyEventsTerminalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->model_ == nullptr
        && return this->productName_ == nullptr && return this->serialNumber_ == nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeClientEventsResponseBodyEventsTerminalInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeClientEventsResponseBodyEventsTerminalInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeClientEventsResponseBodyEventsTerminalInfo& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
