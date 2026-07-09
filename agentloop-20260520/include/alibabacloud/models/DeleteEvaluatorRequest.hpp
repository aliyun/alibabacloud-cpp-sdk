// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVALUATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVALUATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteEvaluatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEvaluatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEvaluatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DeleteEvaluatorRequest() = default ;
    DeleteEvaluatorRequest(const DeleteEvaluatorRequest &) = default ;
    DeleteEvaluatorRequest(DeleteEvaluatorRequest &&) = default ;
    DeleteEvaluatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEvaluatorRequest() = default ;
    DeleteEvaluatorRequest& operator=(const DeleteEvaluatorRequest &) = default ;
    DeleteEvaluatorRequest& operator=(DeleteEvaluatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DeleteEvaluatorRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The version to delete. If this parameter is not specified, the entire evaluator is deleted.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
