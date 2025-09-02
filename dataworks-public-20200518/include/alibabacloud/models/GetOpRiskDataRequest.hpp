// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPRISKDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPRISKDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOpRiskDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpRiskDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpRiskDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
    };
    GetOpRiskDataRequest() = default ;
    GetOpRiskDataRequest(const GetOpRiskDataRequest &) = default ;
    GetOpRiskDataRequest(GetOpRiskDataRequest &&) = default ;
    GetOpRiskDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpRiskDataRequest() = default ;
    GetOpRiskDataRequest& operator=(const GetOpRiskDataRequest &) = default ;
    GetOpRiskDataRequest& operator=(GetOpRiskDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->name_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->riskType_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetOpRiskDataRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOpRiskDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetOpRiskDataRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpRiskDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline GetOpRiskDataRequest& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


  protected:
    // The date on which access records were generated. Specify the value in the yyyyMMdd format.
    // 
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    // The parameters that you can configure to query the access records. Valid values:
    // 
    // *   dbType
    // *   instanceName
    // *   databaseName
    // *   projectName
    // *   clusterName
    // 
    // The following example shows the parameters configured to query the access records of the sensitive data in the abc database of the Hologres instance ABC: [ {"dbType":"hologres","instanceName":"ABC","databaseName":"abc"} ]
    // 
    // You must configure the parameters based on the compute engine that you use in your business.
    std::shared_ptr<string> name_ = nullptr;
    // The page number. Pages start from 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Maximum value: 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The method that you use to identify risks.
    // 
    // *   You can manually identify risks.
    // *   You can also use a sensitive data identification rule to identify risks. You can log on to the DataWorks console and go to the Risk Identification Rules page in Data Security Guard to obtain the name of the rule.
    std::shared_ptr<string> riskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
