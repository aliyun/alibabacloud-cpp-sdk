// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVALUATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEVALUATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class PutEvaluationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEvaluationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteMode, deleteMode_);
      DARABONBA_PTR_TO_JSON(Evaluations, evaluations_);
      DARABONBA_PTR_TO_JSON(ResultToken, resultToken_);
    };
    friend void from_json(const Darabonba::Json& j, PutEvaluationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteMode, deleteMode_);
      DARABONBA_PTR_FROM_JSON(Evaluations, evaluations_);
      DARABONBA_PTR_FROM_JSON(ResultToken, resultToken_);
    };
    PutEvaluationsRequest() = default ;
    PutEvaluationsRequest(const PutEvaluationsRequest &) = default ;
    PutEvaluationsRequest(PutEvaluationsRequest &&) = default ;
    PutEvaluationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEvaluationsRequest() = default ;
    PutEvaluationsRequest& operator=(const PutEvaluationsRequest &) = default ;
    PutEvaluationsRequest& operator=(PutEvaluationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteMode_ == nullptr
        && return this->evaluations_ == nullptr && return this->resultToken_ == nullptr; };
    // deleteMode Field Functions 
    bool hasDeleteMode() const { return this->deleteMode_ != nullptr;};
    void deleteDeleteMode() { this->deleteMode_ = nullptr;};
    inline bool deleteMode() const { DARABONBA_PTR_GET_DEFAULT(deleteMode_, false) };
    inline PutEvaluationsRequest& setDeleteMode(bool deleteMode) { DARABONBA_PTR_SET_VALUE(deleteMode_, deleteMode) };


    // evaluations Field Functions 
    bool hasEvaluations() const { return this->evaluations_ != nullptr;};
    void deleteEvaluations() { this->evaluations_ = nullptr;};
    inline string evaluations() const { DARABONBA_PTR_GET_DEFAULT(evaluations_, "") };
    inline PutEvaluationsRequest& setEvaluations(string evaluations) { DARABONBA_PTR_SET_VALUE(evaluations_, evaluations) };


    // resultToken Field Functions 
    bool hasResultToken() const { return this->resultToken_ != nullptr;};
    void deleteResultToken() { this->resultToken_ = nullptr;};
    inline string resultToken() const { DARABONBA_PTR_GET_DEFAULT(resultToken_, "") };
    inline PutEvaluationsRequest& setResultToken(string resultToken) { DARABONBA_PTR_SET_VALUE(resultToken_, resultToken) };


  protected:
    // Specifies whether to enable the delete mode. Valid values:
    // 
    // *   true: enables the delete mode
    // *   false (default): disables the delete mode
    // 
    // > This parameter is valid only when you manually trigger or periodically trigger custom rules to evaluate resources. If you enable the delete mode, the evaluation results that are not updated during the current evaluation are automatically deleted.
    std::shared_ptr<bool> deleteMode_ = nullptr;
    // The evaluation results.
    std::shared_ptr<string> evaluations_ = nullptr;
    // The callback token. When Cloud Config triggers a custom rule to evaluate resources, the token information is sent to Function Compute as an input parameter. The token must be specified when you submit the evaluation results.
    // 
    // This parameter is required.
    std::shared_ptr<string> resultToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
