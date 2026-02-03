// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListFunctionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(functionNamePattern, functionNamePattern_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(functionNamePattern, functionNamePattern_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
    };
    ListFunctionsRequest() = default ;
    ListFunctionsRequest(const ListFunctionsRequest &) = default ;
    ListFunctionsRequest(ListFunctionsRequest &&) = default ;
    ListFunctionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsRequest() = default ;
    ListFunctionsRequest& operator=(const ListFunctionsRequest &) = default ;
    ListFunctionsRequest& operator=(ListFunctionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionNamePattern_ == nullptr
        && this->maxResults_ == nullptr && this->pageToken_ == nullptr; };
    // functionNamePattern Field Functions 
    bool hasFunctionNamePattern() const { return this->functionNamePattern_ != nullptr;};
    void deleteFunctionNamePattern() { this->functionNamePattern_ = nullptr;};
    inline string getFunctionNamePattern() const { DARABONBA_PTR_GET_DEFAULT(functionNamePattern_, "") };
    inline ListFunctionsRequest& setFunctionNamePattern(string functionNamePattern) { DARABONBA_PTR_SET_VALUE(functionNamePattern_, functionNamePattern) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFunctionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListFunctionsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    shared_ptr<string> functionNamePattern_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
