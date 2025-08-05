// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSupportFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportFeatureList, supportFeatureList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportFeatureList, supportFeatureList_);
    };
    DescribeSupportFeaturesResponseBody() = default ;
    DescribeSupportFeaturesResponseBody(const DescribeSupportFeaturesResponseBody &) = default ;
    DescribeSupportFeaturesResponseBody(DescribeSupportFeaturesResponseBody &&) = default ;
    DescribeSupportFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportFeaturesResponseBody() = default ;
    DescribeSupportFeaturesResponseBody& operator=(const DescribeSupportFeaturesResponseBody &) = default ;
    DescribeSupportFeaturesResponseBody& operator=(DescribeSupportFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->requestId_ != nullptr && this->supportFeatureList_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSupportFeaturesResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupportFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportFeatureList Field Functions 
    bool hasSupportFeatureList() const { return this->supportFeatureList_ != nullptr;};
    void deleteSupportFeatureList() { this->supportFeatureList_ = nullptr;};
    inline string supportFeatureList() const { DARABONBA_PTR_GET_DEFAULT(supportFeatureList_, "") };
    inline DescribeSupportFeaturesResponseBody& setSupportFeatureList(string supportFeatureList) { DARABONBA_PTR_SET_VALUE(supportFeatureList_, supportFeatureList) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The features supported by the instance. Valid values:
    // 
    // *   sample_data: sample dataset. For more information, see [Sample dataset](https://help.aliyun.com/document_detail/452278.html).
    // *   diagnose_and_optimize: diagnostics and optimization. For more information, see [Diagnostics and optimization](https://help.aliyun.com/document_detail/323453.html).
    std::shared_ptr<string> supportFeatureList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
