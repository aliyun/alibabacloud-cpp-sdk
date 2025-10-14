// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvatarProjectResponseBodyQueryAvatarProjectResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAvatarProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryAvatarProjectResultList, queryAvatarProjectResultList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryAvatarProjectResultList, queryAvatarProjectResultList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAvatarProjectResponseBody() = default ;
    ListAvatarProjectResponseBody(const ListAvatarProjectResponseBody &) = default ;
    ListAvatarProjectResponseBody(ListAvatarProjectResponseBody &&) = default ;
    ListAvatarProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarProjectResponseBody() = default ;
    ListAvatarProjectResponseBody& operator=(const ListAvatarProjectResponseBody &) = default ;
    ListAvatarProjectResponseBody& operator=(ListAvatarProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryAvatarProjectResultList_ == nullptr
        && return this->requestId_ == nullptr; };
    // queryAvatarProjectResultList Field Functions 
    bool hasQueryAvatarProjectResultList() const { return this->queryAvatarProjectResultList_ != nullptr;};
    void deleteQueryAvatarProjectResultList() { this->queryAvatarProjectResultList_ = nullptr;};
    inline const vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList> & queryAvatarProjectResultList() const { DARABONBA_PTR_GET_CONST(queryAvatarProjectResultList_, vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList>) };
    inline vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList> queryAvatarProjectResultList() { DARABONBA_PTR_GET(queryAvatarProjectResultList_, vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList>) };
    inline ListAvatarProjectResponseBody& setQueryAvatarProjectResultList(const vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList> & queryAvatarProjectResultList) { DARABONBA_PTR_SET_VALUE(queryAvatarProjectResultList_, queryAvatarProjectResultList) };
    inline ListAvatarProjectResponseBody& setQueryAvatarProjectResultList(vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList> && queryAvatarProjectResultList) { DARABONBA_PTR_SET_RVALUE(queryAvatarProjectResultList_, queryAvatarProjectResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvatarProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListAvatarProjectResponseBodyQueryAvatarProjectResultList>> queryAvatarProjectResultList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
