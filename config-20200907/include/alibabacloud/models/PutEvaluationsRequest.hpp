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
        && this->evaluations_ == nullptr && this->resultToken_ == nullptr; };
    // deleteMode Field Functions 
    bool hasDeleteMode() const { return this->deleteMode_ != nullptr;};
    void deleteDeleteMode() { this->deleteMode_ = nullptr;};
    inline bool getDeleteMode() const { DARABONBA_PTR_GET_DEFAULT(deleteMode_, false) };
    inline PutEvaluationsRequest& setDeleteMode(bool deleteMode) { DARABONBA_PTR_SET_VALUE(deleteMode_, deleteMode) };


    // evaluations Field Functions 
    bool hasEvaluations() const { return this->evaluations_ != nullptr;};
    void deleteEvaluations() { this->evaluations_ = nullptr;};
    inline string getEvaluations() const { DARABONBA_PTR_GET_DEFAULT(evaluations_, "") };
    inline PutEvaluationsRequest& setEvaluations(string evaluations) { DARABONBA_PTR_SET_VALUE(evaluations_, evaluations) };


    // resultToken Field Functions 
    bool hasResultToken() const { return this->resultToken_ != nullptr;};
    void deleteResultToken() { this->resultToken_ = nullptr;};
    inline string getResultToken() const { DARABONBA_PTR_GET_DEFAULT(resultToken_, "") };
    inline PutEvaluationsRequest& setResultToken(string resultToken) { DARABONBA_PTR_SET_VALUE(resultToken_, resultToken) };


  protected:
    shared_ptr<bool> deleteMode_ {};
    shared_ptr<string> evaluations_ {};
    // This parameter is required.
    shared_ptr<string> resultToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
