// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSensitiveDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetSensitiveDataRequest() = default ;
    GetSensitiveDataRequest(const GetSensitiveDataRequest &) = default ;
    GetSensitiveDataRequest(GetSensitiveDataRequest &&) = default ;
    GetSensitiveDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDataRequest() = default ;
    GetSensitiveDataRequest& operator=(const GetSensitiveDataRequest &) = default ;
    GetSensitiveDataRequest& operator=(GetSensitiveDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSensitiveDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetSensitiveDataRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSensitiveDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The parameters that you can configure to query the access records. Valid values:
    // 
    // *   dbType
    // *   instanceName
    // *   databaseName
    // *   projectName
    // *   clusterName
    // 
    // The sample value shows the parameters configured to query the access records of the sensitive data in the abc database of the Hologres instance ABC. You must configure the parameters based on the compute engine that you use in your business.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Maximum value: 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
