// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERUNTIMEMODELTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVERUNTIMEMODELTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RemoveRuntimeModelTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRuntimeModelTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRuntimeModelTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    RemoveRuntimeModelTemplateRequest() = default ;
    RemoveRuntimeModelTemplateRequest(const RemoveRuntimeModelTemplateRequest &) = default ;
    RemoveRuntimeModelTemplateRequest(RemoveRuntimeModelTemplateRequest &&) = default ;
    RemoveRuntimeModelTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRuntimeModelTemplateRequest() = default ;
    RemoveRuntimeModelTemplateRequest& operator=(const RemoveRuntimeModelTemplateRequest &) = default ;
    RemoveRuntimeModelTemplateRequest& operator=(RemoveRuntimeModelTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelTemplateId_ == nullptr
        && this->runtimeIds_ == nullptr && this->runtimeType_ == nullptr; };
    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline RemoveRuntimeModelTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // runtimeIds Field Functions 
    bool hasRuntimeIds() const { return this->runtimeIds_ != nullptr;};
    void deleteRuntimeIds() { this->runtimeIds_ = nullptr;};
    inline const vector<string> & getRuntimeIds() const { DARABONBA_PTR_GET_CONST(runtimeIds_, vector<string>) };
    inline vector<string> getRuntimeIds() { DARABONBA_PTR_GET(runtimeIds_, vector<string>) };
    inline RemoveRuntimeModelTemplateRequest& setRuntimeIds(const vector<string> & runtimeIds) { DARABONBA_PTR_SET_VALUE(runtimeIds_, runtimeIds) };
    inline RemoveRuntimeModelTemplateRequest& setRuntimeIds(vector<string> && runtimeIds) { DARABONBA_PTR_SET_RVALUE(runtimeIds_, runtimeIds) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline RemoveRuntimeModelTemplateRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> runtimeIds_ {};
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
