// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINEMANAGEMENTCONFIGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINEMANAGEMENTCONFIGRESPONSEBODYRESULT_HPP_
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
  class DescribePipelineManagementConfigResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineManagementConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_TO_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_TO_JSON(pipelineManagementType, pipelineManagementType_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineManagementConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_FROM_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_FROM_JSON(pipelineManagementType, pipelineManagementType_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    DescribePipelineManagementConfigResponseBodyResult() = default ;
    DescribePipelineManagementConfigResponseBodyResult(const DescribePipelineManagementConfigResponseBodyResult &) = default ;
    DescribePipelineManagementConfigResponseBodyResult(DescribePipelineManagementConfigResponseBodyResult &&) = default ;
    DescribePipelineManagementConfigResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineManagementConfigResponseBodyResult() = default ;
    DescribePipelineManagementConfigResponseBodyResult& operator=(const DescribePipelineManagementConfigResponseBodyResult &) = default ;
    DescribePipelineManagementConfigResponseBodyResult& operator=(DescribePipelineManagementConfigResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoints_ != nullptr
        && this->esInstanceId_ != nullptr && this->pipelineIds_ != nullptr && this->pipelineManagementType_ != nullptr && this->userName_ != nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline string endpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
    inline DescribePipelineManagementConfigResponseBodyResult& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


    // esInstanceId Field Functions 
    bool hasEsInstanceId() const { return this->esInstanceId_ != nullptr;};
    void deleteEsInstanceId() { this->esInstanceId_ = nullptr;};
    inline string esInstanceId() const { DARABONBA_PTR_GET_DEFAULT(esInstanceId_, "") };
    inline DescribePipelineManagementConfigResponseBodyResult& setEsInstanceId(string esInstanceId) { DARABONBA_PTR_SET_VALUE(esInstanceId_, esInstanceId) };


    // pipelineIds Field Functions 
    bool hasPipelineIds() const { return this->pipelineIds_ != nullptr;};
    void deletePipelineIds() { this->pipelineIds_ = nullptr;};
    inline const vector<string> & pipelineIds() const { DARABONBA_PTR_GET_CONST(pipelineIds_, vector<string>) };
    inline vector<string> pipelineIds() { DARABONBA_PTR_GET(pipelineIds_, vector<string>) };
    inline DescribePipelineManagementConfigResponseBodyResult& setPipelineIds(const vector<string> & pipelineIds) { DARABONBA_PTR_SET_VALUE(pipelineIds_, pipelineIds) };
    inline DescribePipelineManagementConfigResponseBodyResult& setPipelineIds(vector<string> && pipelineIds) { DARABONBA_PTR_SET_RVALUE(pipelineIds_, pipelineIds) };


    // pipelineManagementType Field Functions 
    bool hasPipelineManagementType() const { return this->pipelineManagementType_ != nullptr;};
    void deletePipelineManagementType() { this->pipelineManagementType_ = nullptr;};
    inline string pipelineManagementType() const { DARABONBA_PTR_GET_DEFAULT(pipelineManagementType_, "") };
    inline DescribePipelineManagementConfigResponseBodyResult& setPipelineManagementType(string pipelineManagementType) { DARABONBA_PTR_SET_VALUE(pipelineManagementType_, pipelineManagementType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribePipelineManagementConfigResponseBodyResult& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The access addresses of the Elasticsearch cluster. Specify each address in the `http://Endpoint of the Elasticsearch cluster:Port number` format.
    std::shared_ptr<string> endpoints_ = nullptr;
    // The ID of the Elasticsearch cluster.
    std::shared_ptr<string> esInstanceId_ = nullptr;
    std::shared_ptr<vector<string>> pipelineIds_ = nullptr;
    // The pipeline management method. Valid values: Kibana and MULTIPLE_PIPELINE.
    std::shared_ptr<string> pipelineManagementType_ = nullptr;
    // The username that is used to access the Elasticsearch cluster.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
