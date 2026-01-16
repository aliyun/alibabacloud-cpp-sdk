// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Alias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListAliasesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(aliases, aliases_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListAliasesOutput() = default ;
    ListAliasesOutput(const ListAliasesOutput &) = default ;
    ListAliasesOutput(ListAliasesOutput &&) = default ;
    ListAliasesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesOutput() = default ;
    ListAliasesOutput& operator=(const ListAliasesOutput &) = default ;
    ListAliasesOutput& operator=(ListAliasesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliases_ == nullptr
        && this->nextToken_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const vector<Alias> & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<Alias>) };
    inline vector<Alias> getAliases() { DARABONBA_PTR_GET(aliases_, vector<Alias>) };
    inline ListAliasesOutput& setAliases(const vector<Alias> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline ListAliasesOutput& setAliases(vector<Alias> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAliasesOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<Alias>> aliases_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
