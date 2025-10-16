// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerEipInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerEipInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerEipInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    DescribeWuyingServerEipInfoRequest() = default ;
    DescribeWuyingServerEipInfoRequest(const DescribeWuyingServerEipInfoRequest &) = default ;
    DescribeWuyingServerEipInfoRequest(DescribeWuyingServerEipInfoRequest &&) = default ;
    DescribeWuyingServerEipInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerEipInfoRequest() = default ;
    DescribeWuyingServerEipInfoRequest& operator=(const DescribeWuyingServerEipInfoRequest &) = default ;
    DescribeWuyingServerEipInfoRequest& operator=(DescribeWuyingServerEipInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isp_ == nullptr
        && return this->wuyingServerId_ == nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeWuyingServerEipInfoRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string wuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline DescribeWuyingServerEipInfoRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    std::shared_ptr<string> isp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wuyingServerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
