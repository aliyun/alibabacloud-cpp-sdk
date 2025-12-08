// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEENTITIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEENTITIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFaceEntitiesResponseBodyDataEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceEntitiesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFaceEntitiesResponseBodyData() = default ;
    ListFaceEntitiesResponseBodyData(const ListFaceEntitiesResponseBodyData &) = default ;
    ListFaceEntitiesResponseBodyData(ListFaceEntitiesResponseBodyData &&) = default ;
    ListFaceEntitiesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceEntitiesResponseBodyData() = default ;
    ListFaceEntitiesResponseBodyData& operator=(const ListFaceEntitiesResponseBodyData &) = default ;
    ListFaceEntitiesResponseBodyData& operator=(ListFaceEntitiesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entities_ == nullptr
        && return this->token_ == nullptr && return this->totalCount_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<Models::ListFaceEntitiesResponseBodyDataEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Models::ListFaceEntitiesResponseBodyDataEntities>) };
    inline vector<Models::ListFaceEntitiesResponseBodyDataEntities> entities() { DARABONBA_PTR_GET(entities_, vector<Models::ListFaceEntitiesResponseBodyDataEntities>) };
    inline ListFaceEntitiesResponseBodyData& setEntities(const vector<Models::ListFaceEntitiesResponseBodyDataEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ListFaceEntitiesResponseBodyData& setEntities(vector<Models::ListFaceEntitiesResponseBodyDataEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListFaceEntitiesResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFaceEntitiesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListFaceEntitiesResponseBodyDataEntities>> entities_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
