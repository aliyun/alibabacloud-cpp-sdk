// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPSENSITIVEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPSENSITIVEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOpSensitiveDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpSensitiveDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpSensitiveDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetOpSensitiveDataRequest() = default ;
    GetOpSensitiveDataRequest(const GetOpSensitiveDataRequest &) = default ;
    GetOpSensitiveDataRequest(GetOpSensitiveDataRequest &&) = default ;
    GetOpSensitiveDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpSensitiveDataRequest() = default ;
    GetOpSensitiveDataRequest& operator=(const GetOpSensitiveDataRequest &) = default ;
    GetOpSensitiveDataRequest& operator=(GetOpSensitiveDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->name_ != nullptr && this->opType_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetOpSensitiveDataRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOpSensitiveDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline GetOpSensitiveDataRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetOpSensitiveDataRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpSensitiveDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The operation that is performed on the data. Valid values:
    // 
    // *   SQL_SELECT: specifies the data access operation. For example, execute a SELECT statement to query data.
    // *   TUNNEL_DOWNLOAD: specifies the data download operation. For example, run a Tunnel command to download data.
    std::shared_ptr<string> opType_ = nullptr;
    // The page number. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Minimum value: 1. Maximum value: 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
