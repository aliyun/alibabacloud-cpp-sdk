// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAGGREGATECOMPLIANCEPACKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAGGREGATECOMPLIANCEPACKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateAggregateCompliancePackReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAggregateCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(MultiFiles, multiFiles_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAggregateCompliancePackReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(MultiFiles, multiFiles_);
    };
    GenerateAggregateCompliancePackReportRequest() = default ;
    GenerateAggregateCompliancePackReportRequest(const GenerateAggregateCompliancePackReportRequest &) = default ;
    GenerateAggregateCompliancePackReportRequest(GenerateAggregateCompliancePackReportRequest &&) = default ;
    GenerateAggregateCompliancePackReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAggregateCompliancePackReportRequest() = default ;
    GenerateAggregateCompliancePackReportRequest& operator=(const GenerateAggregateCompliancePackReportRequest &) = default ;
    GenerateAggregateCompliancePackReportRequest& operator=(GenerateAggregateCompliancePackReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->clientToken_ == nullptr && return this->compliancePackId_ == nullptr && return this->multiFiles_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GenerateAggregateCompliancePackReportRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateAggregateCompliancePackReportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GenerateAggregateCompliancePackReportRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // multiFiles Field Functions 
    bool hasMultiFiles() const { return this->multiFiles_ != nullptr;};
    void deleteMultiFiles() { this->multiFiles_ = nullptr;};
    inline bool multiFiles() const { DARABONBA_PTR_GET_DEFAULT(multiFiles_, false) };
    inline GenerateAggregateCompliancePackReportRequest& setMultiFiles(bool multiFiles) { DARABONBA_PTR_SET_VALUE(multiFiles_, multiFiles) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    std::shared_ptr<bool> multiFiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
