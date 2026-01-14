// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterDiskSpecificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterDiskSpecificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterDiskSpecificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
    };
    QueryClusterDiskSpecificationRequest() = default ;
    QueryClusterDiskSpecificationRequest(const QueryClusterDiskSpecificationRequest &) = default ;
    QueryClusterDiskSpecificationRequest(QueryClusterDiskSpecificationRequest &&) = default ;
    QueryClusterDiskSpecificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterDiskSpecificationRequest() = default ;
    QueryClusterDiskSpecificationRequest& operator=(const QueryClusterDiskSpecificationRequest &) = default ;
    QueryClusterDiskSpecificationRequest& operator=(QueryClusterDiskSpecificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryClusterDiskSpecificationRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline QueryClusterDiskSpecificationRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The type of the instance. Valid values: ZooKeeper, Nacos-Ans, and Eureka.
    shared_ptr<string> clusterType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
