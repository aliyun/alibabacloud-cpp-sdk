// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataQualityAlertRuleResponseBody() = default ;
    CreateDataQualityAlertRuleResponseBody(const CreateDataQualityAlertRuleResponseBody &) = default ;
    CreateDataQualityAlertRuleResponseBody(CreateDataQualityAlertRuleResponseBody &&) = default ;
    CreateDataQualityAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityAlertRuleResponseBody() = default ;
    CreateDataQualityAlertRuleResponseBody& operator=(const CreateDataQualityAlertRuleResponseBody &) = default ;
    CreateDataQualityAlertRuleResponseBody& operator=(CreateDataQualityAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->requestId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateDataQualityAlertRuleResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataQualityAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user-defined rule ID returned after the monitoring rule is successfully created.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
