// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSDEVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOSDEVICEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos(const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos(DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos &&) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& operator=(const DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& operator=(DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->network_ != nullptr && this->status_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork> & network() const { DARABONBA_PTR_GET_CONST(network_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork>) };
    inline vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork> network() { DARABONBA_PTR_GET(network_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork>) };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& setNetwork(const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& setNetwork(vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the device.
    std::shared_ptr<string> name_ = nullptr;
    // The network information.
    std::shared_ptr<vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfosNetwork>> network_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
