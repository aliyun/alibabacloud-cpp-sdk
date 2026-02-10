// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulTargetConfigResponseBody() = default ;
    DescribeVulTargetConfigResponseBody(const DescribeVulTargetConfigResponseBody &) = default ;
    DescribeVulTargetConfigResponseBody(DescribeVulTargetConfigResponseBody &&) = default ;
    DescribeVulTargetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetConfigResponseBody() = default ;
    DescribeVulTargetConfigResponseBody& operator=(const DescribeVulTargetConfigResponseBody &) = default ;
    DescribeVulTargetConfigResponseBody& operator=(DescribeVulTargetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(OverAllConfig, overAllConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TargetConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(OverAllConfig, overAllConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TargetConfigs() = default ;
      TargetConfigs(const TargetConfigs &) = default ;
      TargetConfigs(TargetConfigs &&) = default ;
      TargetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetConfigs() = default ;
      TargetConfigs& operator=(const TargetConfigs &) = default ;
      TargetConfigs& operator=(TargetConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->overAllConfig_ == nullptr && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline TargetConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // overAllConfig Field Functions 
      bool hasOverAllConfig() const { return this->overAllConfig_ != nullptr;};
      void deleteOverAllConfig() { this->overAllConfig_ = nullptr;};
      inline string getOverAllConfig() const { DARABONBA_PTR_GET_DEFAULT(overAllConfig_, "") };
      inline TargetConfigs& setOverAllConfig(string overAllConfig) { DARABONBA_PTR_SET_VALUE(overAllConfig_, overAllConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TargetConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether the vulnerability scan feature is enabled for the server.
      // 
      // *   **off**: disabled
      // *   **on**: enabled
      shared_ptr<string> config_ {};
      // Indicates whether the vulnerability scan feature is enabled for all servers. Valid values:
      // 
      // *   **off**: disabled
      // *   **on**: enabled
      shared_ptr<string> overAllConfig_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: Linux software vulnerability
      // *   **sys**: Windows system vulnerability
      // *   **cms**: Web-CMS vulnerability
      // *   **emg**: urgent vulnerability
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->targetConfigs_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulTargetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfigs Field Functions 
    bool hasTargetConfigs() const { return this->targetConfigs_ != nullptr;};
    void deleteTargetConfigs() { this->targetConfigs_ = nullptr;};
    inline const vector<DescribeVulTargetConfigResponseBody::TargetConfigs> & getTargetConfigs() const { DARABONBA_PTR_GET_CONST(targetConfigs_, vector<DescribeVulTargetConfigResponseBody::TargetConfigs>) };
    inline vector<DescribeVulTargetConfigResponseBody::TargetConfigs> getTargetConfigs() { DARABONBA_PTR_GET(targetConfigs_, vector<DescribeVulTargetConfigResponseBody::TargetConfigs>) };
    inline DescribeVulTargetConfigResponseBody& setTargetConfigs(const vector<DescribeVulTargetConfigResponseBody::TargetConfigs> & targetConfigs) { DARABONBA_PTR_SET_VALUE(targetConfigs_, targetConfigs) };
    inline DescribeVulTargetConfigResponseBody& setTargetConfigs(vector<DescribeVulTargetConfigResponseBody::TargetConfigs> && targetConfigs) { DARABONBA_PTR_SET_RVALUE(targetConfigs_, targetConfigs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulTargetConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the configurations.
    shared_ptr<vector<DescribeVulTargetConfigResponseBody::TargetConfigs>> targetConfigs_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
