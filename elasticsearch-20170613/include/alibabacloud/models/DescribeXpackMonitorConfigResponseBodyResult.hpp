// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEXPACKMONITORCONFIGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEXPACKMONITORCONFIGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeXpackMonitorConfigResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeXpackMonitorConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_TO_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeXpackMonitorConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_FROM_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    DescribeXpackMonitorConfigResponseBodyResult() = default ;
    DescribeXpackMonitorConfigResponseBodyResult(const DescribeXpackMonitorConfigResponseBodyResult &) = default ;
    DescribeXpackMonitorConfigResponseBodyResult(DescribeXpackMonitorConfigResponseBodyResult &&) = default ;
    DescribeXpackMonitorConfigResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeXpackMonitorConfigResponseBodyResult() = default ;
    DescribeXpackMonitorConfigResponseBodyResult& operator=(const DescribeXpackMonitorConfigResponseBodyResult &) = default ;
    DescribeXpackMonitorConfigResponseBodyResult& operator=(DescribeXpackMonitorConfigResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->endpoints_ != nullptr && this->esInstanceId_ != nullptr && this->pipelineIds_ != nullptr && this->userName_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeXpackMonitorConfigResponseBodyResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<string> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
    inline vector<string> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
    inline DescribeXpackMonitorConfigResponseBodyResult& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeXpackMonitorConfigResponseBodyResult& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // esInstanceId Field Functions 
    bool hasEsInstanceId() const { return this->esInstanceId_ != nullptr;};
    void deleteEsInstanceId() { this->esInstanceId_ = nullptr;};
    inline string esInstanceId() const { DARABONBA_PTR_GET_DEFAULT(esInstanceId_, "") };
    inline DescribeXpackMonitorConfigResponseBodyResult& setEsInstanceId(string esInstanceId) { DARABONBA_PTR_SET_VALUE(esInstanceId_, esInstanceId) };


    // pipelineIds Field Functions 
    bool hasPipelineIds() const { return this->pipelineIds_ != nullptr;};
    void deletePipelineIds() { this->pipelineIds_ = nullptr;};
    inline const vector<string> & pipelineIds() const { DARABONBA_PTR_GET_CONST(pipelineIds_, vector<string>) };
    inline vector<string> pipelineIds() { DARABONBA_PTR_GET(pipelineIds_, vector<string>) };
    inline DescribeXpackMonitorConfigResponseBodyResult& setPipelineIds(const vector<string> & pipelineIds) { DARABONBA_PTR_SET_VALUE(pipelineIds_, pipelineIds) };
    inline DescribeXpackMonitorConfigResponseBodyResult& setPipelineIds(vector<string> && pipelineIds) { DARABONBA_PTR_SET_RVALUE(pipelineIds_, pipelineIds) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeXpackMonitorConfigResponseBodyResult& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Indicates whether the X-Pack Monitoring feature is enabled. Valid values:
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<vector<string>> endpoints_ = nullptr;
    // The ID of the associated Elasticsearch cluster.
    std::shared_ptr<string> esInstanceId_ = nullptr;
    std::shared_ptr<vector<string>> pipelineIds_ = nullptr;
    // The username that is used to access the associated Elasticsearch cluster.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
