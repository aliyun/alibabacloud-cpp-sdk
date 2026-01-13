// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupportModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupportModelsResponseBody() = default ;
    ListSupportModelsResponseBody(const ListSupportModelsResponseBody &) = default ;
    ListSupportModelsResponseBody(ListSupportModelsResponseBody &&) = default ;
    ListSupportModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportModelsResponseBody() = default ;
    ListSupportModelsResponseBody& operator=(const ListSupportModelsResponseBody &) = default ;
    ListSupportModelsResponseBody& operator=(ListSupportModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelNames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelNames& obj) { 
        DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
      };
      friend void from_json(const Darabonba::Json& j, ModelNames& obj) { 
        DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
      };
      ModelNames() = default ;
      ModelNames(const ModelNames &) = default ;
      ModelNames(ModelNames &&) = default ;
      ModelNames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelNames() = default ;
      ModelNames& operator=(const ModelNames &) = default ;
      ModelNames& operator=(ModelNames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelNames_ == nullptr; };
      // modelNames Field Functions 
      bool hasModelNames() const { return this->modelNames_ != nullptr;};
      void deleteModelNames() { this->modelNames_ = nullptr;};
      inline const vector<string> & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
      inline vector<string> getModelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
      inline ModelNames& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
      inline ModelNames& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


    protected:
      shared_ptr<vector<string>> modelNames_ {};
    };

    virtual bool empty() const override { return this->modelNames_ == nullptr
        && this->requestId_ == nullptr; };
    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const ListSupportModelsResponseBody::ModelNames & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, ListSupportModelsResponseBody::ModelNames) };
    inline ListSupportModelsResponseBody::ModelNames getModelNames() { DARABONBA_PTR_GET(modelNames_, ListSupportModelsResponseBody::ModelNames) };
    inline ListSupportModelsResponseBody& setModelNames(const ListSupportModelsResponseBody::ModelNames & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ListSupportModelsResponseBody& setModelNames(ListSupportModelsResponseBody::ModelNames && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of supported model names.
    shared_ptr<ListSupportModelsResponseBody::ModelNames> modelNames_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
