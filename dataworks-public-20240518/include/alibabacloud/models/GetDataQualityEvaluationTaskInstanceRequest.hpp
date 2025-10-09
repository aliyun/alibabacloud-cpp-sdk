// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetDataQualityEvaluationTaskInstanceRequest() = default ;
    GetDataQualityEvaluationTaskInstanceRequest(const GetDataQualityEvaluationTaskInstanceRequest &) = default ;
    GetDataQualityEvaluationTaskInstanceRequest(GetDataQualityEvaluationTaskInstanceRequest &&) = default ;
    GetDataQualityEvaluationTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskInstanceRequest() = default ;
    GetDataQualityEvaluationTaskInstanceRequest& operator=(const GetDataQualityEvaluationTaskInstanceRequest &) = default ;
    GetDataQualityEvaluationTaskInstanceRequest& operator=(GetDataQualityEvaluationTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityEvaluationTaskInstanceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the data quality monitoring instance.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
