// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUUIDSBYVULNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUuidsByVulNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUuidsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineInfoStatistics, machineInfoStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUuidsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineInfoStatistics, machineInfoStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeUuidsByVulNamesResponseBody() = default ;
    DescribeUuidsByVulNamesResponseBody(const DescribeUuidsByVulNamesResponseBody &) = default ;
    DescribeUuidsByVulNamesResponseBody(DescribeUuidsByVulNamesResponseBody &&) = default ;
    DescribeUuidsByVulNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUuidsByVulNamesResponseBody() = default ;
    DescribeUuidsByVulNamesResponseBody& operator=(const DescribeUuidsByVulNamesResponseBody &) = default ;
    DescribeUuidsByVulNamesResponseBody& operator=(DescribeUuidsByVulNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineInfoStatistics_ == nullptr
        && return this->requestId_ == nullptr && return this->vulCount_ == nullptr; };
    // machineInfoStatistics Field Functions 
    bool hasMachineInfoStatistics() const { return this->machineInfoStatistics_ != nullptr;};
    void deleteMachineInfoStatistics() { this->machineInfoStatistics_ = nullptr;};
    inline const vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics> & machineInfoStatistics() const { DARABONBA_PTR_GET_CONST(machineInfoStatistics_, vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics>) };
    inline vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics> machineInfoStatistics() { DARABONBA_PTR_GET(machineInfoStatistics_, vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics>) };
    inline DescribeUuidsByVulNamesResponseBody& setMachineInfoStatistics(const vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics> & machineInfoStatistics) { DARABONBA_PTR_SET_VALUE(machineInfoStatistics_, machineInfoStatistics) };
    inline DescribeUuidsByVulNamesResponseBody& setMachineInfoStatistics(vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics> && machineInfoStatistics) { DARABONBA_PTR_SET_RVALUE(machineInfoStatistics_, machineInfoStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUuidsByVulNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeUuidsByVulNamesResponseBody& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The statistics about the servers.
    std::shared_ptr<vector<DescribeUuidsByVulNamesResponseBodyMachineInfoStatistics>> machineInfoStatistics_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of vulnerabilities on the server.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
