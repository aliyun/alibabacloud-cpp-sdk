// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODYENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODYENGINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormInstanceEngineListResponseBodyEngineListNetInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceEngineListResponseBodyEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceEngineListResponseBodyEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(NetInfoList, netInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceEngineListResponseBodyEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(NetInfoList, netInfoList_);
    };
    GetLindormInstanceEngineListResponseBodyEngineList() = default ;
    GetLindormInstanceEngineListResponseBodyEngineList(const GetLindormInstanceEngineListResponseBodyEngineList &) = default ;
    GetLindormInstanceEngineListResponseBodyEngineList(GetLindormInstanceEngineListResponseBodyEngineList &&) = default ;
    GetLindormInstanceEngineListResponseBodyEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceEngineListResponseBodyEngineList() = default ;
    GetLindormInstanceEngineListResponseBodyEngineList& operator=(const GetLindormInstanceEngineListResponseBodyEngineList &) = default ;
    GetLindormInstanceEngineListResponseBodyEngineList& operator=(GetLindormInstanceEngineListResponseBodyEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineType_ != nullptr
        && this->netInfoList_ != nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline GetLindormInstanceEngineListResponseBodyEngineList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // netInfoList Field Functions 
    bool hasNetInfoList() const { return this->netInfoList_ != nullptr;};
    void deleteNetInfoList() { this->netInfoList_ = nullptr;};
    inline const vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList> & netInfoList() const { DARABONBA_PTR_GET_CONST(netInfoList_, vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList>) };
    inline vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList> netInfoList() { DARABONBA_PTR_GET(netInfoList_, vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList>) };
    inline GetLindormInstanceEngineListResponseBodyEngineList& setNetInfoList(const vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList> & netInfoList) { DARABONBA_PTR_SET_VALUE(netInfoList_, netInfoList) };
    inline GetLindormInstanceEngineListResponseBodyEngineList& setNetInfoList(vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList> && netInfoList) { DARABONBA_PTR_SET_RVALUE(netInfoList_, netInfoList) };


  protected:
    // The type of engine that can run on the instance. Valid values:
    // 
    // *   **lindorm**: LindormTable.
    // *   **tsdb**: LindormTSDB.
    // *   **solr**: LindormSearch.
    // *   **store**: LindormDFS.
    std::shared_ptr<string> engineType_ = nullptr;
    // The list of connection information about the engine.
    std::shared_ptr<vector<Models::GetLindormInstanceEngineListResponseBodyEngineListNetInfoList>> netInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
