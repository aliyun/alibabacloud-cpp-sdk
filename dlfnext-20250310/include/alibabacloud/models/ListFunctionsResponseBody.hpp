// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
    };
    ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody(ListFunctionsResponseBody &&) = default ;
    ListFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody& operator=(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody& operator=(ListFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functions_ == nullptr
        && return this->nextPageToken_ == nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<string> & functions() const { DARABONBA_PTR_GET_CONST(functions_, vector<string>) };
    inline vector<string> functions() { DARABONBA_PTR_GET(functions_, vector<string>) };
    inline ListFunctionsResponseBody& setFunctions(const vector<string> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline ListFunctionsResponseBody& setFunctions(vector<string> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListFunctionsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<string>> functions_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
