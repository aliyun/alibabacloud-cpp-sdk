// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONRESTRICTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONRESTRICTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListFunctionRestrictionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionRestrictionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionRestrictionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListFunctionRestrictionsRequest() = default ;
    ListFunctionRestrictionsRequest(const ListFunctionRestrictionsRequest &) = default ;
    ListFunctionRestrictionsRequest(ListFunctionRestrictionsRequest &&) = default ;
    ListFunctionRestrictionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionRestrictionsRequest() = default ;
    ListFunctionRestrictionsRequest& operator=(const ListFunctionRestrictionsRequest &) = default ;
    ListFunctionRestrictionsRequest& operator=(ListFunctionRestrictionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelType_ == nullptr
        && this->region_ == nullptr && this->source_ == nullptr; };
    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListFunctionRestrictionsRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListFunctionRestrictionsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListFunctionRestrictionsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The model type.
    shared_ptr<string> modelType_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The source.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
