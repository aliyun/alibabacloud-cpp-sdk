// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Function.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListFunctionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListFunctionsOutput() = default ;
    ListFunctionsOutput(const ListFunctionsOutput &) = default ;
    ListFunctionsOutput(ListFunctionsOutput &&) = default ;
    ListFunctionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsOutput() = default ;
    ListFunctionsOutput& operator=(const ListFunctionsOutput &) = default ;
    ListFunctionsOutput& operator=(ListFunctionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functions_ == nullptr
        && this->nextToken_ == nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<Function> & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, vector<Function>) };
    inline vector<Function> getFunctions() { DARABONBA_PTR_GET(functions_, vector<Function>) };
    inline ListFunctionsOutput& setFunctions(const vector<Function> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline ListFunctionsOutput& setFunctions(vector<Function> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFunctionsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<Function>> functions_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
