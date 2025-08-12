// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTSDATAPOINTCONFIGJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTSDATAPOINTCONFIGJSON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& obj) { 
      DARABONBA_PTR_TO_JSON(ak, ak_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& obj) { 
      DARABONBA_PTR_FROM_JSON(ak, ak_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson() = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson(const DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson &) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson(DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson &&) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson() = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& operator=(const DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson &) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& operator=(DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ak_ != nullptr
        && this->endpoint_ != nullptr && this->logstore_ != nullptr && this->project_ != nullptr; };
    // ak Field Functions 
    bool hasAk() const { return this->ak_ != nullptr;};
    void deleteAk() { this->ak_ = nullptr;};
    inline string ak() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> ak_ = nullptr;
    // The Log Service endpoint to which the monitoring data is exported.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The Logstore.
    std::shared_ptr<string> logstore_ = nullptr;
    // The Log Service project to which the monitoring data is exported.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
