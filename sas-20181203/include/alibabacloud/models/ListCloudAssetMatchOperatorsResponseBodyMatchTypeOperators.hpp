// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODYMATCHTYPEOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODYMATCHTYPEOPERATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& obj) { 
      DARABONBA_PTR_TO_JSON(MatchOperators, matchOperators_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchOperators, matchOperators_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators() = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators(const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators &) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators(ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators &&) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators() = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& operator=(const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators &) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& operator=(ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchOperators_ == nullptr
        && return this->type_ == nullptr; };
    // matchOperators Field Functions 
    bool hasMatchOperators() const { return this->matchOperators_ != nullptr;};
    void deleteMatchOperators() { this->matchOperators_ = nullptr;};
    inline const vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators> & matchOperators() const { DARABONBA_PTR_GET_CONST(matchOperators_, vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators>) };
    inline vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators> matchOperators() { DARABONBA_PTR_GET(matchOperators_, vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators>) };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& setMatchOperators(const vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators> & matchOperators) { DARABONBA_PTR_SET_VALUE(matchOperators_, matchOperators) };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& setMatchOperators(vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators> && matchOperators) { DARABONBA_PTR_SET_RVALUE(matchOperators_, matchOperators) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // List of operators
    std::shared_ptr<vector<Models::ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators>> matchOperators_ = nullptr;
    // The type used by the operator. Values:
    // - LIST 
    // - MAP 
    // - STRING 
    // - BOOLEAN 
    // - FLOAT 
    // - DOUBLE 
    // - INTEGER 
    // - LONG
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
