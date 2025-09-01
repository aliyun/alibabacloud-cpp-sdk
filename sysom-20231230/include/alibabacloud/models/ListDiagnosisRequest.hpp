// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListDiagnosisRequest() = default ;
    ListDiagnosisRequest(const ListDiagnosisRequest &) = default ;
    ListDiagnosisRequest(ListDiagnosisRequest &&) = default ;
    ListDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosisRequest() = default ;
    ListDiagnosisRequest& operator=(const ListDiagnosisRequest &) = default ;
    ListDiagnosisRequest& operator=(ListDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->pageSize_ != nullptr && this->params_ != nullptr && this->serviceName_ != nullptr && this->status_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListDiagnosisRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDiagnosisRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ListDiagnosisRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListDiagnosisRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDiagnosisRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
