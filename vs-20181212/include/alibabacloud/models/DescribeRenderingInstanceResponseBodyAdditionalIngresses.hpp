// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYADDITIONALINGRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYADDITIONALINGRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyAdditionalIngresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyAdditionalIngresses& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyAdditionalIngresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
    };
    DescribeRenderingInstanceResponseBodyAdditionalIngresses() = default ;
    DescribeRenderingInstanceResponseBodyAdditionalIngresses(const DescribeRenderingInstanceResponseBodyAdditionalIngresses &) = default ;
    DescribeRenderingInstanceResponseBodyAdditionalIngresses(DescribeRenderingInstanceResponseBodyAdditionalIngresses &&) = default ;
    DescribeRenderingInstanceResponseBodyAdditionalIngresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyAdditionalIngresses() = default ;
    DescribeRenderingInstanceResponseBodyAdditionalIngresses& operator=(const DescribeRenderingInstanceResponseBodyAdditionalIngresses &) = default ;
    DescribeRenderingInstanceResponseBodyAdditionalIngresses& operator=(DescribeRenderingInstanceResponseBodyAdditionalIngresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostname_ == nullptr
        && return this->isp_ == nullptr && return this->portMappings_ == nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeRenderingInstanceResponseBodyAdditionalIngresses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeRenderingInstanceResponseBodyAdditionalIngresses& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings> & portMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings>) };
    inline vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings> portMappings() { DARABONBA_PTR_GET(portMappings_, vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings>) };
    inline DescribeRenderingInstanceResponseBodyAdditionalIngresses& setPortMappings(const vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline DescribeRenderingInstanceResponseBodyAdditionalIngresses& setPortMappings(vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


  protected:
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRenderingInstanceResponseBodyAdditionalIngressesPortMappings>> portMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
