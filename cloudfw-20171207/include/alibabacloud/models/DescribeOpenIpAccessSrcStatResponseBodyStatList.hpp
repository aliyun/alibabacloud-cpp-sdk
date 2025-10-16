// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODYSTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODYSTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOpenIpAccessSrcStatResponseBodyStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenIpAccessSrcStatResponseBodyStatList& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalSrcIp, abnormalSrcIp_);
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(NormalSrcIp, normalSrcIp_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenIpAccessSrcStatResponseBodyStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalSrcIp, abnormalSrcIp_);
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(NormalSrcIp, normalSrcIp_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeOpenIpAccessSrcStatResponseBodyStatList() = default ;
    DescribeOpenIpAccessSrcStatResponseBodyStatList(const DescribeOpenIpAccessSrcStatResponseBodyStatList &) = default ;
    DescribeOpenIpAccessSrcStatResponseBodyStatList(DescribeOpenIpAccessSrcStatResponseBodyStatList &&) = default ;
    DescribeOpenIpAccessSrcStatResponseBodyStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenIpAccessSrcStatResponseBodyStatList() = default ;
    DescribeOpenIpAccessSrcStatResponseBodyStatList& operator=(const DescribeOpenIpAccessSrcStatResponseBodyStatList &) = default ;
    DescribeOpenIpAccessSrcStatResponseBodyStatList& operator=(DescribeOpenIpAccessSrcStatResponseBodyStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalSrcIp_ == nullptr
        && return this->app_ == nullptr && return this->normalSrcIp_ == nullptr && return this->port_ == nullptr; };
    // abnormalSrcIp Field Functions 
    bool hasAbnormalSrcIp() const { return this->abnormalSrcIp_ != nullptr;};
    void deleteAbnormalSrcIp() { this->abnormalSrcIp_ = nullptr;};
    inline int64_t abnormalSrcIp() const { DARABONBA_PTR_GET_DEFAULT(abnormalSrcIp_, 0L) };
    inline DescribeOpenIpAccessSrcStatResponseBodyStatList& setAbnormalSrcIp(int64_t abnormalSrcIp) { DARABONBA_PTR_SET_VALUE(abnormalSrcIp_, abnormalSrcIp) };


    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeOpenIpAccessSrcStatResponseBodyStatList& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // normalSrcIp Field Functions 
    bool hasNormalSrcIp() const { return this->normalSrcIp_ != nullptr;};
    void deleteNormalSrcIp() { this->normalSrcIp_ = nullptr;};
    inline int64_t normalSrcIp() const { DARABONBA_PTR_GET_DEFAULT(normalSrcIp_, 0L) };
    inline DescribeOpenIpAccessSrcStatResponseBodyStatList& setNormalSrcIp(int64_t normalSrcIp) { DARABONBA_PTR_SET_VALUE(normalSrcIp_, normalSrcIp) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeOpenIpAccessSrcStatResponseBodyStatList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<int64_t> abnormalSrcIp_ = nullptr;
    std::shared_ptr<string> app_ = nullptr;
    std::shared_ptr<int64_t> normalSrcIp_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
