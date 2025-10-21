// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUDFARTIFACTRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEUDFARTIFACTRESULT_HPP_
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
  class CreateUdfArtifactResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUdfArtifactResult& obj) { 
      DARABONBA_PTR_TO_JSON(collidingClasses, collidingClasses_);
      DARABONBA_PTR_TO_JSON(createSuccess, createSuccess_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(udfArtifact, udfArtifact_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUdfArtifactResult& obj) { 
      DARABONBA_PTR_FROM_JSON(collidingClasses, collidingClasses_);
      DARABONBA_PTR_FROM_JSON(createSuccess, createSuccess_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(udfArtifact, udfArtifact_);
    };
    CreateUdfArtifactResult() = default ;
    CreateUdfArtifactResult(const CreateUdfArtifactResult &) = default ;
    CreateUdfArtifactResult(CreateUdfArtifactResult &&) = default ;
    CreateUdfArtifactResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUdfArtifactResult() = default ;
    CreateUdfArtifactResult& operator=(const CreateUdfArtifactResult &) = default ;
    CreateUdfArtifactResult& operator=(CreateUdfArtifactResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collidingClasses_ == nullptr
        && return this->createSuccess_ == nullptr && return this->message_ == nullptr && return this->udfArtifact_ == nullptr; };
    // collidingClasses Field Functions 
    bool hasCollidingClasses() const { return this->collidingClasses_ != nullptr;};
    void deleteCollidingClasses() { this->collidingClasses_ = nullptr;};
    inline const vector<UdfClass> & collidingClasses() const { DARABONBA_PTR_GET_CONST(collidingClasses_, vector<UdfClass>) };
    inline vector<UdfClass> collidingClasses() { DARABONBA_PTR_GET(collidingClasses_, vector<UdfClass>) };
    inline CreateUdfArtifactResult& setCollidingClasses(const vector<UdfClass> & collidingClasses) { DARABONBA_PTR_SET_VALUE(collidingClasses_, collidingClasses) };
    inline CreateUdfArtifactResult& setCollidingClasses(vector<UdfClass> && collidingClasses) { DARABONBA_PTR_SET_RVALUE(collidingClasses_, collidingClasses) };


    // createSuccess Field Functions 
    bool hasCreateSuccess() const { return this->createSuccess_ != nullptr;};
    void deleteCreateSuccess() { this->createSuccess_ = nullptr;};
    inline bool createSuccess() const { DARABONBA_PTR_GET_DEFAULT(createSuccess_, false) };
    inline CreateUdfArtifactResult& setCreateSuccess(bool createSuccess) { DARABONBA_PTR_SET_VALUE(createSuccess_, createSuccess) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateUdfArtifactResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // udfArtifact Field Functions 
    bool hasUdfArtifact() const { return this->udfArtifact_ != nullptr;};
    void deleteUdfArtifact() { this->udfArtifact_ = nullptr;};
    inline const UdfArtifact & udfArtifact() const { DARABONBA_PTR_GET_CONST(udfArtifact_, UdfArtifact) };
    inline UdfArtifact udfArtifact() { DARABONBA_PTR_GET(udfArtifact_, UdfArtifact) };
    inline CreateUdfArtifactResult& setUdfArtifact(const UdfArtifact & udfArtifact) { DARABONBA_PTR_SET_VALUE(udfArtifact_, udfArtifact) };
    inline CreateUdfArtifactResult& setUdfArtifact(UdfArtifact && udfArtifact) { DARABONBA_PTR_SET_RVALUE(udfArtifact_, udfArtifact) };


  protected:
    std::shared_ptr<vector<UdfClass>> collidingClasses_ = nullptr;
    std::shared_ptr<bool> createSuccess_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<UdfArtifact> udfArtifact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
