// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUDFARTIFACTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEUDFARTIFACTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UdfClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeleteUdfArtifactResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUdfArtifactResult& obj) { 
      DARABONBA_PTR_TO_JSON(deleteSuccess, deleteSuccess_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(referencedClasses, referencedClasses_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUdfArtifactResult& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteSuccess, deleteSuccess_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(referencedClasses, referencedClasses_);
    };
    DeleteUdfArtifactResult() = default ;
    DeleteUdfArtifactResult(const DeleteUdfArtifactResult &) = default ;
    DeleteUdfArtifactResult(DeleteUdfArtifactResult &&) = default ;
    DeleteUdfArtifactResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUdfArtifactResult() = default ;
    DeleteUdfArtifactResult& operator=(const DeleteUdfArtifactResult &) = default ;
    DeleteUdfArtifactResult& operator=(DeleteUdfArtifactResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteSuccess_ == nullptr
        && return this->message_ == nullptr && return this->referencedClasses_ == nullptr; };
    // deleteSuccess Field Functions 
    bool hasDeleteSuccess() const { return this->deleteSuccess_ != nullptr;};
    void deleteDeleteSuccess() { this->deleteSuccess_ = nullptr;};
    inline bool deleteSuccess() const { DARABONBA_PTR_GET_DEFAULT(deleteSuccess_, false) };
    inline DeleteUdfArtifactResult& setDeleteSuccess(bool deleteSuccess) { DARABONBA_PTR_SET_VALUE(deleteSuccess_, deleteSuccess) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteUdfArtifactResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // referencedClasses Field Functions 
    bool hasReferencedClasses() const { return this->referencedClasses_ != nullptr;};
    void deleteReferencedClasses() { this->referencedClasses_ = nullptr;};
    inline const vector<UdfClass> & referencedClasses() const { DARABONBA_PTR_GET_CONST(referencedClasses_, vector<UdfClass>) };
    inline vector<UdfClass> referencedClasses() { DARABONBA_PTR_GET(referencedClasses_, vector<UdfClass>) };
    inline DeleteUdfArtifactResult& setReferencedClasses(const vector<UdfClass> & referencedClasses) { DARABONBA_PTR_SET_VALUE(referencedClasses_, referencedClasses) };
    inline DeleteUdfArtifactResult& setReferencedClasses(vector<UdfClass> && referencedClasses) { DARABONBA_PTR_SET_RVALUE(referencedClasses_, referencedClasses) };


  protected:
    std::shared_ptr<bool> deleteSuccess_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<UdfClass>> referencedClasses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
