// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFARTIFACTRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFARTIFACTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UdfClass.hpp>
#include <alibabacloud/models/UdfArtifact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateUdfArtifactResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUdfArtifactResult& obj) { 
      DARABONBA_PTR_TO_JSON(collidingClasses, collidingClasses_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(missingClasses, missingClasses_);
      DARABONBA_PTR_TO_JSON(udfArtifact, udfArtifact_);
      DARABONBA_PTR_TO_JSON(updateSuccess, updateSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUdfArtifactResult& obj) { 
      DARABONBA_PTR_FROM_JSON(collidingClasses, collidingClasses_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(missingClasses, missingClasses_);
      DARABONBA_PTR_FROM_JSON(udfArtifact, udfArtifact_);
      DARABONBA_PTR_FROM_JSON(updateSuccess, updateSuccess_);
    };
    UpdateUdfArtifactResult() = default ;
    UpdateUdfArtifactResult(const UpdateUdfArtifactResult &) = default ;
    UpdateUdfArtifactResult(UpdateUdfArtifactResult &&) = default ;
    UpdateUdfArtifactResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUdfArtifactResult() = default ;
    UpdateUdfArtifactResult& operator=(const UpdateUdfArtifactResult &) = default ;
    UpdateUdfArtifactResult& operator=(UpdateUdfArtifactResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collidingClasses_ == nullptr
        && return this->message_ == nullptr && return this->missingClasses_ == nullptr && return this->udfArtifact_ == nullptr && return this->updateSuccess_ == nullptr; };
    // collidingClasses Field Functions 
    bool hasCollidingClasses() const { return this->collidingClasses_ != nullptr;};
    void deleteCollidingClasses() { this->collidingClasses_ = nullptr;};
    inline const vector<UdfClass> & collidingClasses() const { DARABONBA_PTR_GET_CONST(collidingClasses_, vector<UdfClass>) };
    inline vector<UdfClass> collidingClasses() { DARABONBA_PTR_GET(collidingClasses_, vector<UdfClass>) };
    inline UpdateUdfArtifactResult& setCollidingClasses(const vector<UdfClass> & collidingClasses) { DARABONBA_PTR_SET_VALUE(collidingClasses_, collidingClasses) };
    inline UpdateUdfArtifactResult& setCollidingClasses(vector<UdfClass> && collidingClasses) { DARABONBA_PTR_SET_RVALUE(collidingClasses_, collidingClasses) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateUdfArtifactResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // missingClasses Field Functions 
    bool hasMissingClasses() const { return this->missingClasses_ != nullptr;};
    void deleteMissingClasses() { this->missingClasses_ = nullptr;};
    inline const vector<UdfClass> & missingClasses() const { DARABONBA_PTR_GET_CONST(missingClasses_, vector<UdfClass>) };
    inline vector<UdfClass> missingClasses() { DARABONBA_PTR_GET(missingClasses_, vector<UdfClass>) };
    inline UpdateUdfArtifactResult& setMissingClasses(const vector<UdfClass> & missingClasses) { DARABONBA_PTR_SET_VALUE(missingClasses_, missingClasses) };
    inline UpdateUdfArtifactResult& setMissingClasses(vector<UdfClass> && missingClasses) { DARABONBA_PTR_SET_RVALUE(missingClasses_, missingClasses) };


    // udfArtifact Field Functions 
    bool hasUdfArtifact() const { return this->udfArtifact_ != nullptr;};
    void deleteUdfArtifact() { this->udfArtifact_ = nullptr;};
    inline const UdfArtifact & udfArtifact() const { DARABONBA_PTR_GET_CONST(udfArtifact_, UdfArtifact) };
    inline UdfArtifact udfArtifact() { DARABONBA_PTR_GET(udfArtifact_, UdfArtifact) };
    inline UpdateUdfArtifactResult& setUdfArtifact(const UdfArtifact & udfArtifact) { DARABONBA_PTR_SET_VALUE(udfArtifact_, udfArtifact) };
    inline UpdateUdfArtifactResult& setUdfArtifact(UdfArtifact && udfArtifact) { DARABONBA_PTR_SET_RVALUE(udfArtifact_, udfArtifact) };


    // updateSuccess Field Functions 
    bool hasUpdateSuccess() const { return this->updateSuccess_ != nullptr;};
    void deleteUpdateSuccess() { this->updateSuccess_ = nullptr;};
    inline bool updateSuccess() const { DARABONBA_PTR_GET_DEFAULT(updateSuccess_, false) };
    inline UpdateUdfArtifactResult& setUpdateSuccess(bool updateSuccess) { DARABONBA_PTR_SET_VALUE(updateSuccess_, updateSuccess) };


  protected:
    std::shared_ptr<vector<UdfClass>> collidingClasses_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<UdfClass>> missingClasses_ = nullptr;
    std::shared_ptr<UdfArtifact> udfArtifact_ = nullptr;
    std::shared_ptr<bool> updateSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
