// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODYENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODYENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeGroupEndpointsResponseBodyEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupEndpointsResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(InternetEndpoints, internetEndpoints_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoints, intranetEndpoints_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupEndpointsResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(InternetEndpoints, internetEndpoints_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoints, intranetEndpoints_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeGroupEndpointsResponseBodyEndpoints() = default ;
    DescribeGroupEndpointsResponseBodyEndpoints(const DescribeGroupEndpointsResponseBodyEndpoints &) = default ;
    DescribeGroupEndpointsResponseBodyEndpoints(DescribeGroupEndpointsResponseBodyEndpoints &&) = default ;
    DescribeGroupEndpointsResponseBodyEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupEndpointsResponseBodyEndpoints() = default ;
    DescribeGroupEndpointsResponseBodyEndpoints& operator=(const DescribeGroupEndpointsResponseBodyEndpoints &) = default ;
    DescribeGroupEndpointsResponseBodyEndpoints& operator=(DescribeGroupEndpointsResponseBodyEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendId_ != nullptr
        && this->endpointType_ != nullptr && this->internetEndpoints_ != nullptr && this->intranetEndpoints_ != nullptr && this->pathType_ != nullptr && this->port_ != nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // internetEndpoints Field Functions 
    bool hasInternetEndpoints() const { return this->internetEndpoints_ != nullptr;};
    void deleteInternetEndpoints() { this->internetEndpoints_ = nullptr;};
    inline const vector<string> & internetEndpoints() const { DARABONBA_PTR_GET_CONST(internetEndpoints_, vector<string>) };
    inline vector<string> internetEndpoints() { DARABONBA_PTR_GET(internetEndpoints_, vector<string>) };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setInternetEndpoints(const vector<string> & internetEndpoints) { DARABONBA_PTR_SET_VALUE(internetEndpoints_, internetEndpoints) };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setInternetEndpoints(vector<string> && internetEndpoints) { DARABONBA_PTR_SET_RVALUE(internetEndpoints_, internetEndpoints) };


    // intranetEndpoints Field Functions 
    bool hasIntranetEndpoints() const { return this->intranetEndpoints_ != nullptr;};
    void deleteIntranetEndpoints() { this->intranetEndpoints_ = nullptr;};
    inline const vector<string> & intranetEndpoints() const { DARABONBA_PTR_GET_CONST(intranetEndpoints_, vector<string>) };
    inline vector<string> intranetEndpoints() { DARABONBA_PTR_GET(intranetEndpoints_, vector<string>) };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setIntranetEndpoints(const vector<string> & intranetEndpoints) { DARABONBA_PTR_SET_VALUE(intranetEndpoints_, intranetEndpoints) };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setIntranetEndpoints(vector<string> && intranetEndpoints) { DARABONBA_PTR_SET_RVALUE(intranetEndpoints_, intranetEndpoints) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeGroupEndpointsResponseBodyEndpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> backendId_ = nullptr;
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<vector<string>> internetEndpoints_ = nullptr;
    std::shared_ptr<vector<string>> intranetEndpoints_ = nullptr;
    std::shared_ptr<string> pathType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
