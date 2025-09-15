// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODYSESSIONSTERMINALINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSRESPONSEBODYSESSIONSTERMINALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo() = default ;
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo(const DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo &) = default ;
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo(DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo &&) = default ;
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo() = default ;
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& operator=(const DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo &) = default ;
    DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& operator=(DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->model_ != nullptr
        && this->productName_ != nullptr && this->serialNumber_ != nullptr && this->uuid_ != nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeDesktopGroupSessionsResponseBodySessionsTerminalInfo& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
