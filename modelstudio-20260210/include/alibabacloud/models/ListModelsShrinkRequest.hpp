// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListModelsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(capabilities, capabilitiesShrink_);
      DARABONBA_PTR_TO_JSON(contextWindow, contextWindow_);
      DARABONBA_PTR_TO_JSON(features, featuresShrink_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(providers, providersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(capabilities, capabilitiesShrink_);
      DARABONBA_PTR_FROM_JSON(contextWindow, contextWindow_);
      DARABONBA_PTR_FROM_JSON(features, featuresShrink_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(providers, providersShrink_);
    };
    ListModelsShrinkRequest() = default ;
    ListModelsShrinkRequest(const ListModelsShrinkRequest &) = default ;
    ListModelsShrinkRequest(ListModelsShrinkRequest &&) = default ;
    ListModelsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsShrinkRequest() = default ;
    ListModelsShrinkRequest& operator=(const ListModelsShrinkRequest &) = default ;
    ListModelsShrinkRequest& operator=(ListModelsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilitiesShrink_ == nullptr
        && this->contextWindow_ == nullptr && this->featuresShrink_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->nextToken_ == nullptr && this->providersShrink_ == nullptr; };
    // capabilitiesShrink Field Functions 
    bool hasCapabilitiesShrink() const { return this->capabilitiesShrink_ != nullptr;};
    void deleteCapabilitiesShrink() { this->capabilitiesShrink_ = nullptr;};
    inline string getCapabilitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(capabilitiesShrink_, "") };
    inline ListModelsShrinkRequest& setCapabilitiesShrink(string capabilitiesShrink) { DARABONBA_PTR_SET_VALUE(capabilitiesShrink_, capabilitiesShrink) };


    // contextWindow Field Functions 
    bool hasContextWindow() const { return this->contextWindow_ != nullptr;};
    void deleteContextWindow() { this->contextWindow_ = nullptr;};
    inline int64_t getContextWindow() const { DARABONBA_PTR_GET_DEFAULT(contextWindow_, 0L) };
    inline ListModelsShrinkRequest& setContextWindow(int64_t contextWindow) { DARABONBA_PTR_SET_VALUE(contextWindow_, contextWindow) };


    // featuresShrink Field Functions 
    bool hasFeaturesShrink() const { return this->featuresShrink_ != nullptr;};
    void deleteFeaturesShrink() { this->featuresShrink_ = nullptr;};
    inline string getFeaturesShrink() const { DARABONBA_PTR_GET_DEFAULT(featuresShrink_, "") };
    inline ListModelsShrinkRequest& setFeaturesShrink(string featuresShrink) { DARABONBA_PTR_SET_VALUE(featuresShrink_, featuresShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListModelsShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListModelsShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListModelsShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModelsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // providersShrink Field Functions 
    bool hasProvidersShrink() const { return this->providersShrink_ != nullptr;};
    void deleteProvidersShrink() { this->providersShrink_ = nullptr;};
    inline string getProvidersShrink() const { DARABONBA_PTR_GET_DEFAULT(providersShrink_, "") };
    inline ListModelsShrinkRequest& setProvidersShrink(string providersShrink) { DARABONBA_PTR_SET_VALUE(providersShrink_, providersShrink) };


  protected:
    shared_ptr<string> capabilitiesShrink_ {};
    shared_ptr<int64_t> contextWindow_ {};
    shared_ptr<string> featuresShrink_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> providersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
