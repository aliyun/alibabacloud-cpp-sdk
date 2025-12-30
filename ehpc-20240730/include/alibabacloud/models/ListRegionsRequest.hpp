// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SpecCode, specCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SpecCode, specCode_);
    };
    ListRegionsRequest() = default ;
    ListRegionsRequest(const ListRegionsRequest &) = default ;
    ListRegionsRequest(ListRegionsRequest &&) = default ;
    ListRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsRequest() = default ;
    ListRegionsRequest& operator=(const ListRegionsRequest &) = default ;
    ListRegionsRequest& operator=(ListRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->specCode_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListRegionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // specCode Field Functions 
    bool hasSpecCode() const { return this->specCode_ != nullptr;};
    void deleteSpecCode() { this->specCode_ = nullptr;};
    inline string getSpecCode() const { DARABONBA_PTR_GET_DEFAULT(specCode_, "") };
    inline ListRegionsRequest& setSpecCode(string specCode) { DARABONBA_PTR_SET_VALUE(specCode_, specCode) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> specCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
