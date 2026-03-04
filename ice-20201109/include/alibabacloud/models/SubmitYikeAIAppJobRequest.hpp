// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEAIAPPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEAIAPPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitYikeAIAppJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppParams, appParams_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeAIAppJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppParams, appParams_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
    };
    SubmitYikeAIAppJobRequest() = default ;
    SubmitYikeAIAppJobRequest(const SubmitYikeAIAppJobRequest &) = default ;
    SubmitYikeAIAppJobRequest(SubmitYikeAIAppJobRequest &&) = default ;
    SubmitYikeAIAppJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeAIAppJobRequest() = default ;
    SubmitYikeAIAppJobRequest& operator=(const SubmitYikeAIAppJobRequest &) = default ;
    SubmitYikeAIAppJobRequest& operator=(SubmitYikeAIAppJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appParams_ == nullptr && this->folderId_ == nullptr && this->productionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SubmitYikeAIAppJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appParams Field Functions 
    bool hasAppParams() const { return this->appParams_ != nullptr;};
    void deleteAppParams() { this->appParams_ = nullptr;};
    inline string getAppParams() const { DARABONBA_PTR_GET_DEFAULT(appParams_, "") };
    inline SubmitYikeAIAppJobRequest& setAppParams(string appParams) { DARABONBA_PTR_SET_VALUE(appParams_, appParams) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitYikeAIAppJobRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline SubmitYikeAIAppJobRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> appParams_ {};
    shared_ptr<string> folderId_ {};
    shared_ptr<string> productionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
