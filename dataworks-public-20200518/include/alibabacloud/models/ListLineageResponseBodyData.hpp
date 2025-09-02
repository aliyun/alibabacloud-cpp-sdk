// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLineageResponseBodyDataDataEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListLineageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListLineageResponseBodyData() = default ;
    ListLineageResponseBodyData(const ListLineageResponseBodyData &) = default ;
    ListLineageResponseBodyData(ListLineageResponseBodyData &&) = default ;
    ListLineageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageResponseBodyData() = default ;
    ListLineageResponseBodyData& operator=(const ListLineageResponseBodyData &) = default ;
    ListLineageResponseBodyData& operator=(ListLineageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataEntityList_ != nullptr
        && this->nextToken_ != nullptr; };
    // dataEntityList Field Functions 
    bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
    void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
    inline const vector<Models::ListLineageResponseBodyDataDataEntityList> & dataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Models::ListLineageResponseBodyDataDataEntityList>) };
    inline vector<Models::ListLineageResponseBodyDataDataEntityList> dataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Models::ListLineageResponseBodyDataDataEntityList>) };
    inline ListLineageResponseBodyData& setDataEntityList(const vector<Models::ListLineageResponseBodyDataDataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
    inline ListLineageResponseBodyData& setDataEntityList(vector<Models::ListLineageResponseBodyDataDataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLineageResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The array of the entity structure.
    std::shared_ptr<vector<Models::ListLineageResponseBodyDataDataEntityList>> dataEntityList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
